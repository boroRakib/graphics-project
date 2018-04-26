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

       ///left leg
        glVertex2i(-3.0f,5.0f);
        glVertex2i(-12.0f,5.0f);
        glVertex2i(-12.0f,20.0f);
        glVertex2i(-3.0f,20.0f);

    glEnd();


    glColor3f(0.0, 0.0, 0.0);

    ///head
    int x=0,y=15;
    int d=1-y;
    while(y>x)
    {
        if(d>=0)
        {
            d+=2*x-2*y+5;
            y-=1;

        }
        else
        {
            d+=2*x+3;
        }

        x+=1;

        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(-x,-y);
        glVertex2i(-x,y);
        glVertex2i(x,-y);
        glVertex2i(y,x);
        glVertex2i(-y,-x);
        glVertex2i(-y,x);
        glVertex2i(y,-x);
        glVertex2i(-x,-y);


        glEnd();



    }

     glColor3f(1.0, 1.0, 0.0);///right hand
        glBegin(GL_QUADS);
        glVertex2i(15.0f,-6.0f);
        glVertex2i(25.0f,-6.0f);
        glVertex2i(25.0f,6.0f);
        glVertex2i(15.0f,6.0f);

        glVertex2i(-15.0f,-6.0f);///left hand
        glVertex2i(-25.0f,-6.0f);
        glVertex2i(-25.0f,6.0f);
        glVertex2i(-15.0f,6.0f);


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
