#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <GL/glx.h> /* this includes the necessary X headers */
#include <GL/gl.h>
#include <X11/X.h> /* X11 constant (e.g. TrueColor) */
#include <X11/keysym.h>
#include <math.h>




const int A = 500; //Quantidade de pixels para formacao da janela
const float B = 500; //Area do desenho

void myinit(void)
{
glClearColor(0, 0, 0, 0.0); // cor do plano de fundo em RGB
glMatrixMode(GL_PROJECTION);//Coordenadas do plano cartesiano
glLoadIdentity(); //carregando a area do desenho
gluOrtho2D( 0, 100, 0, 100);// dimensionamento do plano de fundo tanto para mais como para menos em ambos os lados
glMatrixMode(GL_MODELVIEW); //gerando a visualizacao do modelo
}

void display( void )
{
glClear(GL_COLOR_BUFFER_BIT); //limpa a janela
glMatrixMode(GL_MODELVIEW); //gerando o quadrado para a visualizacao
glLoadIdentity(); //carregando a area do quadrado

glBegin(GL_POLYGON);
glColor3f(0,0,255);
 glVertex3f(20,20,0);
 glVertex3f(50,20,0);
 glVertex3f(80,50,0);
 glVertex3f(80,80,0);
 glVertex3f(20,80,0);

glEnd();

glFlush(); //gera todos os comandos
}
void main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitWindowSize( A, A ); //vai gerar uma janela com a quantidade de pixels definida
glutInitDisplayMode( GLUT_RGB | GLUT_SINGLE); //
glutCreateWindow("Exercicio 1"); /* window title */
glutDisplayFunc(display); //chama a funcao display
myinit(); /* set attributes */
glutMainLoop(); /* pass control to the main loop */
}
