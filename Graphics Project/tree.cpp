#include<GL/gl.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>




//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 0.0;
float _cameraAngle = 0.0;
float _mov = 0.0;
float _mov2 = 0.0;
float _mov3 = 0.0;
float _mov4 = 0.0;
float _mov5 = 0.0;





//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.000, 0.502, 0.000,0.0);
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units

    ///tree start
    glColor3ub(50, 205, 50);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.35,0.0,0.0);
    glVertex3f(0.35,0.0,0.0);
    glVertex3f(0.0,0.25,0.0);
    glEnd();

    glColor3ub(50, 205, 50);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.30,0.10,0.0);
    glVertex3f(0.30,0.10,0.0);
    glVertex3f(0.0,0.35,0.0);
    glEnd();

    glColor3ub(50, 205, 50);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.25,0.20,0.0);
    glVertex3f(0.25,0.20,0.0);
    glVertex3f(0.0,0.45,0.0);
    glEnd();

    glColor3ub(39, 69, 19);
    glBegin(GL_POLYGON);
    glVertex3f(-0.05,0.0,0.0);
    glVertex3f(0.05,0.0,0.0);
    glVertex3f(0.05,-0.60,0.0);
    glVertex3f(-0.05,-0.60,0.0);
    glEnd();
    ///tree end




	glutSwapBuffers();
}



void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}

    _mov -= 0.1f;
    if (_mov < -12.5)
    {
        _mov += 12.5;
    }

    _mov3 += 0.1f;
    if(_mov3 > 12.0)
    {
        _mov3 -= 12.0;
    }

    _mov4 += 0.1f;
    if(_mov4 > 50.0)
    {
        _mov4 -= 50.0;
    }

    _mov5 -= 0.1f;
    if (_mov5 < -10.0)
    {
        _mov5 += 56.0;
    }

    if(_mov < 1.0)
    {
        _mov2 = 0;
    }
    else
    {
        _mov2 = 50;
    }



	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1300, 700);
	glutInitWindowPosition(5,5);

	//Create the window
	glutCreateWindow("Scenario");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	glutTimerFunc(25, update, 0); //Add a timer

	glutMainLoop();
	return 0;
}







