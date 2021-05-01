#include <iostream>
#include <stdlib.h>
#include <math.h>

#include <GL/gl.h>
#include <GL/glut.h>

float _angle = 0.0;

float _angle1 = 0.0;


void balcony()
{
///left balcony start
glPushMatrix();
//door
glPushMatrix();
glColor3ub(140,20,240);
glScalef(0.3,1.1,0.01);
glTranslatef(-0.34,-0.037,30);
glutSolidCube(0.2);
glPopMatrix();

//window
glPushMatrix();
glColor3ub(240,240,240);
glScalef(0.54,0.5,0.01);
glTranslatef(-0.4,0.035,30);
glutSolidCube(0.2);
glPopMatrix();

//floor
glPushMatrix();
glColor3ub(0,250,0);
glScalef(1.2,0.06,0.3);
glTranslatef(-0.15,-2.6,1.1);
glutSolidCube(0.2);
glPopMatrix();

//right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,0.25);
glTranslatef(-1.3,-0.2,1.3);
glutSolidCube(0.2);
glPopMatrix();

//left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,0.25);
glTranslatef(-5.9,-0.2,1.3);
glutSolidCube(0.2);
glPopMatrix();

//front wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(1.2,0.5,0.05);
glTranslatef(-0.15,-0.2,7.1);
glutSolidCube(0.2);
glPopMatrix();


glPopMatrix();
///left balcony end

///right balcony start
glPushMatrix();
glTranslatef(0.36,0,0);
//door
glPushMatrix();
glColor3ub(140,20,240);
glScalef(0.3,1.1,0.01);
glTranslatef(-0.86,-0.037,30);
glutSolidCube(0.2);
glPopMatrix();

//window
glPushMatrix();
glColor3ub(240,240,240);
glScalef(0.54,0.5,0.01);
glTranslatef(-0.27,0.035,30);
glutSolidCube(0.2);
glPopMatrix();

//floor
glPushMatrix();
glColor3ub(0,250,0);
glScalef(1.2,0.06,0.3);
glTranslatef(-0.15,-2.6,1.1);
glutSolidCube(0.2);
glPopMatrix();

//right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,0.25);
glTranslatef(-1.3,-0.2,1.3);
glutSolidCube(0.2);
glPopMatrix();

//left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,0.25);
glTranslatef(-5.9,-0.2,1.3);
glutSolidCube(0.2);
glPopMatrix();

//front wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(1.2,0.5,0.05);
glTranslatef(-0.15,-0.2,7.1);
glutSolidCube(0.2);
glPopMatrix();

glPopMatrix();
///right balcony end

}


void left_window()
{
    ///left window 1
glPushMatrix();
glColor3ub(240,240,240);
glScalef(0.01,0.5,0.5);
glTranslatef(-30.1,0,0.3);
glutSolidCube(0.2);
glPopMatrix();

///left window 2
glPushMatrix();
glColor3ub(240,240,240);
glScalef(0.01,0.5,0.5);
glTranslatef(-30.1,0,-0.3);
glutSolidCube(0.2);
glPopMatrix();

}

void right_window()
{

///right window 1
glPushMatrix();
glColor3ub(240,240,240);
glScalef(0.01,0.5,0.5);
glTranslatef(30.1,0,0.3);
glutSolidCube(0.2);
glPopMatrix();

///right window 2
glPushMatrix();
glColor3ub(240,240,240);
glScalef(0.01,0.5,0.5);
glTranslatef(30.1,0,-0.3);
glutSolidCube(0.2);
glPopMatrix();
}

void back_window()
{
///back window
glPushMatrix();
glColor3ub(240,240,240);
glScalef(0.2,0.8,0.01);
glTranslatef(0,0,-30.1);
glutSolidCube(0.2);
glPopMatrix();
}

void floor_body()
{
///body
glPushMatrix();
glColor3ub(255,220,120);
glScalef(1,0.5,1);
glutSolidCube(0.6);
glPopMatrix();
///floor
glPushMatrix();
glColor3ub(255,0,0);
glScalef(1.04,0.02,1);
glTranslatef(0,-7.8,0);
glutSolidCube(0.6);
glPopMatrix();
}

