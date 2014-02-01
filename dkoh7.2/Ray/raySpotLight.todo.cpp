#include <math.h>
#include <GL/glut.h>
#include "rayScene.h"
#include "raySpotLight.h"


////////////////////////
//  Ray-tracing stuff //
////////////////////////
Point3D RaySpotLight::getDiffuse(Point3D cameraPosition,RayIntersectionInfo& iInfo)
{
    Point3D newC = iInfo.material->diffuse;
    Point3D loc = iInfo.iCoordinate - location;
    
    double length = loc.length();
    double tempInf, dir;
    
    tempInf = iInfo.normal.dot(-direction.unit());
    dir = loc.unit().dot(direction.unit());
    
    if (dir < cos(cutOffAngle) || tempInf < 0)
        return Point3D();
    
    newC *= tempInf*pow(dir, dropOffRate);
    double sum = constAtten + length*linearAtten + length*length*quadAtten;
    newC[0] *= color[0]/sum;
    newC[1] *= color[1]/sum;
    newC[2] *= color[2]/sum;
    
    return newC;
}

Point3D RaySpotLight::getSpecular(Point3D cameraPosition,RayIntersectionInfo& iInfo)
{
    double d = (iInfo.iCoordinate-location).length(); //distance
    Point3D dir = (iInfo.iCoordinate-location)/d;
    double drop = direction.dot(dir);
    Point3D tempP;
    
    if (drop > cos(cutOffAngle))
        tempP = color*pow(drop, dropOffRate) / (constAtten + linearAtten*d + quadAtten*d*d);
    else
        return tempP;

    Point3D vDir = (cameraPosition-iInfo.iCoordinate);
    vDir = vDir / vDir.length();
    Point3D rDir = -dir;

    double p0temp = iInfo.normal.p[0]*iInfo.normal.p[0];
    double p1temp = iInfo.normal.p[1]*iInfo.normal.p[1];
    double p2temp = iInfo.normal.p[2]*iInfo.normal.p[2];
    double sq1 = sqrt(p0temp + p1temp);
    double sq2 = sqrt(p0temp + p1temp + p2temp);

    Matrix4D xz;
    xz.m[0][0] = iInfo.normal.p[0]/sq1;
    xz.m[1][0] = iInfo.normal.p[1]/sq1;
    xz.m[0][1] = -xz.m[1][0];
    xz.m[1][1] = xz.m[0][0];

    Matrix4D z;
    xz.m[0][0] = iInfo.normal.p[2]/sq2;
    xz.m[2][0] = -sq1/sq2;
    xz.m[0][2] = -xz.m[2][0];
    xz.m[2][2] = xz.m[0][0];

    Matrix4D r1;
    r1.m[0][0] = -1;
    r1.m[1][0] = 0;
    r1.m[0][1] = 0;
    r1.m[1][1] = -1;

    rDir = xz.invert()*z.invert()*r1*z*xz*rDir;

    double n = -direction.dot(iInfo.normal);

    if (n > 0)
        return iInfo.material -> specular*pow(vDir.dot(rDir), iInfo.material -> specularFallOff)*tempP;

    return Point3D();
}

int RaySpotLight::isInShadow(RayIntersectionInfo& iInfo,RayShape* shape,int& isectCount)
{
	Point3D d = (iInfo.iCoordinate-location);
    d = d/d.length();
    Ray3D ray(iInfo.iCoordinate - d*(0.0001), -d);
    
    ++isectCount;
    RayIntersectionInfo p;
    double coll = shape -> intersect(ray, p, (location - ray.position).length());
    if (coll > 0)
        return 1;

    return 0;
}
Point3D RaySpotLight::transparency(RayIntersectionInfo& iInfo,RayShape* shape,Point3D cLimit){
	return Point3D(1,1,1);
}

//////////////////
// OpenGL stuff //
//////////////////
void RaySpotLight::drawOpenGL(int index){
}
