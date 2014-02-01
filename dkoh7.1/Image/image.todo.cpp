/*	David Koh
    dkoh7@jhu.edu
	Computer Graphics
	Assignment 1
*/

#include "image.h"
#include <stdlib.h>
#include <math.h>
#include <algorithm>
using namespace std;

////////////////////////////
// Image processing stuff //
////////////////////////////
Pixel::Pixel(const Pixel32& p)
{
	r = (float)p.r/255.0f;
	g = (float)p.g/255.0f;
	b = (float)p.b/255.0f;
	a = (float)p.a/255.0f;
}
Pixel32::Pixel32(const Pixel& p)
{
	r = (char)(p.r * 255.0f);
	g = (char)(p.g * 255.0f);
	b = (char)(p.b * 255.0f);
	a = (char)(p.a * 255.0f);
}

int Image32::AddRandomNoise(const float& noise,Image32& outputImage) const
{
	if (outputImage.w==0 || outputImage.h==0)
		outputImage = *this;
	
	int i,k;
    float tempr,tempg,tempb;
	for (i=0; i<w; i++)
	{
		for (k=0; k<h; k++)
		{
            tempr = outputImage(i,k).r + noise * (random() % 512 - 256);
            if(tempr > 255){outputImage(i,k).r=255;} 
            else if(tempr < 0){outputImage(i,k).r=0;}
            else{outputImage(i,k).r=(int)tempr;}
            
            tempg = outputImage(i,k).g + noise * (random() % 512 - 256);
            if(tempg > 255){outputImage(i,k).g=255;} 
            else if(tempg < 0){outputImage(i,k).g=0;}
            else {outputImage(i,k).g=(int)tempg;}
            
            tempb = outputImage(i,k).b + noise * (random() % 512 - 256);
            if(tempb > 255){outputImage(i,k).b=255;} 
            else if(tempb < 0){outputImage(i,k).b=0;}
            else{outputImage(i,k).b=(int)tempb;}
		}
	}
	return 1;
}

int Image32::Brighten(const float& brightness,Image32& outputImage) const
{
	if (outputImage.w==0 || outputImage.h==0)
		outputImage = *this;
	
	int i,k;
	for (i=0; i<w; i++)
	{
		for (k=0; k<h; k++)
		{
			outputImage(i,k).r = (outputImage(i,k).r*brightness > 255) ? 255 : int(outputImage(i,k).r*brightness);
			outputImage(i,k).g = (outputImage(i,k).g*brightness > 255) ? 255 : int(outputImage(i,k).g*brightness);
			outputImage(i,k).b = (outputImage(i,k).b*brightness > 255) ? 255 : int(outputImage(i,k).b*brightness);
		}
	}
	return 1;
}

int Image32::Luminance(Image32& outputImage) const
{
	if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;
	
	int i,k;
	int avgLum; //average luminance
	for (i=0; i<w; i++)
	{
		for (k=0; k<h; k++)
		{
			avgLum = (outputImage(i,k).r*.30 + outputImage(i,k).g*.59 + outputImage(i,k).b*.11 > 255) 
			? 255 : outputImage(i,k).r*.30 + outputImage(i,k).g*.59 + outputImage(i,k).b*.11;
			
			outputImage(i,k).r = avgLum;
			outputImage(i,k).g = avgLum;
			outputImage(i,k).b = avgLum;
		}
	}
	return 1;
}

