#include <math.h>
#include <GL/glut.h>
#include "rayScene.h"
#include "raySpotLight.h"


////////////////////////
//  Ray-tracing stuff //
////////////////////////
Point3D RaySpotLight::getDiffuse(Point3D cameraPosition,RayIntersectionInfo& iInfo){
	return Point3D();
}
Point3D RaySpotLight::getSpecular(Point3D cameraPosition,RayIntersectionInfo& iInfo){
	return Point3D();
}
int RaySpotLight::isInShadow(RayIntersectionInfo& iInfo,RayShape* shape,int& isectCount){
	return 0;
}
Point3D RaySpotLight::transparency(RayIntersectionInfo& iInfo,RayShape* shape,Point3D cLimit){
	return Point3D(1,1,1);
}

//////////////////
// OpenGL stuff //
//////////////////
void RaySpotLight::drawOpenGL(int index)
{
    GLfloat amb[] = {0.5f, 0.5f, 0.5f, 1.0f};
    glLightfv(GL_LIGHT0 + index, GL_AMBIENT, amb);

    GLfloat diff[] = {color[0], color[1], color[2], 0};
    glLightfv(GL_LIGHT0 + index, GL_DIFFUSE, diff);

    GLfloat spec[] = {color[0], color[1], color[2], 0};
    glLightfv(GL_LIGHT0 + index, GL_SPECULAR, spec);

    GLfloat pos[] = {location[0], location[1], location[2], 1};
    glLightfv(GL_LIGHT0 + index, GL_POSITION, pos);

    GLfloat direction[] = {direction[0], direction[1], direction[2]};
    glLightfv(GL_LIGHT0 + index, GL_SPOT_DIRECTION, direction);
        
    // cut off
    glLightf(GL_LIGHT0 + index, GL_SPOT_CUTOFF, cutOffAngle);

    // drop off
    glLightf(GL_LIGHT0 + index, GL_SPOT_EXPONENT, dropOffRate);

    // const/linear/quadratic attenuation
    glLightf(GL_LIGHT0 + index, GL_CONSTANT_ATTENUATION, constAtten);
    glLightf(GL_LIGHT0 + index, GL_LINEAR_ATTENUATION, linearAtten);
    glLightf(GL_LIGHT0 + index, GL_QUADRATIC_ATTENUATION, quadAtten);

    glEnable(GL_LIGHT0 + index);
}
