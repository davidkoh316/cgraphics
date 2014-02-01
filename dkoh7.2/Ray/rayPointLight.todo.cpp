#include <math.h>
#include <GL/glut.h>
#include "rayPointLight.h"
#include "rayScene.h"

////////////////////////
//  Ray-tracing stuff //
////////////////////////
Point3D RayPointLight::getDiffuse(Point3D cameraPosition,RayIntersectionInfo& iInfo)
{
    Point3D l = (location - iInfo.iCoordinate);
    double length = l.length();
    double atten;

    atten = constAtten + linearAtten*length + quadAtten*pow(length, 2);
    Point3D diffuse = color*iInfo.normal.dot(l.unit())/atten;
    return diffuse;
}

Point3D RayPointLight::getSpecular(Point3D cameraPosition,RayIntersectionInfo& iInfo)
{
	Point3D k = iInfo.material -> specular;
    double n = iInfo.material -> specularFallOff;
    Point3D l = (location - iInfo.iCoordinate);
    double d = l.length();
    double atten = constAtten + linearAtten*d + quadAtten*pow(d, 2);
    Point3D r = color/atten;

    l = l.unit();

    double norm = iInfo.normal.unit().dot(l);
    if (norm < 0)
        norm = 0;
    if (norm > 1)
        norm = 1;

    Point3D t = (l - (l*2 - iInfo.normal.unit()*norm*2)).unit();
    Point3D p = (iInfo.iCoordinate - cameraPosition).unit();

    double dr = p.dot(t);
    if (dr < 0)
        dr = 0;
    if (dr > 1)
        dr = 1;

    Point3D spec = r*pow(dr,n)*k;
    return spec;
}
int RayPointLight::isInShadow(RayIntersectionInfo& iInfo,RayShape* shape,int& isectCount){
	return 0;
}
Point3D RayPointLight::transparency(RayIntersectionInfo& iInfo,RayShape* shape,Point3D cLimit){
	return Point3D(1,1,1);
}


//////////////////
// OpenGL stuff //
//////////////////
void RayPointLight::drawOpenGL(int index){
}