int Image32::Contrast(const float& contrast,Image32& outputImage) const
{
	if (outputImage.w==0 || outputImage.h==0)
	outputImage = *this;

    Image32 gray;
    int i,k;
	int avgLum;
	float tempr,tempg,tempb;

	gray = outputImage;
	double average = 0.0;
	/* create a constant gray image */
    for (i=0; i<w; i++)
    {
        for (k=0; k<h; k++)
        {
			average += gray(i,k).r*.3 + gray(i,k).g*.59 + gray(i,k).b*.11;
        }
    }

	average = average/(w*h);

    for (i=0; i<w; i++)
    {
        for (k=0; k<h; k++)
        {			
			gray(i,k).r = gray(i,k).g = gray(i,k).b = (unsigned char)average;

            tempr = (outputImage(i,k).r - average)*contrast + average;
            tempg = (outputImage(i,k).g - average)*contrast + average;
            tempb = (outputImage(i,k).b - average)*contrast + average;
	
            if (tempr > 0 && tempr < 255)
                outputImage(i,k).r = (int)tempr;
            else
                outputImage(i,k).r = (tempr > 0) ? 255:0;
            if (tempg > 0 && tempg < 255)
                outputImage(i,k).g = (int)tempg;
            else
                outputImage(i,k).g = (tempg > 0) ? 255:0;
            if (tempb > 0 && tempb < 255)
                outputImage(i,k).b = (int)tempb;
            else
                outputImage(i,k).b = (tempb > 0) ? 255:0;

        }
    }
	return 1;
}

int Image32::Saturate(const float& saturation,Image32& outputImage) const
{
	if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

	int i,k;
	float avgLum; //average luminance
	float tempr, tempg, tempb;

	for (i=0; i<w; i++)
	{
		for (k=0; k<h; k++)
		{
			avgLum = ((outputImage(i,k).r + outputImage(i,k).g + outputImage(i,k).b)/3);
			tempr = avgLum + ((outputImage(i,k).r - avgLum)*saturation);
			tempg = avgLum + ((outputImage(i,k).g - avgLum)*saturation);
			tempb = avgLum + ((outputImage(i,k).b - avgLum)*saturation);

			if (tempr > 0 && tempr < 255)
                outputImage(i,k).r = (int)tempr;
            else
                outputImage(i,k).r = (tempr > 0) ? 255:0;
            if (tempg > 0 && tempg < 255)
                outputImage(i,k).g = (int)tempg;
            else
                outputImage(i,k).g = (tempg > 0) ? 255:0;
            if (tempb > 0 && tempb < 255)
                outputImage(i,k).b = (int)tempb;
            else
                outputImage(i,k).b = (tempb > 0) ? 255:0;
		}
	}
	return 1;
}

int Image32::Quantize(const int& bits,Image32& outputImage) const
{
	if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

	int amount=1; 
	int i,k;
	int tempr, tempg, tempb;

	amount = (1 << bits);
	for (i=0; i<w; i++)
	{
		for (k=0; k<h; k++)
		{
			tempr = (int)(((float)outputImage(i,k).r / 256.0)*amount);
			tempg = (int)(((float)outputImage(i,k).g / 256.0)*amount);
			tempb = (int)(((float)outputImage(i,k).b / 256.0)*amount);

			if (tempr==0) { outputImage(i,k).r = 0; }
			else outputImage(i,k).r = (tempr == amount-1) ? 255 : tempr*(256/amount);
			if (tempg==0) { outputImage(i,k).g = 0; }
			else outputImage(i,k).g = (tempg == amount-1) ? 255 : tempg*(256/amount);
			if (tempb==0) { outputImage(i,k).b = 0; }
			else outputImage(i,k).b = (tempb == amount-1) ? 255 : tempb*(256/amount);
		}
	}
	return 1;
}

int Image32::RandomDither(const int& bits,Image32& outputImage) const
{
	if (outputImage.w==0 || outputImage.h==0)
		outputImage = *this;

	float set = 1.0f/ (1 << bits);
	AddRandomNoise(set, outputImage);
	outputImage.Quantize(bits, outputImage);
	return 1;
}

