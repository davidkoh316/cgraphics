#include "rayScene.h"
#include <GL/glut.h>
#include <math.h>


///////////////////////
// Ray-tracing stuff //
///////////////////////

Point3D RayScene::Reflect(Point3D v,Point3D n){
	return Point3D();
}

int RayScene::Refract(Point3D v,Point3D n,double ir,Point3D& refract){
	return 0;
}

Ray3D RayScene::GetRay(RayCamera* camera,int i,int j,int width,int height){
	return Ray3D();
}

Point3D RayScene::GetColor(Ray3D ray,int rDepth,Point3D cLimit){
	return Point3D();
}

//////////////////
// OpenGL stuff //
//////////////////
void RayMaterial::drawOpenGL(void)
{
    
    if (tex != NULL)
    {
        glEnable(GL_TEXTURE_2D);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tex -> img -> width(), tex -> img -> height(), 0,
                     GL_RGBA, GL_UNSIGNED_BYTE, &(tex -> img -> pixel(0, 0)));
    }

    else
        glDisable(GL_TEXTURE_2D);

    GLfloat amb[] = {ambient[0], ambient[1], ambient[2], ambient[3]};
    GLfloat diff[] = {diffuse[0], diffuse[1], diffuse[2], diffuse[3]};
    GLfloat spec[] = {specular[0], specular[1], specular[2], specular[3]};
    GLfloat emiss[] = {emissive[0], emissive[1], emissive[2], emissive[3]};
    GLfloat shine[] = {specularFallOff};

    glMaterialfv(GL_FRONT, GL_AMBIENT, amb);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diff);
    glMaterialfv(GL_FRONT, GL_SPECULAR, spec);
    glMaterialfv(GL_FRONT, GL_EMISSION, emiss);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
}

void RayTexture::setUpOpenGL(void)
{
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

    // Generate the textures
    glGenTextures(1, &openGLHandle);
    
    // Then, bind the textures
    glBindTexture(GL_TEXTURE_2D, openGLHandle);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
}
