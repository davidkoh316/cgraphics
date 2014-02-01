#include <math.h>
#include <GL/glut.h>
#include "rayDirectionalLight.h"
#include "rayScene.h"

////////////////////////
//  Ray-tracing stuff //
////////////////////////
Point3D RayDirectionalLight::getDiffuse(Point3D cameraPosition,RayIntersectionInfo& iInfo){
    Point3D dir = -direction;
    Point3D i = color;
    
    Point3D d = iInfo.material->diffuse;
    Point3D norm = iInfo.normal;
    Point3D b = d*(i*(norm.dot(dir)));

    if (b[0] < 0)
        b[0] = 0;
    
    if (b[1] < 0)
        b[1] = 0;

    if (b[2] < 0)
        b[2] = 0;

    if (b[0] > 1)
        b[0] = 1;

    if (b[1] > 1)
        b[1] = 1;

    if (b[2] > 1)
        b[2] = 1;

    return b;
}

Point3D RayDirectionalLight::getSpecular(Point3D cameraPosition,RayIntersectionInfo& iInfo)
{
    Point3D c;
    c = color;

    Point3D unit = (iInfo.iCoordinate - cameraPosition).unit();
    Point3D nunit = iInfo.normal.unit();
    Point3D l = -direction;
    if(nunit.dot(l) < 0)
        return Point3D();

    Point3D r = (nunit*l.dot(nunit)*2-l).unit();
    Point3D sp =iInfo.material -> specular*pow(unit.dot(r), iInfo.material->specularFallOff)*c;
        return sp;
}


int RayDirectionalLight::isInShadow(RayIntersectionInfo& iInfo,RayShape* shape,int& isectCount)
{
    Point3D coord = iInfo.iCoordinate;
    Point3D d = -direction;
    double temp = .00001;

    Ray3D ray = Ray3D(coord, d);
    ray.position = ray(temp);
    RayIntersectionInfo info = iInfo;

    double x = shape -> intersect(ray, info, -1);
    Point3D n = info.normal;

    if (d.dot(n) >= 0)
        return 1;
    if (x > 0)
        return 0;

    return 1;
}

Point3D RayDirectionalLight::transparency(RayIntersectionInfo& iInfo,RayShape* shape,Point3D cLimit)
{
    RayIntersectionInfo rinfo;
    Ray3D ray(iInfo.iCoordinate - direction*(0.0001), -direction);
    double coll = shape -> intersect(ray, rinfo, -1);
    Point3D s(1.0, 1.0, 1.0);
    
    while (coll > 0)
    {
        s *= rinfo.material -> transparent;
        if (s.p[0] < cLimit.p[0] && s.p[1] < cLimit.p[1] && s.p[2] < cLimit.p[2])
        {
            s.p[0] = 0;
            s.p[1] = 0;
            s.p[2] = 0;
            break;
        }
        ray.position = rinfo.iCoordinate + ray.direction*(0.0001);
        coll = shape -> intersect(ray, rinfo, -1);
    }

    return s;
}

//////////////////
// OpenGL stuff //
//////////////////
void RayDirectionalLight::drawOpenGL(int index){
}
