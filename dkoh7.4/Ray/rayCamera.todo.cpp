#include <GL/glut.h>
#include <math.h>
#include "rayCamera.h"



//////////////////
// OpenGL stuff //
//////////////////
void RayCamera::drawOpenGL(void)
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(position.p[0], position.p[1], position.p[2],
        position.p[0]+direction.p[0], position.p[1]+direction.p[1], position.p[2]+direction.p[2],
        up.p[0], up.p[1], up.p[2]);
}

void RayCamera::rotateUp(Point3D center,float angle)
{
    glMatrixMode(GL_MODELVIEW);
    glTranslatef(-center[0], -center[1], -center[2]);
    // rotate around origin
    glRotatef(angle, 0.0f, 1.0f, 0.0f);
   
    glTranslatef(center[0], center[1], center[2]);
    glFlush();
}

void RayCamera::rotateRight(Point3D center,float angle)
{
    glMatrixMode(GL_MODELVIEW);
    glTranslatef(-center[0], -center[1], -center[2]);
    // rotate around origin
    glRotatef(angle, 1.0f, 0.0f, 0.0f);
    
    glTranslatef(center[0], center[1], center[2]);
    glFlush();
}

void RayCamera::moveForward(float dist)
{
    if (signbit(dist))
        position = position + (direction*-Point3D(.03, .03, .03));
    else
        position = position + (direction*Point3D(.03, .03, .03));
}

void RayCamera::moveRight(float dist)
{
    if (signbit(dist))
        position = position + (right*-Point3D(.03, .03, .03));
    else
        position = position + (right*Point3D(.03, .03, .03));
}

void RayCamera::moveUp(float dist)
{
    if (signbit(dist))
        position = position + (up*-Point3D(.03, .03, .03));
    else
        position = position + (up*Point3D(.03, .03, .03));
}
