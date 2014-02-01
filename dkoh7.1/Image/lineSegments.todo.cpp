/*  David Koh
    dkoh7@jhu.edu
    Computer Graphics
    Assignment 1
*/    

#include "lineSegments.h"
#include <math.h>

////////////////////////////
// Image processing stuff //
////////////////////////////
float OrientedLineSegment::length(void) const
{
	float x = x1 - x2;
    float y = y1 - y2;

    return sqrt(x*x + y*y);
}
float OrientedLineSegment::distance(const int& x,const int& y) const
{
    float t = length();
    float dist1 = sqrt((x1-x)*(x1-x) + (y1-y)*(y1-y));
    float dist2 = sqrt((x2-x)*(x2-x) + (y2-y)*(y2-y));
	float theta = atan2(dist2, dist1);

    float dist3 = dist1*cos(theta);
    if (dist3 < 0) {return dist1;}
    if (dist3 > 1) {return dist2;}
    else {return dist1*sin(theta);}
}
void  OrientedLineSegment::getPerpendicular(float& x,float &y) const
{
    x = x2 - x1;
    y = y2 - y1;
    //rotate 90 degrees
    float temp = x;
    x = y;
    y = -temp;
    //The unit vector
    float dist = sqrt(x*x + y*y);
    x = x/dist;
    y = y/dist;
}

void  OrientedLineSegment::GetSourcePosition(const OrientedLineSegment& source,const OrientedLineSegment& destination,
											 const int& targetX,const int& targetY,
											 float& sourceX,float& sourceY)
{
    float tempratio, dist;
	float diffp[2];
    float diffx[2];
    float perp[2], temp[2];
    
    diffp[0] = targetX - destination.x1;
    diffp[1] = targetY - destination.y1;
    diffx[0] = destination.x2 - destination.x1;
    diffx[1] = destination.y2 - destination.y1;

    float diffxDistance = sqrt(diffx[0]*diffx[0] + diffx[1]*diffx[1]);

    tempratio = (diffp[0]*diffx[0] + diffp[1]*diffx[1]) / diffxDistance / diffxDistance;
    dist = destination.distance(targetX, targetY);

    source.getPerpendicular(perp[0], perp[1]);
    temp[0] = (source.x2 - source.x1) / source.length();
    temp[1] = (source.y2 - source.y1) / source.length();
    
    //set sources to new values
    sourceX = source.x1 + temp[0]*tempratio + perp[0]*dist;
    sourceY = source.y2 + temp[1]*tempratio + perp[1]*dist;
}
