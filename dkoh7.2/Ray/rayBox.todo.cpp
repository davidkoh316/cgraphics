#include <math.h>
#include <GL/glut.h>
#include "rayScene.h"
#include "rayBox.h"

////////////////////////
//  Ray-tracing stuff //
////////////////////////
double RayBox::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx)
{
    iInfo.material = material;
    iInfo.normal = ray.direction;
    iInfo.iCoordinate = ray.position;

    //inside box
    Point3D in = center - length/2.0;

    if (ray.position.p[0] >= in.p[0] && ray.position.p[0] <= in.p[0] + length.p[0] &&
        ray.position.p[1] >= in.p[1] && ray.position.p[1] <= in.p[1] + length.p[1] &&
        ray.position.p[2] >= in.p[2] && ray.position.p[2] <= in.p[2] + length.p[2])
        return 0.0;

    Point3D temp[3];
    double d[3];

    // plane xy
    temp[0] = Point3D(0.0, 0.0, -1.0);
    d[0] = in.p[2];

    if (ray.direction.dot(temp[0]) > 0)
    {
        temp[0] = -temp[0];
        d[0] += length.p[2];
    }

    // xz
    temp[2] = Point3D(0.0, -1.0, 0.0);
    d[0] = in.p[1];

    if (ray.direction.dot(temp[2]) > 0)
    {
        temp[2] = -temp[2];
        d[2] == length.p[1];
    }

    // yz
    temp[1] = Point3D(-1.0, 0.0, 0.0);
    d[0] = in.p[0];

    if (ray.direction.dot(temp[1]) > 0)
    {
        temp[1] = -temp[1];
        d[1] += length.p[0];
    }
    
    
    // plane intersects
    Point3D p[3];
    double t[3];
    int i,j;

    for (i=0; i < 3; i++)
    {
        t[i] = -(ray.position.dot(temp[i]) + d[i]) / (ray.direction.dot(temp[i]));
        if (t[i] < 0)
            return -1.0;
        p[i] = ray.position + ray.direction*t[i];
    }    

    double distance = -1.0;

    for (i=0; i < 3; i++)
    {
        if (p[i].p[0] >= in.p[0] && p[i].p[0] <= in.p[0] + length.p[0] &&
            p[i].p[1] >= in.p[1] && p[i].p[1] <= in.p[1] + length.p[1] &&
            p[i].p[2] >= in.p[2] && p[i].p[2] <= in.p[2] + length.p[2] &&
            ((distance > 0 && t[i] < distance) || distance < 0))
        {
            distance = t[i];
            j = i;
        }
    }
    
    iInfo.iCoordinate = ray(distance);
    iInfo.normal = temp[j];

    return distance;
}


BoundingBox3D RayBox::setBoundingBox(void)
{
    Point3D l = center - (length/2);
    Point3D h = center + (length/2);
    Point3D list[2] = {l, h};
    bBox = BoundingBox3D(list, 2);

    return bBox;
}

//////////////////
// OpenGL stuff //
//////////////////
int RayBox::drawOpenGL(int materialIndex){
	return -1;
}
