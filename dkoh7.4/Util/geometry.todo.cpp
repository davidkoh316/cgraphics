#include <stdlib.h>
#include <math.h>

#include <SVD/SVDFit.h>
#include <SVD/MatrixMNTC.h>

#include "geometry.h"


///////////////////////
// Ray-tracing stuff //
///////////////////////
double BoundingBox3D::intersect(const Ray3D& ray) const {
	return -1;
}

/////////////////////
// Animation stuff //
/////////////////////
Matrix3D::Matrix3D(const Point3D& e)
{
    // x, y, z angles
    double x = e.p[0];
    double y = e.p[1];
    double z = e.p[2];

    Matrix3D xRotate = Matrix3D();
    Matrix3D yRotate = Matrix3D();
    Matrix3D zRotate = Matrix3D();

    // x-rotations
    xRotate(0, 0) = 1;
    xRotate(0, 1) = 0;
    xRotate(0, 2) = 0;
    
    xRotate(1, 0) = 0;
    xRotate(1, 1) = cos(x);
    xRotate(1, 2) = sin(x);
    
    xRotate(2, 0) = 0;
    xRotate(2, 1) = -sin(x);
    xRotate(2, 2) = cos(x);

    // y-rotations
    yRotate(0, 0) = cos(y);
    yRotate(0, 1) = 0;
    yRotate(0, 2) = -sin(y);
    
    yRotate(1, 0) = 0;
    yRotate(1, 1) = 1;
    yRotate(1, 2) = 0;
    
    yRotate(2, 0) = sin(y);
    yRotate(2, 1) = 0;
    yRotate(2, 2) = cos(y);

    // z-rotations
    zRotate(0, 0) = cos(z);
    zRotate(0, 1) = sin(z);
    zRotate(0, 2) = 0;
    
    zRotate(1, 0) = -sin(z);
    zRotate(1, 1) = cos(z);
    zRotate(1, 2) = 0;
    
    zRotate(2, 0) = 0;
    zRotate(2, 1) = 0;
    zRotate(2, 2) = 1;

    (*this) = zRotate*yRotate*xRotate;
}

Matrix3D::Matrix3D(const Quaternion& q)
{
    Quaternion t = q;
    t = t.unit();

    double k, x, y, z;

    k = t.real;
    x = t.imag[0];
    y = t.imag[1];
    z = t.imag[2];

    Matrix3D m = Matrix3D();

    m(0, 0) = 1 - (2*y*y) - (2*z*z);
    m(0, 1) = (2*x*y) + (2*z*k);
    m(0, 2) = (2*x*z) - (2*y*k);

    m(1, 0) = (2*x*y) - (2*z*k);
    m(1, 1) = 1 - (2*x*x) - (2*z*z);
    m(1, 2) = (2*y*z) + (2*x*k);

    m(2, 0) = (2*x*z) + (2*y*k);
    m(2, 1) = (2*y*z) - (2*x*k);
    m(2, 2) = 1 - (2*x*x) - (2*y*y);

    (*this) = m;
}

Matrix3D Matrix3D::closestRotation(void) const
{
    Matrix3D matrix = (*this);

    Matrix3D rt1 = Matrix3D();
    Matrix3D rt2 = Matrix3D();
    Matrix3D temp = Matrix3D();

    matrix.SVD(rt1, temp, rt2);

    if (signbit(temp(0,0)))
        temp(0, 0) = -1;
    else
        temp(0, 0) = 1;

    if (signbit(temp(1,1)))
        temp(1, 1) = -1;
    else
        temp(1, 1) = 1;

    if (signbit(temp(2,2)))
        temp(2, 2) = -1;
    else
        temp(2, 2) = 1;

    // lambdas
    double l1 = temp(0, 0);
    double l2 = temp(1, 1);
    double l3 = temp(2, 2);

    if (l1*l2*l3 != 1)
        temp(2, 2) = -temp(2, 2);

    return rt1*temp*rt2;
}


/* While these Exp and Log implementations are the direct implementations of the Taylor series, the Log
 * function tends to run into convergence issues so we use the other ones:*/
Matrix3D Matrix3D::Exp(const Matrix3D& m,int iter)
{
    Matrix3D tempx = m;

    // factorial
    double fact[iter];
    
    Matrix3D dynamicX[iter];
    Matrix3D taylor[iter];

    fact[0] = 1;
    dynamicX[0] = Matrix3D();
    taylor[0] = Matrix3D();

    for (int i = 1; i < iter; i++)
    {
        fact[i] = fact[i-1]*i;
        dynamicX[i] = tempx*dynamicX[i-1];
        taylor[i] = (dynamicX[i]*(1/fact[i])) + taylor[i-1];
    }

    return taylor[iter-1];
}
