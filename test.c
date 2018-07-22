#include <string.h>
#include <GL/glut.h>
#include <math.h>

static void display()
{
	double r = 1.0;
	double g = 1.0;
	double b = 0.0;
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(r, g, b);

	glBegin(GL_LINE_STRIP);
	glVertex2d(sin(0.0),      cos(0.0));
	glVertex2d(sin(4*M_PI/5), cos(4*M_PI/5));
	glVertex2d(sin(8*M_PI/5), cos(8*M_PI/5));
	glVertex2d(sin(2*M_PI/5), cos(2*M_PI/5));
	glVertex2d(sin(6*M_PI/5), cos(6*M_PI/5));
	glVertex2d(sin(0.0),      cos(0.0));
	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
	float R     = argv[1] ? strtof(argv[1], NULL) : 0.0f;
	float G     = argv[2] ? strtof(argv[2], NULL) : 0.0f;
	float B     = argv[3] ? strtof(argv[3], NULL) : 0.0f;
	float alpha = argv[4] ? strtof(argv[4], NULL) : 0.0f;
	
	glutInit(&argc, argv);
	glutCreateWindow("five-pointed star");
	glClearColor(R, G, B, alpha);
	glutDisplayFunc(display);
	glutMainLoop();
	
	return 0;
}
