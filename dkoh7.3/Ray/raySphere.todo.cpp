#include <math.h>
#include <GL/glut.h>
#include "rayScene.h"
#include "raySphere.h"

////////////////////////
//  Ray-tracing stuff //
////////////////////////
double RaySphere::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx){
	return -1;
}
BoundingBox3D RaySphere::setBoundingBox(void){
	Point3D p=Point3D(radius,radius,radius);
	bBox=BoundingBox3D(center+p,center-p);
	return bBox;
}

//////////////////
// OpenGL stuff //
//////////////////
int RaySphere::drawOpenGL(int materialIndex)
{
    if (material->index != materialIndex)
        material->drawOpenGL();

    GLUquadric* quad = gluNewQuadric();

    GLdouble GLradius = radius;
    gluSphere(quad, GLradius, openGLComplexity, openGLComplexity);

    gluDeleteQuadric(quad);

    return material->index;
}
