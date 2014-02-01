#include <math.h>
#include <GL/glut.h>
#include "rayScene.h"
#include "rayCylinder.h"


////////////////////////
//  Ray-tracing stuff //
////////////////////////
double RayCylinder::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx){
	return -1;
}

BoundingBox3D RayCylinder::setBoundingBox(void){
	Point3D p;
	p=Point3D(radius,height/2,radius);
	bBox=BoundingBox3D(center+p,center-p);
	return bBox;
}

//////////////////
// OpenGL stuff //
//////////////////
int RayCylinder::drawOpenGL(int materialIndex)
{
    if (material->index != materialIndex)
        material->drawOpenGL();

    glMatrixMode(GL_MODELVIEW);
    
    GLUquadric* q = gluNewQuadric();
    gluCylinder(gluNewQuadric(), radius, radius, height, openGLComplexity, openGLComplexity);
    gluQuadricOrientation(q, GLU_INSIDE);
    gluDisk(q, 0, radius, openGLComplexity, openGLComplexity);
        
    glTranslatef(0.0, 0.0, height);
    GLUquadricObj *q2 = gluNewQuadric();
    gluQuadricDrawStyle(q2, GLU_FILL);
    gluQuadricNormals(q2, GLU_SMOOTH);
    gluDisk(q2, 0, radius, openGLComplexity, openGLComplexity);
        
    glFlush();
        
    return material->index;
}
