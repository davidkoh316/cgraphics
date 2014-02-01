#include <math.h>
#include <GL/glut.h>
#include "rayScene.h"
#include "rayCone.h"


////////////////////////
//  Ray-tracing stuff //
////////////////////////
double RayCone::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx)
{

    return -1;
}

BoundingBox3D RayCone::setBoundingBox(void)
{
    Point3D low = center - Point3D(radius, radius, 0);
    Point3D high = center + Point3D(radius, radius, height);
    Point3D list[2] = {low, high};
    bBox = BoundingBox3D(list, 2);

    return bBox;
}

//////////////////
// OpenGL stuff //
//////////////////
int RayCone::drawOpenGL(int materialIndex){
	return -1;
}
