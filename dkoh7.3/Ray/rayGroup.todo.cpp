#include <stdlib.h>
#include <GL/glut.h>
#include "rayGroup.h"

////////////////////////
//  Ray-tracing stuff //
////////////////////////
double RayGroup::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx)
{
	return -1;
}

BoundingBox3D RayGroup::setBoundingBox(void)
{
	Point3D* pList;
	BoundingBox3D tBBox;
	pList=new Point3D[sNum*2];
	for(int i=0;i<sNum;i++){
		tBBox=shapes[i]->setBoundingBox();
		pList[2*i  ]=tBBox.p[0];
		pList[2*i+1]=tBBox.p[1];
	}
	tBBox=BoundingBox3D(pList,sNum*2);

	delete[] pList;
	bBox=tBBox.transform(getMatrix());
	return bBox;
}

int StaticRayGroup::set(void){
	return 1;
}
//////////////////
// OpenGL stuff //
//////////////////
int RayGroup::getOpenGLCallList(void)
{
    GLuint list;
    list = glGenLists(1);

    glNewList(list, GL_COMPILE);
    drawOpenGL(-1); // -1 material index initially
  
    glEndList();

    return list;
}

int RayGroup::drawOpenGL(int materialIndex)
{
    Matrix4D newMatrix = getMatrix();
    double* t = new double[16];

    int j,k;
    for (j = 0; j < 4; j++)
    {
        for (k = 0; k < 4; k++)
        {
            t[(j * 4) + k] = newMatrix.m[j][k];
        }
    }

    // if true, draw shapes as before
    if (openGLCallListID == 0)
    {
        int i;
        for (i = 0; i < sNum; i++)
        {
            // push and pop matrix in stack
            glPushMatrix();
            
            glMultMatrixd(t);
            shapes[i]->drawOpenGL(materialIndex);
            
            glPopMatrix();
        }
    }

    else
    {
        int i;
        for (i = 0; i < sNum; i++)
        {
            glCallList(openGLCallListID);
        }
    }

    return -1;
}

/////////////////////
// Animation Stuff //
/////////////////////

Matrix4D ParametrizedEulerAnglesAndTranslation::getMatrix(void){
	return Matrix4D::IdentityMatrix();
}
Matrix4D ParametrizedClosestRotationAndTranslation::getMatrix(void){
	return Matrix4D::IdentityMatrix();
}
Matrix4D ParametrizedRotationLogarithmAndTranslation::getMatrix(void){
	return Matrix4D::IdentityMatrix();
}
Matrix4D ParametrizedQuaternionAndTranslation::getMatrix(void){
	return Matrix4D::IdentityMatrix();
}
