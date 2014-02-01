#include <math.h>
#include <GL/glut.h>
#include "rayScene.h"
#include "rayCone.h"


////////////////////////
//  Ray-tracing stuff //
////////////////////////
double RayCone::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx){
	return -1;
}

BoundingBox3D RayCone::setBoundingBox(void){
	Point3D p;
	p=Point3D(radius,height/2,radius);
	bBox=BoundingBox3D(center+p,center-p);
	return bBox;
}

//////////////////
// OpenGL stuff //
//////////////////
int RayCone::drawOpenGL(int materialIndex)
{
    if (material->index != materialIndex)
        material->drawOpenGL();

    glMatrixMode(GL_MODELVIEW);

    gluCylinder(gluNewQuadric(), radius, 0, height, openGLComplexity, openGLComplexity);
    GLUquadric* q = gluNewQuadric();
    gluQuadricOrientation(q, GLU_INSIDE);
    gluQuadricDrawStyle(q, GLU_FILL);
    gluQuadricNormals(q, GLU_SMOOTH);
    gluDisk(q, 0, radius, openGLComplexity, openGLComplexity);
        
    glFlush();

    return material->index;
}
