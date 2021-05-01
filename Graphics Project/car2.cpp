#include <iostream>
#include <stdlib.h>
#include <math.h>

#include <GL/gl.h>
#include <GL/glut.h>

float _angle = 0.0;

float _angle1 = 0.0;

void display () {

    /* clear window */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* future matrix manipulations should affect the modelview matrix */
    glMatrixMode(GL_MODELVIEW);

    /* draw scene */
    glPushMatrix();
    //glScalef(0.33,0.33,0.33);


/// start of car
    glPushMatrix();

/// body start

///lower part
glPushMatrix();
    glColor3f(1.0,0.6,0.2);
    glPushMatrix();
    glScalef(2.4,.65,1);
    glutSolidCube(0.5);
    glPopMatrix();

glTranslatef(0,0.25,0);
///upper part
    glPushMatrix();
    glScalef(1.5,.5,1);
    glutSolidCube(0.5);
    glPopMatrix();
glPopMatrix();
///body end

    glTranslatef(0,0,.25);
    glColor3f(1.0,0.0,1.0);

/// front left wheel
    glPushMatrix();
    glTranslatef(-0.4,-0.2,0.0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutWireTorus(.05,.1,25,25);
    glPopMatrix();
/// back left wheel
    glPushMatrix();
    glTranslatef(0.4,-0.2,0.0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutWireTorus(.05,.1,25,25);
    glPopMatrix();



    glTranslatef(0,0,-.5);
/// front right wheel
    glPushMatrix();
    glTranslatef(-.4,-.2,0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutWireTorus(.05,.1,25,25);
    glPopMatrix();
 /// back left wheel
    glPushMatrix();
    glTranslatef(0.4,-0.2,0.0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutWireTorus(.05,.1,25,25);
    //glMap1f(GL_MAP1_VERTEX_3,0,1,3,3,&ctrlpoints[0][0]);
    glPopMatrix();

    glPopMatrix();
///end of car

/// start of car2
    glPushMatrix();
  glTranslatef(-4,0,-1);
/// body start

///lower part
glPushMatrix();
    glColor3f(1.0,0.6,0.2);
    glPushMatrix();
    glScalef(2.4,.65,1);
    glutSolidCube(0.5);
    glPopMatrix();

glTranslatef(0,0.25,0);
///upper part
    glPushMatrix();
    glScalef(1.5,.5,1);
    glutSolidCube(0.5);
    glPopMatrix();
glPopMatrix();
///body end

    glTranslatef(0,0,.25);
    glColor3f(1.0,0.0,1.0);

/// front left wheel
    glPushMatrix();
    glTranslatef(-0.4,-0.2,0.0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutWireTorus(.05,.1,25,25);
    glPopMatrix();
/// back left wheel
    glPushMatrix();
    glTranslatef(0.4,-0.2,0.0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutWireTorus(.05,.1,25,25);
    glPopMatrix();



    glTranslatef(0,0,-.5);
/// front right wheel
    glPushMatrix();
    glTranslatef(-.4,-.2,0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutWireTorus(.05,.1,25,25);
    glPopMatrix();
 /// back left wheel
    glPushMatrix();
    glTranslatef(0.4,-0.2,0.0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutWireTorus(.05,.1,25,25);
    //glMap1f(GL_MAP1_VERTEX_3,0,1,3,3,&ctrlpoints[0][0]);
    glPopMatrix();

    glPopMatrix();
///end of car2


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
    glutInitWindowSize(1200,700);
    glutInitWindowPosition(100,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

    /* create and set up a window */
    glutCreateWindow("Car");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    myInit();
    glutTimerFunc(25,update,0);
    /* tell GLUT to wait for events */
    glutMainLoop();
}