int Image32::OrderedDither2X2(const int& bits,Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;
    
    int i,k,s,t;
    int amount;
    float dither[2][2] = {{1,4},{3,2}};
    float tempr, tempg, tempb;

    amount = (1 << bits);
    for (i=0; i<w; i++)
    {
        for (k=0; k<h; k++)
        {
        tempr = ((float)outputImage(i,k).r / 255.0)*(amount-1);
        tempg = ((float)outputImage(i,k).g / 255.0)*(amount-1);
        tempb = ((float)outputImage(i,k).b / 255.0)*(amount-1);    

        int s = i % 2;
        int t = k % 2;

        float diffr = tempr - (int)tempr;
        float diffg = tempg - (int)tempg;
        float diffb = tempb - (int)tempb;

        if (diffr > (dither[s][t] / 5.0)) {tempr = (int)tempr+1;}
        else {tempr = (int)tempr;}
        if (diffg > (dither[s][t] / 5.0)) {tempg = (int)tempg+1;}
        else {tempg = (int)tempg;}
        if (diffb > (dither[s][t] / 5.0)) {tempb = (int)tempb+1;}
        else {tempb = (int)tempb;}

        if (tempr<=0) {outputImage(i,k).r = 0;}
        else if (tempr>=amount-1) {outputImage(i,k).r = 255;}
        else {outputImage(i,k).r = tempr*(256/ (int)amount);}

        if (tempg<=0) {outputImage(i,k).g = 0;}
        else if (tempg>=amount-1) {outputImage(i,k).g = 255;}
        else {outputImage(i,k).g = tempg*(256/ (int)amount);}

        if(tempb<=0) {outputImage(i,k).b = 0;}
        else if (tempb>=amount-1) {outputImage(i,k).b = 255;}
        else {outputImage(i,k).b = tempb*(256/ (int)amount);} 
        }
    }
	return 1;
}

/*int getAdj (unsigned int adjpixel, float multiplier, int diff)
{
    int new_adj = adjpixel + multiplier * diff;
    new_adj = new_adj > 255 ? 255 : new_adj;
    new_adj = new_adj < 0 ? 0 : new_adj;
    return new_adj;
} */

int Image32::FloydSteinbergDither(const int& bits,Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            Pixel32 &pixel = outputImage.pixel(x, y);
            
            unsigned int tempr = pixel.r;
            unsigned int tempg = pixel.g;
            unsigned int tempb = pixel.b;
    
            tempr = floor((float) tempr/256.0*pow(2, bits)) / (pow(2, bits)-1) * 255;
            tempg = floor((float) tempg/256.0*pow(2, bits)) / (pow(2, bits)-1) * 255;
            tempb = floor((float) tempb/256.0*pow(2, bits))/ (pow(2, bits)-1) * 255;
            tempr = tempr > 255 ? 255 : tempr;
            tempg = tempg > 255 ? 255 : tempg;
            tempb = tempb > 255 ? 255 : tempb;
            
            int diffr = pixel.r-tempr;
            int diffg = pixel.g-tempg;
            int diffb = pixel.b-tempb;     

            if (x < w-1)
            {
                Pixel32 &adjpixel = outputImage.pixel(x + 1, y);
                float multiplier = 7.0/16.0;
            
                int new_adjR = adjpixel.r + multiplier*diffr;
                new_adjR = new_adjR > 255 ? 255 : new_adjR;
                new_adjR = new_adjR < 0 ? 0 : new_adjR;

                int new_adjG = adjpixel.g + multiplier*diffg;
                new_adjG = new_adjG > 255 ? 255 : new_adjG;
                new_adjG = new_adjG < 0 ? 0 : new_adjG;
    
                int new_adjB = adjpixel.b + multiplier*diffb;
                new_adjB = new_adjB > 255 ? 255 : new_adjB;
                new_adjB = new_adjB < 0 ? 0 : new_adjB;

                adjpixel.r = new_adjR;
                adjpixel.g = new_adjG;
                adjpixel.b = new_adjB;
            }

            if (x > 0 && y < h-1)
            {
                Pixel32 &adjpixel = outputImage.pixel(x-1, y+1);
                float multiplier = 3.0/16.0;
                
                int new_adjR = adjpixel.r + multiplier*diffr;
                new_adjR = new_adjR > 255 ? 255 : new_adjR;
                new_adjR = new_adjR < 0 ? 0 : new_adjR;

                int new_adjG = adjpixel.g + multiplier*diffg;
                new_adjG = new_adjG > 255 ? 255 : new_adjG;
                new_adjG = new_adjG < 0 ? 0 : new_adjG;
    
                int new_adjB = adjpixel.b + multiplier*diffb;
                new_adjB = new_adjB > 255 ? 255 : new_adjB;
                new_adjB = new_adjB < 0 ? 0 : new_adjB;

                adjpixel.r = new_adjR;
                adjpixel.g = new_adjG;
                adjpixel.b = new_adjB;
            }

            if (y < h-1)
            {
                Pixel32 &adjpixel = outputImage.pixel(x, y + 1);
                float multiplier = 3.0/16.0;
                
                int new_adjR = adjpixel.r + multiplier*diffr;
                new_adjR = new_adjR > 255 ? 255 : new_adjR;
                new_adjR = new_adjR < 0 ? 0 : new_adjR;

                int new_adjG = adjpixel.g + multiplier*diffg;
                new_adjG = new_adjG > 255 ? 255 : new_adjG;
                new_adjG = new_adjG < 0 ? 0 : new_adjG;
    
                int new_adjB = adjpixel.b + multiplier*diffb;
                new_adjB = new_adjB > 255 ? 255 : new_adjB;
                new_adjB = new_adjB < 0 ? 0 : new_adjB;

                adjpixel.r = new_adjR;
                adjpixel.g = new_adjG;
                adjpixel.b = new_adjB;
            }
            
            if (x < w-1 && y < w-1)
            {
                Pixel32 &adjpixel = outputImage.pixel(x+1, y +1);
                float multiplier = 1.0/16.0;
                
                int new_adjR = adjpixel.r + multiplier*diffr;
                new_adjR = new_adjR > 255 ? 255 : new_adjR;
                new_adjR = new_adjR < 0 ? 0 : new_adjR;

                int new_adjG = adjpixel.g + multiplier*diffg;
                new_adjG = new_adjG > 255 ? 255 : new_adjG;
                new_adjG = new_adjG < 0 ? 0 : new_adjG;
    
                int new_adjB = adjpixel.b + multiplier*diffb;
                new_adjB = new_adjB > 255 ? 255 : new_adjB;
                new_adjB = new_adjB < 0 ? 0 : new_adjB;

                adjpixel.r = new_adjR;
                adjpixel.g = new_adjG;
                adjpixel.b = new_adjB;
            }
            pixel.r = tempr;
            pixel.g = tempg;
            pixel.b = tempb;

        }
    } 
    return 1;
}

