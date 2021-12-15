#include<Windows.h>
#include<GL\glut.h>
#include<math.h>
#define PI 3.1416

float shift = 0; // a variable used to move the boat right and left
GLint i, j, k;
GLfloat sun_spin=0, sun_x=0, sun_y=0;
GLfloat ax=0,bx=0,cx=0,dx=0,str=500.0,mn=500.0;
GLfloat sr=0.0,sg=0.749,sb=1.0;
GLfloat spin = 0.0;

void init()
{
    glClearColor(0.4, 0.4, 0.4,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1000, 0.0, 900);
}

void display()
{


    glClear(GL_COLOR_BUFFER_BIT);


    background();
    tree();
    tree_leef();
    home();

    cloud_model_one();
    cloud_model_Two();
    cloud_model_Three();

}

void home()
{
    //triangle
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(260,250);
    glVertex2i(310,290);
    glVertex2i(330,245);
    glEnd();

    //front wall
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(260,250);
    glVertex2i(260,180);
    glVertex2i(330,170);
    glVertex2i(330,245);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(330,170);
    glVertex2i(330,245);
    glVertex2i(400,245);
    glVertex2i(400,175);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(310,290);
    glVertex2i(330,245);
    glVertex2i(400,245);
    glVertex2i(360,290);
    glEnd();

}



void tree()
{

    //tree solid
    glColor3f( 0.36 , 0.25 , 0.20  );
    glBegin(GL_POLYGON);
    glVertex2i(150,380);
    glVertex2i(150,200);
    glVertex2i(165,200);
    glVertex2i(165,380);
    glEnd();

}
void tree_leef()
{
    glColor3f(0 ,100 ,0);
    glPushMatrix();
    glTranslatef(-820,100,0);
    circle(45);
    glPopMatrix();
    glEnd();


    glFlush();
    glutSwapBuffers();
}
void background()
{
    //sky background
    glColor3f(0, 0.498039 ,1.0 );
    glBegin(GL_POLYGON);
    glVertex2i(0,300);
    glVertex2i(0,900);
    glVertex2i(1000,900);
    glVertex2i(1000,300);
    glEnd();


    //green background
    glColor3f(0 ,100 ,0 );
    glBegin(GL_POLYGON);
    glVertex2i(0,300);
    glVertex2i(0,0);
    glVertex2i(1000,0);
    glVertex2i(1000,300);
    glEnd();


    glFlush();
    glutSwapBuffers();
}
void cloud_model_one(){

    glColor3f(1.25, 0.924, 0.930);

    ///Top_Left

    glPushMatrix();
    glTranslatef(-720+shift,410,0);
    circle(15);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(-740+shift, 425, 0);
    circle(16);
    glPopMatrix();

    ///Right

    glPushMatrix();
    glTranslatef(-760+shift,410,0);
    circle(16);
    glPopMatrix();


    ///middle_Fill
    glPushMatrix();
    glTranslatef(-755+shift,410,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-750+shift,410,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-745+shift,404,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-740+shift,404,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-735+shift,404,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-730+shift,404,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-725+shift,404,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-720+shift,404,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-715+shift,404,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-710+shift,404,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-705+shift,404,0);
    circle(10);
    glPopMatrix();

    glFlush();
    glutSwapBuffers();
    ///****Fill End****

}

void cloud_model_Two(){
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(-505+shift,405,0);
    circle(20);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(-520+shift,410,0);
    circle(29);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(-534+shift,407,0);
    circle(20);
    glPopMatrix();

    ///Bottom_Part
    glPushMatrix();
    glTranslatef(-520+shift,407,0);
    circle(20);
    glPopMatrix();

    glFlush();
    glutSwapBuffers();

}

void cloud_model_Three(){
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(-100+shift,400,0);
    circle(15);
    glPopMatrix();

    ///Top_Left

    glPushMatrix();
    glTranslatef(-120+shift,410,0);
    circle(15);
    glPopMatrix();

    ///Top
    glPushMatrix();
    glTranslatef(-140+shift,420,0);
    circle(16);
    glPopMatrix();

    ///Top_Right
    glPushMatrix();
    glTranslatef(-160+shift,410,0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(-180+shift,400,0);
    circle(15);
    glPopMatrix();

    ///Bottom_Right
    glPushMatrix();
    glTranslatef(-160+shift,390,0);
    circle(20);
    glPopMatrix();

    ///Bottom_Left
    glPushMatrix();
    glTranslatef(-120+shift,390,0);
    circle(20);
    glPopMatrix();

    ///Bottom
    glPushMatrix();
    glTranslatef(-140+shift,390,0);
    circle(20);
    glPopMatrix();



    glFlush();
    glutSwapBuffers();

    ///****Fill End****

}
void key(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_LEFT:
        shift--;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        shift++;
        glutPostRedisplay();
        break;


    }

}

void circle(int rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2f(980 +rad* cos(theta),300+rad * sin(theta));
        }
    }
    glEnd();
}



int main(int argc, char ** argv)
{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(200, 100);

    glutInitWindowSize(1000, 600);

    glutCreateWindow("2D House in OpenGL ");
//    circle();
    init();
    glutSpecialFunc(key);

    glutDisplayFunc(display);


    glutMainLoop();
}
