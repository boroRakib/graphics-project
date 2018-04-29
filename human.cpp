#include<windows.h>>
#include <stdio.h>
#include <GL/glut.h>


void drawCircle(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

      glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);///right leg
        glVertex2i(3.0f,5.0f);
        glVertex2i(12.0f,5.0f);
        glVertex2i(12.0f,20.0f);
        glVertex2i(3.0f,20.0f);

     glColor3f(1.0, 1.0, 0.0);
     glVertex2i(-6.0f,60.0f);
      glVertex2i(18.0f,60.0f);
       glVertex2i(12.0f,5.0f);
        glVertex2i(3.0f,5.0f);

    glEnd();



    glFlush ();

}


void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    //glClearColor3f(0,100,0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-300.0, 300.0, -300.0, 300.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutCreateWindow ("Fan using Mid Point Circle Algorithm");


    glutDisplayFunc(drawCircle);

    myInit ();
    glutMainLoop();
}