int Image32::Blur3X3(Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

    float blur[3][3] = {{(1.0/16.0),(2.0/16.0),(1.0/16.0)},
                            {(2.0/16.0),(4.0/16.0),(2.0/16.0)},
                            {(1.0/16.0),(2.0/16.0),(1.0/16.0)}};

    int i,k,s,t,p,newP;
    float tempr, tempg, tempb;

    for (i=0; i<w; i++)
    {
        for (k=0; k<h; k++)
        {
            p = (w*k) + i;
            tempr = tempg = tempb = 0.0;
            for (s=0; s<3; s++)
            {
                for (t=0; t<3; t++)
                {
                    newP = p+(t-1) + (outputImage.width() * (s-1));
                    tempr += blur[s][t] * pixels[newP].r;
                    tempg += blur[s][t] * pixels[newP].g;
                    tempb += blur[s][t] * pixels[newP].b;
                }
            }
            
            if (tempr <= 0) {outputImage(i,k).r = 0;}
            else if (tempr >= 255) {outputImage(i,k).r = 255;}
            else {outputImage(i,k).r = (int)tempr;}

            if (tempg <= 0) {outputImage(i,k).g = 0;}
            else if (tempg >= 255) {outputImage(i,k).g = 255;}
            else {outputImage(i,k).g = (int)tempg;}

            if (tempb <= 0) {outputImage(i,k).b = 0;}
            else if (tempb >= 255) {outputImage(i,k).b = 255;}
            else {outputImage(i,k).b = (int)tempb;} 
        }
    }
	return 1;
}

