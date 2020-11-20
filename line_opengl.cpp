#include <iostream> 
#include <GL/gl.h> 
#include <GL/glut.h> 
#include <GL/glu.h> 
using namespace std; 
void init() {
    glClearColor(0.0,0.0,0.0,1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-500,500,-500,500);
}
void display() { 
    glClear(GL_COLOR_BUFFER_BIT); 
    glLoadIdentity(); 

    glBegin(GL_LINES); 
    glVertex2f(-100,0); 
    glVertex2f(100,0); 
    glVertex2f(0,100);
    glVertex2f(0,-100); 
    glEnd(); 
    
    glBegin(GL_POINTS); 
    glVertex2f(-30,30); 
    glEnd(); 

    glColor3f (0.0, 1.0, 0.0); 

    glBegin(GL_LINE_LOOP); 
    glVertex2f(-10,5); 
    glVertex2f(20,-10);
    glVertex2f(30,15); 
    glVertex2f(50,0); 
    glEnd(); 
    
    glColor3f (0.0, 0.0, 1.0); 

    glBegin(GL_LINE_STRIP); 
    glVertex2f(-15,10); 
    glVertex2f(25,15); 
    glVertex2f(-10,-20); 
    glVertex2f(20,-15);
    glEnd(); 
    glColor3f (1.0, 0.0, 0.0); 

    glBegin(GL_TRIANGLES); 
    glVertex2f(-30,35); 
    glVertex2f(20,45); 
    glVertex2f(55,70); 
    glEnd();

    //glShadeModel(GL_FLAT);
    glBegin(GL_TRIANGLE_STRIP); 
    glColor3f(1.0, 1.0, 0.0); 
    glVertex2f(-30,35); 
    glVertex2f(20,45); 
    glVertex2f(55,70);  
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2f(-20,-20); 
    glColor3f(1.0, 0.0, 1.0); 
    glVertex2f(-10,55); 
    glEnd(); 

    glShadeModel(GL_FLAT);

    glBegin(GL_TRIANGLE_FAN); 
    glColor3f(1.0, 1.0, 0.0); 
    glVertex2f(-30,35); 
    glVertex2f(20,45); 
    glVertex2f(55,70);  
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2f(-20,-20); 
    glColor3f(1.0, 0.0, 1.0); 
    glVertex2f(-10,55); 
    glEnd(); 


    glutSwapBuffers(); 
} 

void reshape(int w, int h){ 
    glViewport(0,0,(GLsizei)w,(GLsizei)h); 
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    gluOrtho2D(-100,100,-100,100); 
    glMatrixMode(GL_MODELVIEW); 
} 

int main(int argc, char *argv[]) 
{ 
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); glutInitWindowPosition(800,100); 
    glutInitWindowSize(500,500); 
    glutCreateWindow("Line Strip"); 
    glutDisplayFunc(display); 
    glutReshapeFunc(reshape); 
    init(); 
    glutMainLoop(); 
    return 0; 
}
