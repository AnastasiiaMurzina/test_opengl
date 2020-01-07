#include <iostream>
#include <GL\glut.h>
#include <cmath>
#include <chrono>
#include <fstream>
#include <vector>

using namespace std;

const int X_COORD = 50;// X - dim should
const int Y_COORD = 50;// Y - be equal
const int NUM_POINTS = 50;
//const float ITERATIONS = 0.000005; // step of renedering

int x_off = X_COORD / 2;// begin of
int y_off = Y_COORD / 2;// axes

vector<float> v; // see https://stackoverflow.com/questions/16764439/global-vector-getting-reset
//#define expr sin(x) //func

void full_init() {
	float delta = X_COORD/NUM_POINTS;
	for (int i = 0; i < X_COORD; i+=delta) {
		v.push_back((sin(delta) + 1) * Y_COORD);
	}
}

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
	for (int i = 0; i < X_COORD; i++) {
		glBegin(GL_LINES);
		glVertex2f(i, v[i]);
		glVertex2f(i+1, v[i+1]);
		glEnd();
	}
}

void display() {

	chrono::time_point<std::chrono::system_clock> start;
	start = chrono::system_clock::now();
	glClear(GL_COLOR_BUFFER_BIT);
	drawgrid(0.3, 5);
	drawfunc();
	glutSwapBuffers();
	glFlush();
	cout << "Time of display: " << (chrono::system_clock::now() - start).count() << endl;
}

/*void read_random_segment(float* arr) {
	ifstream inFile;
	inFile.open("rand_segments.txt");
	int n_file;
	inFile >> n_file;
	for (int i = 0; i < 500; i++) {
		inFile >> arr[i * 4] >> arr[i * 4 + 1] >> arr[i * 4 + 2] >> arr[i * 4 + 3];
	}
	inFile.close();
}
*/

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(500, 200);
	glutCreateWindow("GLUT_TESTING_APP");

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(0.0, X_COORD, 0.0, Y_COORD, -1.0, 1.0);

	glutDisplayFunc(display);
	glutMainLoop();
}