int Image32::EdgeDetect3X3(Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

    float edge[3][3] = {{(-1),(-1),(-1)},
                        {(-1),(8),(-1)},
                        {(-1),(-1),(-1)}};

    int i,k,s,t,p,newP;
    float tempr, tempg, tempb;
        
    for (i=1; i< outputImage.width()-1; i++)
    {
        for (k=1; k<outputImage.height()-1; k++)
        {

            tempr = tempg = tempb = 0.0;
            p = (w*k) + i;
            for (s = 0; s<3; s++)
            {
                for(t=0; t<3; t++)
                {
                    newP = p + (t-1) + (outputImage.width() * (s-1));
                    tempr += edge[s][t] * pixels[newP].r;
                    tempg += edge[s][t] * pixels[newP].g;
                    tempb += edge[s][t] * pixels[newP].b;
                }
            }

        if (tempr <= 0) {outputImage(i,k).r = 0;}
        else if (tempr >= 255) {outputImage(i,k).r = 255;}
        else {outputImage(i,k).r = (int)tempr;}

        if(tempg <= 0) {outputImage(i,k).g = 0;}
        else if(tempg >= 255) {outputImage(i,k).g = 255;}
        else {outputImage(i,k).g = (int)tempg;}

        if (tempb <= 0) {outputImage(i,k).b = 0;}
        else if (tempb >= 255) {outputImage(i,k).b = 255;}
        else{outputImage(i,k).b = (int)tempb;}      
        }
    }

	return 1;
}

int Image32::ScaleNearest(const float& scaleFactor,Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

    int i,k,p;
    float s,t;
    outputImage.setSize((int)(w*scaleFactor), (int)(h*scaleFactor));
    
    for(i=1; i < (int)(w*scaleFactor); i++)
    {    
        for(k=1; k < (int)(h*scaleFactor); k++)
        {
            s = i / scaleFactor;
            t = k / scaleFactor;
            p = (outputImage.width()*k) + i;
            outputImage.pixels[p] = NearestSample(s,t);
        }
    }

    return 1;
}

int Image32::ScaleBilinear(const float& scaleFactor,Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;
    
    outputImage.setSize((int)(w*scaleFactor), (int)(h*scaleFactor));
    int i,k,p;
    float s,t;

    for(i=1; i < (int)(w*scaleFactor); i++)
    {
        for(k=1; k < (int)(h*scaleFactor); k++)
        {
            s = i / scaleFactor;
            t = k / scaleFactor;
            p = (outputImage.width()*k) + i;
            outputImage.pixels[p] = BilinearSample(s,t);
        }
    }

	return 1;
}

int Image32::ScaleGaussian(const float& scaleFactor,Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

    outputImage.setSize((int)(w*scaleFactor), (int)(h*scaleFactor));
    int i,k,p;
    float s,t;
    
    for (i=1; i < (int)(w*scaleFactor); i++)
    {
        for (int k=1; k< (int)(h*scaleFactor); k++)
        {
            s = i / scaleFactor;
            t = k / scaleFactor;
            p = (outputImage.width() * k) + i;
            outputImage.pixels[p] = GaussianSample(s,t,.2f,7.f);
        }
    }

    return 1;
}

float rotateX (float x, float y, float angle)
{
    return (x*cos(angle)) - (y*sin(angle));
}

float rotateY (float x, float y, float angle)
{
    return (x*sin(angle)) + (y*cos(angle));
}

int Image32::RotateNearest(const float& angle,Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

    float angleInRads = -(angle*PI/180);

    float toplx, toply, topry, botlx = 0; // toplx is "top left x" and botlx is "bottom left x"
    float toprx = w, botrx = w;
    float botly = h, botry = h;

    float new_toplx = rotateX(toplx, toply, angleInRads);
    float new_toply = rotateY(toplx, toply, angleInRads);
    float new_toprx = rotateX(toprx, topry, angleInRads);
    float new_topry = rotateY(toprx, topry, angleInRads);
    float new_botlx = rotateX(botlx, botly, angleInRads);
    float new_botly = rotateY(botlx, botly, angleInRads);
    float new_botrx = rotateX(botrx, botry, angleInRads);
    float new_botry = rotateY(botrx, botry, angleInRads);

    float largestWidth = max(max(max(new_toplx, new_toprx), new_botlx), new_botrx);
    float largestHeight = max(max(max(new_toply, new_topry), new_botly), new_botry);
    float smallestWidth = min(min(min(new_toplx, new_toprx), new_botlx), new_botrx);
    float smallestHeight = min(min(min(new_toply, new_topry), new_botly), new_botry);

    float newWidth = largestWidth - smallestWidth;
    float newHeight = largestHeight - smallestHeight;

    outputImage.setSize(newWidth, newHeight);

    float x, y;
    int i, j;

    for (i = 0; i < (int)newWidth; i++)
    {
        for (j = 0; j < (int)newHeight; j++)
        {
            x = rotateX(i + smallestWidth, j + smallestHeight, -angleInRads);
            y = rotateY(i + smallestWidth, j + smallestHeight, -angleInRads);
            if ((x >= w || x < 0) &&(y >= w || y < 0))
            {
                outputImage(i, j).r = 0;
                outputImage(i, j).g = 0;
                outputImage(i, j).b = 0;
                outputImage(i, j).a = 255;
                continue;
            }
            outputImage(i, j) = NearestSample(x, y);
        }
    }
    return 1;
}

