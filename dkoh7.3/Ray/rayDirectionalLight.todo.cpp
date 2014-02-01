#include <math.h>
#include <GL/glut.h>
#include "rayDirectionalLight.h"
#include "rayScene.h"

////////////////////////
//  Ray-tracing stuff //
////////////////////////
Point3D RayDirectionalLight::getDiffuse(Point3D cameraPosition,RayIntersectionInfo& iInfo){
	return Point3D();
}
Point3D RayDirectionalLight::getSpecular(Point3D cameraPosition,RayIntersectionInfo& iInfo){
	return Point3D();
}
int RayDirectionalLight::isInShadow(RayIntersectionInfo& iInfo,RayShape* shape,int& isectCount){
	return 0;
}
Point3D RayDirectionalLight::transparency(RayIntersectionInfo& iInfo,RayShape* shape,Point3D cLimit){
	return Point3D(1,1,1);
}

//////////////////
// OpenGL stuff //
//////////////////
void RayDirectionalLight::drawOpenGL(int index)
{
    GLfloat amb[] = {0.5f, 0.5f, 0.5f, 1.0f};
    glLightfv(GL_LIGHT0 + index, GL_AMBIENT, amb);

    GLfloat diff[] = {color[0], color[1], color[2], 0};
    glLightfv(GL_LIGHT0 + index, GL_DIFFUSE, diff);

    GLfloat spec[] = {color[0], color[1], color[2], 0};
    glLightfv(GL_LIGHT0 + index, GL_SPECULAR, spec);

    GLfloat pos[] = {-direction[0], -direction[1], -direction[2], 0};
    glLightfv(GL_LIGHT0 + index, GL_POSITION, pos);

    glEnable(GL_LIGHT0 + index);
}
