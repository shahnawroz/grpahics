#include <iostream>
#include <stdlib.h>
#include <math.h>

#include <GL/gl.h>
#include <GL/glut.h>

float _angle = 0.0;
float _mov = 0.0;
float _angle1 = 0.0;



void house(){

    //glRotatef(_angle1,0,1,0);
     ///1st ber
    glPushMatrix();

    glPushMatrix();
    glColor3ub(220, 20, 60);
    glScalef(.34,.05,-1);
    glTranslatef(-.32,12.5,.03);
    glutSolidCube(1.0);
    glPopMatrix();


     ///2ndber
    glPushMatrix();
    glColor3ub(0, 250, 154);
    glScalef(.3,.3,-1);
    glTranslatef(-.35,1.5,.03);
    glutSolidCube(1.0);
    glPopMatrix();
    ///3rd ber
    glPushMatrix();

    glPushMatrix();
    glColor3ub(220, 20, 60);
    glScalef(.34,.05,-1);
    glTranslatef(-.32,6,.03);
    glutSolidCube(1.0);
    glPopMatrix();
     ///4thber
    glPushMatrix();
    glColor3ub(0, 250, 154);
    glScalef(.3,.3,-1);
    glTranslatef(-.35,.42,.03);
    glutSolidCube(1.0);
    glPopMatrix();
    ///5th bar
        glPushMatrix();
    glColor3ub(220, 20, 60);
    glScalef(.34,.05,-1);
    glTranslatef(-.32,0,.03);
    glutSolidCube(1.0);
    glPopMatrix();
       ///6th bar
    glPushMatrix();
    glColor3ub(0, 250, 154);
    glScalef(.3,.3,-1);
    glTranslatef(-.35,-.58,.03);
    glutSolidCube(1.0);
    glPopMatrix();
     ///7th bar
        glPushMatrix();
    glColor3ub(220, 20, 60);
    glScalef(.34,.05,-1);
    glTranslatef(-.32,-6.2,.03);
    glutSolidCube(1.0);
    glPopMatrix();
      ///8th bar
    glPushMatrix();
    glColor3ub(0, 250, 154);
    glScalef(.3,.3,-1);
    glTranslatef(-.35,-1.62,.03);
    glutSolidCube(1.0);
    glPopMatrix();
         ///9th bar
        glPushMatrix();
    glColor3ub(220, 20, 60);
    glScalef(.34,.05,-1);
    glTranslatef(-.32,-13,.03);
    glutSolidCube(1.0);
    glPopMatrix();

    ///window1r
   glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(-.012,0.5,0.55);
    glScalef(.6,.6,.03);
    glutSolidCube(0.13);
    glPopMatrix();
       ///window2r
   glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(-.012,0.17,0.55);
    glScalef(.6,.6,.03);
    glutSolidCube(0.13);
    glPopMatrix();
       ///window3r
   glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(-.012,-.09,0.55);
    glScalef(.6,.6,.03);
    glutSolidCube(0.13);
    glPopMatrix();
      ///window1L
   glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(-.19,0.5,0.55);
    glScalef(.6,.6,.03);
    glutSolidCube(0.13);
    glPopMatrix();
        ///window2l
   glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(-.19,0.17,0.55);
    glScalef(.6,.6,.03);
    glutSolidCube(0.13);
    glPopMatrix();
      ///window3L
   glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(-.19,-.09,0.55);
    glScalef(.6,.6,.03);
    glutSolidCube(0.13);
    glPopMatrix();


glPopMatrix();

}




void display () {

    /* clear window */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* future matrix manipulations should affect the modelview matrix */
    glMatrixMode(GL_MODELVIEW);
    //glRotatef(_angle1, 0.0, 1.0,0.0);
    /* draw scene */
    glPushMatrix();
    house();


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
   GLfloat light_position[] = { .20, -0.50, 1.0, 0.0 };
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

    _mov -= 0.04f;
    if (_mov < -6.5)
    {
        _mov += 7.0;
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
