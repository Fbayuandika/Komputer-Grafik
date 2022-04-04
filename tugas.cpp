#include <iostream>
#include <GL/freeglut.h>
#include <GL/glut.h>
#include <math.h>

void Display(){
	glClearColor(0.0,0.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	//persegi pertama
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.75,-0.75);
	glVertex2f(-0.75,0.75);
	glVertex2f(0.75,0.75);
	glVertex2f(0.75,-0.75);
	glEnd();
	
	//segi enam belas
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,1.0,1.0);
	glVertex2f(-0.75,-0.75); 	//1
	glVertex2f(-0.625,-0.375);	//2
	glVertex2f(-0.75,0);		//3
	glVertex2f(-0.625,0.375);	//4
	glVertex2f(-0.75,0.75);		//5
	glVertex2f(-0.375,0.625);	//6
	glVertex2f(0,0.75);			//7
	glVertex2f(0.375,0.625);	//8
	glVertex2f(0.75,0.75);		//9
	glVertex2f(0.625,0.375);	//10
	glVertex2f(0.75,0);			//11
	glVertex2f(0.625,-0.375);	//12
	glVertex2f(0.75,-0.75);		//13
	glVertex2f(0.375,-0.625);	//14
	glVertex2f(0,-0.75);		//15
	glVertex2f(-0.375,-0.625);	//16
	glVertex2f(-0.75,-0.75);
	glEnd();
	
	//persegi kedua
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.375,-0.375);
	glVertex2f(-0.375,0.375);
	glVertex2f(0.375,0.375);
	glVertex2f(0.375,-0.375);
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc,argv);
	glutCreateWindow("Assesment");
	glutDisplayFunc(Display);
	glutMainLoop();
	return 0;
}
