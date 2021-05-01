#include <iostream>
#include <stdlib.h>
#include <math.h>

#include <GL/gl.h>
#include <GL/glut.h>

float _angle = 0.0;

float _angle1 = 0.0;

void name()
{

glPushMatrix();
glTranslatef(-0.58,0.02,0.15);
///N
glPushMatrix();
glColor3ub(255,255,0);
glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(0,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(1,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.025,0.515,0);
glRotatef(28,0,0,1);
glPushMatrix();
glScalef(0.05,0.55,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///A
glPushMatrix();
glColor3ub(255,255,0);
glTranslatef(-0.385,0,0);
glPushMatrix();
glTranslatef(0.5,0.515,0);
glRotatef(13,0,0,1);
glPushMatrix();
glScalef(0.05,0.55,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.47,0.515,0);
glRotatef(-13,0,0,1);
glPushMatrix();
glScalef(0.05,0.55,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.483,0.50,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///J
glPushMatrix();
glColor3ub(255,255,0);
glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(3.75,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.17,0.472,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(3.1,2.43,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.185,0.56,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///U
glPushMatrix();
glColor3ub(255,255,0);
glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(4.5,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(5.5,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.25,0.469,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.25,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///A
glPushMatrix();
glColor3ub(255,255,0);
glTranslatef(-0.16,0,0);

glPushMatrix();
glTranslatef(0.5,0.515,0);
glRotatef(13,0,0,1);
glPushMatrix();
glScalef(0.05,0.55,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.47,0.515,0);
glRotatef(-13,0,0,1);
glPushMatrix();
glScalef(0.05,0.55,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.483,0.50,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///F
glPushMatrix();
glColor3ub(255,0,0);
glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(8.5,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.45,0.56,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.44,0.51,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.15,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///O
glPushMatrix();
glScalef(0.1,0.15,0.03);
glTranslatef(5.1,3.4,7.4);
glutSolidTorus(0.05,0.3,25,25);
glPopMatrix();

///O
glPushMatrix();
glScalef(0.1,0.15,0.03);
glTranslatef(5.9,3.4,7.4);
glutSolidTorus(0.05,0.3,25,25);
glPopMatrix();

///D
glPushMatrix();
glColor3ub(255,0,0);
glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(12.9,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.66,0.56,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.66,0.466,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.685,0.535,0);
glRotatef(13,0,0,1);
glPushMatrix();
glScalef(0.05,0.3,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.685,0.49,0);
glRotatef(-13,0,0,1);
glPushMatrix();
glScalef(0.05,0.3,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///C
glPushMatrix();
glColor3ub(255,0,0);
glTranslatef(0.35,0,0);
glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(8.5,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.45,0.56,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.45,0.47,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///O
glPushMatrix();
glScalef(0.1,0.15,0.03);
glTranslatef(8.65,3.4,7.4);
glutSolidTorus(0.05,0.3,25,25);
glPopMatrix();

///R
glPushMatrix();
glColor3ub(255,0,0);
glTranslatef(0.275,0,0);

glPushMatrix();
glScalef(0.05,0.55,0.03);
glTranslatef(12.9,0.93,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.66,0.56,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.66,0.515,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.685,0.535,0);
glPushMatrix();
glScalef(0.05,0.3,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.68,0.485,0);
glRotatef(13,0,0,1);
glPushMatrix();
glScalef(0.05,0.3,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///N
glPushMatrix();
glColor3ub(255,0,0);
glTranslatef(0.99,0,0);
glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(0,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(1,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.025,0.515,0);
glRotatef(28,0,0,1);
glPushMatrix();
glScalef(0.05,0.55,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///E
glPushMatrix();
glColor3ub(255,0,0);
glTranslatef(0.64,0,0);
glPushMatrix();
glScalef(0.05,0.5,0.03);
glTranslatef(8.5,1.03,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.45,0.56,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.44,0.515,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.15,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.45,0.47,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///R
glPushMatrix();
glColor3ub(255,0,0);
glTranslatef(0.485,0,0);

glPushMatrix();
glScalef(0.05,0.55,0.03);
glTranslatef(12.9,0.93,7.4);
glutSolidCube(0.2);
glPopMatrix();

glPushMatrix();
glTranslatef(0.66,0.56,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.66,0.515,0);
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.05,0.2,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.685,0.535,0);
glPushMatrix();
glScalef(0.05,0.3,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(0.68,0.485,0);
glRotatef(13,0,0,1);
glPushMatrix();
glScalef(0.05,0.3,0.03);
glTranslatef(0,0,7.4);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();


glPopMatrix();

}

void restaurant(){

/// start of restaurant
glPushMatrix();
     //glScalef(3,3,3);
     //glRotatef(_angle1, 0.0, 1.0, 0.0);
     //glTranslatef(0,-0.8,0);
    // glRotatef(90, 0.0, 1.0, 0.0);

///ground floor
glPushMatrix();
glTranslatef(0,0,0.15);
 //body
glPushMatrix();
glColor3ub(255,220,120);
glScalef(3,0.5,1.5);
glutSolidCube(0.6);
glPopMatrix();
//floor
glPushMatrix();
glColor3ub(255,0,0);
glScalef(3.02,0.03,2.01);
glTranslatef(0,-5.3,0.076);
glutSolidCube(0.6);
glPopMatrix();

//body design
glPushMatrix();
glTranslatef(0,-0.31,0.15);
//pillar roof
glPushMatrix();
glColor3ub(0,0,0);
glScalef(9,0.2,0.1);
glTranslatef(0,2.2,3);
glutSolidCube(0.2);
glPopMatrix();
//back wall(left)
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(-0.486,0.21,0.296);
glScalef(4.06,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();
//back wall(right)
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(0.486,0.21,0.296);
glScalef(4.06,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();
//glass
glPushMatrix();
glColor3ub(230, 230, 250);
glScalef(8.9,0.8,0.01);
glTranslatef(0,0.425,30);
glutSolidCube(0.2);
glPopMatrix();
//door left pillar
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.05,1.5,0.1);
glTranslatef(-1.7,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//door right pillar
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.05,1.5,0.1);
glTranslatef(1.7,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
// gate
glPushMatrix();
glColor3ub(230, 230, 250);
glScalef(0.8,1.3,0.01);
glTranslatef(0,0.224,30);
glutSolidCube(0.2);
glPopMatrix();
//door handle (right)
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.03,0.3,0.05);
glTranslatef(0.4,1.0,6.1);
glutSolidCube(0.2);
glPopMatrix();
//door handle (left)
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.03,0.3,0.05);
glTranslatef(-0.4,1.0,6.1);
glutSolidCube(0.2);
glPopMatrix();
//left pillar 1
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(-2.5,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//left pillar 2
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(-5.9,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,1.43);
glTranslatef(-17.89,0.42,0.31);
glutSolidCube(0.2);
glPopMatrix();
//right pillar 1
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(2.5,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//right pillar 2
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(5.9,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();

///ground umbrella table 1 start
glPushMatrix();
glTranslatef(-0.7,0.32,0.43);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///ground umbrella table 1 end

///ground umbrella table 2 start
glPushMatrix();
glTranslatef(-0.4,0.32,0.43);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///ground umbrella table 2 end

///ground umbrella table 3 start
glPushMatrix();
glTranslatef(0.4,0.32,0.43);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///ground umbrella table 3 end

///ground umbrella table 4 start
glPushMatrix();
glTranslatef(0.7,0.32,0.43);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///ground umbrella table 4 end

//right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,1.43);
glTranslatef(17.89,0.42,0.31);
glutSolidCube(0.2);
glPopMatrix();
//front wall(left)
glPushMatrix();
glColor3ub(20,20,240);
glTranslatef(-0.53,0.21,0.59);
glScalef(3.7,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();
//front wall(right)
glPushMatrix();
glColor3ub(20,20,240);
glTranslatef(0.53,0.21,0.59);
glScalef(3.7,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();

glPopMatrix();

//left pillar
glPushMatrix();
glColor3ub(139, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(-1.15,-0.037,3.5);
glutSolidCube(0.2);
glPopMatrix();
//left light
glPushMatrix();
glColor3ub(0,255,255);
glTranslatef(-0.173,0.095,0.735);
glutSolidSphere(0.03,30,30);
glPopMatrix();
//right pillar
glPushMatrix();
glColor3ub(139, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(1.15,-0.037,3.5);
glutSolidCube(0.2);
glPopMatrix();
//right light
glPushMatrix();
glColor3ub(0,255,255);
glTranslatef(0.173,0.095,0.735);
glutSolidSphere(0.03,30,30);
glPopMatrix();



glPopMatrix();

///1st floor
glPushMatrix();
//body
glPushMatrix();
glColor3ub(0, 255, 127);
glTranslatef(0,0.31,0);
glScalef(3,0.5,1);
glutSolidCube(0.6);
glPopMatrix();
//floor
glPushMatrix();
glColor3ub(255,0,0);
glTranslatef(0,0.155,0.15);
glScalef(3.0,0.02,1.5);
glutSolidCube(0.6);
glPopMatrix();
//pillar roof
glPushMatrix();
glColor3ub(0,0,0);
glScalef(9,0.2,0.1);
glTranslatef(0,2.2,3);
glutSolidCube(0.2);
glPopMatrix();
//roof back wall(left)
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(-0.486,0.21,0.296);
glScalef(4.06,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();
//roof back wall(right)
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(0.486,0.21,0.296);
glScalef(4.06,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();
//glass
glPushMatrix();
glColor3ub(230, 230, 250);
glScalef(8.9,0.8,0.01);
glTranslatef(0,0.425,30);
glutSolidCube(0.2);
glPopMatrix();
//door left pillar
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.05,1.5,0.1);
glTranslatef(-1.7,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//door right pillar
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.05,1.5,0.1);
glTranslatef(1.7,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
// gate
glPushMatrix();
glColor3ub(230, 230, 250);
glScalef(0.8,1.3,0.01);
glTranslatef(0,0.224,30);
glutSolidCube(0.2);
glPopMatrix();
//door handle (right)
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.03,0.3,0.05);
glTranslatef(0.4,1.0,6.1);
glutSolidCube(0.2);
glPopMatrix();
//door handle (left)
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.03,0.3,0.05);
glTranslatef(-0.4,1.0,6.1);
glutSolidCube(0.2);
glPopMatrix();
//left pillar
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(-2.5,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//left pillar 2
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(-5.9,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//roof left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,1.43);
glTranslatef(-17.89,0.42,0.31);
glutSolidCube(0.2);
glPopMatrix();
//right pillar 1
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(2.5,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//right pillar 2
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(5.9,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();


///umbrella table 1 start
glPushMatrix();
glTranslatef(-0.7,0.32,0.45);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///umbrella table 1 end

///umbrella table 2 start
glPushMatrix();
glTranslatef(-0.35,0.32,0.45);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///umbrella table 2 end

///umbrella table 3 start
glPushMatrix();
glTranslatef(0.35,0.32,0.45);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///umbrella table 3 end

///umbrella table 4 start
glPushMatrix();
glTranslatef(0.7,0.32,0.45);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///umbrella table 4 end

//roof right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,1.43);
glTranslatef(17.89,0.42,0.31);
glutSolidCube(0.2);
glPopMatrix();
//roof front wall
glPushMatrix();
glColor3ub(20,20,240);
glTranslatef(0,0.21,0.59);
glScalef(9,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();

glPopMatrix();


///roof
glPushMatrix();
glColor3ub(255,0,0);
glScalef(3.05,0.02,1.2);
glTranslatef(0,23,0.025);
glutSolidCube(0.6);
glPopMatrix();

///roof back wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(9,0.5,0.05);
glTranslatef(0,1.03,-6.2);
glutSolidCube(0.2);
glPopMatrix();

///roof entrance
glPushMatrix();
glTranslatef(0,-0.937,0);
//body
glPushMatrix();
glColor3ub(0,220,120);
glScalef(1,1.2,1.05);
glTranslatef(0,1.27,-0.15);
glutSolidCube(0.2);
glPopMatrix();
//roof
glPushMatrix();
glColor3ub(255,0,0);
glScalef(1.1,0.06,1.2);
glTranslatef(0,27.5,-0.13);
glutSolidCube(0.2);
glPopMatrix();
//door
glPushMatrix();
glColor3ub(140,20,240);
glScalef(0.4,1.0,0.01);
glTranslatef(0,1.51,-5.2);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

/// water tank 1
glPushMatrix();
glColor3ub(0, 255, 255);
glTranslatef(0,-0.94,0);
//body
glPushMatrix();
glScalef(0.5,1.7,0.5);
glTranslatef(0.4,0.876,-0.15);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//cap
glPushMatrix();
glScalef(0.2,0.1,0.2);
glTranslatef(1.01,15.76,-0.36);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();


///roof left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,3.31);
glTranslatef(-17.89,1.03,0.009);
glutSolidCube(0.2);
glPopMatrix();
///roof right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,3.31);
glTranslatef(17.89,1.03,0.009);
glutSolidCube(0.2);
glPopMatrix();
///roof front wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(9,0.5,0.05);
glTranslatef(0,1.03,7.3);
glutSolidCube(0.2);
glPopMatrix();
///roof name wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(6.7,0.7,0.05);
glTranslatef(0,0.765,7.3);
glutSolidCube(0.2);
glPopMatrix();
///name
name();


glPopMatrix();
/// end of restaurant

}

void display () {

    /* clear window */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* future matrix manipulations should affect the modelview matrix */
    glMatrixMode(GL_MODELVIEW);

    /* draw scene */
    glPushMatrix();
    restaurant();


    glPopMatrix();

    /* flush drawing routines to the window */
    //glFlush();
    glutSwapBuffers();
}

void reshape ( int width, int height ) {

    /* define the viewport transformation */
    glViewport(0,0,width,height);
}

void myInit()
{
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat mat_shininess[] = { 100.0 };
   GLfloat light_position[] = { .20, 0.50, 1.0, 0.0 };
   GLfloat white_light[] = { 0.20, 0.60, 1.0, 0.0 };

   glClearColor (0.60, 0.50, 0.0, 1.0);
   glShadeModel (GL_SMOOTH);

   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

   glLightfv(GL_LIGHT0, GL_POSITION, light_position);

   glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
   glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);


    /* set up depth-buffering */
    glEnable(GL_DEPTH_TEST);

    /* turn on default lighting */
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    /* define the projection transformation */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40,1,4,20);

    /* define the viewing transformation */
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(10.0,5.0,0.0,0.0,0.0,0.0,0.0,2.0,0.0);
    //gluLookAt(10,10,10,0.0,0.0,0.0,0.0,2.0,0.0);
}
void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	_angle1 += 0.5f;
	if (_angle1 > 360) {
		_angle1 -= 360;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}
int main ( int argc, char * argv[] ) {

    /* initialize GLUT, using any commandline parameters passed to the
       program */
    glutInit(&argc,argv);

    /* setup the size, position, and display mode for new windows */
    glutInitWindowSize(1000,700);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

    /* create and set up a window */
    glutCreateWindow("building");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

     //myInit();
    glutTimerFunc(25,update,0);
    /* tell GLUT to wait for events */
    glutMainLoop();
}





