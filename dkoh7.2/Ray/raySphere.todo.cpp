#include <math.h>
#include <GL/glut.h>
#include "rayScene.h"
#include "raySphere.h"

////////////////////////
//  Ray-tracing stuff //
////////////////////////

double min(double a, double b) {
        if (a < b) {
                return a;
        }
        return b;
}
double RaySphere::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx)
{
    double r = (ray.direction*2.0).dot(ray.position-center);
    double distdiff = (ray.position - center).length();
    distdiff = distdiff*distdiff - radius*radius;

    double rdist = sqrt(r*r - 4.0*distdiff);
    double rtemp1 = (-r + rdist)/2.0;
    double rtemp2 = (-r - rdist)/2.0;

    double result;

    if (rtemp1 < 0)
        result = rtemp2;
    else if (rtemp2 < 0)
        result = rtemp1;
    else
        result = rtemp1 < rtemp2 ? rtemp1 : rtemp2;
    if (result < 0)
        return -1.0;

    Point3D pval = ray.position + ray.direction*result;
    double dist = (pval - ray.position).length();

    if ((mx > 0 && dist < mx) || mx < 0)
    {
        iInfo.iCoordinate = pval;
        iInfo.normal = (pval - center) / (pval - center).length();
        iInfo.material = material;

        return dist;
    }
    
    else
	    return -1;
}
BoundingBox3D RaySphere::setBoundingBox(void){
	return bBox;
}

//////////////////
// OpenGL stuff //
//////////////////
int RaySphere::drawOpenGL(int materialIndex){
	return -1;
}
