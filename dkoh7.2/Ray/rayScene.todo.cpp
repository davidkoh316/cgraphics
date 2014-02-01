/*  David Koh
    Computer Graphics
    Assignment 2
*/

#include "rayScene.h"
#include <GL/glut.h>
#include <math.h>


///////////////////////
// Ray-tracing stuff //
///////////////////////

Point3D RayScene::Reflect(Point3D v,Point3D n)
{
    Point3D R = v - (n*2*(v.dot(n)));
    return R;
}

int RayScene::Refract(Point3D v,Point3D n,double ir,Point3D& refract)
{
    v = -v;

    if (n.dot(v) < 0)
    {
        ir = 1/ir;
        n = -n;
    }

    double temp1 = acos(v.dot(n));
    double temp2 = sin(temp1) / ir;
    if (temp2 > 1 || temp2 < -1)
        return 0;

    double thetaR = asin(temp2);
    refract = n*((1/ir)*cos(temp1) - cos(thetaR)) - v*(1/ir);
    refract /= refract.length();
    
    return 1;
}

Ray3D RayScene::GetRay(RayCamera* camera,int i,int j,int width,int height)
{    
    Ray3D ray;
    
    Point3D original_pos = camera -> position;
    ray.position = original_pos;
    Point3D up = (camera->up).unit();
    Point3D right = (camera->right).unit();
    Point3D direction = (camera->direction).unit();
    
    double hAngle = camera -> heightAngle;
    // camera to plane
    double dist = (double)height/tan(hAngle);
    Point3D newP = original_pos - right.scale((double)width/2.0) - up.scale((double)height/2.0) + 
    right.scale(i+0.5) + up.scale(j+0.5) + direction.scale(dist);
    
    ray.direction = (newP - original_pos).unit();

	return ray;
}

Point3D RayScene::GetColor(Ray3D ray,int rDepth,Point3D cLimit)
{
    Point3D color;
    RayIntersectionInfo info;
    Ray3D reflection;
    Ray3D refraction;
    Ray3D reflectedRay;
    Point3D reflect, reflColor, refractColor;
    int shad;
    int numCrossed = 0;

    double dist;
    dist = group -> intersect(ray, info, -1);
    if (dist == -1)
        return background;

    color = ambient*info.material -> ambient + info.material -> emissive;

    if (ray.direction.dot(info.normal) < 0)
    {
        for (int j = 0; j < this->lightNum; j++)
        {
            shad = this->lights[j]->isInShadow(info, this->group, numCrossed);
            Point3D ts = lights[j]->transparency(info, group, cLimit);

            color += this->lights[j]->getDiffuse(ray.position, info) * ts;
            color += this->lights[j]->getSpecular(ray.position, info) * ts;
        }

        reflect = Reflect(ray.direction, info.normal);

        // Reflected ray
        reflectedRay = Ray3D(info.iCoordinate, reflect);
        reflectedRay.position = reflectedRay(0.0001);

        if (rDepth > 0 && (info.material->specular[0] > cLimit[0]) && (info.material->specular[1] > cLimit[1]) && (info.material->specular[2] > cLimit[2])) 
        {
            reflColor = GetColor(reflectedRay, rDepth - 1, (cLimit / info.material->specular));

            if (reflColor.p[0] == background.p[0] && reflColor.p[1] == background.p[1] && reflColor.p[2] == background.p[2])
                reflColor = Point3D();

            // reflected color added
            reflColor *= info.material -> specular;
            color += reflColor;
        }
    }

    // refraction
    if (this -> Refract(ray.direction, info.normal, info.material->refind, refraction.direction))
    {
        refraction.position = info.iCoordinate;
        refraction.position = refraction(0.0001);
        refractColor = this -> GetColor(refraction, rDepth - 1, cLimit);

        if (refractColor.p[0] == background.p[0] && refractColor.p[1] == background.p[1] && refractColor.p[2] == background.p[2])
            refractColor = Point3D();

        refractColor *= info.material -> transparent;
        color += refractColor;
    }

    for (int i = 0; i < 3; i++)
    {
        if (color.p[i] > 1)
            color.p[i] = 1;
    }

    for (int i = 0; i < 3; i++)
    {
        if (color.p[i] < 0)
            color.p[i] = 0;
    }

    return color;
}

//////////////////
// OpenGL stuff //
//////////////////
void RayMaterial::drawOpenGL(void){
}
void RayTexture::setUpOpenGL(void){
}
