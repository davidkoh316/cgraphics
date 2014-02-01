#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "rayTriangle.h"

////////////////////////
//  Ray-tracing stuff //
////////////////////////
void RayTriangle::initialize(void){
}
double RayTriangle::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx){
	return -1;
}
BoundingBox3D RayTriangle::setBoundingBox(void){
	Point3D pList[3];
	pList[0]=v[0]->position;
	pList[1]=v[1]->position;
	pList[2]=v[2]->position;
	bBox=BoundingBox3D(pList,3);
	for(int i=0;i<3;i++){
		bBox.p[0][i]-=RAYEPS;
		bBox.p[1][i]+=RAYEPS;
	}
	return bBox;
}

//////////////////
// OpenGL stuff //
//////////////////
int RayTriangle::drawOpenGL(int materialIndex)
{
    if (material->index != materialIndex)
        material->drawOpenGL();

    glBegin(GL_TRIANGLES);

    RayVertex a1 = *v[0];
    RayVertex a2 = *v[1];
    RayVertex a3 = *v[2];

    Point3D pnt1 = a1.position;
    Point3D pnt2 = a2.position;
    Point3D pnt3 = a3.position;

    Point3D norm1 = a1.normal;
    Point3D norm2 = a2.normal;
    Point3D norm3 = a3.normal;

    Point2D texture1 = a1.texCoordinate;
    Point2D texture2 = a2.texCoordinate;
    Point2D texture3 = a3.texCoordinate;

    glTexCoord2f(texture1.p[0], texture1.p[1]);
    glNormal3d(norm1[0], norm1[1], norm1[2]);
    glVertex3d(pnt1[0], pnt1[1], pnt1[2]);

    glTexCoord2f(texture2.p[0], texture2.p[1]);
    glNormal3d(norm2[0], norm2[1], norm2[2]);
    glVertex3d(pnt2[0], pnt2[1], pnt2[2]);

    glTexCoord2f(texture3.p[0], texture3.p[1]);
    glNormal3d(norm3[0], norm3[1], norm3[2]);
    glVertex3d(pnt3[0], pnt3[1], pnt3[2]);

    glEnd();

    return material->index;
}
