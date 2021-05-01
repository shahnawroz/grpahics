#include <iostream>
#include <stdlib.h>
#include <math.h>

#include <GL/gl.h>
#include <GL/glut.h>

float _angle = 0.0;

float _angle1 = 0.0;

void ship()
{
///start of ship

glPushMatrix();
    glRotatef(_angle1, 1.0, 1.0, 0.0);
    //glTranslatef(0.0,_mov,0.0);
    //glRotatef(90, 0.0, 1.0, 0.0);
//glScalef(1,1,1);
///Body start

    glPushMatrix();
    glColor3ub(0,0,0);
    glScalef(1.5,0.8,0.4);
    glutSolidCube(0.5);
    glPopMatrix();

///front cone

glPushMatrix();
glScalef(2,0.8,1);
glTranslatef(-0.186,0,0.0);
glRotatef(10, 0.0, 0.0, 1.0);
glPushMatrix();
glRotatef(-90, 0.0, 1.0, 0.0);
glPushMatrix();
glScalef(0.4,1.0,0.2);
glColor3ub(0,0,0);
glRotatef(-40, 1.0, 0.0, 0.0);
glutSolidCone(0.4,0.6,25,25);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///back cone
glPushMatrix();
glRotatef(180, 0.0, 1.0, 0.0);
glPushMatrix();
glScalef(2,0.8,1);
glTranslatef(-0.186,0,0.0);
glRotatef(10, 0.0, 0.0, 1.0);
glPushMatrix();
glRotatef(-90, 0.0, 1.0, 0.0);
glPushMatrix();
glScalef(0.4,1.0,0.2);
glColor3ub(0,0,0);
glRotatef(-40, 1.0, 0.0, 0.0);
glutSolidCone(0.4,0.6,25,25);
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();

///1st floor
glPushMatrix();
glColor3ub(220, 20, 60);
glTranslatef(0.125,0.276,0.0);
glScalef(1.0,0.3,0.4);
glutSolidCube(0.5);
glPopMatrix();

///2nd floor
glPushMatrix();
glColor3ub(106, 90, 205);
glTranslatef(0.18,0.432,0.0);
glScalef(0.7,0.3,0.4);
glutSolidCube(0.5);
glPopMatrix();

///pipe
glPushMatrix();
glColor3ub(230, 230, 250);
glTranslatef(0.18,0.63,0.0);
glScalef(0.2,0.5,0.2);
glutSolidCube(0.5);
glPopMatrix();

glPopMatrix();

///end of ship
}

void display () {

    /* clear window */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* future matrix manipulations should affect the modelview matrix */
    glMatrixMode(GL_MODELVIEW);
     glClearColor (0.60, 0.50, 0.0, 1.0);
    /* draw scene */
    glPushMatrix();
    ship();


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
    glutInitWindowSize(800,600);
    glutInitWindowPosition(100,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

    /* create and set up a window */
    glutCreateWindow("Car");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    //myInit();
    glutTimerFunc(25,update,0);
    /* tell GLUT to wait for events */
    glutMainLoop();
}
