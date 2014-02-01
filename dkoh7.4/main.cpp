#include <stdio.h>
#include <stdlib.h>
#include <Util/cmdLineParser.h>
#include <Ray/rayScene.h>
#include <Ray/rayWindow.h>
#include <Util/time.h>


static int DEFAULT_COMPLEXITY=10;
static int DEFAULT_RESOLUTION=500;


void ShowUsage(char* c){
	printf("Usage %s:\n",c);
	printf("\t --in <Ray File>\n");
	printf("\t[--factor <matrix/closest/euler/quaternion/log>]\n");
	printf("\t[--width <image width=%d>] [--height <image height=%d>]\n",DEFAULT_RESOLUTION,DEFAULT_RESOLUTION);
	printf("\t[--cplx <complexity=%d>]\n",DEFAULT_COMPLEXITY);
}


int main(int argc,char* argv[]){
	char* paramNames[]={"in","width","height","cplx","factor"};
	cmdLineReadable* params[5];
	cmdLineString In;
	cmdLineInt Width,Height,Cplx;
	cmdLineString Factor;
	params[0]=&In;
	params[1]=&Width;
	params[2]=&Height;
	params[3]=&Cplx;
	params[4]=&Factor;

	RayScene scene;
	int cplx=DEFAULT_COMPLEXITY;
	int width=DEFAULT_RESOLUTION;
	int height=DEFAULT_RESOLUTION;
	int f;

	cmdLineParse(argc-1,&argv[1],paramNames,5,params);
	if(!In.set){
		ShowUsage(argv[0]);
		return EXIT_FAILURE;
	}
	if(Width.set){width=Width.value;}
	if(Height.set){height=Height.value;}
	if(Cplx.set){cplx=Cplx.value;}
	if(Factor.set){
		if		(!strcasecmp(Factor.value,"matrix"))	{f=RayKeyData::MATRIX;}
		else if	(!strcasecmp(Factor.value,"closest"))	{f=RayKeyData::CLOSEST_R_AND_TRANSLATION;}
		else if	(!strcasecmp(Factor.value,"euler"))		{f=RayKeyData::EULER_AND_TRANSLATION;}
		else if	(!strcasecmp(Factor.value,"quaternion")){f=RayKeyData::QUATERNION_AND_TRANSLATION;}
		else if	(!strcasecmp(Factor.value,"log"))		{f=RayKeyData::R_LOGARITHM_AND_TRANSLATION;}
		else{
			printf("Unknown factorization type: %s\n",Factor.value);
			f=RayKeyData::MATRIX;
		}
	}
	else{f=RayKeyData::MATRIX;}
	scene.read(In.value,f);
	scene.setCurrentTime(0);
	RayWindow::RayView(&scene,width,height,cplx);
	return EXIT_SUCCESS;
}