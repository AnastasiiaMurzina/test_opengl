//#include "stdafx.h"
//#include <windows.h>
#include <iostream>
#include <GL\glut.h>
#include <cstdlib>
#include <cmath>
#include <chrono>
#include <ctime>

using namespace std;

/*const int X_COORD = 50;// X - dim ] should
const int Y_COORD = 50;// Y - dim ] be equal
const float ITERATIONS = 0.000005; // step of renedering

int x_off = X_COORD / 2;// begin of
int y_off = Y_COORD / 2;// axes

#define expr x

void drawgrid(float SERIF_OFFSET, float SERIF_DISTANCE) {
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.0, Y_COORD / 2);
	glVertex2f(X_COORD, Y_COORD / 2);
	int p = X_COORD / 2;
	for (int i = X_COORD / 2; i < X_COORD; i += SERIF_DISTANCE, p -= SERIF_DISTANCE) {
		glVertex2f(i, Y_COORD / 2);
		glVertex2f(i, Y_COORD / 2 + SERIF_OFFSET);

		glVertex2f(p, Y_COORD / 2);
		glVertex2f(p, Y_COORD / 2 + SERIF_OFFSET);
	}
	//vertical
	int t = Y_COORD / 2;
	glVertex2f(X_COORD / 2, Y_COORD);
	glVertex2f(X_COORD / 2, 0.0);

	for (int i = Y_COORD / 2; i < Y_COORD; i += SERIF_DISTANCE, t -= SERIF_DISTANCE) {
		glVertex2f(X_COORD / 2, i);
		glVertex2f(Y_COORD / 2 + SERIF_OFFSET, i);

		glVertex2f(X_COORD / 2, t);
		glVertex2f(Y_COORD / 2 + SERIF_OFFSET, t);
	}
	glEnd();
}

void drawfunc() {
	glBegin(GL_POINTS);
	float j = 0;
	glColor3f(0.8, 0.0, 0.8);
	for (float x = -X_COORD * 2; x < X_COORD * 2; x += ITERATIONS) {
		//recalculation of coordinates
		j = expr;
		glVertex2f(x_off + x, y_off + j);//don't touch x and y!! this is the axis offset!
	}
	glEnd();
}

void funcinfo(int val1, int val2) {
	for (float x = val1; x <= val2; x++) {
		float j = expr;
		cout << x << " : " << j << endl;
	}
}

void display() {
	chrono::time_point<std::chrono::system_clock> start;
	start = chrono::system_clock::now();
	glClear(GL_COLOR_BUFFER_BIT);
	//cout << "Some info may be print here: \n";
	drawgrid(0.3, 5);
	drawfunc();
	//funcinfo(-5, 5);
	glutSwapBuffers();
	glFlush();
	cout << "Time of display: " << (chrono::system_clock::now() - start).count() << endl;
}*/

int points_main(int argc, char **argv) {
	/*glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(500, 200);
	glutCreateWindow("GLUT_TESTING_APP");

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	glOrtho(0.0, X_COORD, 0.0, Y_COORD, -1.0, 1.0);
	glutDisplayFunc(display);
	glutMainLoop();*/
	return 0;
}