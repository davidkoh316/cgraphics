#include <stdlib.h>
#include <math.h>

#include <SVD/SVDFit.h>
#include <SVD/MatrixMNTC.h>

#include "geometry.h"


///////////////////////
// Ray-tracing stuff //
///////////////////////
double BoundingBox3D::intersect(const Ray3D& ray) const 
{
    double min, max;
    double ymin, ymax, zmin, zmax;
    Point3D Ps = ray.position;
    Point3D dir = ray.direction;

    if (dir.p[0] >= 0)
    {
        min = (p[0].p[0] - Ps.p[0]) / dir.p[0];
        max = (p[1].p[0] - Ps.p[0]) / dir.p[0];
    }
    else
    {
        min = (p[1].p[0] - Ps.p[0]) / dir.p[0];
        max = (p[0].p[0] - Ps.p[0]) / dir.p[0];
    }

    if (d.p[1] >= 0)
    {
        ymin = (p[0].p[1] - Ps.p[1]) / dir.p[1];
        ymax = (p[1].p[1] - Ps.p[1]) / dir.p[1];
    }
    else
    {
        ymin = (p[1].p[1] - Ps.p[1]) / dir.p[1];
        ymax = (p[0].p[1] - Ps.p[1]) / dir.p[1];
    }

    if ((min > ymax) || (ymin > max))
        return -1.0;
    if (ymin > min)
        min = ymin;
    if (ymax < max)
        max = ymax;

    if (dir.p[2] >= 0)
    {
        zmin = (p[0].p[2] - Ps.p[2]) / dir.p[2];
        zmax = (p[1].p[2] - Ps.p[2]) / dir.p[2];
    }
    else
    {
        zmin = (p[1].p[2] - Ps.p[2]) / dir.p[2];
        zmax = (p[0].p[2] - Ps.p[2]) / dir.p[2];
    }

    if ((min > zmax) || (zmin > max))
        return -1;
    if (zmin > min)
        min = zmin;
    if (zmax < max)
        max = zmax;

    return min;
}

/////////////////////
// Animation stuff //
/////////////////////
Matrix3D::Matrix3D(const Point3D& e){
	(*this)=Matrix3D();
}

Matrix3D::Matrix3D(const Quaternion& q){
	(*this)=Matrix3D();
}
Matrix3D Matrix3D::closestRotation(void) const {
	return (*this);
}
/* While these Exp and Log implementations are the direct implementations of the Taylor series, the Log
 * function tends to run into convergence issues so we use the other ones:*/
Matrix3D Matrix3D::Exp(const Matrix3D& m,int iter){
	return m;
}