int Image32::RotateBilinear(const float& angle,Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

    float angleInRads = -(angle*PI/180);

    float toplx, toply, topry, botlx = 0; // toplx is "top left x" and botlx is "bottom left x"
    float toprx = w, botrx = w;
    float botly = h, botry = h;

    float new_toplx = rotateX(toplx, toply, angleInRads);
    float new_toply = rotateY(toplx, toply, angleInRads);
    float new_toprx = rotateX(toprx, topry, angleInRads);
    float new_topry = rotateY(toprx, topry, angleInRads);
    float new_botlx = rotateX(botlx, botly, angleInRads);
    float new_botly = rotateY(botlx, botly, angleInRads);
    float new_botrx = rotateX(botrx, botry, angleInRads);
    float new_botry = rotateY(botrx, botry, angleInRads);

    float largestWidth = max(max(max(new_toplx, new_toprx), new_botlx), new_botrx);
    float largestHeight = max(max(max(new_toply, new_topry), new_botly), new_botry);
    float smallestWidth = min(min(min(new_toplx, new_toprx), new_botlx), new_botrx);
    float smallestHeight = min(min(min(new_toply, new_topry), new_botly), new_botry);

    float newWidth = largestWidth - smallestWidth;
    float newHeight = largestHeight - smallestHeight;

    outputImage.setSize(newWidth, newHeight);

    float x, y;
    int i, j;

    for (i = 0; i < (int)newWidth; i++)
    {
        for (j = 0; j < (int)newHeight; j++)
        {
            x = rotateX(i + smallestWidth, j + smallestHeight, -angleInRads);
            y = rotateY(i + smallestWidth, j + smallestHeight, -angleInRads);
            if ((x >= w || x < 0) &&(y >= w || y < 0))
            {
                outputImage(i, j).r = 0;
                outputImage(i, j).g = 0;
                outputImage(i, j).b = 0;
                outputImage(i, j).a = 255;
                continue;
            }
            outputImage(i, j) = BilinearSample(x, y);
        }
    }
    return 1;
}
	
int Image32::RotateGaussian(const float& angle,Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

    float angleInRads = -(angle*PI/180);

    float toplx, toply, topry, botlx = 0; // toplx is "top left x" and botlx is "bottom left x"
    float toprx = w, botrx = w;
    float botly = h, botry = h;

    float new_toplx = rotateX(toplx, toply, angleInRads);
    float new_toply = rotateY(toplx, toply, angleInRads);
    float new_toprx = rotateX(toprx, topry, angleInRads);
    float new_topry = rotateY(toprx, topry, angleInRads);
    float new_botlx = rotateX(botlx, botly, angleInRads);
    float new_botly = rotateY(botlx, botly, angleInRads);
    float new_botrx = rotateX(botrx, botry, angleInRads);
    float new_botry = rotateY(botrx, botry, angleInRads);

    float largestWidth = max(max(max(new_toplx, new_toprx), new_botlx), new_botrx);
    float largestHeight = max(max(max(new_toply, new_topry), new_botly), new_botry);
    float smallestWidth = min(min(min(new_toplx, new_toprx), new_botlx), new_botrx);
    float smallestHeight = min(min(min(new_toply, new_topry), new_botly), new_botry);

    float newWidth = largestWidth - smallestWidth;
    float newHeight = largestHeight - smallestHeight;

    outputImage.setSize(newWidth, newHeight);

    float x, y;
    int i, j;

    for (i = 0; i < (int)newWidth; i++)
    {
        for (j = 0; j < (int)newHeight; j++)
        {
            x = rotateX(i + smallestWidth, j + smallestHeight, -angleInRads);
            y = rotateY(i + smallestWidth, j + smallestHeight, -angleInRads);
            if ((x >= w || x < 0) &&(y >= w || y < 0))
            {
                outputImage(i, j).r = 0;
                outputImage(i, j).g = 0;
                outputImage(i, j).b = 0;
                outputImage(i, j).a = 255;
                continue;
            }
            outputImage(i, j) = GaussianSample(x, y, 0.75, 3.0);
        }
    }
    return 1;
}

