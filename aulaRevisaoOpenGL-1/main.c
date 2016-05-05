#include <GL/glut.h>
#include <math.h>

const int A = 800; //Quantidade de pixels para formacao da janela
const float B = 500; //Area do desenho
const num_linhas = 3000;

GLfloat zoom=0.1;
GLfloat rotacao = 60;
void myinit(void)
{
glClearColor(255, 255, 255, 255); // cor do plano de fundo em RGB
glMatrixMode(GL_PROJECTION);//Coordenadas do plano cartesiano
glLoadIdentity(); //carregando a area do desenho
1gluOrtho2D( 0, 150, 0, 100);// daimensionamento do plano de fundo tanto para mais como para menos em ambos os lados
glMatrixMode(GL_MODELVIEW); //gerando a visualizacao do modelo
}


void teclado(unsigned char tecla, int x, int y)
{
switch (tecla) {
case 'Z':
	zoom+=0.01;
	rotacao+=10;
if(zoom>10.0)
	zoom=0.01;
	break;

case 'z':
	zoom-=0.01;
	rotacao-=10;
if(zoom<=0.0)
	zoom=0.01;
break;
}
glutPostRedisplay();
}

void display( void )
{
float angulo = 0;
int i, j;
float raio;

glClear(GL_COLOR_BUFFER_BIT); //limpa a janela
glMatrixMode(GL_MODELVIEW); //gerando o quadrado para a visualizacao
glLoadIdentity(); //carregando a area do quadrado

glScalef(zoom, zoom, 1);
glRotatef(rotacao, 0.0f, 0.0f, rotacao);

glBegin(GL_POLYGON);
glColor3f(0, 0.75, 0);
glVertex2f(0, 0);
glVertex2f(0,50);
glVertex2f(75, 50);
glVertex2f(75,0);
glEnd();

glScalef(0.5f, 0.5f, 1.0f);
glBegin(GL_POLYGON); //parte amarela
glColor3f(1,1,0);
glVertex2f (10, 50);
glVertex2f (75, 90);
glVertex2f (140, 50);
glVertex2f (75, 10);
glEnd();

 glBegin(GL_LINE_LOOP); //bola azul
	for(i = 0; i < num_linhas; i++) {
		angulo = i * 2 * M_PI / num_linhas;
		for(j = 25; j >= 0; j--) {
			glColor3f(0,0,0.8);
			glVertex2f(75 + (cos(angulo) * j), 50 + (sin(angulo) * j));
		}
	}

glEnd();

glBegin(GL_TRIANGLE_STRIP); //parte branca
glColor3f(1,1,1);
glVertex2f (50, 55);
glVertex2f (52, 60);
glVertex2f (55, 56);
glVertex2f (55, 61);
glVertex2f (62, 57);
glVertex2f (62, 62);
glVertex2f (67, 56);
glVertex2f (67, 61);
glVertex2f (72, 55);
glVertex2f (72, 60);
glVertex2f (77, 53);
glVertex2f (77, 58);
glVertex2f (80, 52);
glVertex2f (80, 57);
glVertex2f (85, 50);
glVertex2f (85, 55);
glVertex2f (90, 48);
glVertex2f (90, 53);
glVertex2f (92, 47);
glVertex2f (92, 52);
glVertex2f (98, 42);
glVertex2f (98, 47);
glVertex2f (98, 40);
glVertex2f (100, 45);
glEnd();

glBegin(GL_POINTS); //estrelas
glPointSize(100.0f);
glColor3f(1,1,1);

glVertex2f (86, 57);
glVertex2f (85, 48);

glVertex2f (75, 45);
glVertex2f (75, 40);
glVertex2f (75, 30);
glVertex2f (72, 44);
glVertex2f (77, 44);
glVertex2f (73, 43);


glVertex2f (65, 47);

glVertex2f (57, 44.5);
glVertex2f (55, 44);
glVertex2f (53, 43);

glVertex2f (54, 54);

glVertex2f (64.5, 38);
glVertex2f (61, 40);
glVertex2f (62, 41);

glVertex2f (96, 40);
glVertex2f (92, 40);
glVertex2f (94, 38);
glVertex2f (91, 36);
glVertex2f (89, 35);
glVertex2f (87, 36);
glVertex2f (87, 34);
glVertex2f (87, 32);
glVertex2f (85, 35);
glVertex2f (83, 33.8);
glVertex2f (82, 35.5);

glEnd();


glFlush(); //gera todos os comandos
}

void main(int argc, char** argv){
glutInit(&argc,argv);
glutInitWindowSize( A, B ); //vai gerar uma janela com a quantidade de pixels definida
glutInitDisplayMode( GLUT_RGB | GLUT_SINGLE); //
glutCreateWindow("Bandeira do Brasil"); /* window title */
glutDisplayFunc(display); //chama a funcao display
glutKeyboardFunc(teclado);
myinit(); /* set attributes */
glutMainLoop(); /* pass control to the main loop */
}
