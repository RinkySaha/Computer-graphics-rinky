/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>
#ifdef __APPLE__
//#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init()
{
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glOrtho(0,20,0,20,-3,3);
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(5.0f,5.0f,3.0f);
    glBegin(GL_POLYGON);
        glVertex3d(2.0,7.0,0.0);
        glVertex3d(4.0,10.0,0.0);
        glVertex3d(6.0,7.0,0.0);
    glEnd();

    glColor3f(5.0f,5.0f,3.0f);
    glBegin(GL_QUADS);
        glVertex3d(6.0,7.0,0.0);
        glVertex3d(4.0,10.0,0.0);
        glVertex3d(8.0,10.0,0.0);
        glVertex3f(10.0,7.0,0.0);

    glEnd();


    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(4.0,10.0,0.0);
        glVertex3d(6.0,7.0,0.0);
    glEnd();


    glColor3f(5.0f,5.0f,3.0f);
    glBegin(GL_QUADS);
        glVertex3d(6.0,7.0,0.0);
        glVertex3f(10.0,7.0,0.0);
        glVertex3d(10.0,4.0,0.0);
        glVertex3d(6.0,4.0,0.0);

    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(6.0,7.0,0.0);
        glVertex3f(10.0,7.0,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(6.0,7.0,0.0);
        glVertex3d(6.0,4.0,0.0);
    glEnd();


    glColor3f(5.0f,5.0f,3.0f);
    glBegin(GL_QUADS);
        glVertex3d(6.0,7.0,0.0);
        glVertex3d(6.0,4.0,0.0);
        glVertex3d(2.0,4.0,0.0);
        glVertex3d(2.0,7.0,0.0);

    glEnd();


    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(2.0,7.0,0.0);
        glVertex3d(6.0,7.0,0.0);
    glEnd();


    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(6.0,7.0,0.0);
        glVertex3d(6.0,4.0,0.0);
    glEnd();


    glColor3f(1.0f,0.0f,1.0f);
    glBegin(GL_QUADS);
        glVertex3d(3.5,4.0,0.0);
        glVertex3d(4.5,4.0,0.0);
        glVertex3d(4.5,6.0,0.0);
        glVertex3d(3.5,6.0,0.0);

    glEnd();


    glColor3f(1.0f,0.0f,1.0f);
    glBegin(GL_QUADS);
        glVertex3d(7.5,4.0,0.0);
        glVertex3d(8.5,4.0,0.0);
        glVertex3d(8.5,6.0,0.0);
        glVertex3d(7.5,6.0,0.0);

    glEnd();

    glColor3f(0.0f,0.0f,1.0f);
    glBegin(GL_QUADS);
        glVertex3d(6.5,5.0,0.0);
        glVertex3d(7.0,5.0,0.0);
        glVertex3d(7.0,6.0,0.0);
        glVertex3d(6.5,6.0,0.0);

    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(6.5,5.0,0.0);
        glVertex3d(7.0,6.0,0.0);
        glVertex3d(7.0,5.0,0.0);
        glVertex3d(6.5,6.0,0.0);

    glEnd();


    glColor3f(0.0f,0.0f,1.0f);
    glBegin(GL_QUADS);
        glVertex3d(9.0,5.0,0.0);
        glVertex3d(9.5,5.0,0.0);
        glVertex3d(9.5,6.0,0.0);
        glVertex3d(9.0,6.0,0.0);

    glEnd();


    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(9.0,5.0,0.0);
        glVertex3d(9.5,6.0,0.0);


        glVertex3d(9.5,5.0,0.0);
        glVertex3d(9.0,6.0,0.0);

    glEnd();



    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
        glVertex3d(15.0,4.0,0.0);
        glVertex3d(15.7,4.0,0.0);
        glVertex3d(15.7,10.0,0.0);
        glVertex3d(15.0,10.0,0.0);


    glEnd();


    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(15.0,5.0,0.0);
        glVertex3d(15.7,5.0,0.0);


        glVertex3d(15.0,5.5,0.0);
        glVertex3d(15.7,5.5,0.0);

        glVertex3d(15.0,8.5,0.0);
        glVertex3d(15.7,8.5,0.0);

        glVertex3d(15.0,9.0,0.0);
        glVertex3d(15.7,9.0,0.0);

    glEnd();


    glColor3f(5.0f,5.0f,3.0f);
    glBegin(GL_POLYGON);
        glVertex3d(15.4,10.5,0.0);
        glVertex3d(12.0,6.0,0.0);
        glVertex3d(11.0,6.5,0.0);
    glEnd();


    glColor3f(5.0f,5.0f,3.0f);
    glBegin(GL_POLYGON);
        glVertex3d(15.4,10.5,0.0);
        glVertex3d(18.0,6.0,0.0);
        glVertex3d(19.0,6.5,0.0);
    glEnd();


    glColor3f(5.0f,5.0f,3.0f);
    glBegin(GL_POLYGON);
        glVertex3d(15.4,10.5,0.0);
        glVertex3d(12.0,14.0,0.0);
        glVertex3d(11.0,13.5,0.0);
    glEnd();

    glColor3f(5.0f,5.0f,3.0f);
    glBegin(GL_POLYGON);
        glVertex3d(15.4,10.5,0.0);
        glVertex3d(18.0,14.0,0.0);
        glVertex3d(19.0,13.5,0.0);
    glEnd();






    glFlush();
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(400,200);
    glutCreateWindow("Rinky");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
