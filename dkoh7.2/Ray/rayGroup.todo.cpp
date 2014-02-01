#include <stdlib.h>
#include <GL/glut.h>
#include "rayGroup.h"

////////////////////////
//  Ray-tracing stuff //
////////////////////////
double RayGroup::intersect(Ray3D ray,RayIntersectionInfo& iInfo,double mx)
{
    int nums = sNum;
    double minInters = mx;
    int i, j = 0;
    
    Ray3D tempRay = Ray3D();
    tempRay.direction = getInverseMatrix().multDirection(ray.direction);
    tempRay.position = getInverseMatrix().multPosition(ray.position);
    tempRay.direction /= tempRay.direction.length();

    for (i = 0; i < sNum; i++)
    {
        RayShape* tempS = *(shapes + i);
        //box test
        double boxInters = shapes[i]->bBox.intersect(tempRay);
        if (boxInters > 0)
        {
            hits[j].t = boxInters;
            hits[j].shape = shapes[i];
            j++;
        }
    }

    //qsorting call here
    qsort(hits, j, sizeof(RayShapeHit), RayShapeHit::Compare);

    for (i = 0; i < j; i++)
    {
        if (hits[i].t > minInters && minInters != -1)
            break;

        RayShape* tempS = hits[i].shape;

        RayIntersectionInfo tempinfo = RayIntersectionInfo();
        double tempIntersection = tempS->intersect(tempRay, tempinfo, minInters);

        //if there is intersecion
        if (tempIntersection != -1)
        {
            if (minInters == -1 || minInters > tempIntersection)
            {
                tempinfo.iCoordinate = getNormalMatrix()*tempinfo.iCoordinate;
                tempinfo.normal = getNormalMatrix().multNormal(tempinfo.normal);
                tempinfo.normal /= tempinfo.normal.length();

                minInters = (tempinfo.iCoordinate - tempRay.position).length();
                iInfo = tempinfo;
            }
        }
    }

    if (mx > 0 && minInters > mx)
        return -1;

    return minInters;
}

BoundingBox3D RayGroup::setBoundingBox(void)
{
    Point3D points[sNum*2];

    int i;
    for (i = 0; i < sNum; i++)
    {
        RayShape*tempShape =*(shapes + i);
        tempShape->setBoundingBox();

        Point3D t1, t2;
        t1 = tempShape -> bBox.p[0];
        t2 = tempShape -> bBox.p[1];

        points[2*i] = t1;
        points[2*i + 1] = t2;
    }

    bBox = BoundingBox3D(points, 2*sNum);
    bBox = bBox.transform(getNormalMatrix());
	
    return bBox;
}

int StaticRayGroup::set(void)
{
    Matrix4D matrix = getMatrix();
    this->normalTransform = matrix;
    this->inverseTransform = matrix.invert();

	return 1;
}
//////////////////
// OpenGL stuff //
//////////////////
int RayGroup::getOpenGLCallList(void){
	return 0;
}

int RayGroup::drawOpenGL(int materialIndex){
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
