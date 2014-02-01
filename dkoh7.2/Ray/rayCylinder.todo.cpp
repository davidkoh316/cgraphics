#include <math.h>
#include <GL/glut.h>
#include "rayScene.h"
#include "rayCylinder.h"


////////////////////////
//  Ray-tracing stuff //
////////////////////////
double RayCylinder::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx)
{
    iInfo.material = material;

    Ray3D rplane = ray;
    rplane.position.p[1] = 0;
    rplane.direction.p[1] = 0;

    Point3D cplane = center;
    cplane.p[1] = 0;

    double b = (rplane.direction*2.0).dot(rplane.position-cplane);
    double length = (rplane.position - cplane).length();
    length = length*length - radius*radius;

    double rpart = sqrt(b*b - 4.0*length);
    double r0 = (-b + rpart)/(2.0);
    double r1 = (-b - rpart)/(2.0);

    double result;
    if (r0 < 0)
        result = r1;
    else if (r1 < 0)
        result = r0;
    else
    {
        if (r0 < r1)
            result = r0;
        else
            result = r1;
    }

    if (result > 0)
    {
        Point3D pplanep = rplane.position + rplane.direction*result;
        double dist = (pplanep.p[0] - ray.position.p[0]) / ray.direction.p[0];

        Point3D p = ray(dist);
        if (p.p[1] >= center.p[1] - height/2.0 && p.p[1] <= center.p[1] + height/2.0)
        {
            iInfo.iCoordinate = p;
            iInfo.normal = pplanep - cplane;
            iInfo.normal = iInfo.normal / iInfo.normal.length();
            return dist;
        }
    }

    Point3D tempP;
    double d;
    tempP = Point3D(0.0, 1.0, 0.0);
    d = center.p[1] + height/2.0;
    if (ray.direction.dot(tempP) > 0)
    {
        tempP = -tempP;
        d -= height;
    }

    result = -(ray.position.dot(tempP) + d) / (ray.direction.dot(tempP));

    if (result >= 0 && (ray(result) - center).length() <= radius)
    {
        iInfo.iCoordinate = ray(result);
        iInfo.normal = tempP;
        return result;
    }
    
    return -1;
}

BoundingBox3D RayCylinder::setBoundingBox(void)
{
    Point3D low = Point3D(center[0] - radius, center[1] - radius, center[2] - (height/2));
    Point3D high = Point3D(center[0] + radius, center[1] + radius, center[2] + (height/2));
    Point3D list[2] = {low, high};
    bBox = BoundingBox3D(list, 2);

    return bBox;
}




//////////////////
// OpenGL stuff //
//////////////////
int RayCylinder::drawOpenGL(int materialIndex){
	return -1;
}
