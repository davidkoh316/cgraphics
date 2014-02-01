#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "rayTriangle.h"

////////////////////////
//  Ray-tracing stuff //
////////////////////////
void RayTriangle::initialize(void)
{
    plane = Plane3D(v[0] -> position, v[1] -> position, v[2] -> position);
}

double RayTriangle::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx)
{
    Point3D vtr1, vtr2, n;
    bool crossed = true;
    
    double dist = -(ray.position.dot(plane.normal) + plane.distance) / (ray.direction.dot(plane.normal));
    Point3D tempr = ray.position + ray.direction*dist; //get point on triangle

    int x;
    for (x=0; x<3; x++)
    {
        vtr1 = v[x] -> position - ray.position;
        vtr2 = v[(x+1)%3] -> position - ray.position;
        n = vtr2^vtr1;
        if ((tempr-ray.position).dot(n) < 0)
            return -1;
    }

    if (crossed && (mx < 0 || dist < mx))
    {
        iInfo.iCoordinate = tempr;
        if (ray.direction.dot(plane.normal) < 0)
            iInfo.normal = plane.normal;
        else
            iInfo.normal = -plane.normal;
        
        iInfo.material = material;
        return dist;
    }
    else
        return -1;
}

BoundingBox3D RayTriangle::setBoundingBox(void){
	return bBox;
}

//////////////////
// OpenGL stuff //
//////////////////
int RayTriangle::drawOpenGL(int materialIndex){
	return -1;
}