int Image32::SetAlpha(const Image32& matte)
{
    int i,k;
    for (k=0; k < h; k++)
    {
        for (i=0; i < w; i++)
        {
               pixel(i,k).a = matte(i,k).b;
        }
    }
	return 1;
}

int Image32::Composite(const Image32& overlay,Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;
    
    int i,k;
    int image_diff;
    float ratio;
    
    for (k=0; k < h; k++)
    {
        for (i=0; i < w; i++)
        {
            ratio = (float)overlay(i,k).a/255;
            image_diff = overlay(i,k).r - pixel(i,k).r;
            outputImage(i,k).r = pixel(i,k).r + (int)(image_diff*ratio + 0.5f);
            image_diff = overlay(i,k).g - pixel(i,k).g;
            outputImage(i,k).g = pixel(i,k).g + (int)(image_diff*ratio + 0.5f);
            image_diff = overlay(i,k).b - pixel(i,k).b;
            outputImage(i,k).b = pixel(i,k).b + (int)(image_diff*ratio + 0.5f);           
        }
    }
    return 1;
}

int Image32::CrossDissolve(const Image32& source,const Image32& destination,const float& blendWeight,Image32& outputImage)
{
    //if (outputImage.w==0 || outputImage.h==0)
    //    outputImage = *this;

    int j,i;
    for (i=0; i < source.h; i++)
    {
        for (j=0; j < source.w; j++)
        {
            outputImage(j,i).r = (unsigned char)((float)source(j,i).r*(1.f-blendWeight) + (float)destination(j,i).r*blendWeight);
            outputImage(j,i).g = (unsigned char)((float)source(j,i).g*(1.f-blendWeight) + (float)destination(j,i).g*blendWeight);
            outputImage(j,i).b = (unsigned char)((float)source(j,i).b*(1.f-blendWeight) + (float)destination(j,i).b*blendWeight);
            outputImage(j,i).a = (unsigned char)((float)source(j,i).a*(1.f-blendWeight) + (float)destination(j,i).a*blendWeight);
        }
    }
   
	return 1;
}

int Image32::Warp(const OrientedLineSegmentPairs& olsp,Image32& outputImage) const
{
    if (outputImage.w ==0 || outputImage.h == 0)
        outputImage = *this;

    int i,j,k;
    //float
    float total, weight;
	return 1;
}

int Image32::FunFilter(Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

    outputImage.setSize(w,h);
    float newx,newy,s,t,theta,dist;
    int i,j;
    
    float rotate_amount = .009; //the higher the number, the greater the swirl
    float centerX = w/2.0;
    float centerY = h/2.0;

    for (i=0; i < w; i++)
    {
        for (j=0; j < h; j++)
        {
            newx = i-centerX;
            newy = j-centerY;
            theta = atan2(newy,newx);
            dist = sqrt(newx*newx + newy*newy);
            
            s = centerX+(dist*cos(theta + (rotate_amount*dist)));
            t = centerY+(dist*sin(theta + (rotate_amount*dist)));

            outputImage(i,j) = GaussianSample(s, t, 0.75, 3);
        }
    }

    return 1;
}

