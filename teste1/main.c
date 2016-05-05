#include <GL/glut.h>
#include <math.h>

const int A = 500; /* length of a side of the monitor window */
const float B = 500; /* length of a side of the clipping rectangle */
const float C = 200; /* length of a side of the square the program draws */
void myinit(void)
{
glClearColor(1, 1, 1, 0.0); /* gray background */
glMatrixMode(GL_PROJECTION); /* In World coordinates: */
glLoadIdentity(); /* position the "clipping rectangle" */
gluOrtho2D( -2, 2, -2, 2);/* at -B/2, its right edge at +B/2, its bottom */
glMatrixMode(GL_MODELVIEW); /* edge at -B/2 and its top edge at +B/2 */
}
void display( void )
{
glClear(GL_COLOR_BUFFER_BIT); /* clear the window */
glMatrixMode(GL_MODELVIEW); /* The following coordinates are expressed */
glLoadIdentity(); /* in terms of World coordinates */


glBegin(GL_POLYGON) ; /* draw a filled polygon */

glColor3f ( 0, 0, 0); /* draw in light red */

int R = 100;
int x = 0;
int y = 0;
int s = 72;
int t = 90;

glVertex2f(0,0);
glVertex2f(x+R*cos((0*s+t)*M_PI/180), y+R*sin((0*s+t)*M_PI/180)); /* (x,y) */
glVertex2f(x+R*cos((2*s+t)*M_PI/180), y+R*sin((2*s+t)*M_PI/180)); /* (x,y) */
glVertex2f(x+R*cos((4*s+t)*M_PI/180), y+R*sin((4*s+t)*M_PI/180)); /* (x,y) */
glVertex2f(x+R*cos((1*s+t)*M_PI/180), y+R*sin((1*s+t)*M_PI/180)); /* (x,y) */
glVertex2f(x+R*cos((3*s+t)*M_PI/180), y+R*sin((3*s+t)*M_PI/180)); /* (x,y) */

glVertex2f(x+R*cos((0*s+t)*M_PI/180), y+R*sin((0*s+t)*M_PI/180)); /* (x,y) */

glEnd();



glFlush(); /* send all commands */
}
void main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitWindowSize( A, A ); /* A x A pixel screen window */
glutInitDisplayMode( GLUT_RGB | GLUT_SINGLE);
glutCreateWindow("My Rectangle"); /* window title */
glutDisplayFunc(display); /* tell OpenGL main loop what */
myinit(); /* set attributes */
glutMainLoop(); /* pass control to the main loop */
}
