#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat j = 0.0f;

void initGL()
{
    glClearColor(1.0f, 1.f, 1.0f, 1.0f); // Black and opaque
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{ //glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	//glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	  // Render now

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    GLfloat x=0.0f; GLfloat y=0.0; GLfloat radius =.6f;
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}

	glEnd();


	//glClear(GL_COLOR_BUFFER_BIT);


	//glTranslatef(0,0,0);
//Reset the current matrix
    //glTranslatef(0,0,0);
          glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -0.03f);
    glVertex2f( -0.03f, 0.3f);
     glVertex2f(0.0f, 0.4f);
    glVertex2f( 0.03f, 0.3f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.18f, 0.13f);
     glVertex2f(-0.2f, 0.2f);
    glVertex2f( -0.13f, 0.18f);
    glEnd();
   // glFlush();
   //glTranslatef(0.0f,0.0f,0.0f);

   // glTranslatef(0,0,0);
    // glTranslatef(0.0f,0.0f,0.0f);
            glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.47f, 0.0f);
    glVertex2f( 0.6f, 0.0f);
    glVertex2f(0.5f, 0.33f);
    glVertex2f( 0.42f, 0.26f);
      glVertex2f(-0.5f, -0.33f);
    glVertex2f( -0.42f, -0.26f);
      glVertex2f(0.5f, -0.33f);
    glVertex2f(0.42f, -0.26f);
      glVertex2f(-0.5f, 0.33f);
    glVertex2f( -0.42f, 0.26f);
      glVertex2f(0.266f, 0.55f);
    glVertex2f( 0.22f, 0.42f);
     glVertex2f(0.266f, -0.55f);
    glVertex2f( 0.22f, -0.42f);
     glVertex2f(-0.266f, -0.55f);
    glVertex2f(-0.22f, -0.42f);
     glVertex2f(-0.266f,0.55f);
    glVertex2f(-0.22f,0.42f);
     glVertex2f(0.0f, 0.47f);
    glVertex2f( 0.0f, 0.6f);
    glVertex2f(-0.47f,0.0f);
    glVertex2f( -0.6f, 0.0f);
     glVertex2f(0.0f, -0.47f);
    glVertex2f(0.0f, -0.6f);
     glVertex2f(0.7f, 0.0f);
    glVertex2f( 0.7f, 0.6f);
     glVertex2f(0.7f, 0.6f);
    glVertex2f( 0.6f, 0.7f);
     glVertex2f(0.6f, 0.7f);
    glVertex2f( -0.6f, 0.7f);
     glVertex2f(-0.6f, 0.7f);
    glVertex2f( -0.7f, 0.6f);
     glVertex2f(-0.7f, 0.6f);
    glVertex2f( -0.7f, -0.6f);
     glVertex2f(-0.7f, -0.6f);
    glVertex2f( -0.6f, -0.7f);
     glVertex2f(-0.6f, -0.7f);
    glVertex2f( 0.6f, -0.7f);
     glVertex2f(0.6f, -0.7f);
    glVertex2f( 0.7f, -0.6f);
     glVertex2f(0.7f, -0.6f);
    glVertex2f(0.7f, 0.0f);
     glEnd();
           glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.6f,0.7f);
    glVertex2f(0.6f, 0.8f);
     glVertex2f(-0.6f, 0.8f);
    glVertex2f( -0.6f, 0.7f);

   glEnd();
              glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6f,0.7f);
    glVertex2f(-0.6f, 0.8f);
     glVertex2f(-0.8f, 0.6f);
    glVertex2f( -0.7f, 0.6f);

   glEnd();
              glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f,0.6f);
    glVertex2f(-0.8f, 0.6f);
     glVertex2f(-0.8f, -0.6f);
    glVertex2f( -0.7f, -0.6f);

   glEnd();
              glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f,-0.6f);
    glVertex2f(-0.8f, -0.6f);
     glVertex2f(-0.6f, -0.8f);
    glVertex2f( -0.6f, -0.7f);

   glEnd();
              glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6f,-0.7f);
    glVertex2f(-0.6f, -0.8f);
     glVertex2f(0.6f, -0.8f);
    glVertex2f( 0.6f, -0.7f);

   glEnd();
              glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.6f,-0.7f);
    glVertex2f(0.6f, -0.8f);
     glVertex2f(0.8f, -0.6f);
    glVertex2f( 0.7f, -0.6f);

   glEnd();
              glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.7f,-0.6f);
    glVertex2f(0.8f, -0.6f);
     glVertex2f(0.8f, 0.6f);
    glVertex2f(0.7f, 0.6f);

   glEnd();
              glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.7f,0.6f);
    glVertex2f(0.8f, 0.6f);
     glVertex2f(0.6f, 0.8f);
    glVertex2f(0.6f, 0.7f);

   glEnd();
    glPushMatrix(); //glPushMatrix copies the tp matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(j,0.0,0.0,1.0);//i=how many degree you want to rotate around an axis
//glLineWidth(3.0);
    //glTranslatef(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(.0f, 0.0f);
    glVertex2f( 0.4f, 0.0f);
    glEnd();
    glPopMatrix();
    j-=0.002f;
    glFlush();

// glLoadIdentity();//Reset the current matrix
    // glLoadIdentity();//Reset the current matrix

//glVertex2f(.5f, .3f);
   // glVertex2f( .7f, 0.3f);
glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//
    initGL();
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;}
