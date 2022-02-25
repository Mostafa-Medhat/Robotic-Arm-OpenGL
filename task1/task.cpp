

//   Task 1 computer graphics
// 
// 
// 
// name:abdelrahman khaled           sec : 1               B.N : 50
//
// name : moustafa medhat            sec : 2               B.N : 32
//
// name : hisham gamal abdelhady     sec : 2               B.N : 46
//
// name : mohab hisham               sec : 2               B.N : 34








#include <stdlib.h>
#include <GL/glut.h>

static int shoulder = 0, elbow = 0, littleFingerBase = 0, littleFingerUp = 0 , ringFingerBase = 0 ,ringFingerUp = 0 , middleFingerBase = 0 , middleFingerUp = 0 , indexFingerBase = 0 , indexFingerUp = 0 , thumbFingerBase=0 , thumbFingerUp = 0;
int moving, startx, starty;



GLfloat angle = 0.0;   /* in degrees */
GLfloat angle2 = 0.0;   /* in degrees */


void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(angle2, 1.0, 0.0, 0.0);
    glRotatef(angle, 0.0, 1.0, 0.0);
    glTranslatef(-2.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.6, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.6, 1.0);
    glutWireCube(1.0);
    glPopMatrix();


    //Draw ring finger
    glPushMatrix();
    glTranslatef(1.0, 0.25, 0.15);
    glRotatef((GLfloat)ringFingerBase, 0.0, 0.0, 1.0);//ring finger flang 1
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)ringFingerUp, 0.0, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)ringFingerUp, 0.0, 0.0, 1.0); //ring finger flang 3
    glTranslatef(0.15, 0.0, 0.0);
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();

    //Draw little finger 
    glPushMatrix();
    glTranslatef(1.0, 0.25, 0.0);
    glRotatef((GLfloat)littleFingerBase, 0.0, 0.0, 1.0); //little finger flang 1 
    glTranslatef(0.15, 0.0, 0.45);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)littleFingerUp, 0.0, 0.0, 1.0); //little finger flang 2 
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)littleFingerUp, 0.0, 0.0, 1.0); //little finger flang 3 
    glTranslatef(0.15, 0.0, 0.0);
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();


    //Draw middle finger
    glPushMatrix();
    glTranslatef(1.0, 0.25, 0.0);
    glRotatef((GLfloat)middleFingerBase, 0.0, 0.0, 1.0); //middle finger flang 1
    glTranslatef(0.15, 0.0, -0.15);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)middleFingerUp, 0.0, 0.0, 1.0); //middle finger flang 2
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)middleFingerUp, 0.0, 0.0, 1.0); //middle finger flang 3
    glTranslatef(0.15, 0.0, 0.0);
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();


    //Draw index finger
    glPushMatrix();
    glTranslatef(1.0, 0.25, 0.0);
    glRotatef((GLfloat)indexFingerBase, 0.0, 0.0, 1.0); // index finger flang 1
    glTranslatef(0.15, 0.0, -0.45); 
    glPushMatrix();
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)indexFingerUp, 0.0, 0.0, 1.0); // index finger flang 2
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)indexFingerUp, 0.0, 0.0, 1.0); // index finger flang 3
    glTranslatef(0.15, 0.0, 0.0);
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    
   
    // Draw thumb finger
    glPushMatrix();
    glTranslatef(1.0, -0.25, -0.45);
    glRotatef((GLfloat)thumbFingerBase, 0.0, 2.5, -1.0); // thumb finger flang 1
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)thumbFingerUp, 0.0, 2.5, -1.0); // thumb finger flang 2
    glTranslatef(0.15, 0.0, 0.0);
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
    glutPostRedisplay();
    
}

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(85.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
            
    case 'h':
        if (middleFingerBase >= 5) { 

            if (middleFingerUp >= 5) { break; }
            else {
                thumbFingerUp = (thumbFingerUp + 5) ;
                indexFingerUp = (indexFingerUp + 5) ;
                middleFingerUp = (middleFingerUp + 5) ;
                ringFingerUp = (ringFingerUp + 5) ;
                littleFingerUp = (littleFingerUp + 5) ;
                glutPostRedisplay();
                break;
            }
        
        }
        else {
            thumbFingerBase = (thumbFingerBase + 5) ;
            indexFingerBase = (indexFingerBase + 5) ;
            middleFingerBase = (middleFingerBase + 5) ;
            ringFingerBase = (ringFingerBase + 5) ;
            littleFingerBase = (littleFingerBase + 5) ;
            thumbFingerUp = (thumbFingerUp + 5) ;
            indexFingerUp = (indexFingerUp + 5) ;
            middleFingerUp = (middleFingerUp + 5) ;
            ringFingerUp = (ringFingerUp + 5) ;
            littleFingerUp = (littleFingerUp + 5) ;
            glutPostRedisplay();
            break;
        }

    case 'H':
        if (middleFingerBase <= -40) { 
            if (middleFingerUp <= -70) { break; }
            else {
                thumbFingerUp = (thumbFingerUp - 5) ;
                indexFingerUp = (indexFingerUp - 5) ;
                middleFingerUp = (middleFingerUp - 5) ;
                ringFingerUp = (ringFingerUp - 5) ;
                littleFingerUp = (littleFingerUp - 5) ;
                glutPostRedisplay();
                break;
            }
        }
        else {
            thumbFingerBase = (thumbFingerBase - 5) ;
            indexFingerBase = (indexFingerBase - 5) ;
            middleFingerBase = (middleFingerBase - 5) ;
            ringFingerBase = (ringFingerBase - 5) ;
            littleFingerBase = (littleFingerBase - 5) ;
            thumbFingerUp = (thumbFingerUp - 5) ;
            indexFingerUp = (indexFingerUp - 5) ;
            middleFingerUp = (middleFingerUp - 5) ;
            ringFingerUp = (ringFingerUp - 5) ;
            littleFingerUp = (littleFingerUp - 5) ;
            glutPostRedisplay();
            break;
        }
     
    case 'c':
        if (shoulder >= 120) { break; }
        else
        {
            shoulder = (shoulder + 5) ;
           
            break;
        }
    case 'C':
        if (shoulder <= -90) { break; }
        else {
            shoulder = (shoulder - 5) ;
            glutPostRedisplay();
            break;
        }
    case 'x':
        if (elbow >= 0) {
            break;
        }
        else {
            elbow = (elbow + 5);
            glutPostRedisplay();

            break;
        }
    case 'X':
        if (elbow <= -170) {
            break;
        }
        else {
            elbow = (elbow - 5) ;
            glutPostRedisplay();

            break;
        }
    case 's':
        if (indexFingerBase >= 5) { break; }
        else {
            indexFingerBase = (indexFingerBase + 5) ;
            glutPostRedisplay();
            break;
        }
    case 'S':
        if (indexFingerBase <= -40) { break; }
        else {
            indexFingerBase = (indexFingerBase - 5) ;
            glutPostRedisplay();
            break;
        }
    case 'w':
        if (indexFingerUp >= 5) { break; }
        else
        {
            indexFingerUp = (indexFingerUp + 5) ;
            glutPostRedisplay();
            break;
        }
    case 'W':
        if (indexFingerUp <= -70) { break; }
        else {
            indexFingerUp = (indexFingerUp - 5);
            glutPostRedisplay();
            break;
        }
    case 'd':
        if (middleFingerBase >= 5) { break; }
        else {
            middleFingerBase = (middleFingerBase + 5) ;
            glutPostRedisplay();
            break;
        }
    case 'D':
        if (middleFingerBase <= -40) { break; }
        else {
            middleFingerBase = (middleFingerBase - 5);
            glutPostRedisplay();
            break;
        }
    case 'e':
        if (middleFingerUp >= 5) { break; }
        else
        {
            middleFingerUp = (middleFingerUp + 5);
            glutPostRedisplay();
            break;
        }
    case 'E':
        if (middleFingerUp <= -70) { break; }
        else {
            middleFingerUp = (middleFingerUp - 5) ;
            glutPostRedisplay();
            break;
        }
    case 'f':
        if (ringFingerBase >= 5) { break; }
        else {
            ringFingerBase = (ringFingerBase + 5);
            glutPostRedisplay();
            break;
        }
    case 'F':
        if (ringFingerBase <= -40) { break; }
        else {
            ringFingerBase = (ringFingerBase - 5);
            glutPostRedisplay();
            break;
        }
    case 'r':
        if (ringFingerUp >= 5) { break; }
        else
        {
            ringFingerUp = (ringFingerUp + 5) ;
            glutPostRedisplay();
            break;
        }
    case 'R':
        if (ringFingerUp <= -70) { break; }
        else {
            ringFingerUp = (ringFingerUp - 5);
            glutPostRedisplay();
            break;
        }
    case 'g':
        if (littleFingerBase >= 5) { break; }
        else {
            littleFingerBase = (littleFingerBase + 5) ;
            glutPostRedisplay();
            break;
        }
    case 'G':
        if (littleFingerBase <= -40) { break; }
        else {
            littleFingerBase = (littleFingerBase - 5);
            glutPostRedisplay();
            break;
        }
    case 't':
        if (littleFingerUp >= 5) { break; }
        else
        {
            littleFingerUp = (littleFingerUp + 5) ;
            glutPostRedisplay();
            break;
        }
    case 'T':
        if (littleFingerUp <= -70) { break; }
        else {
            littleFingerUp = (littleFingerUp - 5) ;
            glutPostRedisplay();
            break;
        }

    case 'q':
        if (thumbFingerUp >= 5) { break; }
        else {
            thumbFingerUp = (thumbFingerUp + 5) ;
            glutPostRedisplay();
            break;
        }
    case 'a':
        if (thumbFingerBase >= 70 ) { break; }
        else {
            thumbFingerBase = (thumbFingerBase + 5) ;
            glutPostRedisplay();
            break;
        }
    case 'Q':
        if (thumbFingerUp <= -80) { break; }
        else {
            thumbFingerUp = (thumbFingerUp - 5);
            glutPostRedisplay();
            break;
        }
    case 'A':
        if (thumbFingerBase <= -50) { break; }
        else {
            thumbFingerBase = (thumbFingerBase - 5) ;
            glutPostRedisplay();
            break;
        }

    
    default:
        break;
    }
}

static void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON) {
        if (state == GLUT_DOWN) {
            moving = 1;
            startx = x;
            starty = y;
        }
        if (state == GLUT_UP) {
            moving = 0;
        }
    }
}


static void motion(int x, int y)
{
    if (moving) {
        angle = angle + (x - startx);
        angle2 = angle2 + (y - starty);
        startx = x;
        starty = y;
        glutPostRedisplay();
    }
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
