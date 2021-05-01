#include <iostream>
#include <stdlib.h>
#include <math.h>

#include <GL/gl.h>
#include <GL/glut.h>

float _angle = 0.0;

float _angle1 = 0.0;
float _angle2 = 0.0;

void plane(){

/// start of plane
    glPushMatrix();
      glScalef(.5,.5,.5);
     //glRotatef(_angle1, 0.0, 1.0, 0.0);
    //glTranslatef(0.0,_mov,0.0);
//glRotatef(10, 1.0, 0.0, 0.0);
glPushMatrix();
///tail
///tail left wing
glPushMatrix();
glColor3ub(0, 255, 255);
glTranslatef(0.7,0.05,-0.16);
glScalef(0.6,0.04,0.8);
glutSolidCube(0.4);
glPopMatrix();

///tail middle
glPushMatrix();
glColor3ub(255, 0, 0);
//1st plate
glPushMatrix();
glRotatef(70,0,0,1);
glPushMatrix();
glScalef(1.3,0.5,0.03);
glTranslatef(0.5,-1,0);
glutSolidCube(0.4);
glPopMatrix();
glPopMatrix();
//2nd plate
glPushMatrix();
glPushMatrix();
glScalef(0.46,1.8,0.03);
glTranslatef(1.7,0.2,0);
glutSolidCube(0.4);
glPopMatrix();
glPopMatrix();
//3rd plate
glPushMatrix();
glRotatef(40,0,0,1);
glPushMatrix();
glScalef(0.6,0.4,0.03);
glTranslatef(0.805,-1.15,0);
glutSolidSphere(.40,30,30);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///tail right wing
glPushMatrix();
glColor3ub(0, 255, 255);
glTranslatef(0.7,0.05,0.16);
glScalef(0.6,0.04,0.8);
glutSolidCube(0.4);
glPopMatrix();

///upper glass
glPushMatrix();
glColor3ub(230, 230, 250);
glScalef(0.8,0.6,0.3);
glTranslatef(-0.18,0.6,0);
glutSolidSphere(.40,30,30);
glPopMatrix();

/// left wing
glPushMatrix();
glColor3ub(139, 0, 139);
glTranslatef(-0.27,-0.25,-0.69);
glScalef(1,0.1,2.7);
glutSolidCube(0.4);
glPopMatrix();


///body
glPushMatrix();
glColor3ub(0, 255, 0);
///skeleton
glPushMatrix();
glScalef(1.9,1,0.5);
glutSolidSphere(.40,70,70);
glPopMatrix();

///body front
//torus 1
glPushMatrix();
glScalef(1,0.32,0.16);
glTranslatef(-0.2,0,0);
glRotatef(90,0,1,0);
glutSolidTorus(.3,1,45,40);
glPopMatrix();
//torus 2
glPushMatrix();
glScalef(1.4,0.32,0.16);
glTranslatef(-0.2,0,0);
glRotatef(90,0,1,0);
glutSolidTorus(.3,1,45,40);
glPopMatrix();
//torus 3
glPushMatrix();
glScalef(0.2,0.23,0.115);
glTranslatef(-3,0,0);
glRotatef(90,0,1,0);
glutSolidTorus(0.8,0.9,45,40);
glPopMatrix();


glPopMatrix();


///back wheel
///bar
glPushMatrix();
glRotatef(10,0,0,1);
glPushMatrix();
glColor3ub(128, 128, 0);
glScalef(0.08,0.6,0.08);
glTranslatef(5,-0.85,0);
glutSolidCube(0.4);
glPopMatrix();
glPopMatrix();

///wheel
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.08,0.1,0.2);
glTranslatef(6.35,-5.4,0);
glutSolidTorus(0.3,0.7,30,40);
glPopMatrix();

///front wheel
///right bar
glPushMatrix();
glRotatef(10,1,0,0);
glPushMatrix();
glColor3ub(128, 128, 0);
glScalef(0.1,1.5,0.1);
glTranslatef(-4.4,-0.385,-0.8);
glutSolidCube(0.4);
glPopMatrix();
glPopMatrix();

///right wheel
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.11,0.13,0.2);
glTranslatef(-4,-6.5,-1.5);
glutSolidTorus(0.3,0.7,30,40);
glPopMatrix();

///left bar
glPushMatrix();
glRotatef(-10,1,0,0);
glPushMatrix();
glColor3ub(128, 128, 0);
glScalef(0.1,1.5,0.1);
glTranslatef(-4.4,-0.385,0.8);
glutSolidCube(0.4);
glPopMatrix();
glPopMatrix();

///left wheel
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.11,0.13,0.2);
glTranslatef(-4,-6.5,1.5);
glutSolidTorus(0.3,0.7,30,40);
glPopMatrix();

/// right wing
glPushMatrix();
glColor3ub(139, 0, 139);
glTranslatef(-0.27,-0.25,0.69);
glScalef(1,0.1,2.7);
glutSolidCube(0.4);
glPopMatrix();


///propeller start
glPushMatrix();
glTranslatef(-0.83,0.02,0);
glScalef(0.8,0.9,0.8);
glRotatef(_angle2, 1.0, 0.0, 0.0);
glPushMatrix();

///bar
glPushMatrix();
glColor3f(0.0,0.0,1.0);
glScalef(0.3,0.08,0.08);
glRotatef(90, 0.0, 1.0, 0.0);
glutSolidTorus(.30,.70,30,70);
glPopMatrix();

///blade



glPushMatrix();
glColor3ub(0, 0, 205);
glTranslatef(-0.04,0,0);
///blade1
glPushMatrix();
glScalef(0.02,0.2,1.6);
glTranslatef(-1.6,0,0.29);
glutSolidCube(.5);
glPopMatrix();

///blade2
glPushMatrix();
glRotatef(50,1,0,0);
glPushMatrix();
glScalef(0.02,0.2,1.6);
glTranslatef(-1.6,0,-0.29);
glutSolidCube(.5);
glPopMatrix();
glPopMatrix();

///blade3
glPushMatrix();
glRotatef(-65,1,0,0);
glPushMatrix();
glScalef(0.02,0.2,1.6);
glTranslatef(-1.6,0,-0.29);
glutSolidCube(.5);
glPopMatrix();
glPopMatrix();

glPopMatrix();


///cap
glPushMatrix();
glColor3f(1.0,0.0,0.0);
glScalef(0.1,0.2,0.2);
glTranslatef(-0.6,0, 0.0);
glRotatef(-90,0,1,0);
glutSolidCone(.5,1.0,20,20);
glPopMatrix();

glPopMatrix();
glPopMatrix();
///propeller end



glPopMatrix();
glPopMatrix();

}

void display () {

    /* clear window */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* future matrix manipulations should affect the modelview matrix */
    glMatrixMode(GL_MODELVIEW);

    /* draw scene */
    glPushMatrix();
    plane();


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
	_angle2 += 100.0f;
	if (_angle2 > 360) {
		_angle2 -= 360;
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
    glutInitWindowSize(1200,700);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

    /* create and set up a window */
    glutCreateWindow("plane");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
   // myInit();
    glutTimerFunc(25,update,0);
    /* tell GLUT to wait for events */
    glutMainLoop();
}