void building(){

/// start of building
glPushMatrix();
     //glScalef(3,3,3);
     //glRotatef(_angle1, 0.0, 1.0, 0.0);
glTranslatef(0,-0.8,0);
     //glRotatef(90, 0.0, 1.0, 0.0);

///ground floor
 glPushMatrix();
 //body
glPushMatrix();
glColor3ub(255,220,120);
glScalef(1,0.5,1);
glutSolidCube(0.6);
glPopMatrix();
//floor
glPushMatrix();
glColor3ub(255,0,0);
glScalef(1.02,0.03,1.02);
glTranslatef(0,-5.3,0);
glutSolidCube(0.6);
glPopMatrix();
///main gate
//ground part
glPushMatrix();
glColor3ub(139, 0, 0);
glScalef(2.5,0.1,0.6);
glTranslatef(0,-1.6,0.6);
glutSolidCube(0.2);
glPopMatrix();
//gate
glPushMatrix();
glColor3ub(140,20,240);
glScalef(2.3,1.1,0.01);
glTranslatef(0,-0.035,30);
glutSolidCube(0.2);
glPopMatrix();
//sub gate
glPushMatrix();
glColor3ub(139, 0, 139);
glScalef(0.4,0.9,0.01);
glTranslatef(0.45,-0.065,30);
glutSolidCube(0.2);
glPopMatrix();
//left pillar
glPushMatrix();
glColor3ub(139, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(-1.57,-0.035,1.54);
glutSolidCube(0.2);
glPopMatrix();
//middle pillar
glPushMatrix();
glColor3ub(139, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(0.7,-0.035,1.54);
glutSolidCube(0.2);
glPopMatrix();
//right pillar
glPushMatrix();
glColor3ub(139, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(1.57,-0.035,1.54);
glutSolidCube(0.2);
glPopMatrix();
//pillar roof
glPushMatrix();
glColor3ub(139, 0, 0);
glScalef(2.5,0.2,0.21);
glTranslatef(0,0.45,1.54);
glutSolidCube(0.2);
glPopMatrix();

glPopMatrix();

///1st floor
glPushMatrix();
glTranslatef(0,0.31,0);
back_window();
right_window();
floor_body();
balcony();
left_window();
glPopMatrix();

///2nd floor
glPushMatrix();
glTranslatef(0,0.62,0);
back_window();
right_window();
floor_body();
balcony();
left_window();
glPopMatrix();

///3rd floor
glPushMatrix();
glTranslatef(0,0.93,0);
back_window();
right_window();
floor_body();
balcony();
left_window();
glPopMatrix();

 ///4th floor
glPushMatrix();
glTranslatef(0,1.24,0);
back_window();
right_window();
floor_body();
balcony();
left_window();
glPopMatrix();

///roof
glPushMatrix();
glColor3ub(255,0,0);
glScalef(1.05,0.02,1.2);
glTranslatef(0,69.8,0.025);
glutSolidCube(0.6);
glPopMatrix();

///roof back wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(3,0.5,0.05);
glTranslatef(0,2.905,-6.2);
glutSolidCube(0.2);
glPopMatrix();

///roof entrance
glPushMatrix();
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
//body
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.5,1.7,0.5);
glTranslatef(0.4,0.876,-0.15);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//cap
glPushMatrix();
glColor3ub(255, 0, 0);
glScalef(0.2,0.1,0.2);
glTranslatef(1.01,15.76,-0.36);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();


/// water tank 2
glPushMatrix();
//body
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.5,1.7,0.5);
glTranslatef(0.4,0.876,0.08);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//cap
glPushMatrix();
glColor3ub(255, 0, 0);
glScalef(0.2,0.1,0.2);
glTranslatef(1.01,15.76,0.22);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();


///roof left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,3.31);
glTranslatef(-5.89,2.905,0.009);
glutSolidCube(0.2);
glPopMatrix();
///roof right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,3.31);
glTranslatef(5.89,2.905,0.009);
glutSolidCube(0.2);
glPopMatrix();
///roof front wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(3,0.5,0.05);
glTranslatef(0,2.905,7.3);
glutSolidCube(0.2);
glPopMatrix();



glPopMatrix();
/// end of building

}

void display () {

    /* clear window */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* future matrix manipulations should affect the modelview matrix */
    glMatrixMode(GL_MODELVIEW);

    /* draw scene */
    glPushMatrix();
    building();


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

   // myInit();
    glutTimerFunc(25,update,0);
    /* tell GLUT to wait for events */
    glutMainLoop();
}