int Image32::Crop(const int& x1,const int& y1,const int& x2,const int& y2,Image32& outputImage) const
{
    if (outputImage.w==0 || outputImage.h==0)
        outputImage = *this;

    int xmin,xmax,ymin,ymax;
    Image32 tempImage;
    tempImage = outputImage;

    if (x1 <= x2) {xmin = x1;}
    else {xmin = x2;}
    if (x1 > x2) {xmax = x1;}
    else {xmax = x2;}
    if (y1 <= y2) {ymin = y1;}
    else {ymin = y2;}
    if (y1 > y2) {ymax = y1;}
    else {ymax = y2;}
    tempImage.setSize(xmax - xmin, ymax -ymin);

    int i,k; 
    for (i=ymin; i<ymax; i++)
    {
        for (k=xmin; k<xmax; k++)
        {
            tempImage(k-xmin,i-ymin) = outputImage(k, i);
        }
    }
    outputImage = tempImage; 
	return 1;
}

Pixel32 Image32::NearestSample(const float& x,const float& y) const
{
    float i = round(x);
    float k = round(y);

    if ((i > 0) && (i < w) && (k > 0) && (k < h))
        return pixel(i, k);
    else
        return Pixel32();
}

Pixel32 Image32::BilinearSample(const float& x,const float& y) const
{
    Pixel32 temp = Pixel32();

    if ((x > 0) && (x < w-1) && (y > 0) && (y < h-1))
    {
        float x1 = floor(x);
        float x2 = x1 + 1;
        float y1 = floor(y);
        float y2 = y1 + 1;
        float diffx = x - x1;
        float diffy = y - y1;

        float temp1R = pixel(x1, y1).r*(1-diffx) + pixel(x2, y1).r*diffx;
        float temp1G = pixel(x1, y1).g*(1-diffx) + pixel(x2, y1).g*diffx;
        float temp1B = pixel(x1, y1).b*(1-diffx) + pixel(x2, y1).b*diffx;
        float temp1A = pixel(x1, y1).a*(1-diffx) + pixel(x2, y1).a*diffx;

        float temp2R = pixel(x1, y2).r*(1-diffx) + pixel(x2, y2).r*diffx;
        float temp2G = pixel(x1, y2).g*(1-diffx) + pixel(x2, y2).g*diffx;
        float temp2B = pixel(x1, y2).b*(1-diffx) + pixel(x2, y2).b*diffx;
        float temp2A = pixel(x1, y2).a*(1-diffx) + pixel(x2, y2).a*diffx;

        temp.r = temp1R*(1-diffy) + temp2R*diffy;
        temp.g = temp1G*(1-diffy) + temp2G*diffy;
        temp.b = temp1B*(1-diffy) + temp2B*diffy;
        temp.a = temp1A*(1-diffy) + temp2A*diffy;

        return temp;
    }
    else
        return Pixel32();
}

Pixel32 Image32::GaussianSample(const float& x,const float& y,const float& variance,const float& radius) const
{
	Pixel32 tempPixel = Pixel32();
    float total = 0;
    float tempr,tempg,tempb;
    tempr = tempg = tempb = 0;
    int newy,newx;
    float distance,amount;

    for (newy = int(y-radius-1); newy < int(y+radius+1); newy++)
    {
        for (newx = int(x-radius-1); newx < int(x+radius+1); newx++)
        {
            float ydist = newy - y;
            float xdist = newx - x;
            distance = sqrt(float(ydist)*(ydist) + float(xdist)*(xdist));
            
            if(distance < (radius * radius) && newy >= 0 && newx >= 0 && newy < h && newx < w)
            {
                amount = exp(-((xdist*xdist) + (ydist*ydist))/(2*variance));
                
                tempr += amount*pixel(newx,newy).r;
                tempg += amount*pixel(newx,newy).g;
                tempb += amount*pixel(newx,newy).b;
                total += amount;
            }
        }
    }
    tempPixel.r = int(tempr/total);
    tempPixel.g = int(tempg/total);
    tempPixel.b = int(tempb/total);
    
    return tempPixel;
}
