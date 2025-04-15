#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;






// Function to generate random colors
void randomColor() {
    float r = (rand() % 100) / 100.0f;
    float g = (rand() % 100) / 100.0f;
    float b = (rand() % 100) / 100.0f;
    glColor3f(r, g, b);
}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
      glColor3f(0.161, 0.38, 0.004);
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void circle2(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
      glColor3f(0.0, 0.0, 0.0);
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}
void circle3(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
      glColor3f(1.0, 1.0, 1.0);
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void circle4(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 180; i++)
    {
      glColor3f(0.2, 0.631, 0.486);
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}


void drawCircle4(float x, float y, float radius) {
    glColor3f(0.0,0.0,0.0);
    GLUquadric* quadric = gluNewQuadric();  // Create a new quadric object
    glPushMatrix();  // Save the current transformation matrix
    glTranslatef(x, y, 0.0f);  // Move the circle to position (x, y)
    gluDisk(quadric, 0.0, radius, 100, 1); // Draw a circle (disk) with given radius
    gluDeleteQuadric(quadric);  // Clean up the quadric object
    glPopMatrix();  // Restore the previous transformation matrix
}






void drawCircle(float x, float y, float radius) {
    glColor3f(1.0,1.0,1.0);
    GLUquadric* quadric = gluNewQuadric();  // Create a new quadric object
    glPushMatrix();  // Save the current transformation matrix
    glTranslatef(x, y, 0.0f);  // Move the circle to position (x, y)
    gluDisk(quadric, 0.0, radius, 100, 1); // Draw a circle (disk) with given radius
    gluDeleteQuadric(quadric);  // Clean up the quadric object
    glPopMatrix();  // Restore the previous transformation matrix
}

void drawCirclez(float x, float y, float radius) {
    glColor3f(0.388, 0.671, 0.176);
    GLUquadric* quadric = gluNewQuadric();  // Create a new quadric object
    glPushMatrix();  // Save the current transformation matrix
    glTranslatef(x, y, 0.0f);  // Move the circle to position (x, y)
    gluDisk(quadric, 0.0, radius, 100, 1); // Draw a circle (disk) with given radius
    gluDeleteQuadric(quadric);  // Clean up the quadric object
    glPopMatrix();  // Restore the previous transformation matrix
}







void drawCircle2(float x, float y, float radius) {
    glColor3ub(34, 139, 34);
    GLUquadric* quadric = gluNewQuadric();  // Create a new quadric object
    glPushMatrix();  // Save the current transformation matrix
    glTranslatef(x, y, 0.0f);  // Move the circle to position (x, y)
    gluDisk(quadric, 0.0, radius, 100, 1); // Draw a circle (disk) with given radius
    gluDeleteQuadric(quadric);  // Clean up the quadric object
    glPopMatrix();  // Restore the previous transformation matrix
}


void drawCircle1(float x, float y, float radius) {
    GLUquadric* quadric = gluNewQuadric();  // Create a new quadric object

    glPushMatrix();  // Save the current transformation matrix

    // Translate to position (x, y)
    glTranslatef(x, y, 0.0f);

    // Scale along the X-axis to make it vertically stretched
    glScalef(1.0f, 3.0f, 1.0f);  // Scale on Y-axis to stretch vertically

    // Draw the circle (disk) with the given radius
    gluDisk(quadric, 0.0, radius, 100, 1); // Draw a filled disk

    gluDeleteQuadric(quadric);  // Clean up the quadric object
    glPopMatrix();  // Restore the previous transformation matrix
}

void drawCircle3(float x, float y, float radius) {
     glColor3ub(34, 139, 34);
    GLUquadric* quadric = gluNewQuadric();  // Create a new quadric object

    glPushMatrix();  // Save the current transformation matrix

    // Translate to position (x, y)
    glTranslatef(x, y, 0.0f);

    // Scale along the X-axis to make it vertically stretched
    glScalef(1.0f, 3.0f, 1.0f);  // Scale on Y-axis to stretch vertically

    // Draw the circle (disk) with the given radius
    gluDisk(quadric, 0.0, radius, 100, 1); // Draw a filled disk

    gluDeleteQuadric(quadric);  // Clean up the quadric object
    glPopMatrix();  // Restore the previous transformation matrix
}


void drawCircle5(float x, float y, float radius) {
     glColor3ub(34, 139, 38);
    GLUquadric* quadric = gluNewQuadric();  // Create a new quadric object

    glPushMatrix();  // Save the current transformation matrix

    // Translate to position (x, y)
    glTranslatef(x, y, 0.0f);

    // Scale along the X-axis to make it vertically stretched
    glScalef(3.0f, 2.0f, 6.0f);  // Scale on Y-axis to stretch vertically

    // Draw the circle (disk) with the given radius
    gluDisk(quadric, 0.0, radius, 100, 1); // Draw a filled disk

    gluDeleteQuadric(quadric);  // Clean up the quadric object
    glPopMatrix();  // Restore the previous transformation matrix
}


void drawCircle7(float x, float y, float radius) {
     glColor3f(0.0, 0.0, 0.0);
    GLUquadric* quadric = gluNewQuadric();  // Create a new quadric object

    glPushMatrix();  // Save the current transformation matrix

    // Translate to position (x, y)
    glTranslatef(x, y, 0.0f);

    // Scale along the X-axis to make it vertically stretched
    glScalef(3.0f, 2.0f, 6.0f);  // Scale on Y-axis to stretch vertically

    // Draw the circle (disk) with the given radius
    gluDisk(quadric, 0.0, radius, 100, 1); // Draw a filled disk

    gluDeleteQuadric(quadric);  // Clean up the quadric object
    glPopMatrix();  // Restore the previous transformation matrix
}



// Declare the shift variable
float shift = 0;
float shifti = 0;
float shif = 0;
float shi = 0;
float sh = 0;
float s = 0;
float si = 0;
float ok = 0;
float p = 0;







//float bx = 10;
float screenWidth = 1000; // Set your screen width
float ax = 10;
float cx = 10;
float dx = 10;
float lx = 10;
float rx = 10;
float dwx = 10;

float kx = 10;

float bxy = 10;
float bxz = 10;
float bxa = 10;
float er = 10;
float et = 10;
float timeElapsed = 0.0f;


void t(){

     glPushMatrix();
    glTranslatef(er, er, 0);

for (int j = 0; j < 100; ++j) {
    float vertical_offset = j * 35.0f; // Move each row 20 units vertically

    for (int i = 0; i < 100; ++i) {
        float horizontal_offset = i * 30.0f; // Move each window 20 units horizontally

        glBegin(GL_POLYGON);
            glColor3f(1.0, 1.0, 1.0); // Window color (White)
            glVertex2f(-55.0f + horizontal_offset, 997.0f - vertical_offset); // Window Vertex 1 (top left)
            glVertex2f(-59.0f + horizontal_offset, 997.0f - vertical_offset); // Window Vertex 2 (upper left)
            glVertex2f(-59.0f + horizontal_offset, 988.0f - vertical_offset); // Window Vertex 3 (middle left)
            glVertex2f(-55.0f + horizontal_offset, 988.0f - vertical_offset); // Window Vertex 4 (middle left)
        glEnd();
    }
}

glPopMatrix();
   // Move the cloud and reset if it crosses the screen width
    er -= 50.4f;
    if (er < -200) {  // When the cars move off the left side of the screen
            er = 100;  // Reset the cars to the right side of the screen
        }

    glutPostRedisplay();

}



void l(){

       glPushMatrix();
    glTranslatef(et, et, 0);

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 1.0); // Set the color to white

float statX = -55.0f; // Starting point for X-coordinate
float statY = 992.0f; // Initial Y-coordinate
float ap = 20.0f; // Distance between each line
float verticalOffset = 30.0f; // Vertical offset to move down for each repetition
float ggap = 50.0f; // Gap between the vertical lines

for (int i = 0; i < 300; ++i) {
    for (float x = statX; x <= 1000.0f; x += ap) {
        // Draw each line with an added gap to the Y-coordinate
        glVertex2f(x, statY); // Start point of the line
        glVertex2f(x, statY - 21.0f); // End point of the line (creating a vertical line with a small gap)
    }

    // Shift the Y-coordinate down for the next set of lines and add a gap between sets
    statY -= (verticalOffset + ggap);
}

glEnd();

glPopMatrix();
   // Move the cloud and reset if it crosses the screen width
    et -= 50.4f;
    if (et < -200) {  // When the cars move off the left side of the screen
            et = 100;  // Reset the cars to the right side of the screen
        }

    glutPostRedisplay();



}




void bird1() {
    // Update the time elapsed
    timeElapsed += 0.1f;  // Adjust the speed of the vibration

    // First line set
    for (int i = 0; i < 10; ++i) {
        float offsetX = i * -80.0f;  // Shift each set of lines 80 units horizontally
        float offsetY = (i % 2 == 0) ? -30.0f : 0.0f;

        glPushMatrix();

        // Apply the vibration effect to the kx value using sine wave
        float vibration = sin(timeElapsed + i) * 10.0f; // Modify '10.0f' to adjust the vibration amplitude
        glTranslatef(dwx + vibration, dwx + vibration, 0);  // Apply the vibration

        // First line of the set
        glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Color for the lines
        glVertex2f(845 + offsetX, 410 + offsetY);    // Vertex 1 (top left)
        glVertex2f(835 + offsetX, 410 + offsetY);    // Vertex 2 (top right)
        glEnd();

        // Second line of the set
        glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Color for the lines
        glVertex2f(845 + offsetX, 410 + offsetY);    // Vertex 1 (top left)
        glVertex2f(848 + offsetX, 405 + offsetY);    // Vertex 2 (upper right)
        glEnd();

        // Third line of the set
        glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Color for the lines
        glVertex2f(851 + offsetX, 410 + offsetY);    // Vertex 1 (top left)
        glVertex2f(848 + offsetX, 405 + offsetY);    // Vertex 2 (upper right)
        glEnd();

        // Fourth line of the set
        glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Color for the lines
        glVertex2f(851 + offsetX, 410 + offsetY);    // Vertex 1 (top left)
        glVertex2f(860 + offsetX, 410 + offsetY);    // Vertex 2 (top right)
        glEnd();

        glPopMatrix();
    }

    // Move the cloud and reset if it crosses the screen width
    dwx -= 3.0f;
    if (dwx < -1000) {  // When the objects move off the left side of the screen
        dwx = 1000;  // Reset the object to the right side of the screen
    }

    glutPostRedisplay();  // Redraw the screen
}

void bird() {
    // Update the time elapsed
    timeElapsed += 0.1f;  // Adjust the speed of the vibration

    // First line set
    for (int i = 0; i < 10; ++i) {
        float offsetX = i * -80.0f;  // Shift each set of lines 80 units horizontally
        float offsetY = (i % 2 == 0) ? -30.0f : 0.0f;

        glPushMatrix();

        // Apply the vibration effect to the kx value using sine wave
        float vibration = sin(timeElapsed + i) * 10.0f; // Modify '10.0f' to adjust the vibration amplitude
        glTranslatef(0
                     , kx + vibration, 0);  // Apply the vibration

        // First line of the set
        glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Color for the lines
        glVertex2f(845 + offsetX, 410 + offsetY);    // Vertex 1 (top left)
        glVertex2f(835 + offsetX, 410 + offsetY);    // Vertex 2 (top right)
        glEnd();

        // Second line of the set
        glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Color for the lines
        glVertex2f(845 + offsetX, 410 + offsetY);    // Vertex 1 (top left)
        glVertex2f(848 + offsetX, 405 + offsetY);    // Vertex 2 (upper right)
        glEnd();

        // Third line of the set
        glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Color for the lines
        glVertex2f(851 + offsetX, 410 + offsetY);    // Vertex 1 (top left)
        glVertex2f(848 + offsetX, 405 + offsetY);    // Vertex 2 (upper right)
        glEnd();

        // Fourth line of the set
        glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Color for the lines
        glVertex2f(851 + offsetX, 410 + offsetY);    // Vertex 1 (top left)
        glVertex2f(860 + offsetX, 410 + offsetY);    // Vertex 2 (top right)
        glEnd();

        glPopMatrix();
    }

    // Move the cloud and reset if it crosses the screen width
    kx -= 3.0f;
    if (kx < -10) {  // When the objects move off the left side of the screen
        kx = -9.5;  // Reset the object to the right side of the screen
    }

    glutPostRedisplay();  // Redraw the screen
}




void train(){

 glPushMatrix();
    glTranslatef(dx, 0, 0);


//train

for (int j = 0; j < 6; j++) {
    // Calculate the X offset for each house, introducing a gap of 2 units between each house
    float houseOffsetX = j * (81.25);  // House width (81.25) + gap

    // Assign a unique color to each house based on the iteration index
    switch (j) {
        case 0:
            glColor3f(1.0, 0.0, 0.0); // Red
            break;
        case 1:
            glColor3f(0.0, 1.0, 0.0); // Green
            break;
        case 2:
            glColor3f(0.0, 0.0, 1.0); // Blue
            break;
        case 3:
            glColor3f(1.0, 1.0, 0.0); // Yellow
            break;
        case 4:
            glColor3f(1.0, 0.0, 1.0); // Magenta
            break;
        case 5:
            glColor3f(0.0, 1.0, 1.0); // Cyan
            break;
        default:
            glColor3f(1.0, 1.0, 1.0); // White (just in case)
            break;
    }

    // Draw the house body
    glBegin(GL_POLYGON);
        glVertex2f(20 + houseOffsetX, 690);    // Vertex 1 (top left)
        glVertex2f(100 + houseOffsetX, 690);   // Vertex 2 (upper left)
        glVertex2f(100 + houseOffsetX, 670);   // Vertex 3 (middle left)
        glVertex2f(20 + houseOffsetX, 670);    // Vertex 4 (middle left)
    glEnd();

    // Draw the windows for this house
    for (int i = 0; i < 12; i++) {
        float windowOffsetX = 24 + i * 6 + houseOffsetX;  // X offset for window positioning (horizontal alignment with gap)
        float windowOffsetY = 687; // Y position stays constant for horizontal alignment

        glBegin(GL_POLYGON);
            glColor3f(1.0, 1.0, 1.0); // Window color (White)
            glVertex2f(windowOffsetX, windowOffsetY);       // Window Vertex 1 (top left)
            glVertex2f(windowOffsetX + 4, windowOffsetY);   // Window Vertex 2 (upper left)
            glVertex2f(windowOffsetX + 4, windowOffsetY - 4); // Window Vertex 3 (middle left)
            glVertex2f(windowOffsetX, windowOffsetY - 4);   // Window Vertex 4 (middle left)
        glEnd();
    }

      glBegin(GL_TRIANGLES);
        glVertex2f(20 , 690);    // Vertex 1 (top left)
        glVertex2f(20 , 670);   // Vertex 2 (upper left)
        glVertex2f(10 , 670);   // Vertex 3 (middle left)

    glEnd();


}
 glPopMatrix();

    // Move the cloud and reset if it crosses the screen width
    dx -= 4.4f;
    if (dx < -screenWidth) {  // When the cars move off the left side of the screen
            dx = screenWidth;  // Reset the cars to the right side of the screen
        }

    glutPostRedisplay();



}





void cars1() {
    // Loop for the cars
    for (int i = 0; i < 4; ++i) {
        glPushMatrix();
        glTranslatef(lx, 0, 0);

        float offsetX = i * 200; // Distance between each car (adjust as needed)

        // Define different colors for each car based on 'i'
        float r = 1.0f, g = 1.0f, b = 1.0f;

        // New color logic (change these colors)
        if (i == 0) {
            r = 0.1f; g = 0.5f; b = 0.9f; // Grey car
        } else if (i == 1) {
            r = 0.8f; g = 0.2f; b = 0.5f; // Pink car
        } else if (i == 2) {
            r = 0.2f; g = 0.6f; b = 0.8f; // Light Blue car
        } else if (i == 3) {
            r = 0.9f; g = 0.8f; b = 0.2f; // Light Yellow car
        } else if (i == 4) {
            r = 0.7f; g = 0.5f; b = 0.1f; // Dark Orange car
        } else if (i == 5) {
            r = 0.3f; g = 0.3f; b = 0.7f; // Blue car
        } else if (i == 6) {
            r = 0.6f; g = 0.8f; b = 0.2f; // Lime Green car
        } else if (i == 7) {
            r = 0.8f; g = 0.3f; b = 0.6f; // Navy Blue car
        }

        // Draw the car body (added 5 to all Y-axis parameters)
        glBegin(GL_POLYGON);
        glColor3f(r, g, b); // Set car color dynamically based on 'i'
        glVertex2f(100 + offsetX, 495);  // Vertex 1 (top left)
        glVertex2f(100 + offsetX, 480);  // Vertex 2 (upper left)
        glVertex2f(150 + offsetX, 480);  // Vertex 3 (middle left)
        glVertex2f(150 + offsetX, 495);  // Vertex 4 (middle left)
        glEnd();

        // Draw the car roof
        glBegin(GL_POLYGON);
        glColor3f(r, g, b); // Set car color dynamically based on 'i'
        glVertex2f(110 + offsetX, 505);  // Vertex 1 (top left)
        glVertex2f(140 + offsetX, 505);  // Vertex 2 (upper left)
        glVertex2f(140 + offsetX, 480);  // Vertex 3 (middle left)
        glVertex2f(110 + offsetX, 480);  // Vertex 4 (middle left)
        glEnd();

        // Draw the first window
        glBegin(GL_POLYGON);
        glColor3f(0.8, 0.8, 0.8);  // Light color for the window
        glVertex2f(113 + offsetX, 503);  // Top left of the first window
        glVertex2f(123 + offsetX, 503);  // Top right of the first window
        glVertex2f(123 + offsetX, 493);  // Bottom right of the first window
        glVertex2f(113 + offsetX, 493);  // Bottom left of the first window
        glEnd();

        // Draw the second window
        glBegin(GL_POLYGON);
        glColor3f(0.8, 0.8, 0.8);  // Light color for the window
        glVertex2f(128 + offsetX, 503);  // Top left of the second window
        glVertex2f(138 + offsetX, 503);  // Top right of the second window
        glVertex2f(138 + offsetX, 493);  // Bottom right of the second window
        glVertex2f(128 + offsetX, 493);  // Bottom left of the second window
        glEnd();

        // Draw the wheels (using the modified drawCircle and drawCircle2)
        drawCircle(110.0f + offsetX, 480.0f, 6.0f);
        drawCircle2(110.0f + offsetX, 480.0f, 2.0f);

        drawCircle(140.0f + offsetX, 480.0f, 6.0f);
        drawCircle2(140.0f + offsetX, 480.0f, 2.0f);

        glPopMatrix();
    }

    // Move the cloud and reset if it crosses the screen width
       lx -= 10.9f;
    if (lx < -screenWidth) {  // When the cars move off the left side of the screen
            lx = 1500;  // Reset the cars to the right side of the screen
        }

    glutPostRedisplay();
}





cargo1() {
    //cargo1
    for (int i = 0; i < 5; ++i) {
        glPushMatrix();
        glTranslatef(rx, 0, 0);
        float offsetX = i * 200; // Distance between each car (200 units gap)

        // Define colors for the body and roof
        float bodyColorR = 1.0f, bodyColorG = 1.0f, bodyColorB = 1.0f;
        float roofColorR = 1.0f, roofColorG = 1.0f, roofColorB = 1.0f;

        // Change the colors of the cars
        if (i == 0) {
            bodyColorR = 0.5f; bodyColorG = 0.2f; bodyColorB = 0.8f; // Purple body
            roofColorR = 0.2f; roofColorG = 0.5f; roofColorB = 0.8f; // Blue roof
        } else if (i == 1) {
            bodyColorR = 1.0f; bodyColorG = 0.3f; bodyColorB = 0.0f; // Bright Orange body
            roofColorR = 0.0f; roofColorG = 0.5f; roofColorB = 1.0f; // Blue roof
        } else if (i == 2) {
            bodyColorR = 0.0f; bodyColorG = 0.5f; bodyColorB = 0.0f; // Dark Green body
            roofColorR = 0.8f; roofColorG = 0.8f; roofColorB = 0.0f; // Yellow roof
        } else if (i == 3) {
            bodyColorR = 0.8f; bodyColorG = 0.0f; bodyColorB = 0.8f; // Magenta body
            roofColorR = 1.0f; roofColorG = 1.0f; roofColorB = 0.0f; // Yellow roof
        } else if (i == 4) {
            bodyColorR = 1.0f; bodyColorG = 0.5f; bodyColorB = 0.5f; // Light Red body
            roofColorR = 0.0f; roofColorG = 0.0f; roofColorB = 1.0f; // Blue roof
        } else if (i == 5) {
            bodyColorR = 0.3f; bodyColorG = 0.3f; bodyColorB = 0.3f; // Dark Gray body
            roofColorR = 1.0f; roofColorG = 0.3f; roofColorB = 0.0f; // Red roof
        } else if (i == 6) {
            bodyColorR = 0.2f; bodyColorG = 0.7f; bodyColorB = 0.3f; // Light Green body
            roofColorR = 0.5f; roofColorG = 0.3f; roofColorB = 0.8f; // Purple roof
        } else if (i == 7) {
            bodyColorR = 0.0f; bodyColorG = 0.0f; bodyColorB = 0.0f; // Black body
            roofColorR = 1.0f; roofColorG = 1.0f; roofColorB = 1.0f; // White roof
        }

       // Draw the body of the car (subtract 5 from all Y-axis parameters)
glBegin(GL_POLYGON);
glColor3f(bodyColorR, bodyColorG, bodyColorB);  // Set car body color dynamically
glVertex2f(200 + offsetX, 440);  // Vertex 1 (top left) - 425 - 5 = 420
glVertex2f(230 + offsetX, 440);  // Vertex 2 (upper left) - 425 - 5 = 420
glVertex2f(230 + offsetX, 475);  // Vertex 3 (middle left) - 460 - 5 = 455
glVertex2f(200 + offsetX, 475);  // Vertex 4 (middle left) - 460 - 5 = 455
glEnd();

// Draw the roof of the car (subtract 5 from all Y-axis parameters)
glBegin(GL_POLYGON);
glColor3f(roofColorR, roofColorG, roofColorB);  // Set car roof color dynamically
glVertex2f(230 + offsetX, 460);  // Vertex 1 (top left) - 445 - 5 = 440
glVertex2f(240 + offsetX, 460);  // Vertex 2 (upper left) - 445 - 5 = 440
glVertex2f(240 + offsetX, 440);  // Vertex 3 (middle left) - 425 - 5 = 420
glVertex2f(230 + offsetX, 440);  // Vertex 4 (middle left) - 425 - 5 = 420
glEnd();

// Draw the first window (subtract 5 from all Y-axis parameters)
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 0.8);  // Light color for the window
glVertex2f(231 + offsetX, 455);      // Top left of the first window - 440 - 5 = 435
glVertex2f(234 + offsetX, 455);      // Top right of the first window - 440 - 5 = 435
glVertex2f(234 + offsetX, 450);      // Bottom right of the first window - 435 - 5 = 430
glVertex2f(231 + offsetX, 450);      // Bottom left of the first window - 435 - 5 = 430
glEnd();

// Draw the second window (subtract 5 from all Y-axis parameters)
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 0.8);  // Light color for the window
glVertex2f(235 + offsetX, 455);      // Top left of the second window - 440 - 5 = 435
glVertex2f(240 + offsetX, 455);      // Top right of the second window - 440 - 5 = 435
glVertex2f(240 + offsetX, 450);      // Bottom right of the second window - 435 - 5 = 430
glVertex2f(235 + offsetX, 450);      // Bottom left of the second window - 435 - 5 = 430
glEnd();

// Draw the wheels (subtract 5 from all Y-axis parameters)
drawCircle(210.0f + offsetX, 440.0f, 6.0f); // 425 - 5 = 420
drawCircle2(210.0f + offsetX, 440.0f, 2.0f); // 425 - 5 = 420

drawCircle(228.0f + offsetX, 440.0f, 6.0f); // 425 - 5 = 420
drawCircle2(228.0f + offsetX, 440.0f, 2.0f); // 425 - 5 = 420


        glPopMatrix();

//        Move the cloud and reset if it crosses the screen width
        rx += 2.05f;
        if (rx > screenWidth) {  // When bx crosses the screen width, reset to the left
             rx = -1200;  // Reset to a point off-screen
        }

        glutPostRedisplay();
    }
}

























void cargo(){



//cargo
for (int i = 0; i < 8; ++i) {
              glPushMatrix();
    glTranslatef(cx, 0, 0);
    float offsetX = i * 200; // Distance between each car (200 units gap)

    // Define colors for the body and roof
    float bodyColorR = 1.0f, bodyColorG = 1.0f, bodyColorB = 1.0f;
    float roofColorR = 1.0f, roofColorG = 1.0f, roofColorB = 1.0f;

    // Example color logic (change these to your preference)
    if (i == 0) {
        bodyColorR = 1.0f; bodyColorG = 0.0f; bodyColorB = 0.0f; // Red body
        roofColorR = 0.0f; roofColorG = 0.0f; roofColorB = 1.0f; // Blue roof
    } else if (i == 1) {
        bodyColorR = 0.0f; bodyColorG = 1.0f; bodyColorB = 0.0f; // Green body
        roofColorR = 1.0f; roofColorG = 1.0f; roofColorB = 0.0f; // Yellow roof
    } else if (i == 2) {
        bodyColorR = 0.0f; bodyColorG = 0.0f; bodyColorB = 1.0f; // Blue body
        roofColorR = 1.0f; roofColorG = 0.5f; roofColorB = 0.0f; // Orange roof
    } else if (i == 3) {
        bodyColorR = 1.0f; bodyColorG = 1.0f; bodyColorB = 0.0f; // Yellow body
        roofColorR = 0.0f; roofColorG = 1.0f; roofColorB = 1.0f; // Cyan roof
    } else if (i == 4) {
        bodyColorR = 1.0f; bodyColorG = 0.5f; bodyColorB = 0.0f; // Orange body
        roofColorR = 0.5f; roofColorG = 0.0f; roofColorB = 0.5f; // Purple roof
    }else if (i == 5) {
        bodyColorR = 1.0f; bodyColorG = 0.5f; bodyColorB = 0.0f; // Orange body
        roofColorR = 0.5f; roofColorG = 0.0f; roofColorB = 0.5f; // Purple roof
    }else if (i == 6) {
        bodyColorR = 1.0f; bodyColorG = 0.5f; bodyColorB = 0.0f; // Orange body
        roofColorR = 0.5f; roofColorG = 0.0f; roofColorB = 0.5f; // Purple roof
    }else if (i == 7) {
        bodyColorR = 1.0f; bodyColorG = 0.5f; bodyColorB = 0.0f; // Orange body
        roofColorR = 0.5f; roofColorG = 0.0f; roofColorB = 0.5f; // Purple roof
    }else if (i == 8) {
        bodyColorR = 1.0f; bodyColorG = 0.5f; bodyColorB = 0.0f; // Orange body
        roofColorR = 0.5f; roofColorG = 0.0f; roofColorB = 0.5f; // Purple roof
    }

    // Draw the body of the car
    glBegin(GL_POLYGON);
    glColor3f(bodyColorR, bodyColorG, bodyColorB);  // Set car body color dynamically
    glVertex2f(200 + offsetX, 645);  // Vertex 1 (top left)
    glVertex2f(230 + offsetX, 645);  // Vertex 2 (upper left)
    glVertex2f(230 + offsetX, 680);  // Vertex 3 (middle left)
    glVertex2f(200 + offsetX, 680);  // Vertex 4 (middle left)
    glEnd();

    // Draw the roof of the car
    glBegin(GL_POLYGON);
    glColor3f(roofColorR, roofColorG, roofColorB);  // Set car roof color dynamically
    glVertex2f(230 + offsetX, 665);  // Vertex 1 (top left)
    glVertex2f(240 + offsetX, 665);  // Vertex 2 (upper left)
    glVertex2f(240 + offsetX, 645);  // Vertex 3 (middle left)
    glVertex2f(230 + offsetX, 645);  // Vertex 4 (middle left)
    glEnd();

    // Draw the first window
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.8);  // Light color for the window
    glVertex2f(231 + offsetX, 660);      // Top left of the first window
    glVertex2f(234 + offsetX, 660);      // Top right of the first window
    glVertex2f(234 + offsetX, 655);      // Bottom right of the first window
    glVertex2f(231 + offsetX, 655);      // Bottom left of the first window
    glEnd();

    // Draw the second window
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.8);  // Light color for the window
    glVertex2f(235 + offsetX, 660);      // Top left of the second window
    glVertex2f(240 + offsetX, 660);      // Top right of the second window
    glVertex2f(240 + offsetX, 655);      // Bottom right of the second window
    glVertex2f(235 + offsetX, 655);      // Bottom left of the second window
    glEnd();


    drawCircle(210.0f + offsetX, 645.0f, 6.0f);
drawCircle2(210.0f + offsetX, 645.0f, 2.0f);

drawCircle(228.0f + offsetX, 645.0f, 6.0f);
drawCircle2(228.0f + offsetX, 645.0f, 2.0f);


 glPopMatrix();

    // Move the cloud and reset if it crosses the screen width
    cx += 1.06f;
    if (cx > screenWidth) {  // When bx crosses the screen width, reset to the left
        cx = -1700;  // Reset to a point off-screen
    }

    glutPostRedisplay();


}


}

void cars(){




//cars
for (int i = 0; i < 8; ++i) {

        glPushMatrix();
    glTranslatef(ax, 0, 0);

    float offsetX = i * 200; // Distance between each car (adjust as needed)

    // Define different colors for each car based on 'i'
    float r = 1.0f, g = 1.0f, b = 1.0f;

    // Example color logic (change these to your preference)
    if (i == 0) {
        r = 1.0f; g = 0.0f; b = 0.0f; // Red car
    } else if (i == 1) {
        r = 0.0f; g = 1.0f; b = 0.0f; // Green car
    } else if (i == 2) {
        r = 0.0f; g = 0.0f; b = 1.0f; // Blue car
    } else if (i == 3) {
        r = 1.0f; g = 1.0f; b = 0.0f; // Yellow car
    } else if (i == 4) {
        r = 1.0f; g = 0.5f; b = 0.0f; // Orange car
    } else if (i == 5) {
        r = 0.5f; g = 0.0f; b = 0.5f; // Purple car
    }
    else if (i == 6) {
        r = 1.0f; g = 1.0f; b = 0.0f; // Yellow car
    } else if (i == 7) {
        r = 1.0f; g = 0.5f; b = 0.0f; // Orange car
    } else if (i == 8) {
        r = 0.5f; g = 0.0f; b = 0.5f; // Purple car
    }

    // Draw the car body
    glBegin(GL_POLYGON);
    glColor3f(r, g, b); // Set car color dynamically based on 'i'
    glVertex2f(100 + offsetX, 660);  // Vertex 1 (top left)
    glVertex2f(100 + offsetX, 645);  // Vertex 2 (upper left)
    glVertex2f(150 + offsetX, 645);  // Vertex 3 (middle left)
    glVertex2f(150 + offsetX, 660);  // Vertex 4 (middle left)
    glEnd();

    // Draw the car roof
    glBegin(GL_POLYGON);
    glColor3f(r, g, b); // Set car color dynamically based on 'i'
    glVertex2f(110 + offsetX, 670);  // Vertex 1 (top left)
    glVertex2f(140 + offsetX, 670);  // Vertex 2 (upper left)
    glVertex2f(140 + offsetX, 645);  // Vertex 3 (middle left)
    glVertex2f(110 + offsetX, 645);  // Vertex 4 (middle left)
    glEnd();

    // Draw the first window
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.8);  // Light color for the window
    glVertex2f(113 + offsetX, 668);  // Top left of the first window
    glVertex2f(123 + offsetX, 668);  // Top right of the first window
    glVertex2f(123 + offsetX, 658);  // Bottom right of the first window
    glVertex2f(113 + offsetX, 658);  // Bottom left of the first window
    glEnd();

    // Draw the second window
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.8);  // Light color for the window
    glVertex2f(128 + offsetX, 668);  // Top left of the second window
    glVertex2f(138 + offsetX, 668);  // Top right of the second window
    glVertex2f(138 + offsetX, 658);  // Bottom right of the second window
    glVertex2f(128 + offsetX, 658);  // Bottom left of the second window
    glEnd();

drawCircle(110.0f + offsetX, 645.0f, 6.0f);
drawCircle2(110.0f + offsetX, 645.0f, 2.0f);

drawCircle(140.0f + offsetX, 645.0f, 6.0f);
drawCircle2(140.0f + offsetX, 645.0f, 2.0f);



 glPopMatrix();

    // Move the cloud and reset if it crosses the screen width
    ax -= 1.5f;
    if (ax < -1500) {  // When the cars move off the left side of the screen
            ax = screenWidth;  // Reset the cars to the right side of the screen
        }

    glutPostRedisplay();

}








}
void clouds1()
{
    glPushMatrix();
    glTranslatef(bxy, 0, 0);

    // Draw the clouds (circles)
    drawCircle(250.0f, 900.0f, 30.0f);
    drawCircle(290.0f, 900.0f, 25.0f);
    drawCircle(210.0f, 900.0f, 25.0f);
    drawCircle(260.0f, 920.0f, 25.0f);
    drawCircle(240.0f, 920.0f, 25.0f);




    glPopMatrix();

    // Move the cloud and reset if it crosses the screen width
    bxy += 3.9f;
    if (bxy > screenWidth) {  // When bx crosses the screen width, reset to the left
        bxy = -1000;  // Reset to a point off-screen
    }

    glutPostRedisplay();  // Request a redraw
}


void clouds2()
{
    glPushMatrix();
    glTranslatef(bxz, 0, 0);



drawCircle(550.0f, 900.0f, 23.0f);  // Increased x by 300 (200 + 100), radius 23
drawCircle(590.0f, 900.0f, 20.0f);  // Increased x by 300 (200 + 100), radius 20
drawCircle(510.0f, 900.0f, 20.0f);  // Increased x by 300 (200 + 100), radius 20
drawCircle(560.0f, 920.0f, 20.0f);  // Increased x by 300 (200 + 100), radius 20
drawCircle(540.0f, 920.0f, 20.0f);  // Increased x by 300 (200 + 100), radius 20







    glPopMatrix();

    // Move the cloud and reset if it crosses the screen width
    bxz += 2.5f;
    if (bxz > screenWidth) {  // When bx crosses the screen width, reset to the left
        bxz = -1000;  // Reset to a point off-screen
    }

    glutPostRedisplay();  // Request a redraw
}




void clouds3()
{
    glPushMatrix();
    glTranslatef(bxa, 0, 0);








    drawCircle1(750.0f, 900.0f, 15.0f);
    drawCircle1(770.0f, 900.0f, 17.0f);
    drawCircle1(790.0f, 900.0f, 18.0f);
    drawCircle1(810.0f, 900.0f, 16.0f);
    drawCircle(740.0f, 900.0f, 20.0f);
    drawCircle(820.0f, 900.0f, 20.0f);

    glPopMatrix();

    // Move the cloud and reset if it crosses the screen width
    bxa += 2.0f;
    if (bxa > screenWidth) {  // When bx crosses the screen width, reset to the left
        bxa = -1000;  // Reset to a point off-screen
    }

    glutPostRedisplay();  // Request a redraw
}






void drawScene1() {




    //tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();
//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen
    glLoadIdentity(); // Reset the drawing perspective
    gluOrtho2D(0.0, 1000.0, 0.0, 1000.0); // Set orthographic projection range
    glMatrixMode(GL_MODELVIEW); // Set the matrix mode to modelview for 2D drawing

    // Drawing the sky (a blue rectangle)
 glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.3); // Dark blue color for night sky
    glVertex2f(0, 800); // Bottom-left corner
    glVertex2f(0, 1000); // Top-left corner
    glVertex2f(1000, 1000); // Top-right corner
    glVertex2f(1000, 800); // Bottom-right corner
glEnd();


    glPushMatrix();
    glTranslatef(500.0, 900.0, 0); // Move to center of the window (500, 900)




       // Draw the moon (simple white or gray circle)
    float radius = 25.0f; // Radius of the moon
    int num_segments = 100; // Number of segments to approximate the circle

    // Draw the moon itself
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f); // Light gray color for the moon
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments); // Calculate the angle for each vertex
        float x = radius * cos(theta); // X position of each vertex
        float y = radius * sin(theta); // Y position of each vertex
        glVertex2f(x, y); // Plot the vertex
    }
    glEnd();


clouds1();


clouds2();


clouds3();

//plane

  glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 920 ); // Bottom-left corner
    glVertex2f(600+ shifti, 940 ); // Top-left corner
    glVertex2f(680+ shifti, 940 ); // Top-right corner
    glVertex2f(680+ shifti, 920 ); // Bottom-right corner
    glEnd();



       glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(700+ shifti, 960 ); // Bottom-right corner
   glVertex2f(700+ shifti, 920 ); // Top-right corner
    glVertex2f(680+ shifti, 920) ; // Top-right corner

    glEnd();

        glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)

     glVertex2f(680+ shifti, 940 ); // Top-right corner
   glVertex2f(700 + shifti, 940 ); // Top-right corner
   glVertex2f(680 + shifti, 920 ); // Bottom-right corner

    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(640+ shifti, 930 ); // Bottom-left corner
    glVertex2f(650 + shifti, 930 ); // Top-left corner
     glVertex2f(670+ shifti, 890 ); // Bottom-right corner
    glVertex2f(660+ shifti, 890 ); // Top-right corner

    glEnd();

    drawCircle(600.0f + shifti, 930.0f, 10.0f);

  glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 935 ); // Bottom-left corner

    glVertex2f(600 + shifti, 933 ); // Top-left corner
    glVertex2f(680 + shifti, 933 ); // Bottom-right corner

    glVertex2f(680 + shifti, 935 ); // Top-right corner
    glEnd();


// the rocket


    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 890 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
    glVertex2f(90, 830 + shift); // Top-right corner
    glVertex2f(90, 890 + shift); // Bottom-right corner
    glEnd;



      glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 880 + shift); // Bottom-left corner
    glVertex2f(100, 870 + shift); // Top-left corner
    glVertex2f(90, 870 + shift); // Top-right corner
    glVertex2f(90, 880 + shift); // Bottom-right corner
    glEnd;




       glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.5); // Sky color (light blue)
    glVertex2f(100, 860 + shift); // Bottom-left corner
    glVertex2f(100, 850 + shift); // Top-left corner
    glVertex2f(90, 850 + shift); // Top-right corner
    glVertex2f(90, 860 + shift); // Bottom-right corner
    glEnd;




    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(90, 830 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
      glVertex2f(102, 815 + shift); // Top-right corner
       glVertex2f(88, 815 + shift); // Bottom-right corner


    glEnd();

   glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(95, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(92, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(98, 800 + shift); // Top-right corner

    glEnd();



      glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
     glVertex2f(90, 890 + shift); // Bottom-right corner

    glVertex2f(95, 910 + shift); // Top-right corner
     glVertex2f(100, 890 + shift); // Top-left corner

    glEnd();








///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.2, 0.1);  // Darker green, soft night color
    glVertex2f(0,800);
    glVertex2f(100,800);
    glVertex2f(50,850);
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.4, 0.1);  // Muted green for night effect
    glVertex2f(20,850);
    glVertex2f(100,800);
    glVertex2f(0,800);
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.4, 0.1);  // Muted green for night effect
    glVertex2f(70,850);
    glVertex2f(100,800);
    glVertex2f(0,800);
    glEnd();


/// hill 2

//polygon1//
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.3, 0.1);  // Darker green shade
    glVertex2f(100,800);
    glVertex2f(200,800);
    glVertex2f(180,835);
    glVertex2f(160,840);
    glVertex2f(155,845);
    glVertex2f(150,840);
    glVertex2f(130,845);
    glVertex2f(120,840);
    glVertex2f(150,835);
    glEnd();

/// hill3

glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.2);  // Darker green-blue for the hill at night
glVertex2f(200, 800);   // Vertex 1
glVertex2f(330, 800);   // Vertex 2
glVertex2f(330, 800);   // Vertex 3 (new point)
glVertex2f(330, 800);   // Vertex 4 (new point)
glVertex2f(310, 860);   // Vertex 5 (new point)
glVertex2f(270, 870);   // Vertex 6 (new point)
glVertex2f(230, 860);   // Vertex 7 (new point)
glVertex2f(200, 800);   // Vertex 8 (new point)
glEnd();





//hill 4

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(330, 800);    // Vertex 1 (top left)
glVertex2f(430, 800);    // Vertex 2 (upper left)
glVertex2f(430, 900);    // Vertex 3 (middle left)
glVertex2f(330, 900);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(330+33, 800);    // Vertex 1 (top left)

glVertex2f(330+33, 900);    // Vertex 3 (middle left)

glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430-33, 800);    // Vertex 2 (upper left)
glVertex2f(430-33, 900);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 825);    // Vertex 2 (upper left)
glVertex2f(330, 825);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 850);    // Vertex 2 (upper left)
glVertex2f(330, 850);    // Vertex 3 (middle left)
glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 875);    // Vertex 2 (upper left)
glVertex2f(330, 875);    // Vertex 3 (middle left)
glEnd();




int x_start = 330, x_end = 430; // X range
int y_start = 800, y_end = 900; // Y range
int horizontal_count = 3;       // Number of polygons horizontally
int vertical_count = 4;         // Number of polygons vertically

// Initial polygon points (given)
float initial_x = 347.0f;
float initial_y = 812.0f; // Corrected initial y value

// Loop to create the polygons
for (int i = 0; i < vertical_count; i++) {
    for (int j = 0; j < horizontal_count; j++) {
        // Calculate x and y positions for each polygon
        float x = initial_x + j * ((x_end - x_start) / horizontal_count);
        float y = initial_y + i * ((y_end - y_start) / vertical_count);

        // Draw the polygon at (x, y)
        glBegin(GL_POLYGON);
        glColor3f(0.125, 0.404, 0.49);  // Green color for the polygon (customize as needed)

        // Define 4 vertices for each polygon, with (x, y) as the center
        glVertex2f(x - 6, y + 5);   // Vertex 1 (top left)
        glVertex2f(x + 6, y + 5);   // Vertex 2 (top right)
        glVertex2f(x + 6, y - 5);   // Vertex 3 (bottom right)
        glVertex2f(x - 6, y - 5);   // Vertex 4 (bottom left)

        glEnd();
    }
}





///hill
glBegin(GL_POLYGON);
glColor3f(0.2, 0.4, 0.05);  // Darker, muted green color for nighttime
glVertex2f(430, 800);    // Vertex 1 (top left)
glVertex2f(530, 800);    // Vertex 2 (upper left)
glVertex2f(480, 840);    // Vertex 3 (middle left)
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.05);  // A deeper, darker green for a more subdued effect
glVertex2f(530, 800);    // Vertex 1 (top left)
glVertex2f(580, 800);    // Vertex 2 (upper left)
glVertex2f(555, 850);    // Vertex 3 (middle left)
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.1, 0.2, 0.1);  // Muted dark green to match nighttime ambiance
glVertex2f(580, 800);    // Vertex 1 (top left)
glVertex2f(555, 850);    // Vertex 2 (middle left)
glVertex2f(620, 800);    // Vertex 3 (middle left)
glEnd();



///new byulding

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(620, 800);    // Vertex 1 (top left)
glVertex2f(620, 900);    // Vertex 2 (upper left)
glVertex2f(730, 900);    // Vertex 3 (middle left)
glVertex2f(730, 800);    // Vertex 3 (middle left)

glEnd();




// Park dimensions and configuration
int x_range_start = 620, x_range_end = 720; // X range
int y_range_start = 800, y_range_end = 900; // Y range
int num_polygons_horizontal = 3;            // Number of polygons horizontally
int num_polygons_vertical = 4;              // Number of polygons vertically

// Initial position of the first polygon
float initial_pos_x = 642.0f;
float initial_pos_y = 810.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row = 0; row < num_polygons_vertical; row++) {
    for (int col = 0; col < num_polygons_horizontal; col++) {
        // Calculate X and Y positions for each polygon
        float pos_x = initial_pos_x + col * ((x_range_end - x_range_start) / num_polygons_horizontal);
        float pos_y = initial_pos_y + row * ((y_range_end - y_range_start) / num_polygons_vertical);

        // Draw the polygon at (pos_x, pos_y)
        glBegin(GL_POLYGON);
        glColor3f(0.153, 0.808, 0.961);  // Green color for the polygon (customize as needed)

        // Define 6 vertices for each polygon, with the (pos_x, pos_y) as the center
        glVertex2f(pos_x - 10, pos_y + 10);   // Vertex 1
        glVertex2f(pos_x + 10, pos_y + 10);   // Vertex 2
        glVertex2f(pos_x + 20, pos_y);        // Vertex 3
        glVertex2f(pos_x + 10, pos_y - 10);   // Vertex 4
        glVertex2f(pos_x - 10, pos_y - 10);   // Vertex 5
        glVertex2f(pos_x - 20, pos_y);        // Vertex 6

        glEnd();
    }
}


/// new building


glBegin(GL_POLYGON);
glColor3f(0.89, 0.105, 0.4); // Green color (for the shape)
glVertex2f(730, 800);    // Vertex 1 (top left)
glVertex2f(730, 850);    // Vertex 2 (upper left)
glVertex2f(845, 850);    // Vertex 3 (middle left)
glVertex2f(845, 800);    // Vertex 3 (middle left)

glEnd();

// Park dimensions and configuration
int park_x_start = 720, park_x_end = 820;   // X range for the park area
int park_y_start = 800, park_y_end = 850;   // Y range for the park area
int total_polygons_horizontal = 4;           // Number of polygons horizontally
int total_polygons_vertical = 4;             // Number of polygons vertically

// Initial position of the first polygon
float start_pos_x = 750.0f;
float start_pos_y = 807.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row_index = 0; row_index < total_polygons_vertical; row_index++) {
    for (int col_index = 0; col_index < total_polygons_horizontal; col_index++) {
        // Calculate X and Y positions for each polygon
        float polygon_pos_x = start_pos_x + col_index * ((park_x_end - park_x_start) / total_polygons_horizontal);
        float polygon_pos_y = start_pos_y + row_index * ((park_y_end - park_y_start) / total_polygons_vertical);

        // Draw the polygon at (polygon_pos_x, polygon_pos_y)
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygon (customize as needed)

        // Define 8 vertices for each polygon, with (polygon_pos_x, polygon_pos_y) as the center
        glVertex2f(polygon_pos_x - 6, polygon_pos_y + 3);  // Vertex 1
        glVertex2f(polygon_pos_x + 6, polygon_pos_y + 3);  // Vertex 2
        glVertex2f(polygon_pos_x + 15, polygon_pos_y + 2);   // Vertex 3
        glVertex2f(polygon_pos_x + 15, polygon_pos_y - 2);   // Vertex 4
        glVertex2f(polygon_pos_x + 6, polygon_pos_y - 3);  // Vertex 5
        glVertex2f(polygon_pos_x - 6, polygon_pos_y - 3);  // Vertex 6
        glVertex2f(polygon_pos_x - 15, polygon_pos_y - 2);   // Vertex 7
        glVertex2f(polygon_pos_x - 15, polygon_pos_y + 2);   // Vertex 8

        glEnd();
    }
}


///hill


glBegin(GL_POLYGON);
glColor3ub(34, 139, 34);
glVertex2f(845, 800);    // Vertex 1 (top left)
glVertex2f(845, 835);    // Vertex 2 (upper left)
glVertex2f(1000, 835);    // Vertex 3 (middle left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)

glEnd();

drawCircle2(873.0f, 830.0f, 15.0f);

drawCircle2(900.0f, 830.0f, 15.0f);
drawCircle2(930.0f, 830.0f, 18.0f);

drawCircle2(955.0f, 830.0f, 15.0f);
drawCircle2(985.0f, 830.0f, 18.0f);

drawCircle2(1020.0f, 830.0f, 18.0f);

drawCircle3(850.0f, 820.0f, 6.0f);

drawCircle3(860.0f, 820.0f, 6.0f);






//nodi
// Polygon with a night-like color (Dark blue for night)
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.6);  // Dark blue, suitable for a nighttime look
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)
glVertex2f(0, 800);    // Vertex 4 (bottom left)
glEnd();

float gadp = 5.0f;  // The gap between objects
float widt = 0.75f;  // The width of each object

// Starting position for the Y-coordinate
float startY = 797.0f;

// Adjust this gap to prevent overlap, assuming your object height is 1.0f
float vert_gap = 4.0f;

for (int j = 0; j < 200; j++) {  // Loop for drawing 200 rows vertically
    for (int i = 0; i < 500; i++) {
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);

        // Calculate the X positions with gap between objects
        float x_offset = (widt + gadp) * i;

        // Calculate the Y position for each row, with a gap between them
        float y_offset = startY - j * vert_gap;  // Adjust Y for each row

        glVertex2f(x_offset, y_offset);
        glVertex2f(x_offset + widt, y_offset);
        glVertex2f(x_offset + widt, y_offset - 1.0f);  // Slightly adjust for the height of the object
        glVertex2f(x_offset, y_offset - 1.0f);  // Slightly adjust for the height of the object

        glEnd();
    }
}



//road
// Polygon with a muted, dark nighttime color
glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.2);  // Dark gray/brown, suitable for night
glVertex2f(0, 700);    // Vertex 1 (top left)
glVertex2f(1000, 700);    // Vertex 2 (upper left)
glVertex2f(1000, 630);    // Vertex 3 (middle left)
glVertex2f(0, 630);    // Vertex 4 (bottom left)
glEnd();


float ga = 5.0f;  // The gap between objects
float wi = 4.0f;  // The width of each object

for (int i = 0; i < 150; i++) {
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // Black color (for the shape)

    // Calculate the X position with gap between objects
    float x_offset = (wi + ga) * i;

    glVertex2f(x_offset, 657);    // Vertex 1 (top left)
    glVertex2f(x_offset + wi, 657);    // Vertex 2 (upper right)
    glVertex2f(x_offset + wi, 653);    // Vertex 3 (bottom right)
    glVertex2f(x_offset, 653);    // Vertex 4 (bottom left)

    glEnd();
}



glEnd();





// pillar of bridge
// Set the gap between each pillar
float gap = 100.0f; // You can adjust this value for a bigger or smaller gap between pillars

// Loop to draw multiple pillars along the horizontal axis
for (float xOffset = 0; xOffset < 1200; xOffset += gap) { // Change 300 to the desired number of pillars (adjust as needed)
    // Draw the main pillar body (rectangle-like shape with slight curve)
    glBegin(GL_POLYGON);
    glColor3f(0.541, 0.541, 0.514); // Pillar color
    glVertex2f(10 + xOffset, 630);  // Top left vertex
    glVertex2f(60 + xOffset, 630);  // Top right vertex
    glVertex2f(60 + xOffset, 600);  // Bottom right vertex
    glVertex2f(10 + xOffset, 600);  // Bottom left vertex
    glEnd();

    // Add subtle ridges for texture (details for aesthetics)
    glLineWidth(2.0);
    glColor3f(0.396, 0.263, 0.129); // Dark color for ridges
    for (float y = 610; y <= 620; y += 2) {
        glBegin(GL_LINES);
        glVertex2f(10 + xOffset, y);  // Start from the left side
        glVertex2f(60 + xOffset, y);  // End at the right side
        glEnd();
    }
    glLineWidth(1.0); // Reset line width after the detailing

    // Add a cap to the top of the pillar for extra detail (a rectangle-like top)
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176); // Darker brown color for the cap
    glVertex2f(10 + xOffset, 620);  // Left top of the cap
    glVertex2f(60 + xOffset, 620);  // Right top of the cap
    glVertex2f(60 + xOffset, 630);  // Right side raised for cap
    glVertex2f(10 + xOffset, 630);  // Left side raised for cap
    glEnd();
}



// rail line

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 680);
    glVertex2f(1000, 680);
glEnd();

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 670);
    glVertex2f(1000, 670);
glEnd();


// Number of lines to draw
int numLines = 350; // You can adjust this as needed
float gapi = 4.0f; // Gap between each line

// Loop to draw multiple lines with a gap
for (int i = 0; i < numLines; ++i) {
    float offsetX = i * gapi;  // Increment the x-coordinate by 'gap' each time

    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Set the line color to black

        // Draw the line horizontally, with each line moved by 'offsetX'
        glVertex2f(0 + offsetX, 670); // Starting point of the line
        glVertex2f(0 + offsetX, 680); // End point of the line (100 units to the right)

    glEnd();
}

// rail 3

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 633);
    glVertex2f(1000, 633);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 635);
    glVertex2f(1000, 635);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 636);
    glVertex2f(1000, 637);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 637);
    glVertex2f(1000, 639);
glEnd();

// rail 4

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 700);
    glVertex2f(1000, 700);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 698);
    glVertex2f(1000, 698);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 696);
    glVertex2f(1000, 696);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 694);
    glVertex2f(1000, 694);
glEnd();












//ship 3
// Polygon 1 (green element)
glBegin(GL_POLYGON);
glColor3f(0.1, 0.2, 0.05);  // Dark green for nighttime
glVertex2f(850 + sh, 760);    // Vertex 1 (top left)
glVertex2f(950 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(950 + sh, 740);    // Vertex 3 (middle left)
glVertex2f(870 + sh, 740);    // Vertex 4 (middle left)
glEnd();

// Polygon 2 (light gray for nighttime)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.2);  // Dark gray, softer for night
glVertex2f(880 + sh, 760);    // Vertex 1 (top left)
glVertex2f(940 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(940 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(880 + sh, 780);    // Vertex 4 (middle left)
glEnd();

// Polygon 3 (soft purple for night effect)
glBegin(GL_POLYGON);
glColor3f(0.4, 0.2, 0.4);  // Muted purple tone for a moonlit feel
glVertex2f(920 + sh, 800);    // Vertex 1 (top left)
glVertex2f(930 + sh, 800);    // Vertex 2 (upper left)
glVertex2f(930 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(920 + sh, 780);    // Vertex 4 (middle left)
glEnd();

// Polygon 4 (dark brown, more natural night shade)
glBegin(GL_POLYGON);
glColor3f(0.4, 0.2, 0.1);  // Dark brown for a natural night effect
glVertex2f(900 + sh, 800);    // Vertex 1 (top left)
glVertex2f(910 + sh, 800);    // Vertex 2 (upper left)
glVertex2f(910 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(900 + sh, 780);    // Vertex 4 (middle left)
glEnd();

// Circles with a softer night effect (muted blue-green or pale tones)
drawCircle2(910.0f + sh, 770.0f, 5.0f); // Pale blue-green circle
drawCircle2(930.0f + sh, 770.0f, 5.0f); // Soft glow-like circle
drawCircle2(880.0f + sh, 750.0f, 5.0f); // Subtle night-colored circle
drawCircle2(880.0f + sh, 750.0f, 3.0f); // Smaller, dimmed circle

// Ship Polygon (with muted colors for nighttime)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.1, 0.05);  // Dark brown color for the ship's body
glVertex2f(100 + shif, 750);    // Vertex 1 (top left)
glVertex2f(300 + shif, 750);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 730);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 730);    // Vertex 4 (middle left)
glEnd();

// Ship Top Polygon (lighter tone for a soft moonlit effect)
glBegin(GL_POLYGON);
glColor3f(0.4, 0.4, 0.1);  // Soft olive yellow for moonlit effect
glVertex2f(110 + shif, 790);    // Vertex 1 (top left)
glVertex2f(290 + shif, 790);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 750);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 750);    // Vertex 4 (middle left)
glEnd();

   // Define the gap between polygons
    float gapX = 5.0;  // Horizontal gap (between columns)
    float gapY = 6.0;  // Vertical gap (between rows)

    // Size of each polygon (hexagon)
    float radi = 3.0;  // Radius of the hexagon

    // Loop to create 4 vertical and 22 horizontal polygons (grid)
    for (int row = 0; row < 3; row++) {          // Loop through rows (4 rows)
        for (int col = 0; col < 16; col++) {     // Loop through columns (22 columns)
            // Calculate the X and Y offset for each polygon
            float offsetX = 115 + col * (2 * radi + gapX);  // Horizontal offset (including gapX)
            float offsetY = 776 - row * (radi * 2 + gapY);  // Vertical offset (including gapY)

            // Draw the hexagon at the calculated position
            glBegin(GL_POLYGON);
            glColor3f(0.043, 0.58, 0.961);  // White color (for the shape)

            // Calculate the six vertices of the hexagon
            for (int i = 0; i < 8; i++) {
                float angle = i * 2.0 * M_PI / 8;  // Divide 360 degrees by 6 vertices (2π/6)
                float x = offsetX + radi * cos(angle);
                float y = offsetY + radi * sin(angle);

                glVertex2f(x + + shif, y);  // Add the vertex to the polygon
            }

            glEnd();
        }
    }

// Ship2 Base Polygon (muted brown for nighttime)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.15, 0.05);  // Dark brown, muted tone for night
glVertex2f(500 + shi, 750);    // Vertex 1 (top left)
glVertex2f(700 + shi, 750);    // Vertex 2 (upper left)
glVertex2f(680 + shi, 720);    // Vertex 3 (middle left)
glVertex2f(500 + shi, 720);    // Vertex 4 (bottom left)
glEnd();

// Ship2 Top Polygon (darker blue for night)
glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.3);  // Dark blue, subtle night tone
glVertex2f(510 + shi, 770);    // Vertex 1 (top left)
glVertex2f(680 + shi, 770);    // Vertex 2 (upper left)
glVertex2f(680 + shi, 740);    // Vertex 3 (middle left)
glVertex2f(510 + shi, 740);    // Vertex 4 (bottom left)
glEnd();




glColor3f(1.0, 1.0, 1.0);

    // Size of the polygon
    float width = 3.0;
    float height = 3.0;

    // Gap between polygons
    float gapy = 2.0;

    // Number of rows and columns
    int rows = 4;  // You can adjust the number of rows
    int cols = 33;  // You can adjust the number of columns

    // Draw the grid of polygons with a gap between them
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            glBegin(GL_POLYGON);

            // Draw the polygon at the current position, adding the gap to the offset
            glVertex2f(512 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Top left
            glVertex2f(515 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Upper left
            glVertex2f(515 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom left
            glVertex2f(512 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom right

            glEnd();
        }

    }






    // Polygon 1 (Nighttime muted purple for the top part of the ship)
glBegin(GL_POLYGON);
glColor3f(0.3, 1.0, 0.3);  // Muted purple, softer for night
glVertex2f(520 + shi, 790);    // Vertex 1 (top left)
glVertex2f(670 + shi, 790);    // Vertex 2 (upper left)
glVertex2f(670 + shi, 770);    // Vertex 3 (middle left)
glVertex2f(520 + shi, 770);    // Vertex 4 (bottom left)
glEnd();

// Polygon 2 (Soft gray-blue for the body, reflecting moonlight)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.3);  // Soft gray-blue for nighttime
glVertex2f(523 + shi, 787);    // Vertex 1 (top left)
glVertex2f(667 + shi, 787);    // Vertex 2 (upper left)
glVertex2f(667 + shi, 773);    // Vertex 3 (middle left)
glVertex2f(523 + shi, 773);    // Vertex 4 (bottom left)
glEnd();



train();
cargo();
cars();


//600px
// Background Polygon (nighttime color, dark brownish for ground)
glBegin(GL_POLYGON);
glColor3f(0.0, 0.2, 0.1);
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 500);    // Vertex 3 (middle left)
glVertex2f(0, 500);    // Vertex 4 (bottom left)
glEnd();

// Building (lower part, soft orange for dim lights)
glBegin(GL_POLYGON);
glColor3f(0.6, 0.3, 0.0);  // Muted, soft orange for dim lights at night
glVertex2f(20, 525);    // Vertex 1 (top left)
glVertex2f(150, 525);    // Vertex 2 (upper left)
glVertex2f(150, 520);    // Vertex 3 (middle left)
glVertex2f(20, 520);    // Vertex 4 (bottom left)
glEnd();

// Building (upper part, cool white for a lit window at night)
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 0.9);  // Cool white, softer light, like a lit building window
glVertex2f(20, 580);    // Vertex 1 (top left)
glVertex2f(150, 580);    // Vertex 2 (upper left)
glVertex2f(150, 525);    // Vertex 3 (middle left)
glVertex2f(20, 525);    // Vertex 4 (bottom left)
glEnd();

  for (int i = 0; i < 10; i++) {
        // Loop to create 20 columns
        for (int j = 0; j < 25; j++) {
            float x_offset = j * 5.0f; // Horizontal distance between rectangles
            float y_offset = i * 5.0f; // Vertical distance between rectangles

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0); // Black color for the rectangles

            // Define the four vertices of each rectangle
            glVertex2f(23 + x_offset, 578 - y_offset); // Vertex 1 (top left)
            glVertex2f(27 + x_offset, 578 - y_offset); // Vertex 2 (upper right)
            glVertex2f(27 + x_offset, 572 - y_offset); // Vertex 3 (bottom right)
            glVertex2f(23 + x_offset, 572 - y_offset); // Vertex 4 (bottom left)

            glEnd();
        }
    }



   for (int i = 0; i < 7; i++) {
        float x_offset = i * 15.0f;  // Horizontal distance between triangles

        // Draw the main triangle
        glBegin(GL_TRIANGLES);
        glColor3f(1.0, 1.0, 1.0); // White color for the triangle
        glVertex2f(20 + x_offset, 580);    // Vertex 1 (top left)
        glVertex2f(60 + x_offset, 580);    // Vertex 2 (top right)
        glVertex2f(40 + x_offset, 595);    // Vertex 3 (middle top)
        glEnd();

        // Decorative pattern inside each triangle (smaller triangle)
        glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 0.0); // Black color for the decoration

        glVertex2f(30 + x_offset, 580);    // Vertex 1 (top left of inner triangle)
        glVertex2f(50 + x_offset, 580);    // Vertex 2 (top right of inner triangle)
        glVertex2f(40 + x_offset, 590);    // Vertex 3 (middle of inner triangle)
        glEnd();
    }






// Building 2 (Nighttime color, dark green with subtle lighting)
glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.2);  // Darker green for a nighttime look
glVertex2f(160, 525);    // Vertex 1 (top left)
glVertex2f(280, 525);    // Vertex 2 (upper left)
glVertex2f(280, 605);    // Vertex 3 (middle left)
glVertex2f(160, 605);    // Vertex 4 (bottom left)
glEnd();

    // Loop to create multiple rectangles horizontally
    for (int i = 0; i < 6; i++) { // For 6 rectangles (you can increase the count)
        float y_offset = i * 18.0f;  // Vertical distance between rectangles

        // Change color for each rectangle (cycling between blue and orange)
        float red = (i % 2 == 0) ? 1.0f : 1.0f; // Keep red component for both blue and orange
        float green = (i % 2 == 0) ? 0.0f : 0.5f; // Blue (green = 0) and Orange (green = 0.5)
        float blue = (i % 2 == 0) ? 1.0f : 0.0f; // Blue (blue = 1) and Orange (blue = 0)

        // Draw the main rectangle
        glBegin(GL_POLYGON);
        glColor3f(red, green, blue); // Set the color dynamically for each rectangle

        // Define the four vertices of each rectangle
        glVertex2f(160 , 525 + y_offset);    // Vertex 1 (top left)
        glVertex2f(280 , 525 + y_offset);    // Vertex 2 (top right)
        glVertex2f(280 , 510 + y_offset);    // Vertex 3 (bottom right)
        glVertex2f(160 , 510 + y_offset);    // Vertex 4 (bottom left)

        glEnd();

        // Add a new color in the gap between rectangles (e.g., pink color)
        float gap_red = 1.0f;  // Set the red component for pink color
        float gap_green = 0.75f; // Set the green component for pink color
        float gap_blue = 0.8f;  // Set the blue component for pink color

        glBegin(GL_POLYGON);
        glColor3f(gap_red, gap_green, gap_blue); // Set the gap color to pink

        // Draw a smaller rectangle in the gap between each main rectangle
        glVertex2f(160 , 525 + y_offset - 9.0f);    // Top left of gap shape
        glVertex2f(280 , 525 + y_offset - 9.0f);    // Top right of gap shape
        glVertex2f(280 , 510 + y_offset + 9.0f);    // Bottom right of gap shape
        glVertex2f(160 , 510 + y_offset + 9.0f);    // Bottom left of gap shape

        glEnd();

        // Add a smaller shape (e.g., a smaller rectangle) inside the gap with cyan color
        float inner_red = 0.0f;  // No red for cyan
        float inner_green = 1.0f; // Full green for cyan
        float inner_blue = 1.0f;  // Full blue for cyan

        glBegin(GL_POLYGON);
        glColor3f(inner_red, inner_green, inner_blue); // Set the inner shape color to cyan

        // Draw a smaller rectangle inside the gap
        glVertex2f(160 + 30.0f, 525 + y_offset);    // Top left of inner shape
        glVertex2f(280 - 30.0f, 525 + y_offset);    // Top right of inner shape
        glVertex2f(280 - 30.0f, 510 + y_offset);    // Bottom right of inner shape
        glVertex2f(160 + 30.0f, 510 + y_offset);    // Bottom left of inner shape

        glEnd();
    }


    for (int i = 0; i < 10; i++) {  // Loop for 20 rows
    for (int j = 0; j < 6; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 193 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 610 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}









///building 2.2


   // Loop to draw 24 rows of polygons (vertically)
 for (int i = 0; i < 24; i++) {
    for (int j = 0; j < 30; j++) {
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 3;  // Horizontal spacing (30 columns)
        float y = 595 - i * 4;  // Vertical spacing (24 rows)

        // Choose a color based on the index
          if ((i + j) % 3 == 0) {
                glColor3f(1.0, 0.0, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(1.0, 1.0, 0.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 1.0, 0.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

        // Draw a polygon (triangle) at (x, y)
        glBegin(GL_POLYGON);
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 5, y);     // Vertex 2 (upper left)
        glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
        glEnd();
    }
}


    // Loop to draw another set of polygons with a different color pattern
    // Introduce a horizontal gap by adjusting the starting x position for the second set
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 20; j++) {
            // Calculate the x and y positions for each polygon
            float x = 350 + j * 3 + 4;  // Add a 4-unit horizontal gap (shifted by 4 units)
            float y = 595 - i * 4;  // Vertical spacing (24 rows)

            // Choose a color based on the index
            if ((i + j) % 3 == 0) {
                glColor3f(0.0, 0.5, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(0.0, 1.0, 1.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 0.0, 1.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

            // Draw a polygon (triangle) at (x, y)
            glBegin(GL_POLYGON);
            glVertex2f(x, y);         // Vertex 1 (top left)
            glVertex2f(x + 5, y);     // Vertex 2 (upper left)
            glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
            glEnd();
        }
    }


for (int i = 0; i < 8; i++) {  // Loop for 20 rows
    for (int j = 0; j < 13; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}
















// building 3
// Loop to draw the grid of hexagons

// Building/Polygon with a more subdued color for night
glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.4);  // Muted, darker blue-green for night
glVertex2f(420, 600);    // Vertex 1 (top left)
glVertex2f(565, 600);    // Vertex 2 (upper left)
glVertex2f(565, 500);    // Vertex 3 (bottom right)
glVertex2f(420, 500);    // Vertex 4 (bottom left)
glEnd();

for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each hexagon
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each hexagon to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the hexagon at the calculated position
        glBegin(GL_POLYGON);

        // Define the six vertices for the hexagon
        glVertex2f(x, y);           // Vertex 1 (top left)
        glVertex2f(x + 1.5, y + 1.5); // Vertex 2 (top middle right)
        glVertex2f(x + 3.5, y + 1.5); // Vertex 3 (top right)
        glVertex2f(x + 5, y);       // Vertex 4 (bottom right)
        glVertex2f(x + 3.5, y - 1.5); // Vertex 5 (bottom middle left)
        glVertex2f(x + 1.5, y - 1.5); // Vertex 6 (bottom left)

        glEnd();
    }
}

// Loop to draw the grid of triangles
for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each triangle
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each triangle to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the triangle at the calculated position
        glBegin(GL_POLYGON);

        // Define the three vertices for the triangle
        glVertex2f(x, y);            // Vertex 1 (top)
        glVertex2f(x + 6, y + 5);    // Vertex 2 (bottom right)
        glVertex2f(x + 12, y);       // Vertex 3 (bottom left)

        glEnd();
    }
}


for (int i = 0; i < 9; i++) {  // Loop for 20 rows
    for (int j = 0; j < 14; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 425 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}





//deyal
// Building/Polygon with a more subdued color for night
glBegin(GL_POLYGON);
glColor3f(0.05, 0.2, 0.3);  // Darker blue-green for nighttime atmosphere
glVertex2f(570, 600);    // Vertex 1 (top left)
glVertex2f(700, 600);    // Vertex 2 (upper left)
glVertex2f(700, 500);    // Vertex 3 (bottom right)
glVertex2f(570, 500);    // Vertex 4 (bottom left)
glEnd();


// Loop to draw the grid of polygons
for (int i = 0; i < 9; i++) {         // Vertical loop (9 rows)
    for (int j = 0; j < 10; j++) {    // Horizontal loop (10 columns)
        // Calculate the x and y positions for each polygon
        float xOffset = j * 12;       // Horizontal spacing (12 units)
        float yOffset = i * 12;       // Vertical spacing (12 units) - Increased gap

        // Adjust the x and y positions for each polygon to form the grid
        float x = 570 + xOffset;      // Horizontal starting position
        float y = 600 - yOffset;      // Vertical starting position

        // Choose a color based on the index (using a new pattern with 4 colors)
        if ((i + j) % 4 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 4 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else if ((i + j) % 4 == 2) {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for another set
        } else {
            glColor3f(0.9, 0.9, 0.0);  // Yellow color for the new set
        }

        // Draw the polygon (rectangle) at the calculated position
        glBegin(GL_POLYGON);

        // Define the four vertices for the rectangle
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 20, y);    // Vertex 2 (upper right)
        glVertex2f(x + 20, y - 5); // Vertex 3 (bottom right)
        glVertex2f(x, y - 5);     // Vertex 4 (bottom left)

        glEnd();
    }
}

drawCircle(600,570, 15);
drawCircle4(600,570, 12);

drawCircle3(635,570, 6.5);
drawCircle(635,570, 7.5);
drawCircle4(635,570, 4.5);




drawCircle(670,570, 15);
drawCircle4(670,570, 12);

drawCircle(600,530, 15);
drawCircle4(600,530, 12);
drawCircle3(635,530, 6.5);
drawCircle(635,530, 7.5);

drawCircle4(635,530, 4.5);



drawCircle(670,530, 15);
drawCircle4(670,530, 12);

//building 4





// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 3; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 10;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 525 - yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
     glColor3f(0.69, 0.729, 0.035);  // Green color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);    // Vertex 1 (top left)
    glVertex2f(820, y);    // Vertex 2 (upper right)
    glVertex2f(820, y + 50); // Vertex 3 (bottom right)
    glVertex2f(710, y + 50);  // Vertex 4 (bottom left)

    glEnd();
}



glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 505);    // Vertex 1 (top left)
glVertex2f(820, 505);    // Vertex 2 (upper left)
glVertex2f(820, 500);
glVertex2f(710, 500);

glEnd();

// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 4; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 20;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 505 + yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);        // Vertex 1 (top left)
    glVertex2f(820, y);        // Vertex 2 (upper right)
    glVertex2f(820, y - 5);    // Vertex 3 (bottom right)
    glVertex2f(710, y - 5);    // Vertex 4 (bottom left)

    glEnd();
}

// Windows/Building Lights (Nighttime colors)

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Very dark color (almost black) for the first window
glVertex2f(770, 505);    // Vertex 1 (top left)
glVertex2f(772, 505);    // Vertex 2 (upper left)
glVertex2f(772, 574);
glVertex2f(770, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Same dark color for other windows
glVertex2f(790, 505);
glVertex2f(792, 505);
glVertex2f(792, 574);
glVertex2f(790, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(818, 505);
glVertex2f(820, 505);
glVertex2f(820, 574);
glVertex2f(818, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(750, 505);
glVertex2f(752, 505);
glVertex2f(752, 574);
glVertex2f(750, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(730, 505);
glVertex2f(732, 505);
glVertex2f(732, 574);
glVertex2f(730, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(710, 505);
glVertex2f(712, 505);
glVertex2f(712, 574);
glVertex2f(710, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(810, 505);
glVertex2f(812, 505);
glVertex2f(812, 574);
glVertex2f(810, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for window base
glVertex2f(710, 574);
glVertex2f(820, 574);
glVertex2f(820, 572);
glVertex2f(710, 572);
glEnd();


// Building Cathedral (Nighttime version)

// Base
glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.3);  // Darker blue for a nighttime feel
glVertex2f(825, 520);
glVertex2f(980, 520);
glVertex2f(980, 500);
glVertex2f(825, 500);
glEnd();

// Roof
glBegin(GL_POLYGON);
glColor3f(0.4, 0.1, 0.1);  // Dark red for the roof at night
glVertex2f(835, 540);
glVertex2f(970, 540);
glVertex2f(970, 520);
glVertex2f(835, 520);
glEnd();

// Middle Section
glBegin(GL_POLYGON);
glColor3f(0.1, 0.5, 0.1);  // Darker green for the middle section
glVertex2f(845, 560);
glVertex2f(960, 560);
glVertex2f(960, 540);
glVertex2f(845, 540);
glEnd();

// Upper Section
glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.3);  // Deep blue for the upper section
glVertex2f(850, 580);
glVertex2f(955, 580);
glVertex2f(955, 560);
glVertex2f(850, 560);
glEnd();

// Window section
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.1);  // Dim yellow for windows (nighttime lights)
glVertex2f(855, 590);
glVertex2f(950, 590);
glVertex2f(950, 580);
glVertex2f(855, 580);
glEnd();

// Additional Sections with darker colors

glBegin(GL_POLYGON);
glColor3f(0.3, 0.1, 0.5);  // Purple for the section at the top
glVertex2f(865, 600);
glVertex2f(940, 600);
glVertex2f(940, 590);
glVertex2f(865, 590);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.7, 0.7);  // Cyan color for upper windows
glVertex2f(875, 610);
glVertex2f(930, 610);
glVertex2f(930, 600);
glVertex2f(875, 600);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.6, 0.3, 0.1);  // Dim orange for the top section
glVertex2f(885, 620);
glVertex2f(920, 620);
glVertex2f(920, 610);
glVertex2f(885, 610);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3);  // Gray for the topmost section
glVertex2f(895, 630);
glVertex2f(910, 630);
glVertex2f(910, 620);
glVertex2f(895, 620);
glEnd();


// road


glBegin(GL_POLYGON);
glColor3f(0.25, 0.25, 0.25); // Grey color for the ninth polygon
glVertex2f(0, 470);    // Vertex 1 (top left)
glVertex2f(1000, 470);    // Vertex 2 (upper left)
glVertex2f(1000, 500);
glVertex2f(0, 500);
glEnd();




// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 485);   // Vertex 1 (top left)
    glVertex2f(x + 6, 485);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 489);  // Vertex 3 (bottom right)
    glVertex2f(x, 489);   // Vertex 4 (bottom left)

    glEnd();
}

cars1();


//road divder
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0); // Grey color for the ninth polygon
glVertex2f(0, 460);    // Vertex 1 (top left)
glVertex2f(1000, 460);    // Vertex 2 (upper left)
glVertex2f(1000, 470);
glVertex2f(0, 470);
glEnd();

//road
glBegin(GL_POLYGON);
glColor3f(0.25, 0.25, 0.25); // Grey color for the ninth polygon
glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 460);
glVertex2f(0, 460);
glEnd();

// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 445);   // Vertex 1 (top left)
    glVertex2f(x + 6, 445);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 449);  // Vertex 3 (bottom right)
    glVertex2f(x, 449);   // Vertex 4 (bottom left)

    glEnd();
}

cargo1();

//road line line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();


// tree

glBegin(GL_POLYGON);
glColor3f(0.2, 0.3, 0.2); // Dark green color

glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 330);    // Vertex 3 (bottom right)
glVertex2f(0, 330);    // Vertex 4 (bottom left)
glEnd();




for (int i = 0; i < 5; i++) {
    int translateX = -120 * i;  // Translation on x-axis

    // First set of circles
    circle(7, 14, 330 + translateX, 350);
    circle(7, 14, 320 + translateX, 360);
    circle(7, 14, 330 + translateX, 370);
    circle(7, 14, 340 + translateX, 360);

    // Second set of circles
    circle(7, 14, 370 + translateX, 350);
    circle(7, 14, 360 + translateX, 360);
    circle(7, 14, 370 + translateX, 370);
    circle(7, 14, 380 + translateX, 360);

    // Third set of circles
    circle(7, 14, 410 + translateX, 350);
    circle(7, 14, 400 + translateX, 360);
    circle(7, 14, 410 + translateX, 370);
    circle(7, 14, 420 + translateX, 360);

    // Fourth set of circles
    circle(7, 14, 330 + 50 + translateX, 370 + 30);
    circle(7, 14, 320 + 50 + translateX, 380 + 30);
    circle(7, 14, 330 + 50 + translateX, 390 + 30);
    circle(7, 14, 340 + 50 + translateX, 380 + 30);

    // Fifth set of circles
    circle(7, 14, 370 + 50 + translateX, 370 + 30);
    circle(7, 14, 360 + 50 + translateX, 380 + 30);
    circle(7, 14, 370 + 50 + translateX, 390 + 30);
    circle(7, 14, 380 + 50 + translateX, 380 + 30);

    // Sixth set of circles
    circle(7, 14, 410 + 50 + translateX, 370 + 30);
    circle(7, 14, 400 + 50 + translateX, 380 + 30);
    circle(7, 14, 410 + 50 + translateX, 390 + 30);
    circle(7, 14, 420 + 50 + translateX, 380 + 30);
}












//tree1

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Grey color for the ninth polygon
glVertex2f(60, 380);    // Vertex 1 (top left)
glVertex2f(80, 380);    // Vertex 2 (upper left)
glVertex2f(80, 330);
glVertex2f(60, 330);
glEnd();

drawCircle3(60,380,10);

drawCircle3(60,390,10);
drawCircle3(60,390,10);
drawCircle3(50,400,10);
drawCircle3(60,410,10);
drawCircle3(70,410,10);
drawCircle3(80,410,10);
drawCircle3(80,400,10);
drawCircle3(90,390,10);
drawCircle3(50,390,10);
drawCircle3(70,380,10);
drawCircle3(80,380,10);

//tree2
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370, 330);
glVertex2f(160 + 370, 330);    // Vertex 4 (bottom left)
glEnd();
// Tree 1 - Trunk
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(60, 380);    // Vertex 1 (top left)
glVertex2f(80, 380);    // Vertex 2 (upper left)
glVertex2f(80, 330);    // Vertex 3 (bottom right)
glVertex2f(60, 330);    // Vertex 4 (bottom left)
glEnd();

// Tree 1 - Foliage (Multiple circles)
drawCircle3(60, 380, 10);
drawCircle3(60, 390, 10);
drawCircle3(60, 390, 10);
drawCircle3(50, 400, 10);
drawCircle3(60, 410, 10);
drawCircle3(70, 410, 10);
drawCircle3(80, 410, 10);
drawCircle3(80, 400, 10);
drawCircle3(90, 390, 10);
drawCircle3(50, 390, 10);
drawCircle3(70, 380, 10);
drawCircle3(80, 380, 10);

// Tree 2 - Trunk
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(160 + 370, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370, 330);    // Vertex 3 (bottom right)
glVertex2f(160 + 370, 330);    // Vertex 4 (bottom left)
glEnd();

// Tree 2 - Foliage (Multiple circles)
drawCircle3(160 + 370, 380, 10);
drawCircle3(160 + 370, 390, 10);
drawCircle3(160 + 370, 390, 10);
drawCircle3(150 + 370, 400, 10);
drawCircle3(160 + 370, 410, 10);
drawCircle3(170 + 370, 410, 10);
drawCircle3(180 + 370, 410, 10);
drawCircle3(180 + 370, 400, 10);
drawCircle3(190 + 370, 390, 10);
drawCircle3(150 + 370, 390, 10);
drawCircle3(170 + 370, 380, 10);
drawCircle3(180 + 370, 380, 10);

// Drawing circles with the x position shifted by +370
drawCircle5(160 + 370, 380, 10);  // Translated x position by +370

drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 400, 10);  // Translated x position by +370
drawCircle5(160 + 370, 410, 10);  // Translated x position by +370
drawCircle5(170 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 400, 10);  // Translated x position by +370
drawCircle5(190 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 390, 10);  // Translated x position by +370
drawCircle5(170 + 370, 380, 10);  // Translated x position by +370
drawCircle5(180 + 370, 380, 10);  // Translated x position by +370

//tree3

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(250, 380);    // Vertex 1 (top left)
glVertex2f(270, 380);    // Vertex 2 (upper left)
glVertex2f(270, 330);
glVertex2f(250, 330);
glEnd();

drawCircle5(260, 370, 5);  // Translated x position by +100
drawCircle5(255, 390, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle3(275, 410, 10);  // Translated x position by +100
drawCircle3(265, 410, 10);  // Translated x position by +100
drawCircle3(257, 410, 10);  // Translated x position by +100
drawCircle3(247, 410, 10);  // Translated x position by +100
drawCircle3(265, 370, 10);  // Translated x position by +100
drawCircle3(257, 370, 10);  // Translated x position by +100
drawCircle3(247, 370, 10);  // Translated x position by +100
drawCircle3(275, 375, 10);  // Translated x position by +100
drawCircle5(260, 370, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle5(260, 390, 10);  // Translated x position by +100


//tree




//backgroun
// First set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 + 70 - 200, 350 + 30); // Translated circle

circle(20, 10, 790 + 80 - 200, 360 + 30);
circle(20, 10, 805 + 80 - 200, 355 + 30);
circle(20, 10, 810 + 80 - 200, 365 + 30);
circle(20, 10, 805 + 80 - 200, 375 + 30);
circle(20, 10, 815 + 80 - 200, 365 + 30);
circle(20, 10, 820 + 80 - 200, 360 + 30);
circle(20, 10, 820 + 80 - 200, 345 + 30);
circle(20, 10, 790 + 80 - 200, 345 + 30);
circle(20, 10, 805 + 80 - 200, 340 + 30); // Translated last circle

// Second set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 - 200, 350);

circle(20, 10, 790 - 200, 360);
circle(20, 10, 805 - 200, 355);
circle(20, 10, 810 - 200, 365);
circle(20, 10, 805 - 200, 375);
circle(20, 10, 815 - 200, 365);
circle(20, 10, 820 - 200, 360);
circle(20, 10, 820 - 200, 345);
circle(20, 10, 790 - 200, 345);
circle(20, 10, 805 - 200, 340);






  circle(7, 14, 330, 350);
circle(7, 14, 320, 360);
circle(7, 14, 330, 370);
circle(7, 14, 340, 360);


circle(7, 14, 370, 350);
circle(7, 14, 360, 360);
circle(7, 14, 370, 370);
circle(7, 14, 380, 360);


  circle(7, 14, 410, 350);
circle(7, 14, 400, 360);
circle(7, 14, 410, 370);
circle(7, 14, 420, 360);



circle(7, 14, 330 + 50, 370 + 30);
circle(7, 14, 320 + 50, 380 + 30);
circle(7, 14, 330 + 50, 390 + 30);
circle(7, 14, 340 + 50, 380 + 30);


circle(7, 14, 370 + 50, 370 + 30);
circle(7, 14, 360 + 50, 380 + 30);
circle(7, 14, 370 + 50, 390 + 30);
circle(7, 14, 380 + 50, 380 + 30);


circle(7, 14, 410 + 50, 370 + 30);
circle(7, 14, 400 + 50, 380 + 30);
circle(7, 14, 410 + 50, 390 + 30);
circle(7, 14, 420 + 50, 380 + 30);


glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(490, 330);
glVertex2f(430, 330);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0, 0.0, 1.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(460, 380);
glEnd();

 for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            float translateX = -10.0f * i;  // Translate horizontally by 50 units
            float translateY = -10.0f * j;  // Translate vertically by 50 units

            glPushMatrix();  // Save the current transformation matrix
            glTranslatef(translateX, translateY, 0.0f);  // Apply translation

            // Begin drawing the polygon
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);  // Grey color for the polygon
            glVertex2f(432+50, 360+5);    // Vertex 1 (top left)
            glVertex2f(437+50, 360+5);    // Vertex 2 (upper left)
            glVertex2f(437+50, 365+5);
            glVertex2f(432+50, 365+5);    // Vertex 4 (bottom left)
            glEnd();

            glPopMatrix();  // Restore the previous transformation matrix
        }
    }



    //tree paitentence


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370+120, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370+120, 330);
glVertex2f(160 + 370+120, 330);    // Vertex 4 (bottom left)
glEnd();

    drawCircle5(630, 390, 7);  // Translated x position by +370
 drawCircle5(650, 400, 7);  // Translated x position by +370
drawCircle5(640, 410, 7);  // Translated x position by +370
drawCircle5(660, 420, 7);  // Translated x position by +370

drawCircle5(670, 410, 7);  // Translated x position by +370
drawCircle5(680, 400, 7);  // Translated x position by +370
drawCircle5(685, 390, 7);  // Translated x position by +370

drawCircle5(675, 395, 7);  // Translated x position by +370
drawCircle5(650, 380, 7);  // Translated x position by +370
drawCircle5(660, 380, 7);  // Translated x position by +370



//tree traingle


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120+90, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370+120+90, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370+120+90, 330);
glVertex2f(160 + 370+120+90, 330);    // Vertex 4 (bottom left)
glEnd();


 for (int i = 0; i < 4; i++) {
        float translateY = 20.0f * i;  // Translate vertically by 40 units (you can adjust this value)

        glPushMatrix();  // Save the current transformation matrix
        glTranslatef(0.0f, translateY, 0.0f);  // Apply vertical translation

        // Draw the polygon
        glBegin(GL_POLYGON);
         glColor3ub(34, 139, 34); // Color for the polygon
        glVertex2f(690 + 30, 350);    // Vertex 1 (top left)
        glVertex2f(740 + 30, 350);    // Vertex 2 (upper left)
        glVertex2f(715 + 30, 390);    // Vertex 3 (bottom center)
        glEnd();

        glPopMatrix();  // Restore the previous transformation matrix
    }



circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80, 360 + 30);
circle(20, 10, 805 + 80, 355 + 30);
circle(20, 10, 810 + 80, 365 + 30);
circle(20, 10, 805 + 80, 375 + 30);
circle(20, 10, 815 + 80, 365 + 30);
circle(20, 10, 820 + 80, 360 + 30);
circle(20, 10, 820 + 80, 345 + 30);
circle(20, 10, 790 + 80, 345 + 30);
circle(20, 10, 805 + 80, 340 + 30); // Translated last circle






circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80+70, 360 + 10);
circle(20, 10, 805 + 80+70, 355 + 10);
circle(20, 10, 810 + 80+70, 365 + 10);
circle(20, 10, 805 + 80+70, 375 + 10);
circle(20, 10, 815 + 80+70, 365 + 10);
circle(20, 10, 820 + 80+70, 360 + 10);
circle(20, 10, 820 + 80+70, 345 + 10);
circle(20, 10, 790 + 80+70, 345 + 10);
circle(20, 10, 805 + 80+70, 340 + 10); // Translated last circle



    circle(20,10,800,350);

    circle(20,10,790,360);
 circle(20,10,805,355);
 circle(20,10,810,365);
 circle(20,10,805,375);
 circle(20,10,815,365);
 circle(20,10,820,360);
  circle(20,10,820,345);
   circle(20,10,790,345);
    circle(20,10,805,340);





glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370 + 120 + 90 + 200, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370 + 120 + 90 + 200, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370 + 120 + 90 + 200, 330);
glVertex2f(160 + 370 + 120 + 90 + 200, 330);    // Vertex 4 (bottom left)
glEnd();

glPushMatrix();  // Save the current transformation matrix
//glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon (green)
glVertex2f(690 + 30, 350);    // Vertex 1 (top left)
glVertex2f(740 + 30, 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30, 390);    // Vertex 3 (bottom center)
glEnd();


glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix




//last traingle tree

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix







//tree last er agehr ta

    //tree paitentence

// Draw the tree trunk (rectangle)
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(160 + 35 + 370 + 290, 380);    // Top left
glVertex2f(180 + 35 + 370 + 290, 380);    // Top right
glVertex2f(180 + 35 + 370 + 290, 330);    // Bottom right
glVertex2f(160 + 35 + 370 + 290, 330);    // Bottom left
glEnd();


    drawCircle5(640 +200, 390, 7);  // Translated x position by +370
 drawCircle5(650+200, 400, 7);  // Translated x position by +370
drawCircle5(645+200, 410, 7);  // Translated x position by +370
drawCircle5(665+200, 420, 7);  // Translated x position by +370

drawCircle5(675+200, 410, 7);  // Translated x position by +370
drawCircle5(685+200, 400, 7);  // Translated x position by +370
drawCircle5(685+200, 390, 7);  // Translated x position by +370

drawCircle5(685+200, 395, 7);  // Translated x position by +370
drawCircle5(660+200, 380, 7);  // Translated x position by +370
drawCircle5(670+200, 380, 7);  // Translated x position by +370
drawCircle5(665+200, 430, 7);  // Translated x position by +370

//tree adjustments
drawCircle5(665+200+80, 380,10);  // Translated x position by +370
drawCircle5(665+200+80, 390,10);  // Translated x position by +370
drawCircle5(665+200+80, 400,10);  // Translated x position by +370
//circle(30,20,665+200, 390);  // Translated x position by +370
drawCircle5(665+200, 370, 7);  // Translated x position by +370
drawCircle5(665-150, 370, 7);  // Translated x position by +370
drawCircle5(665-100, 370, 7);  // Translated x position by +370







//village


glBegin(GL_POLYGON);
glColor3f(0.49, 0.431, 0.088); // Brown color for the shape
glVertex2f(0, 330);    // Vertex 1 (top left)
glVertex2f(1000, 330); // Vertex 2 (top right)
glVertex2f(1000, 230); // Vertex 3 (bottom right)
glVertex2f(0, 230);    // Vertex 4 (bottom left)
glEnd();







    glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(260,320);    // Vertex 2 (upper left)
glVertex2f(280,280);
glVertex2f(100,280);
glEnd();



//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();



    glBegin(GL_TRIANGLES);
glColor3f(0.337, 0.251, 0.89); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(30,280);    // Vertex 2 (upper left)
glVertex2f(100,280);
glEnd();


    glBegin(GL_POLYGON);
glColor3f(0.18, 0.125, 0.529); // Color for the polygon
glVertex2f(40,280);    // Vertex 1 (top left)
glVertex2f(95,280);    // Vertex 2 (upper left)
glVertex2f(95,240);
glVertex2f(40,240);
glEnd();

    glBegin(GL_POLYGON);
glColor3f(0.616, 0.573, 0.902); // Color for the polygon
glVertex2f(95,280);    // Vertex 1 (top left)
glVertex2f(95,240);    // Vertex 2 (upper left)
glVertex2f(270,240);
glVertex2f(270,280);
glEnd();




  glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0); // Color for the lines

    // Draw 20 vertical lines horizontally by adjusting the x-coordinate
    for (int i = 0; i < 35; i++) {
        float xOffset = i * 5.0; // Increase xOffset by 20 units for each line
        glVertex2f(100 + xOffset, 280);  // Start point of the line (shifted horizontally)
        glVertex2f(100 + xOffset, 240);  // End point of the line (shifted horizontally)
    }

    glEnd();




    glBegin(GL_POLYGON);
glColor3f(0.251, 0.694, 0.949); // Color for the polygon
glVertex2f(30,240);    // Vertex 1 (top left)
glVertex2f(280,240);    // Vertex 2 (upper left)
glVertex2f(280,230);
glVertex2f(30,230);
glEnd();



//house2

glPushMatrix();  // Save the current matrix state

glTranslatef(210.0f, 0.0f, 0.0f);  // Translate by 300 units along the x-axis

// Draw the base of the house (main rectangle)
glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the main structure
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(260, 240);   // Bottom-right corner
glVertex2f(75, 240);    // Bottom-left corner
glEnd();

// Draw the roof (triangle shape)
glBegin(GL_QUADS);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(85, 330);    // Left-top corner of the base
glVertex2f(250, 330);   // Right-top corner of the base
glVertex2f(260, 300); // Peak of the roof
glVertex2f(75, 300); // Peak of the roof
glEnd();

// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 280);  // Top-right of the door
glVertex2f(140, 280);  // Top-left of the door
glEnd();

// Draw a window on the left side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(90, 270);  // Bottom-left of the window
glVertex2f(130, 270); // Bottom-right of the window
glVertex2f(130, 290); // Top-right of the window
glVertex2f(90, 290);  // Top-left of the window
glEnd();

// Draw a window on the right side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(200, 270);  // Bottom-left of the window
glVertex2f(240, 270);  // Bottom-right of the window
glVertex2f(240, 290);  // Top-right of the window
glVertex2f(200, 290);  // Top-left of the window
glEnd();

// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();



// Draw a chimney (small rectangle on the roof)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Chimney color (gray)
glVertex2f(200, 310);    // Bottom-left of the chimney
glVertex2f(215, 310);    // Bottom-right of the chimney
glVertex2f(215, 340);    // Top-right of the chimney
glVertex2f(200, 340);    // Top-left of the chimney
glEnd();




glPopMatrix();  // Restore the previous matrix state
 // Restore the previous matrix state



//house3

 glPushMatrix();  // Save the current matrix state

glTranslatef(410.0f, 0.0f, 0.0f);  // Translate the building along the x-axis

// Draw the main base of the house (trapezoid for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.5, 0.2); // Color for the main structure (greenish)
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner (more inward for a trapezoid shape)
glVertex2f(100, 240);   // Bottom-left corner (more inward for a trapezoid shape)
glEnd();

// Draw a second floor (smaller trapezoid above the main base)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for the second floor (gray)
glVertex2f(115, 280);    // Top-left corner
glVertex2f(245, 280);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner
glVertex2f(100, 240);   // Bottom-left corner
glEnd();

// Draw the roof (sloped roof, larger triangle for the top)
glBegin(GL_POLYGON);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(75, 300);    // Left-top corner of the base
glVertex2f(100, 240);   // Left-bottom corner of the base
glVertex2f(230, 240);   // Right-bottom corner of the base
glVertex2f(260, 300);   // Right-top corner of the base
glEnd();



// Draw a window on the left side (larger rectangle for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.631, 0.82); // Window color (light blue)
glVertex2f(90, 290);  // Bottom-left of the window
glVertex2f(240, 290); // Bottom-right of the window
glVertex2f(240, 270); // Top-right of the window
glVertex2f(90, 270);  // Top-left of the window
glEnd();






// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();




// Draw decorative side walls (for depth)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(75, 300);    // Left-top corner
glVertex2f(100, 240);   // Left-bottom corner
glVertex2f(100, 230);   // Left-bottom corner (lower)
glVertex2f(75, 230);    // Left-top corner (lower)
glEnd();




// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 260);  // Top-right of the door
glVertex2f(140, 260);  // Top-left of the door
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(260, 300);   // Right-top corner
glVertex2f(230, 240);   // Right-bottom corner
glVertex2f(230, 230);   // Right-bottom corner (lower)
glVertex2f(260, 230);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state



glBegin(GL_POLYGON);
glColor3f(0.0, 0.8, 0.0); // Color for side walls
glVertex2f(690, 320);   // Right-top corner
glVertex2f(810, 320);   // Right-bottom corner
glVertex2f(810, 240);   // Right-bottom corner (lower)
glVertex2f(690, 240);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state

circle2(20,10,750,280);
circle3(18,8,750,280);
circle3(18,8,750,280);

//football
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Color for side walls
glVertex2f(750, 320);   // Right-top corner
glVertex2f(750, 240);   // Right-bottom corner
glEnd();


// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685, 305+5);   // Right-top corner
glVertex2f(690, 285+5);   // Slanted point (above the lower part)
glVertex2f(690, 255+5);   // Lower slanted point
glVertex2f(685, 265+5);   // Bottom-right corner
glEnd();

// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690, 300);   // Right-top corner
glVertex2f(710, 300);   // Right-top corner
glVertex2f(710, 260);   // Right-bottom corner
glVertex2f(690, 260);   // Left-bottom corner
glEnd();











// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 260);   // Right-bottom corner (translated)
glVertex2f(690 + 100, 260);   // Left-bottom corner (translated)
glEnd();

// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685 + 100+20, 305 + 5);   // Right-top corner (translated)
glVertex2f(690 + 100+20, 285 + 5);   // Slanted point (above the lower part, translated)
glVertex2f(690 + 100+20, 255 + 5);   // Lower slanted point (translated)
glVertex2f(685 + 100+20, 265 + 5);   // Bottom-right corner (translated)
glEnd();

//tree
circle4(10,20,830,290);
circle4(10,20,830,290);
circle4(10,20,845,290);
circle4(10,20,860,290);
circle4(10,20,875,290);

circle4(10,20,845,300);
circle4(10,20,860,300);


// Draw circles horizontally
for (int i = 0; i < 5; i++) {
    circle4(10, 20, 830 + (i * 15), 290-40);  // Change x by 15 for each iteration, keep y constant at 290
}

// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 10)-40);  // Change y by 10 for each iteration, keep x constant at 845
}



// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 20)-40);  // Change y by 10 for each iteration, keep x constant at 845
}


circle4(15,30,920,290);
circle4(10,20,920,290);
circle4(12,40,935,290);
circle4(8,35,950,290);
circle4(15,40,965,290);

circle4(10,20,935,300);
circle4(10,20,950,300);


circle4(15,15,920,250);
circle4(10,20,920,250);
circle4(12,40,935,250);
circle4(8,35,950,250);
circle4(9,20,965,250);

circle4(10,7,935,260);
circle4(10,5,950,260);


//flower
      // Draw the first polygon (yellow side wall)
     glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0);  // Dark amber (night-like color)
    glVertex2f(0 , 230);     // Right-top corner
    glVertex2f(1000 , 230);  // Slanted point (above the lower part)
    glVertex2f(1000 , 200);  // Lower slanted point
    glVertex2f(0 , 200);     // Bottom-right corner
glEnd();



//230-200

   for (int i = 0; i < 32; i++) {
        float xOffset = i * 30.0f;  // Shift the polygons and circles horizontally by 55 units



        // Draw the second polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(30 + xOffset, 210);   // Right-top corner
        glVertex2f(32 + xOffset, 212);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the third polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(40 + xOffset, 216);   // Right-top corner
        glVertex2f(42 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the fourth polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(50 + xOffset, 216);   // Right-top corner
        glVertex2f(52 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the circles with different colors
        randomColor();  // Assign a random color for the first circle
        drawCircle1(31 + xOffset, 211, 2.5);

        randomColor();  // Assign a random color for the second circle
        drawCircle1(41 + xOffset, 215, 2.5);

        randomColor();  // Assign a random color for the third circle
        drawCircle1(51 + xOffset, 215, 2.5);
    }



        // First polygon (Blue)
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 1.0);  // Blue color
glVertex2f(15, 215);   // Right-top corner
glVertex2f(17, 217);   // Slanted point
glVertex2f(17, 200);   // Lower slanted point
glVertex2f(15, 200);   // Bottom-right corner
glEnd();

// Second polygon (Red)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.0, 0.0);  // Red color
glVertex2f(13, 222);   // Right-top corner
glVertex2f(19, 222);   // Slanted point
glVertex2f(19, 217);   // Lower slanted point
glVertex2f(13, 217);   // Bottom-right corner
glEnd();







         // Draw the polygons horizontally with a loop
    for (int i = 0; i < 32; i++) {  // 10 instances, change as needed
        float xOffset = i * 60.0f;  // Horizontal offset for each polygon

        // Draw the first polygon with a random color
        randomColor();  // Assign a random color for the polygon
        glBegin(GL_POLYGON);
        glVertex2f(15 + xOffset, 715);   // Right-top corner
        glVertex2f(17 + xOffset, 717);   // Slanted point
        glVertex2f(17 + xOffset, 700);   // Lower slanted point
        glVertex2f(15 + xOffset, 700);   // Bottom-right corner
        glEnd();

        // Draw the second polygon with a random color
        randomColor();  // Assign a random color for the second polygon
        glBegin(GL_POLYGON);
        glVertex2f(13 + xOffset, 722);   // Right-top corner
        glVertex2f(19 + xOffset, 722);   // Slanted point
        glVertex2f(19 + xOffset, 717);   // Lower slanted point
        glVertex2f(13 + xOffset, 717);   // Bottom-right corner
  glEnd();


    }




//0-100 dhankhet
glBegin(GL_POLYGON);
   glColor3f(0, 0.5, 0);  // Deep green color

  // Green color
    glVertex2f(0, 0);        // Bottom-left corner
    glVertex2f(0, 100);      // Top-left corner
    glVertex2f(1000, 100);   // Top-right corner
    glVertex2f(1000, 0);     // Bottom-right corner
glEnd();

        //dhan
 for (int i = 0; i < 100; i++) {
    float offsetX = i * 80.0f;  // Increment the x-offset to move along the x-axis

    glBegin(GL_POLYGON);
        glColor3f(0.722, 0.408, 0.051);  // Yellow color
        glVertex2f(0 + offsetX, 100);   // Right-top corner, shifted by offsetX
        glVertex2f(5 + offsetX, 100);   // Slanted point (above the lower part), shifted by offsetX
        glVertex2f(45 + offsetX, 0);   // Lower slanted point, shifted by offsetX
        glVertex2f(40 + offsetX, 0);   // Bottom-right corner, shifted by offsetX
    glEnd();
}







for (int j = 0; j < 8; j++) {  // Loop to draw 5 times along the y-axis
    float offsetY = j * -15.0f;  // Increment the y-offset for each iteration

    for (int i = 0; i < 100; i++) {
        float offsetX = i * 15.0f; // Increment the x-offset to move along the x-axis

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(1 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(5 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();
    }
}


//manush
glPopMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(40.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(140.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(90.0f, 40.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();



//traccter 1
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+s , 70);   // Right-top corner
        glVertex2f(30+s , 70);   // Slanted point (above the lower part)
        glVertex2f(30+s , 50);   // Lower slanted point
        glVertex2f(20+s , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+s , 68);   // Right-top corner
        glVertex2f(28+s , 68);   // Slanted point (above the lower part)
        glVertex2f(28+s , 52);   // Lower slanted point
        glVertex2f(22+s , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);  // Yellow color
        glVertex2f(10+s , 50);   // Right-top corner
        glVertex2f(50+s , 50);   // Slanted point (above the lower part)
        glVertex2f(50+s , 20);   // Lower slanted point
        glVertex2f(10+s , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+s,20,8);
drawCircle2(21+s,20,5);


drawCircle(41+s,20,8);
drawCircle2(41+s,20,5);




//traccter 2
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+400+ok , 70);   // Right-top corner
        glVertex2f(30+400+ok , 70);   // Slanted point (above the lower part)
        glVertex2f(30+400+ok , 50);   // Lower slanted point
        glVertex2f(20+400+ok , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+400+ok , 68);   // Right-top corner
        glVertex2f(28+400+ok , 68);   // Slanted point (above the lower part)
        glVertex2f(28+400+ok , 52);   // Lower slanted point
        glVertex2f(22+400+ok , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(0.7, 0.5, 0.5);  // Yellow color
        glVertex2f(10+400+ok , 50);   // Right-top corner
        glVertex2f(50+400+ok , 50);   // Slanted point (above the lower part)
        glVertex2f(50+400+ok , 20);   // Lower slanted point
        glVertex2f(10+400+ok , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+400+ok,20,8);
drawCircle2(21+400+ok,20,5);


drawCircle(41+400+ok,20,8);
drawCircle2(41+400+ok,20,5);














//tracker2



 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+10+600+si , 70);   // Right-top corner
        glVertex2f(30+10+600+si , 70);   // Slanted point (above the lower part)
        glVertex2f(30+10+600+si , 50);   // Lower slanted point
        glVertex2f(20+10+600+si , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+10+600+si , 68);   // Right-top corner
        glVertex2f(28+10+600+si , 68);   // Slanted point (above the lower part)
        glVertex2f(28+10+600+si , 52);   // Lower slanted point
        glVertex2f(22+10+600+si , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 1.0);  // Yellow color
        glVertex2f(10+600+si , 50);   // Right-top corner
        glVertex2f(50+600+si , 50);   // Slanted point (above the lower part)
        glVertex2f(50+600+si , 20);   // Lower slanted point
        glVertex2f(10+600+si , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+600+si,20,8);
drawCircle2(21+600+si,20,5);


drawCircle(41+600+si,20,8);
drawCircle2(41+600+si,20,5);

//jomi line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 100);   // Right-top corner
        glVertex2f(1000 , 100);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 200);   // Right-top corner
        glVertex2f(1000 , 200);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 230);   // Right-top corner
        glVertex2f(1000 , 230);    // Bottom-right corner
        glEnd();







    //100-200

glBegin(GL_POLYGON);
    glColor3f(0.439, 0.431, 0.039);  // Deep blue/purple color to simulate night
    glVertex2f(0, 199);         // Top-left corner
    glVertex2f(1000, 199);      // Top-right corner
    glVertex2f(1000, 100);      // Bottom-right corner
    glVertex2f(0, 100);         // Bottom-left corner
glEnd();





        //zar
            for (int i = 0; i < 30; i++) {
        // Draw the first set of circles
        drawCirclez(10 + i * 54, 180, 5);
        drawCirclez(10 + i *54, 175, 5);

        // Draw the second set of circles
        drawCirclez(20 + i * 54, 180, 9);
        drawCirclez(20 + i * 54, 175, 9);

        // Draw the third set of circles
        drawCirclez(30 + i * 54, 180, 5);
        drawCirclez(30 + i * 54, 175, 5);

        // Draw the fourth set of circles
        drawCirclez(45 + i * 54, 180, 11);
        drawCirclez(45 + i * 54, 175, 11);

        // Draw the fifth set of circles
        drawCirclez(55 + i * 54, 180, 5);
        drawCirclez(55 + i * 54, 175, 5);
    }

//rasta
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(0, 173);  // Bottom-left corner of the left shutter
    glVertex2f(1000, 173);  // Bottom-right corner of the left shutter
    glVertex2f(1000, 153);  // Top-right corner of the left shutter
    glVertex2f(0, 153);  // Top-left corner of the left shutter
glEnd();


// Draw the first part of the house (Yellow)
glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);  // Yellow color
    glVertex2f(30, 175);   // Right-top corner
    glVertex2f(80, 175);   // Slanted point
    glVertex2f(85, 150);   // Lower slanted point
    glVertex2f(25, 150);   // Bottom-right corner
glEnd();

// Draw the second part of the house (Red)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color
    glVertex2f(30, 150);   // Right-top corner
    glVertex2f(80, 150);   // Slanted point
    glVertex2f(80, 120);   // Lower slanted point
    glVertex2f(30, 120);   // Bottom-right corner
glEnd();

// Draw the left window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(35, 145);   // Right-top corner
    glVertex2f(40, 145);   // Slanted point
    glVertex2f(40, 130);   // Lower slanted point
    glVertex2f(35, 130);   // Bottom-right corner
glEnd();

// Draw the right window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(70, 145);   // Right-top corner
    glVertex2f(75, 145);   // Slanted point
    glVertex2f(75, 130);   // Lower slanted point
    glVertex2f(70, 130);   // Bottom-right corner
glEnd();

// Draw the door (Brown)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45, 150);   // Right-top corner
    glVertex2f(65, 150);   // Top-right corner
    glVertex2f(65, 120);   // Bottom-right corner
    glVertex2f(45, 120);   // Bottom-left corner
glEnd();



// house 2
// Apply translation to shift the house by 130 units along the X-axis
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 80 units along the X-axis
glTranslatef(80.0f, 32.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);  // Orange color for the roof
    glVertex2f(40+20 , 200);   // Top peak of the roof
    glVertex2f(100+20 , 175);  // Bottom-right corner of the roof
    glVertex2f(0 , 175);       // Bottom-left corner of the roof
glEnd();

// Draw the body of the house (Rectangle, different proportions)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the body of the house
    glVertex2f(20 , 175);      // Bottom-left corner
    glVertex2f(90 , 175);      // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner (lower position)
    glVertex2f(20 , 100);      // Top-left corner
glEnd();

// Draw the left window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(30 , 150);      // Top-left corner
    glVertex2f(50 , 150);      // Top-right corner
    glVertex2f(50, 130);       // Bottom-right corner
    glVertex2f(30 , 130);      // Bottom-left corner
glEnd();

// Draw the right window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(60 , 150);      // Top-left corner
    glVertex2f(80 , 150);      // Top-right corner
    glVertex2f(80, 130);       // Bottom-right corner
    glVertex2f(60 , 130);      // Bottom-left corner
glEnd();

// Draw the door (Wider door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45 , 100+50);       // Top-left corner of the door
    glVertex2f(65 , 100+50);       // Top-right corner of the door
    glVertex2f(65, 50+50);         // Bottom-right corner of the door
    glVertex2f(45 , 50+50);        // Bottom-left corner of the door
glEnd();

// Restore the previous transformation matrix
glPopMatrix();





//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 160 units along the X-axis
glTranslatef(160.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new slanted roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color for the roof
    glVertex2f(20, 200);       // Left peak of the roof (Y=200)
    glVertex2f(100, 200);      // Right peak of the roof (Y=200)
    glVertex2f(90, 175);       // Right-bottom corner of the roof (Y=175)
    glVertex2f(30, 175);       // Left-bottom corner of the roof (Y=175)
glEnd();

// Draw the body of the house (Rectangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.9, 0.0);  // Green color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner (Y=175)
    glVertex2f(90, 175);       // Bottom-right corner (Y=175)
    glVertex2f(90, 100);       // Top-right corner (Y=100)
    glVertex2f(30, 100);       // Top-left corner (Y=100)
glEnd();

// Draw the left window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(40, 150);       // Top-left corner (Y=150)
    glVertex2f(60, 150);       // Top-right corner (Y=150)
    glVertex2f(60, 130);       // Bottom-right corner (Y=130)
    glVertex2f(40, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the right window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(60, 150);       // Top-left corner (Y=150)
    glVertex2f(80, 150);       // Top-right corner (Y=150)
    glVertex2f(80, 130);       // Bottom-right corner (Y=130)
    glVertex2f(60, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the door (Smaller door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.75, 0.0);  // Brown color for the door
    glVertex2f(50, 100+40+10);       // Top-left corner of the door (Y=100)
    glVertex2f(70, 100+40+10);       // Top-right corner of the door (Y=100)
    glVertex2f(70, 50+40+10);        // Bottom-right corner of the door (Y=50)
    glVertex2f(50, 50+40+10);        // Bottom-left corner of the door (Y=50)
glEnd();

// Draw a chimney (Small rectangle on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 210-14);       // Bottom-left corner of the chimney (Y=205)
    glVertex2f(70, 210-14);       // Bottom-right corner of the chimney (Y=205)
    glVertex2f(70, 225);       // Top-right corner of the chimney (Y=225)
    glVertex2f(60, 225);       // Top-left corner of the chimney (Y=225)
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 260 units along the X-axis
glTranslatef(230.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the curved roof (Bezier-style shape for smooth curves)
glBegin(GL_POLYGON);
    glColor3f(0.9, 0.0, 0.0);  // Deep Red color for the roof
    glVertex2f(20-8, 180);       // Left peak of the roof
    glVertex2f(40-8, 220);       // Left-top curve of the roof
    glVertex2f(100-8, 220);      // Right-top curve of the roof
    glVertex2f(120-8, 170);      // Right peak of the roof
    glVertex2f(100-8, 154);      // Right-bottom corner of the roof
    glVertex2f(40-8, 154);       // Left-bottom corner of the roof
glEnd();

// Draw the body of the house (Rounded corners for a soft look)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.9, 0.4);  // Light Yellow color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner
    glVertex2f(90, 175);       // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner
    glVertex2f(30, 100);       // Top-left corner
glEnd();

// Draw the left window (Rounded square for elegance)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Bright Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        // Adjusting left window position (radius = 15, x = 50, y = 140)
        glVertex2f(60 + cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();



// Draw the door (Rounded top with a handle)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.0);  // Brown color for the door
    glVertex2f(50, 100);       // Top-left corner of the door
    glVertex2f(70, 100);       // Top-right corner of the door
    glVertex2f(70, 125);        // Bottom-right corner of the door
    glVertex2f(50, 125);        // Bottom-left corner of the door
glEnd();

// Draw the door handle (Small circle on the right side of the door)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.0);  // Yellow color for the handle
    for (float angle = 0; angle <= 360; angle += 1.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(60 + cos(rad) * 2, 75 + sin(rad) * 2); // Circular handle
    }
glEnd();

// Draw a chimney (Decorative chimney on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 205);       // Bottom-left corner of the chimney
    glVertex2f(65, 205);       // Bottom-right corner of the chimney
    glVertex2f(65, 225);       // Top-right corner of the chimney
    glVertex2f(60, 225);       // Top-left corner of the chimney
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house

// Draw the chimney base (original brown)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(400 - 80, 190);  // Bottom-left corner of the chimney
    glVertex2f(550 - 80, 190);  // Bottom-right corner of the chimney
    glVertex2f(550 - 80, 100);  // Top-right corner of the chimney
    glVertex2f(400 - 80, 100);  // Top-left corner of the chimney
glEnd();

// Draw the chimney top (darker color for a more realistic look)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.9);  // Darker color for the top of the chimney
    glVertex2f(400 - 70, 180);  // Bottom-left corner of the chimney top
    glVertex2f(530 - 70, 180);  // Bottom-right corner of the chimney top
    glVertex2f(530 - 70, 110);  // Top-right corner of the chimney top
    glVertex2f(400 - 70, 110);  // Top-left corner of the chimney top
glEnd();

// --- Draw the Window with Shutters ---
// Left Window
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(435+ cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();

// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-25, 145-17);  // Bottom-left corner of the left shutter
    glVertex2f(465-25, 145-17);  // Bottom-right corner of the left shutter
    glVertex2f(465-25, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-25, 170-17);  // Top-left corner of the left shutter
glEnd();

// Right Window (same as left)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(355 + cos(rad) * 15, 140 + sin(rad) * 15); // Right window
    }
glEnd();

// Right window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(505-155, 145-17);  // Bottom-left corner of the right shutter
    glVertex2f(515-155, 145-17);  // Bottom-right corner of the right shutter
    glVertex2f(515-155, 170-17);  // Top-right corner of the right shutter
    glVertex2f(505-155, 170-17);  // Top-left corner of the right shutter
glEnd();
// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-75, 125-17);  // Bottom-left corner of the left shutter
    glVertex2f(485-75, 125-17);  // Bottom-right corner of the left shutter
    glVertex2f(485-75, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-75, 170-17);  // Top-left corner of the left shutter
glEnd();



//house

// Translate the entire house upwards or downwards along the Y-axis

    glTranslatef(-20.0f, -20.0f, 0.0f);  // Translate the house 50 units upwards along the Y-axis

    // Draw the base of the house (rectangle)
    glColor3f(0.8f, 0.4f, 0.2f);  // Brown color for the house
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the base of the house
    glVertex2f(500, 120);
    glVertex2f(600, 120);
    glVertex2f(600, 180);
    glVertex2f(500, 180);
    glEnd();  // End drawing the rectangle

    // Draw the roof of the house (triangle)
    glColor3f(0.6f, 0.2f, 0.2f);  // Dark red color for the roof
    glBegin(GL_TRIANGLES);  // Begin drawing the triangle for the roof
    glVertex2f(500, 180);  // Left corner of the roof
    glVertex2f(600, 180);  // Right corner of the roof
    glVertex2f(550, 210);  // Peak of the roof
    glEnd();  // End drawing the triangle

    // Draw the door (rectangle)
    glColor3f(0.5f, 0.3f, 0.1f);  // Dark brown color for the door
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the door
    glVertex2f(535, 120);
    glVertex2f(565, 120);
    glVertex2f(565, 150);
    glVertex2f(535, 150);
    glEnd();  // End drawing the rectangle

    // Draw windows (rectangles)
    glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for windows
    glBegin(GL_QUADS);  // Left window
    glVertex2f(510, 150);
    glVertex2f(530, 150);
    glVertex2f(530, 170);
    glVertex2f(510, 170);
    glEnd();  // End drawing the left window

    glBegin(GL_QUADS);  // Right window
    glVertex2f(570, 150);
    glVertex2f(590, 150);
    glVertex2f(590, 170);
    glVertex2f(570, 170);
    glEnd();  // End drawing the right window




    //well



       // Translate the entire well 100 units to the right (along the X-axis)
    glTranslatef(80.0f, 0.0f, 0.0f);  // Move the well to the right

    // Draw the base of the well (circle)
    glColor3f(0.5f, 0.5f, 0.5f);  // Gray color for the well's base
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the base
    glVertex2f(550, 120);  // Center of the circle (well's base)
    const int numi_segments = 100;  // Number of segments to make the circle smooth
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the circle's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the circle's edge
        glVertex2f(x + 550, y + 135);  // Vertex of the circle
    }
    glEnd();  // End drawing the base circle

    // Draw the walls of the well (rectangle)
    glColor3f(0.3f, 0.3f, 0.3f);  // Dark gray color for the well's walls
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the walls of the well
    glVertex2f(535, 130);  // Bottom-left corner
    glVertex2f(565, 130);  // Bottom-right corner
    glVertex2f(565, 160);  // Top-right corner
    glVertex2f(535, 160);  // Top-left corner
    glEnd();  // End drawing the rectangle

    // Draw the top of the well (roof, another circle)
    glColor3f(0.0f, 0.0f, 1.0f);  // Dark brown color for the roof
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
    glVertex2f(550, 170);  // Center of the roof circle
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the roof's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the roof's edge
        glVertex2f(x + 550, y + 160);  // Vertex of the roof circle
    }
    glEnd();  // End drawing the roof circle

//kher

glColor3f(0.0f, 0.0f, 1.0f);  // Blue color for the roof
glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
glVertex2f(620, 170);  // Center of the roof circle (original position)

// New translation value for the Y-axis (roof)
float translationY = 50.0f;  // Translate 50 units up (can change this value)
float additionalTranslationY = 5.0f;  // Additional 5 units translation
float newCenterY = 120 + translationY + additionalTranslationY;  // New Y position after translation

// New radius value for a wider roof
float raddius = 31.0f;  // Increase the radius to make the circle wider

// Loop to create the circle for the roof
const int numq_segments = 100;  // Number of segments for smoothness
for (int i = 0; i <= numq_segments; i++) {
    float theta = 2.0f * 3.1415926f * float(i) / float(numq_segments);  // Calculate angle
    float x = raddius * cosf(theta);  // X coordinate for the roof's edge
    float y = raddius * sinf(theta);  // Y coordinate for the roof's edge
    glVertex2f(x + 620, y + newCenterY);  // Vertex of the roof circle with translated Y-coordinate
}
glEnd();  // End drawing the roof circle

// Set the color for the house body (brown)
glColor3f(0.6f, 0.3f, 0.0f);  // Brown color for the house body
glBegin(GL_QUADS);  // Begin drawing the rectangle for the body

// The body of the house (a smaller rectangle)
float houseWidth = 60.0f;  // Further reduced width of the house
float houseHeight = 60.0f;  // Further reduced height of the house

// Bottom-left corner of the house body (relative to the roof center)
float houseBottomLeftX = 620 - houseWidth / 2;
float houseBottomLeftY = newCenterY - raddius - houseHeight + 50.0f;  // Translate 50 units up (adjusted Y position)

// Bottom-right corner of the house body
float houseBottomRightX = houseBottomLeftX + houseWidth;
float houseBottomRightY = houseBottomLeftY;

// Top-left corner of the house body
float houseTopLeftX = houseBottomLeftX;
float houseTopLeftY = houseBottomLeftY + houseHeight;

// Top-right corner of the house body
float houseTopRightX = houseBottomRightX;
float houseTopRightY = houseTopLeftY;

// Define the 4 corners of the rectangle (house body)
glVertex2f(houseBottomLeftX, houseBottomLeftY);  // Bottom-left
glVertex2f(houseBottomRightX, houseBottomRightY);  // Bottom-right
glVertex2f(houseTopRightX, houseTopRightY);  // Top-right
glVertex2f(houseTopLeftX, houseTopLeftY);  // Top-left

glEnd();  // End drawing the house body

// Draw the window (small rectangle)
glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for the window
glBegin(GL_QUADS);  // Begin drawing the window

float windowWidth = 15.0f;  // Reduced width of the window
float windowHeight = 15.0f;  // Reduced height of the window

// Bottom-left corner of the window
float windowBottomLeftX = 627 - houseWidth / 4;  // Position window to the left of center
float windowBottomLeftY = houseTopLeftY - 25.0f;  // Positioned a little below the roof

// Bottom-right corner of the window
float windowBottomRightX = windowBottomLeftX + windowWidth;
float windowBottomRightY = windowBottomLeftY;

// Top-left corner of the window
float windowTopLeftX = windowBottomLeftX;
float windowTopLeftY = windowBottomLeftY + windowHeight;

// Top-right corner of the window
float windowTopRightX = windowBottomRightX;
float windowTopRightY = windowTopLeftY;

// Define the 4 corners of the window rectangle
glVertex2f(windowBottomLeftX, windowBottomLeftY);  // Bottom-left
glVertex2f(windowBottomRightX, windowBottomRightY);  // Bottom-right
glVertex2f(windowTopRightX, windowTopRightY);  // Top-right
glVertex2f(windowTopLeftX, windowTopLeftY);  // Top-left

glEnd();  // End drawing the window

// Draw the door (larger rectangle)
glColor3f(0.4f, 0.2f, 0.0f);  // Dark brown color for the door
glBegin(GL_QUADS);  // Begin drawing the door

float doorWidth = 20.0f;  // Reduced width of the door
float doorHeight = 40.0f;  // Reduced height of the door

// Bottom-left corner of the door (centered at the bottom)
float doorBottomLeftX = 620 - doorWidth / 2;
float doorBottomLeftY = houseBottomLeftY;

// Bottom-right corner of the door
float doorBottomRightX = doorBottomLeftX + doorWidth;
float doorBottomRightY = doorBottomLeftY;

// Top-left corner of the door
float doorTopLeftX = doorBottomLeftX;
float doorTopLeftY = doorBottomLeftY + doorHeight;

// Top-right corner of the door
float doorTopRightX = doorBottomRightX;
float doorTopRightY = doorTopLeftY;

// Define the 4 corners of the door rectangle
glVertex2f(doorBottomLeftX, doorBottomLeftY);  // Bottom-left
glVertex2f(doorBottomRightX, doorBottomRightY);  // Bottom-right
glVertex2f(doorTopRightX, doorTopRightY);  // Top-right
glVertex2f(doorTopLeftX, doorTopLeftY);  // Top-left

glEnd();  // End drawing the door



float translationX = 100.0f;  // Translation value on the X-axis

glColor3f(0.5f, 0.0f, 0.9f);

// Begin drawing a rectangle (structure) using GL_QUADS
glBegin(GL_QUADS);
    // Define the four vertices of the rectangle, translating them by `translationX`
    glVertex2f(760.0f + translationX, 120.0f); // bottom-left corner
    glVertex2f(840.0f + translationX, 120.0f); // bottom-right corner
    glVertex2f(840.0f + translationX, 190.0f); // top-right corner
    glVertex2f(760.0f + translationX, 190.0f); // top-left corner
glEnd();

// Draw a complex structure

// Set color for the base rectangle (red)
glColor3f(1.0f, 0.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 130.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 130.0f); // bottom-right corner
    glVertex2f(830.0f + translationX, 170.0f); // top-right corner
    glVertex2f(770.0f + translationX, 170.0f); // top-left corner
glEnd();

// Set color for the top triangle (blue)
glColor3f(0.7f, 0.6f, 0.4f);
glBegin(GL_TRIANGLES);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // peak of the triangle
glEnd();

// Set color for another rectangle (green)
glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(800.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // top-right corner
    glVertex2f(770.0f + translationX, 200.0f); // top-left corner
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(160+740, 130);  // Bottom-left of the door
glVertex2f(140+740, 130);  // Bottom-right of the door
glVertex2f(140+740, 170);  // Top-right of the door
glVertex2f(160+740, 170);  // Top-left of the door
glEnd();

//cricket
drawCircle7(755,150,15);
drawCircle7(730,150,15);
drawCircle7(775,150,15);
drawCircle7(710,150,15);
drawCircle7(795,150,15);
drawCircle7(805,150,15);


drawCircle5(755,150,14);
drawCircle5(730,150,14);
drawCircle5(775,150,14);
drawCircle5(710,150,14);
drawCircle5(795,150,14);
drawCircle5(805,150,14);
glColor3f(1.0f, 1.0f, 0.0f); // Color the polygon yellow (you can change this)
glBegin(GL_QUADS);

// Define the four vertices of the polygon (you can adjust the coordinates to fit your design)
glVertex2f(720.0f, 140.0f); // bottom-left corner
glVertex2f(785.0f, 140.0f); // bottom-right corner
glVertex2f(785.0f, 160.0f); // top-right corner
glVertex2f(720.0f, 160.0f); // top-left corner

glEnd();




bird();
bird1();












    glutSwapBuffers();


}




void drawScene4() {




    //tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();
//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen
    glLoadIdentity(); // Reset the drawing perspective
    gluOrtho2D(0.0, 1000.0, 0.0, 1000.0); // Set orthographic projection range
    glMatrixMode(GL_MODELVIEW); // Set the matrix mode to modelview for 2D drawing

    // Drawing the sky (a blue rectangle)
 glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.3); // Dark blue color for night sky
    glVertex2f(0, 800); // Bottom-left corner
    glVertex2f(0, 1000); // Top-left corner
    glVertex2f(1000, 1000); // Top-right corner
    glVertex2f(1000, 800); // Bottom-right corner
glEnd();


    glPushMatrix();
    glTranslatef(500.0, 900.0, 0); // Move to center of the window (500, 900)




       // Draw the moon (simple white or gray circle)
    float radius = 25.0f; // Radius of the moon
    int num_segments = 100; // Number of segments to approximate the circle

    // Draw the moon itself
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f); // Light gray color for the moon
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments); // Calculate the angle for each vertex
        float x = radius * cos(theta); // X position of each vertex
        float y = radius * sin(theta); // Y position of each vertex
        glVertex2f(x, y); // Plot the vertex
    }
    glEnd();


clouds1();


clouds2();


clouds3();

//plane

  glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 920 ); // Bottom-left corner
    glVertex2f(600+ shifti, 940 ); // Top-left corner
    glVertex2f(680+ shifti, 940 ); // Top-right corner
    glVertex2f(680+ shifti, 920 ); // Bottom-right corner
    glEnd();



       glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(700+ shifti, 960 ); // Bottom-right corner
   glVertex2f(700+ shifti, 920 ); // Top-right corner
    glVertex2f(680+ shifti, 920) ; // Top-right corner

    glEnd();

        glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)

     glVertex2f(680+ shifti, 940 ); // Top-right corner
   glVertex2f(700 + shifti, 940 ); // Top-right corner
   glVertex2f(680 + shifti, 920 ); // Bottom-right corner

    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(640+ shifti, 930 ); // Bottom-left corner
    glVertex2f(650 + shifti, 930 ); // Top-left corner
     glVertex2f(670+ shifti, 890 ); // Bottom-right corner
    glVertex2f(660+ shifti, 890 ); // Top-right corner

    glEnd();

    drawCircle(600.0f + shifti, 930.0f, 10.0f);

  glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 935 ); // Bottom-left corner

    glVertex2f(600 + shifti, 933 ); // Top-left corner
    glVertex2f(680 + shifti, 933 ); // Bottom-right corner

    glVertex2f(680 + shifti, 935 ); // Top-right corner
    glEnd();


// the rocket


    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 890 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
    glVertex2f(90, 830 + shift); // Top-right corner
    glVertex2f(90, 890 + shift); // Bottom-right corner
    glEnd;



      glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 880 + shift); // Bottom-left corner
    glVertex2f(100, 870 + shift); // Top-left corner
    glVertex2f(90, 870 + shift); // Top-right corner
    glVertex2f(90, 880 + shift); // Bottom-right corner
    glEnd;




       glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.5); // Sky color (light blue)
    glVertex2f(100, 860 + shift); // Bottom-left corner
    glVertex2f(100, 850 + shift); // Top-left corner
    glVertex2f(90, 850 + shift); // Top-right corner
    glVertex2f(90, 860 + shift); // Bottom-right corner
    glEnd;




    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(90, 830 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
      glVertex2f(102, 815 + shift); // Top-right corner
       glVertex2f(88, 815 + shift); // Bottom-right corner


    glEnd();

   glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(95, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(92, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(98, 800 + shift); // Top-right corner

    glEnd();



      glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
     glVertex2f(90, 890 + shift); // Bottom-right corner

    glVertex2f(95, 910 + shift); // Top-right corner
     glVertex2f(100, 890 + shift); // Top-left corner

    glEnd();








///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.2, 0.1);  // Darker green, soft night color
    glVertex2f(0,800);
    glVertex2f(100,800);
    glVertex2f(50,850);
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.4, 0.1);  // Muted green for night effect
    glVertex2f(20,850);
    glVertex2f(100,800);
    glVertex2f(0,800);
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.4, 0.1);  // Muted green for night effect
    glVertex2f(70,850);
    glVertex2f(100,800);
    glVertex2f(0,800);
    glEnd();


/// hill 2

//polygon1//
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.3, 0.1);  // Darker green shade
    glVertex2f(100,800);
    glVertex2f(200,800);
    glVertex2f(180,835);
    glVertex2f(160,840);
    glVertex2f(155,845);
    glVertex2f(150,840);
    glVertex2f(130,845);
    glVertex2f(120,840);
    glVertex2f(150,835);
    glEnd();

/// hill3

glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.2);  // Darker green-blue for the hill at night
glVertex2f(200, 800);   // Vertex 1
glVertex2f(330, 800);   // Vertex 2
glVertex2f(330, 800);   // Vertex 3 (new point)
glVertex2f(330, 800);   // Vertex 4 (new point)
glVertex2f(310, 860);   // Vertex 5 (new point)
glVertex2f(270, 870);   // Vertex 6 (new point)
glVertex2f(230, 860);   // Vertex 7 (new point)
glVertex2f(200, 800);   // Vertex 8 (new point)
glEnd();





//hill 4

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(330, 800);    // Vertex 1 (top left)
glVertex2f(430, 800);    // Vertex 2 (upper left)
glVertex2f(430, 900);    // Vertex 3 (middle left)
glVertex2f(330, 900);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(330+33, 800);    // Vertex 1 (top left)

glVertex2f(330+33, 900);    // Vertex 3 (middle left)

glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430-33, 800);    // Vertex 2 (upper left)
glVertex2f(430-33, 900);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 825);    // Vertex 2 (upper left)
glVertex2f(330, 825);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 850);    // Vertex 2 (upper left)
glVertex2f(330, 850);    // Vertex 3 (middle left)
glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 875);    // Vertex 2 (upper left)
glVertex2f(330, 875);    // Vertex 3 (middle left)
glEnd();




int x_start = 330, x_end = 430; // X range
int y_start = 800, y_end = 900; // Y range
int horizontal_count = 3;       // Number of polygons horizontally
int vertical_count = 4;         // Number of polygons vertically

// Initial polygon points (given)
float initial_x = 347.0f;
float initial_y = 812.0f; // Corrected initial y value

// Loop to create the polygons
for (int i = 0; i < vertical_count; i++) {
    for (int j = 0; j < horizontal_count; j++) {
        // Calculate x and y positions for each polygon
        float x = initial_x + j * ((x_end - x_start) / horizontal_count);
        float y = initial_y + i * ((y_end - y_start) / vertical_count);

        // Draw the polygon at (x, y)
        glBegin(GL_POLYGON);
        glColor3f(0.125, 0.404, 0.49);  // Green color for the polygon (customize as needed)

        // Define 4 vertices for each polygon, with (x, y) as the center
        glVertex2f(x - 6, y + 5);   // Vertex 1 (top left)
        glVertex2f(x + 6, y + 5);   // Vertex 2 (top right)
        glVertex2f(x + 6, y - 5);   // Vertex 3 (bottom right)
        glVertex2f(x - 6, y - 5);   // Vertex 4 (bottom left)

        glEnd();
    }
}





///hill
glBegin(GL_POLYGON);
glColor3f(0.2, 0.4, 0.05);  // Darker, muted green color for nighttime
glVertex2f(430, 800);    // Vertex 1 (top left)
glVertex2f(530, 800);    // Vertex 2 (upper left)
glVertex2f(480, 840);    // Vertex 3 (middle left)
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.05);  // A deeper, darker green for a more subdued effect
glVertex2f(530, 800);    // Vertex 1 (top left)
glVertex2f(580, 800);    // Vertex 2 (upper left)
glVertex2f(555, 850);    // Vertex 3 (middle left)
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.1, 0.2, 0.1);  // Muted dark green to match nighttime ambiance
glVertex2f(580, 800);    // Vertex 1 (top left)
glVertex2f(555, 850);    // Vertex 2 (middle left)
glVertex2f(620, 800);    // Vertex 3 (middle left)
glEnd();



///new byulding

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(620, 800);    // Vertex 1 (top left)
glVertex2f(620, 900);    // Vertex 2 (upper left)
glVertex2f(730, 900);    // Vertex 3 (middle left)
glVertex2f(730, 800);    // Vertex 3 (middle left)

glEnd();




// Park dimensions and configuration
int x_range_start = 620, x_range_end = 720; // X range
int y_range_start = 800, y_range_end = 900; // Y range
int num_polygons_horizontal = 3;            // Number of polygons horizontally
int num_polygons_vertical = 4;              // Number of polygons vertically

// Initial position of the first polygon
float initial_pos_x = 642.0f;
float initial_pos_y = 810.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row = 0; row < num_polygons_vertical; row++) {
    for (int col = 0; col < num_polygons_horizontal; col++) {
        // Calculate X and Y positions for each polygon
        float pos_x = initial_pos_x + col * ((x_range_end - x_range_start) / num_polygons_horizontal);
        float pos_y = initial_pos_y + row * ((y_range_end - y_range_start) / num_polygons_vertical);

        // Draw the polygon at (pos_x, pos_y)
        glBegin(GL_POLYGON);
        glColor3f(0.153, 0.808, 0.961);  // Green color for the polygon (customize as needed)

        // Define 6 vertices for each polygon, with the (pos_x, pos_y) as the center
        glVertex2f(pos_x - 10, pos_y + 10);   // Vertex 1
        glVertex2f(pos_x + 10, pos_y + 10);   // Vertex 2
        glVertex2f(pos_x + 20, pos_y);        // Vertex 3
        glVertex2f(pos_x + 10, pos_y - 10);   // Vertex 4
        glVertex2f(pos_x - 10, pos_y - 10);   // Vertex 5
        glVertex2f(pos_x - 20, pos_y);        // Vertex 6

        glEnd();
    }
}


/// new building


glBegin(GL_POLYGON);
glColor3f(0.89, 0.105, 0.4); // Green color (for the shape)
glVertex2f(730, 800);    // Vertex 1 (top left)
glVertex2f(730, 850);    // Vertex 2 (upper left)
glVertex2f(845, 850);    // Vertex 3 (middle left)
glVertex2f(845, 800);    // Vertex 3 (middle left)

glEnd();

// Park dimensions and configuration
int park_x_start = 720, park_x_end = 820;   // X range for the park area
int park_y_start = 800, park_y_end = 850;   // Y range for the park area
int total_polygons_horizontal = 4;           // Number of polygons horizontally
int total_polygons_vertical = 4;             // Number of polygons vertically

// Initial position of the first polygon
float start_pos_x = 750.0f;
float start_pos_y = 807.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row_index = 0; row_index < total_polygons_vertical; row_index++) {
    for (int col_index = 0; col_index < total_polygons_horizontal; col_index++) {
        // Calculate X and Y positions for each polygon
        float polygon_pos_x = start_pos_x + col_index * ((park_x_end - park_x_start) / total_polygons_horizontal);
        float polygon_pos_y = start_pos_y + row_index * ((park_y_end - park_y_start) / total_polygons_vertical);

        // Draw the polygon at (polygon_pos_x, polygon_pos_y)
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygon (customize as needed)

        // Define 8 vertices for each polygon, with (polygon_pos_x, polygon_pos_y) as the center
        glVertex2f(polygon_pos_x - 6, polygon_pos_y + 3);  // Vertex 1
        glVertex2f(polygon_pos_x + 6, polygon_pos_y + 3);  // Vertex 2
        glVertex2f(polygon_pos_x + 15, polygon_pos_y + 2);   // Vertex 3
        glVertex2f(polygon_pos_x + 15, polygon_pos_y - 2);   // Vertex 4
        glVertex2f(polygon_pos_x + 6, polygon_pos_y - 3);  // Vertex 5
        glVertex2f(polygon_pos_x - 6, polygon_pos_y - 3);  // Vertex 6
        glVertex2f(polygon_pos_x - 15, polygon_pos_y - 2);   // Vertex 7
        glVertex2f(polygon_pos_x - 15, polygon_pos_y + 2);   // Vertex 8

        glEnd();
    }
}


///hill


glBegin(GL_POLYGON);
glColor3ub(34, 139, 34);
glVertex2f(845, 800);    // Vertex 1 (top left)
glVertex2f(845, 835);    // Vertex 2 (upper left)
glVertex2f(1000, 835);    // Vertex 3 (middle left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)

glEnd();

drawCircle2(873.0f, 830.0f, 15.0f);

drawCircle2(900.0f, 830.0f, 15.0f);
drawCircle2(930.0f, 830.0f, 18.0f);

drawCircle2(955.0f, 830.0f, 15.0f);
drawCircle2(985.0f, 830.0f, 18.0f);

drawCircle2(1020.0f, 830.0f, 18.0f);

drawCircle3(850.0f, 820.0f, 6.0f);

drawCircle3(860.0f, 820.0f, 6.0f);






//nodi
// Polygon with a night-like color (Dark blue for night)
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.6);  // Dark blue, suitable for a nighttime look
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)
glVertex2f(0, 800);    // Vertex 4 (bottom left)
glEnd();

float gadp = 5.0f;  // The gap between objects
float widt = 0.75f;  // The width of each object

// Starting position for the Y-coordinate
float startY = 797.0f;

// Adjust this gap to prevent overlap, assuming your object height is 1.0f
float vert_gap = 4.0f;

for (int j = 0; j < 200; j++) {  // Loop for drawing 200 rows vertically
    for (int i = 0; i < 500; i++) {
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);

        // Calculate the X positions with gap between objects
        float x_offset = (widt + gadp) * i;

        // Calculate the Y position for each row, with a gap between them
        float y_offset = startY - j * vert_gap;  // Adjust Y for each row

        glVertex2f(x_offset, y_offset);
        glVertex2f(x_offset + widt, y_offset);
        glVertex2f(x_offset + widt, y_offset - 1.0f);  // Slightly adjust for the height of the object
        glVertex2f(x_offset, y_offset - 1.0f);  // Slightly adjust for the height of the object

        glEnd();
    }
}



//road
// Polygon with a muted, dark nighttime color
glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.2);  // Dark gray/brown, suitable for night
glVertex2f(0, 700);    // Vertex 1 (top left)
glVertex2f(1000, 700);    // Vertex 2 (upper left)
glVertex2f(1000, 630);    // Vertex 3 (middle left)
glVertex2f(0, 630);    // Vertex 4 (bottom left)
glEnd();


float ga = 5.0f;  // The gap between objects
float wi = 4.0f;  // The width of each object

for (int i = 0; i < 150; i++) {
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // Black color (for the shape)

    // Calculate the X position with gap between objects
    float x_offset = (wi + ga) * i;

    glVertex2f(x_offset, 657);    // Vertex 1 (top left)
    glVertex2f(x_offset + wi, 657);    // Vertex 2 (upper right)
    glVertex2f(x_offset + wi, 653);    // Vertex 3 (bottom right)
    glVertex2f(x_offset, 653);    // Vertex 4 (bottom left)

    glEnd();
}



glEnd();





// pillar of bridge
// Set the gap between each pillar
float gap = 100.0f; // You can adjust this value for a bigger or smaller gap between pillars

// Loop to draw multiple pillars along the horizontal axis
for (float xOffset = 0; xOffset < 1200; xOffset += gap) { // Change 300 to the desired number of pillars (adjust as needed)
    // Draw the main pillar body (rectangle-like shape with slight curve)
    glBegin(GL_POLYGON);
    glColor3f(0.541, 0.541, 0.514); // Pillar color
    glVertex2f(10 + xOffset, 630);  // Top left vertex
    glVertex2f(60 + xOffset, 630);  // Top right vertex
    glVertex2f(60 + xOffset, 600);  // Bottom right vertex
    glVertex2f(10 + xOffset, 600);  // Bottom left vertex
    glEnd();

    // Add subtle ridges for texture (details for aesthetics)
    glLineWidth(2.0);
    glColor3f(0.396, 0.263, 0.129); // Dark color for ridges
    for (float y = 610; y <= 620; y += 2) {
        glBegin(GL_LINES);
        glVertex2f(10 + xOffset, y);  // Start from the left side
        glVertex2f(60 + xOffset, y);  // End at the right side
        glEnd();
    }
    glLineWidth(1.0); // Reset line width after the detailing

    // Add a cap to the top of the pillar for extra detail (a rectangle-like top)
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176); // Darker brown color for the cap
    glVertex2f(10 + xOffset, 620);  // Left top of the cap
    glVertex2f(60 + xOffset, 620);  // Right top of the cap
    glVertex2f(60 + xOffset, 630);  // Right side raised for cap
    glVertex2f(10 + xOffset, 630);  // Left side raised for cap
    glEnd();
}



// rail line

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 680);
    glVertex2f(1000, 680);
glEnd();

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 670);
    glVertex2f(1000, 670);
glEnd();


// Number of lines to draw
int numLines = 350; // You can adjust this as needed
float gapi = 4.0f; // Gap between each line

// Loop to draw multiple lines with a gap
for (int i = 0; i < numLines; ++i) {
    float offsetX = i * gapi;  // Increment the x-coordinate by 'gap' each time

    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Set the line color to black

        // Draw the line horizontally, with each line moved by 'offsetX'
        glVertex2f(0 + offsetX, 670); // Starting point of the line
        glVertex2f(0 + offsetX, 680); // End point of the line (100 units to the right)

    glEnd();
}

// rail 3

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 633);
    glVertex2f(1000, 633);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 635);
    glVertex2f(1000, 635);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 636);
    glVertex2f(1000, 637);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 637);
    glVertex2f(1000, 639);
glEnd();

// rail 4

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 700);
    glVertex2f(1000, 700);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 698);
    glVertex2f(1000, 698);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 696);
    glVertex2f(1000, 696);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 694);
    glVertex2f(1000, 694);
glEnd();












//ship 3
// Polygon 1 (green element)
glBegin(GL_POLYGON);
glColor3f(0.1, 0.2, 0.05);  // Dark green for nighttime
glVertex2f(850 + sh, 760);    // Vertex 1 (top left)
glVertex2f(950 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(950 + sh, 740);    // Vertex 3 (middle left)
glVertex2f(870 + sh, 740);    // Vertex 4 (middle left)
glEnd();

// Polygon 2 (light gray for nighttime)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.2);  // Dark gray, softer for night
glVertex2f(880 + sh, 760);    // Vertex 1 (top left)
glVertex2f(940 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(940 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(880 + sh, 780);    // Vertex 4 (middle left)
glEnd();

// Polygon 3 (soft purple for night effect)
glBegin(GL_POLYGON);
glColor3f(0.4, 0.2, 0.4);  // Muted purple tone for a moonlit feel
glVertex2f(920 + sh, 800);    // Vertex 1 (top left)
glVertex2f(930 + sh, 800);    // Vertex 2 (upper left)
glVertex2f(930 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(920 + sh, 780);    // Vertex 4 (middle left)
glEnd();

// Polygon 4 (dark brown, more natural night shade)
glBegin(GL_POLYGON);
glColor3f(0.4, 0.2, 0.1);  // Dark brown for a natural night effect
glVertex2f(900 + sh, 800);    // Vertex 1 (top left)
glVertex2f(910 + sh, 800);    // Vertex 2 (upper left)
glVertex2f(910 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(900 + sh, 780);    // Vertex 4 (middle left)
glEnd();

// Circles with a softer night effect (muted blue-green or pale tones)
drawCircle2(910.0f + sh, 770.0f, 5.0f); // Pale blue-green circle
drawCircle2(930.0f + sh, 770.0f, 5.0f); // Soft glow-like circle
drawCircle2(880.0f + sh, 750.0f, 5.0f); // Subtle night-colored circle
drawCircle2(880.0f + sh, 750.0f, 3.0f); // Smaller, dimmed circle

// Ship Polygon (with muted colors for nighttime)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.1, 0.05);  // Dark brown color for the ship's body
glVertex2f(100 + shif, 750);    // Vertex 1 (top left)
glVertex2f(300 + shif, 750);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 730);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 730);    // Vertex 4 (middle left)
glEnd();

// Ship Top Polygon (lighter tone for a soft moonlit effect)
glBegin(GL_POLYGON);
glColor3f(0.4, 0.4, 0.1);  // Soft olive yellow for moonlit effect
glVertex2f(110 + shif, 790);    // Vertex 1 (top left)
glVertex2f(290 + shif, 790);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 750);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 750);    // Vertex 4 (middle left)
glEnd();

   // Define the gap between polygons
    float gapX = 5.0;  // Horizontal gap (between columns)
    float gapY = 6.0;  // Vertical gap (between rows)

    // Size of each polygon (hexagon)
    float radi = 3.0;  // Radius of the hexagon

    // Loop to create 4 vertical and 22 horizontal polygons (grid)
    for (int row = 0; row < 3; row++) {          // Loop through rows (4 rows)
        for (int col = 0; col < 16; col++) {     // Loop through columns (22 columns)
            // Calculate the X and Y offset for each polygon
            float offsetX = 115 + col * (2 * radi + gapX);  // Horizontal offset (including gapX)
            float offsetY = 776 - row * (radi * 2 + gapY);  // Vertical offset (including gapY)

            // Draw the hexagon at the calculated position
            glBegin(GL_POLYGON);
            glColor3f(0.043, 0.58, 0.961);  // White color (for the shape)

            // Calculate the six vertices of the hexagon
            for (int i = 0; i < 8; i++) {
                float angle = i * 2.0 * M_PI / 8;  // Divide 360 degrees by 6 vertices (2π/6)
                float x = offsetX + radi * cos(angle);
                float y = offsetY + radi * sin(angle);

                glVertex2f(x + + shif, y);  // Add the vertex to the polygon
            }

            glEnd();
        }
    }

// Ship2 Base Polygon (muted brown for nighttime)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.15, 0.05);  // Dark brown, muted tone for night
glVertex2f(500 + shi, 750);    // Vertex 1 (top left)
glVertex2f(700 + shi, 750);    // Vertex 2 (upper left)
glVertex2f(680 + shi, 720);    // Vertex 3 (middle left)
glVertex2f(500 + shi, 720);    // Vertex 4 (bottom left)
glEnd();

// Ship2 Top Polygon (darker blue for night)
glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.3);  // Dark blue, subtle night tone
glVertex2f(510 + shi, 770);    // Vertex 1 (top left)
glVertex2f(680 + shi, 770);    // Vertex 2 (upper left)
glVertex2f(680 + shi, 740);    // Vertex 3 (middle left)
glVertex2f(510 + shi, 740);    // Vertex 4 (bottom left)
glEnd();




glColor3f(1.0, 1.0, 1.0);

    // Size of the polygon
    float width = 3.0;
    float height = 3.0;

    // Gap between polygons
    float gapy = 2.0;

    // Number of rows and columns
    int rows = 4;  // You can adjust the number of rows
    int cols = 33;  // You can adjust the number of columns

    // Draw the grid of polygons with a gap between them
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            glBegin(GL_POLYGON);

            // Draw the polygon at the current position, adding the gap to the offset
            glVertex2f(512 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Top left
            glVertex2f(515 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Upper left
            glVertex2f(515 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom left
            glVertex2f(512 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom right

            glEnd();
        }

    }






    // Polygon 1 (Nighttime muted purple for the top part of the ship)
glBegin(GL_POLYGON);
glColor3f(0.3, 1.0, 0.3);  // Muted purple, softer for night
glVertex2f(520 + shi, 790);    // Vertex 1 (top left)
glVertex2f(670 + shi, 790);    // Vertex 2 (upper left)
glVertex2f(670 + shi, 770);    // Vertex 3 (middle left)
glVertex2f(520 + shi, 770);    // Vertex 4 (bottom left)
glEnd();

// Polygon 2 (Soft gray-blue for the body, reflecting moonlight)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.3);  // Soft gray-blue for nighttime
glVertex2f(523 + shi, 787);    // Vertex 1 (top left)
glVertex2f(667 + shi, 787);    // Vertex 2 (upper left)
glVertex2f(667 + shi, 773);    // Vertex 3 (middle left)
glVertex2f(523 + shi, 773);    // Vertex 4 (bottom left)
glEnd();



train();
cargo();
cars();


//600px
// Background Polygon (nighttime color, dark brownish for ground)
glBegin(GL_POLYGON);
glColor3f(0.0, 0.2, 0.1);
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 500);    // Vertex 3 (middle left)
glVertex2f(0, 500);    // Vertex 4 (bottom left)
glEnd();

// Building (lower part, soft orange for dim lights)
glBegin(GL_POLYGON);
glColor3f(0.6, 0.3, 0.0);  // Muted, soft orange for dim lights at night
glVertex2f(20, 525);    // Vertex 1 (top left)
glVertex2f(150, 525);    // Vertex 2 (upper left)
glVertex2f(150, 520);    // Vertex 3 (middle left)
glVertex2f(20, 520);    // Vertex 4 (bottom left)
glEnd();

// Building (upper part, cool white for a lit window at night)
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 0.9);  // Cool white, softer light, like a lit building window
glVertex2f(20, 580);    // Vertex 1 (top left)
glVertex2f(150, 580);    // Vertex 2 (upper left)
glVertex2f(150, 525);    // Vertex 3 (middle left)
glVertex2f(20, 525);    // Vertex 4 (bottom left)
glEnd();

  for (int i = 0; i < 10; i++) {
        // Loop to create 20 columns
        for (int j = 0; j < 25; j++) {
            float x_offset = j * 5.0f; // Horizontal distance between rectangles
            float y_offset = i * 5.0f; // Vertical distance between rectangles

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0); // Black color for the rectangles

            // Define the four vertices of each rectangle
            glVertex2f(23 + x_offset, 578 - y_offset); // Vertex 1 (top left)
            glVertex2f(27 + x_offset, 578 - y_offset); // Vertex 2 (upper right)
            glVertex2f(27 + x_offset, 572 - y_offset); // Vertex 3 (bottom right)
            glVertex2f(23 + x_offset, 572 - y_offset); // Vertex 4 (bottom left)

            glEnd();
        }
    }



   for (int i = 0; i < 7; i++) {
        float x_offset = i * 15.0f;  // Horizontal distance between triangles

        // Draw the main triangle
        glBegin(GL_TRIANGLES);
        glColor3f(1.0, 1.0, 1.0); // White color for the triangle
        glVertex2f(20 + x_offset, 580);    // Vertex 1 (top left)
        glVertex2f(60 + x_offset, 580);    // Vertex 2 (top right)
        glVertex2f(40 + x_offset, 595);    // Vertex 3 (middle top)
        glEnd();

        // Decorative pattern inside each triangle (smaller triangle)
        glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 0.0); // Black color for the decoration

        glVertex2f(30 + x_offset, 580);    // Vertex 1 (top left of inner triangle)
        glVertex2f(50 + x_offset, 580);    // Vertex 2 (top right of inner triangle)
        glVertex2f(40 + x_offset, 590);    // Vertex 3 (middle of inner triangle)
        glEnd();
    }






// Building 2 (Nighttime color, dark green with subtle lighting)
glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.2);  // Darker green for a nighttime look
glVertex2f(160, 525);    // Vertex 1 (top left)
glVertex2f(280, 525);    // Vertex 2 (upper left)
glVertex2f(280, 605);    // Vertex 3 (middle left)
glVertex2f(160, 605);    // Vertex 4 (bottom left)
glEnd();

    // Loop to create multiple rectangles horizontally
    for (int i = 0; i < 6; i++) { // For 6 rectangles (you can increase the count)
        float y_offset = i * 18.0f;  // Vertical distance between rectangles

        // Change color for each rectangle (cycling between blue and orange)
        float red = (i % 2 == 0) ? 1.0f : 1.0f; // Keep red component for both blue and orange
        float green = (i % 2 == 0) ? 0.0f : 0.5f; // Blue (green = 0) and Orange (green = 0.5)
        float blue = (i % 2 == 0) ? 1.0f : 0.0f; // Blue (blue = 1) and Orange (blue = 0)

        // Draw the main rectangle
        glBegin(GL_POLYGON);
        glColor3f(red, green, blue); // Set the color dynamically for each rectangle

        // Define the four vertices of each rectangle
        glVertex2f(160 , 525 + y_offset);    // Vertex 1 (top left)
        glVertex2f(280 , 525 + y_offset);    // Vertex 2 (top right)
        glVertex2f(280 , 510 + y_offset);    // Vertex 3 (bottom right)
        glVertex2f(160 , 510 + y_offset);    // Vertex 4 (bottom left)

        glEnd();

        // Add a new color in the gap between rectangles (e.g., pink color)
        float gap_red = 1.0f;  // Set the red component for pink color
        float gap_green = 0.75f; // Set the green component for pink color
        float gap_blue = 0.8f;  // Set the blue component for pink color

        glBegin(GL_POLYGON);
        glColor3f(gap_red, gap_green, gap_blue); // Set the gap color to pink

        // Draw a smaller rectangle in the gap between each main rectangle
        glVertex2f(160 , 525 + y_offset - 9.0f);    // Top left of gap shape
        glVertex2f(280 , 525 + y_offset - 9.0f);    // Top right of gap shape
        glVertex2f(280 , 510 + y_offset + 9.0f);    // Bottom right of gap shape
        glVertex2f(160 , 510 + y_offset + 9.0f);    // Bottom left of gap shape

        glEnd();

        // Add a smaller shape (e.g., a smaller rectangle) inside the gap with cyan color
        float inner_red = 0.0f;  // No red for cyan
        float inner_green = 1.0f; // Full green for cyan
        float inner_blue = 1.0f;  // Full blue for cyan

        glBegin(GL_POLYGON);
        glColor3f(inner_red, inner_green, inner_blue); // Set the inner shape color to cyan

        // Draw a smaller rectangle inside the gap
        glVertex2f(160 + 30.0f, 525 + y_offset);    // Top left of inner shape
        glVertex2f(280 - 30.0f, 525 + y_offset);    // Top right of inner shape
        glVertex2f(280 - 30.0f, 510 + y_offset);    // Bottom right of inner shape
        glVertex2f(160 + 30.0f, 510 + y_offset);    // Bottom left of inner shape

        glEnd();
    }


    for (int i = 0; i < 10; i++) {  // Loop for 20 rows
    for (int j = 0; j < 6; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 193 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 610 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}









///building 2.2


   // Loop to draw 24 rows of polygons (vertically)
 for (int i = 0; i < 24; i++) {
    for (int j = 0; j < 30; j++) {
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 3;  // Horizontal spacing (30 columns)
        float y = 595 - i * 4;  // Vertical spacing (24 rows)

        // Choose a color based on the index
          if ((i + j) % 3 == 0) {
                glColor3f(1.0, 0.0, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(1.0, 1.0, 0.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 1.0, 0.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

        // Draw a polygon (triangle) at (x, y)
        glBegin(GL_POLYGON);
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 5, y);     // Vertex 2 (upper left)
        glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
        glEnd();
    }
}


    // Loop to draw another set of polygons with a different color pattern
    // Introduce a horizontal gap by adjusting the starting x position for the second set
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 20; j++) {
            // Calculate the x and y positions for each polygon
            float x = 350 + j * 3 + 4;  // Add a 4-unit horizontal gap (shifted by 4 units)
            float y = 595 - i * 4;  // Vertical spacing (24 rows)

            // Choose a color based on the index
            if ((i + j) % 3 == 0) {
                glColor3f(0.0, 0.5, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(0.0, 1.0, 1.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 0.0, 1.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

            // Draw a polygon (triangle) at (x, y)
            glBegin(GL_POLYGON);
            glVertex2f(x, y);         // Vertex 1 (top left)
            glVertex2f(x + 5, y);     // Vertex 2 (upper left)
            glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
            glEnd();
        }
    }


for (int i = 0; i < 8; i++) {  // Loop for 20 rows
    for (int j = 0; j < 13; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}
















// building 3
// Loop to draw the grid of hexagons

// Building/Polygon with a more subdued color for night
glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.4);  // Muted, darker blue-green for night
glVertex2f(420, 600);    // Vertex 1 (top left)
glVertex2f(565, 600);    // Vertex 2 (upper left)
glVertex2f(565, 500);    // Vertex 3 (bottom right)
glVertex2f(420, 500);    // Vertex 4 (bottom left)
glEnd();

for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each hexagon
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each hexagon to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the hexagon at the calculated position
        glBegin(GL_POLYGON);

        // Define the six vertices for the hexagon
        glVertex2f(x, y);           // Vertex 1 (top left)
        glVertex2f(x + 1.5, y + 1.5); // Vertex 2 (top middle right)
        glVertex2f(x + 3.5, y + 1.5); // Vertex 3 (top right)
        glVertex2f(x + 5, y);       // Vertex 4 (bottom right)
        glVertex2f(x + 3.5, y - 1.5); // Vertex 5 (bottom middle left)
        glVertex2f(x + 1.5, y - 1.5); // Vertex 6 (bottom left)

        glEnd();
    }
}

// Loop to draw the grid of triangles
for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each triangle
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each triangle to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the triangle at the calculated position
        glBegin(GL_POLYGON);

        // Define the three vertices for the triangle
        glVertex2f(x, y);            // Vertex 1 (top)
        glVertex2f(x + 6, y + 5);    // Vertex 2 (bottom right)
        glVertex2f(x + 12, y);       // Vertex 3 (bottom left)

        glEnd();
    }
}


for (int i = 0; i < 9; i++) {  // Loop for 20 rows
    for (int j = 0; j < 14; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 425 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}





//deyal
// Building/Polygon with a more subdued color for night
glBegin(GL_POLYGON);
glColor3f(0.05, 0.2, 0.3);  // Darker blue-green for nighttime atmosphere
glVertex2f(570, 600);    // Vertex 1 (top left)
glVertex2f(700, 600);    // Vertex 2 (upper left)
glVertex2f(700, 500);    // Vertex 3 (bottom right)
glVertex2f(570, 500);    // Vertex 4 (bottom left)
glEnd();


// Loop to draw the grid of polygons
for (int i = 0; i < 9; i++) {         // Vertical loop (9 rows)
    for (int j = 0; j < 10; j++) {    // Horizontal loop (10 columns)
        // Calculate the x and y positions for each polygon
        float xOffset = j * 12;       // Horizontal spacing (12 units)
        float yOffset = i * 12;       // Vertical spacing (12 units) - Increased gap

        // Adjust the x and y positions for each polygon to form the grid
        float x = 570 + xOffset;      // Horizontal starting position
        float y = 600 - yOffset;      // Vertical starting position

        // Choose a color based on the index (using a new pattern with 4 colors)
        if ((i + j) % 4 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 4 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else if ((i + j) % 4 == 2) {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for another set
        } else {
            glColor3f(0.9, 0.9, 0.0);  // Yellow color for the new set
        }

        // Draw the polygon (rectangle) at the calculated position
        glBegin(GL_POLYGON);

        // Define the four vertices for the rectangle
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 20, y);    // Vertex 2 (upper right)
        glVertex2f(x + 20, y - 5); // Vertex 3 (bottom right)
        glVertex2f(x, y - 5);     // Vertex 4 (bottom left)

        glEnd();
    }
}

drawCircle(600,570, 15);
drawCircle4(600,570, 12);

drawCircle3(635,570, 6.5);
drawCircle(635,570, 7.5);
drawCircle4(635,570, 4.5);




drawCircle(670,570, 15);
drawCircle4(670,570, 12);

drawCircle(600,530, 15);
drawCircle4(600,530, 12);
drawCircle3(635,530, 6.5);
drawCircle(635,530, 7.5);

drawCircle4(635,530, 4.5);



drawCircle(670,530, 15);
drawCircle4(670,530, 12);

//building 4





// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 3; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 10;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 525 - yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
     glColor3f(0.69, 0.729, 0.035);  // Green color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);    // Vertex 1 (top left)
    glVertex2f(820, y);    // Vertex 2 (upper right)
    glVertex2f(820, y + 50); // Vertex 3 (bottom right)
    glVertex2f(710, y + 50);  // Vertex 4 (bottom left)

    glEnd();
}



glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 505);    // Vertex 1 (top left)
glVertex2f(820, 505);    // Vertex 2 (upper left)
glVertex2f(820, 500);
glVertex2f(710, 500);

glEnd();

// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 4; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 20;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 505 + yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);        // Vertex 1 (top left)
    glVertex2f(820, y);        // Vertex 2 (upper right)
    glVertex2f(820, y - 5);    // Vertex 3 (bottom right)
    glVertex2f(710, y - 5);    // Vertex 4 (bottom left)

    glEnd();
}

// Windows/Building Lights (Nighttime colors)

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Very dark color (almost black) for the first window
glVertex2f(770, 505);    // Vertex 1 (top left)
glVertex2f(772, 505);    // Vertex 2 (upper left)
glVertex2f(772, 574);
glVertex2f(770, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Same dark color for other windows
glVertex2f(790, 505);
glVertex2f(792, 505);
glVertex2f(792, 574);
glVertex2f(790, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(818, 505);
glVertex2f(820, 505);
glVertex2f(820, 574);
glVertex2f(818, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(750, 505);
glVertex2f(752, 505);
glVertex2f(752, 574);
glVertex2f(750, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(730, 505);
glVertex2f(732, 505);
glVertex2f(732, 574);
glVertex2f(730, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(710, 505);
glVertex2f(712, 505);
glVertex2f(712, 574);
glVertex2f(710, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(810, 505);
glVertex2f(812, 505);
glVertex2f(812, 574);
glVertex2f(810, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for window base
glVertex2f(710, 574);
glVertex2f(820, 574);
glVertex2f(820, 572);
glVertex2f(710, 572);
glEnd();


// Building Cathedral (Nighttime version)

// Base
glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.3);  // Darker blue for a nighttime feel
glVertex2f(825, 520);
glVertex2f(980, 520);
glVertex2f(980, 500);
glVertex2f(825, 500);
glEnd();

// Roof
glBegin(GL_POLYGON);
glColor3f(0.4, 0.1, 0.1);  // Dark red for the roof at night
glVertex2f(835, 540);
glVertex2f(970, 540);
glVertex2f(970, 520);
glVertex2f(835, 520);
glEnd();

// Middle Section
glBegin(GL_POLYGON);
glColor3f(0.1, 0.5, 0.1);  // Darker green for the middle section
glVertex2f(845, 560);
glVertex2f(960, 560);
glVertex2f(960, 540);
glVertex2f(845, 540);
glEnd();

// Upper Section
glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.3);  // Deep blue for the upper section
glVertex2f(850, 580);
glVertex2f(955, 580);
glVertex2f(955, 560);
glVertex2f(850, 560);
glEnd();

// Window section
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.1);  // Dim yellow for windows (nighttime lights)
glVertex2f(855, 590);
glVertex2f(950, 590);
glVertex2f(950, 580);
glVertex2f(855, 580);
glEnd();

// Additional Sections with darker colors

glBegin(GL_POLYGON);
glColor3f(0.3, 0.1, 0.5);  // Purple for the section at the top
glVertex2f(865, 600);
glVertex2f(940, 600);
glVertex2f(940, 590);
glVertex2f(865, 590);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.7, 0.7);  // Cyan color for upper windows
glVertex2f(875, 610);
glVertex2f(930, 610);
glVertex2f(930, 600);
glVertex2f(875, 600);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.6, 0.3, 0.1);  // Dim orange for the top section
glVertex2f(885, 620);
glVertex2f(920, 620);
glVertex2f(920, 610);
glVertex2f(885, 610);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3);  // Gray for the topmost section
glVertex2f(895, 630);
glVertex2f(910, 630);
glVertex2f(910, 620);
glVertex2f(895, 620);
glEnd();


// road


glBegin(GL_POLYGON);
glColor3f(0.25, 0.25, 0.25); // Grey color for the ninth polygon
glVertex2f(0, 470);    // Vertex 1 (top left)
glVertex2f(1000, 470);    // Vertex 2 (upper left)
glVertex2f(1000, 500);
glVertex2f(0, 500);
glEnd();




// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 485);   // Vertex 1 (top left)
    glVertex2f(x + 6, 485);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 489);  // Vertex 3 (bottom right)
    glVertex2f(x, 489);   // Vertex 4 (bottom left)

    glEnd();
}

cars1();


//road divder
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0); // Grey color for the ninth polygon
glVertex2f(0, 460);    // Vertex 1 (top left)
glVertex2f(1000, 460);    // Vertex 2 (upper left)
glVertex2f(1000, 470);
glVertex2f(0, 470);
glEnd();

//road
glBegin(GL_POLYGON);
glColor3f(0.25, 0.25, 0.25); // Grey color for the ninth polygon
glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 460);
glVertex2f(0, 460);
glEnd();

// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 445);   // Vertex 1 (top left)
    glVertex2f(x + 6, 445);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 449);  // Vertex 3 (bottom right)
    glVertex2f(x, 449);   // Vertex 4 (bottom left)

    glEnd();
}

cargo1();

//road line line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();


// tree

glBegin(GL_POLYGON);
glColor3f(0.2, 0.3, 0.2); // Dark green color

glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 330);    // Vertex 3 (bottom right)
glVertex2f(0, 330);    // Vertex 4 (bottom left)
glEnd();




for (int i = 0; i < 5; i++) {
    int translateX = -120 * i;  // Translation on x-axis

    // First set of circles
    circle(7, 14, 330 + translateX, 350);
    circle(7, 14, 320 + translateX, 360);
    circle(7, 14, 330 + translateX, 370);
    circle(7, 14, 340 + translateX, 360);

    // Second set of circles
    circle(7, 14, 370 + translateX, 350);
    circle(7, 14, 360 + translateX, 360);
    circle(7, 14, 370 + translateX, 370);
    circle(7, 14, 380 + translateX, 360);

    // Third set of circles
    circle(7, 14, 410 + translateX, 350);
    circle(7, 14, 400 + translateX, 360);
    circle(7, 14, 410 + translateX, 370);
    circle(7, 14, 420 + translateX, 360);

    // Fourth set of circles
    circle(7, 14, 330 + 50 + translateX, 370 + 30);
    circle(7, 14, 320 + 50 + translateX, 380 + 30);
    circle(7, 14, 330 + 50 + translateX, 390 + 30);
    circle(7, 14, 340 + 50 + translateX, 380 + 30);

    // Fifth set of circles
    circle(7, 14, 370 + 50 + translateX, 370 + 30);
    circle(7, 14, 360 + 50 + translateX, 380 + 30);
    circle(7, 14, 370 + 50 + translateX, 390 + 30);
    circle(7, 14, 380 + 50 + translateX, 380 + 30);

    // Sixth set of circles
    circle(7, 14, 410 + 50 + translateX, 370 + 30);
    circle(7, 14, 400 + 50 + translateX, 380 + 30);
    circle(7, 14, 410 + 50 + translateX, 390 + 30);
    circle(7, 14, 420 + 50 + translateX, 380 + 30);
}












//tree1

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Grey color for the ninth polygon
glVertex2f(60, 380);    // Vertex 1 (top left)
glVertex2f(80, 380);    // Vertex 2 (upper left)
glVertex2f(80, 330);
glVertex2f(60, 330);
glEnd();

drawCircle3(60,380,10);

drawCircle3(60,390,10);
drawCircle3(60,390,10);
drawCircle3(50,400,10);
drawCircle3(60,410,10);
drawCircle3(70,410,10);
drawCircle3(80,410,10);
drawCircle3(80,400,10);
drawCircle3(90,390,10);
drawCircle3(50,390,10);
drawCircle3(70,380,10);
drawCircle3(80,380,10);

//tree2
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370, 330);
glVertex2f(160 + 370, 330);    // Vertex 4 (bottom left)
glEnd();
// Tree 1 - Trunk
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(60, 380);    // Vertex 1 (top left)
glVertex2f(80, 380);    // Vertex 2 (upper left)
glVertex2f(80, 330);    // Vertex 3 (bottom right)
glVertex2f(60, 330);    // Vertex 4 (bottom left)
glEnd();

// Tree 1 - Foliage (Multiple circles)
drawCircle3(60, 380, 10);
drawCircle3(60, 390, 10);
drawCircle3(60, 390, 10);
drawCircle3(50, 400, 10);
drawCircle3(60, 410, 10);
drawCircle3(70, 410, 10);
drawCircle3(80, 410, 10);
drawCircle3(80, 400, 10);
drawCircle3(90, 390, 10);
drawCircle3(50, 390, 10);
drawCircle3(70, 380, 10);
drawCircle3(80, 380, 10);

// Tree 2 - Trunk
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(160 + 370, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370, 330);    // Vertex 3 (bottom right)
glVertex2f(160 + 370, 330);    // Vertex 4 (bottom left)
glEnd();

// Tree 2 - Foliage (Multiple circles)
drawCircle3(160 + 370, 380, 10);
drawCircle3(160 + 370, 390, 10);
drawCircle3(160 + 370, 390, 10);
drawCircle3(150 + 370, 400, 10);
drawCircle3(160 + 370, 410, 10);
drawCircle3(170 + 370, 410, 10);
drawCircle3(180 + 370, 410, 10);
drawCircle3(180 + 370, 400, 10);
drawCircle3(190 + 370, 390, 10);
drawCircle3(150 + 370, 390, 10);
drawCircle3(170 + 370, 380, 10);
drawCircle3(180 + 370, 380, 10);

// Drawing circles with the x position shifted by +370
drawCircle5(160 + 370, 380, 10);  // Translated x position by +370

drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 400, 10);  // Translated x position by +370
drawCircle5(160 + 370, 410, 10);  // Translated x position by +370
drawCircle5(170 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 400, 10);  // Translated x position by +370
drawCircle5(190 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 390, 10);  // Translated x position by +370
drawCircle5(170 + 370, 380, 10);  // Translated x position by +370
drawCircle5(180 + 370, 380, 10);  // Translated x position by +370

//tree3

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(250, 380);    // Vertex 1 (top left)
glVertex2f(270, 380);    // Vertex 2 (upper left)
glVertex2f(270, 330);
glVertex2f(250, 330);
glEnd();

drawCircle5(260, 370, 5);  // Translated x position by +100
drawCircle5(255, 390, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle3(275, 410, 10);  // Translated x position by +100
drawCircle3(265, 410, 10);  // Translated x position by +100
drawCircle3(257, 410, 10);  // Translated x position by +100
drawCircle3(247, 410, 10);  // Translated x position by +100
drawCircle3(265, 370, 10);  // Translated x position by +100
drawCircle3(257, 370, 10);  // Translated x position by +100
drawCircle3(247, 370, 10);  // Translated x position by +100
drawCircle3(275, 375, 10);  // Translated x position by +100
drawCircle5(260, 370, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle5(260, 390, 10);  // Translated x position by +100


//tree




//backgroun
// First set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 + 70 - 200, 350 + 30); // Translated circle

circle(20, 10, 790 + 80 - 200, 360 + 30);
circle(20, 10, 805 + 80 - 200, 355 + 30);
circle(20, 10, 810 + 80 - 200, 365 + 30);
circle(20, 10, 805 + 80 - 200, 375 + 30);
circle(20, 10, 815 + 80 - 200, 365 + 30);
circle(20, 10, 820 + 80 - 200, 360 + 30);
circle(20, 10, 820 + 80 - 200, 345 + 30);
circle(20, 10, 790 + 80 - 200, 345 + 30);
circle(20, 10, 805 + 80 - 200, 340 + 30); // Translated last circle

// Second set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 - 200, 350);

circle(20, 10, 790 - 200, 360);
circle(20, 10, 805 - 200, 355);
circle(20, 10, 810 - 200, 365);
circle(20, 10, 805 - 200, 375);
circle(20, 10, 815 - 200, 365);
circle(20, 10, 820 - 200, 360);
circle(20, 10, 820 - 200, 345);
circle(20, 10, 790 - 200, 345);
circle(20, 10, 805 - 200, 340);






  circle(7, 14, 330, 350);
circle(7, 14, 320, 360);
circle(7, 14, 330, 370);
circle(7, 14, 340, 360);


circle(7, 14, 370, 350);
circle(7, 14, 360, 360);
circle(7, 14, 370, 370);
circle(7, 14, 380, 360);


  circle(7, 14, 410, 350);
circle(7, 14, 400, 360);
circle(7, 14, 410, 370);
circle(7, 14, 420, 360);



circle(7, 14, 330 + 50, 370 + 30);
circle(7, 14, 320 + 50, 380 + 30);
circle(7, 14, 330 + 50, 390 + 30);
circle(7, 14, 340 + 50, 380 + 30);


circle(7, 14, 370 + 50, 370 + 30);
circle(7, 14, 360 + 50, 380 + 30);
circle(7, 14, 370 + 50, 390 + 30);
circle(7, 14, 380 + 50, 380 + 30);


circle(7, 14, 410 + 50, 370 + 30);
circle(7, 14, 400 + 50, 380 + 30);
circle(7, 14, 410 + 50, 390 + 30);
circle(7, 14, 420 + 50, 380 + 30);


glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(490, 330);
glVertex2f(430, 330);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0, 0.0, 1.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(460, 380);
glEnd();

 for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            float translateX = -10.0f * i;  // Translate horizontally by 50 units
            float translateY = -10.0f * j;  // Translate vertically by 50 units

            glPushMatrix();  // Save the current transformation matrix
            glTranslatef(translateX, translateY, 0.0f);  // Apply translation

            // Begin drawing the polygon
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);  // Grey color for the polygon
            glVertex2f(432+50, 360+5);    // Vertex 1 (top left)
            glVertex2f(437+50, 360+5);    // Vertex 2 (upper left)
            glVertex2f(437+50, 365+5);
            glVertex2f(432+50, 365+5);    // Vertex 4 (bottom left)
            glEnd();

            glPopMatrix();  // Restore the previous transformation matrix
        }
    }



    //tree paitentence


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370+120, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370+120, 330);
glVertex2f(160 + 370+120, 330);    // Vertex 4 (bottom left)
glEnd();

    drawCircle5(630, 390, 7);  // Translated x position by +370
 drawCircle5(650, 400, 7);  // Translated x position by +370
drawCircle5(640, 410, 7);  // Translated x position by +370
drawCircle5(660, 420, 7);  // Translated x position by +370

drawCircle5(670, 410, 7);  // Translated x position by +370
drawCircle5(680, 400, 7);  // Translated x position by +370
drawCircle5(685, 390, 7);  // Translated x position by +370

drawCircle5(675, 395, 7);  // Translated x position by +370
drawCircle5(650, 380, 7);  // Translated x position by +370
drawCircle5(660, 380, 7);  // Translated x position by +370



//tree traingle


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120+90, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370+120+90, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370+120+90, 330);
glVertex2f(160 + 370+120+90, 330);    // Vertex 4 (bottom left)
glEnd();


 for (int i = 0; i < 4; i++) {
        float translateY = 20.0f * i;  // Translate vertically by 40 units (you can adjust this value)

        glPushMatrix();  // Save the current transformation matrix
        glTranslatef(0.0f, translateY, 0.0f);  // Apply vertical translation

        // Draw the polygon
        glBegin(GL_POLYGON);
         glColor3ub(34, 139, 34); // Color for the polygon
        glVertex2f(690 + 30, 350);    // Vertex 1 (top left)
        glVertex2f(740 + 30, 350);    // Vertex 2 (upper left)
        glVertex2f(715 + 30, 390);    // Vertex 3 (bottom center)
        glEnd();

        glPopMatrix();  // Restore the previous transformation matrix
    }



circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80, 360 + 30);
circle(20, 10, 805 + 80, 355 + 30);
circle(20, 10, 810 + 80, 365 + 30);
circle(20, 10, 805 + 80, 375 + 30);
circle(20, 10, 815 + 80, 365 + 30);
circle(20, 10, 820 + 80, 360 + 30);
circle(20, 10, 820 + 80, 345 + 30);
circle(20, 10, 790 + 80, 345 + 30);
circle(20, 10, 805 + 80, 340 + 30); // Translated last circle






circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80+70, 360 + 10);
circle(20, 10, 805 + 80+70, 355 + 10);
circle(20, 10, 810 + 80+70, 365 + 10);
circle(20, 10, 805 + 80+70, 375 + 10);
circle(20, 10, 815 + 80+70, 365 + 10);
circle(20, 10, 820 + 80+70, 360 + 10);
circle(20, 10, 820 + 80+70, 345 + 10);
circle(20, 10, 790 + 80+70, 345 + 10);
circle(20, 10, 805 + 80+70, 340 + 10); // Translated last circle



    circle(20,10,800,350);

    circle(20,10,790,360);
 circle(20,10,805,355);
 circle(20,10,810,365);
 circle(20,10,805,375);
 circle(20,10,815,365);
 circle(20,10,820,360);
  circle(20,10,820,345);
   circle(20,10,790,345);
    circle(20,10,805,340);





glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370 + 120 + 90 + 200, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370 + 120 + 90 + 200, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370 + 120 + 90 + 200, 330);
glVertex2f(160 + 370 + 120 + 90 + 200, 330);    // Vertex 4 (bottom left)
glEnd();

glPushMatrix();  // Save the current transformation matrix
//glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon (green)
glVertex2f(690 + 30, 350);    // Vertex 1 (top left)
glVertex2f(740 + 30, 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30, 390);    // Vertex 3 (bottom center)
glEnd();


glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix




//last traingle tree

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix







//tree last er agehr ta

    //tree paitentence

// Draw the tree trunk (rectangle)
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(160 + 35 + 370 + 290, 380);    // Top left
glVertex2f(180 + 35 + 370 + 290, 380);    // Top right
glVertex2f(180 + 35 + 370 + 290, 330);    // Bottom right
glVertex2f(160 + 35 + 370 + 290, 330);    // Bottom left
glEnd();


    drawCircle5(640 +200, 390, 7);  // Translated x position by +370
 drawCircle5(650+200, 400, 7);  // Translated x position by +370
drawCircle5(645+200, 410, 7);  // Translated x position by +370
drawCircle5(665+200, 420, 7);  // Translated x position by +370

drawCircle5(675+200, 410, 7);  // Translated x position by +370
drawCircle5(685+200, 400, 7);  // Translated x position by +370
drawCircle5(685+200, 390, 7);  // Translated x position by +370

drawCircle5(685+200, 395, 7);  // Translated x position by +370
drawCircle5(660+200, 380, 7);  // Translated x position by +370
drawCircle5(670+200, 380, 7);  // Translated x position by +370
drawCircle5(665+200, 430, 7);  // Translated x position by +370

//tree adjustments
drawCircle5(665+200+80, 380,10);  // Translated x position by +370
drawCircle5(665+200+80, 390,10);  // Translated x position by +370
drawCircle5(665+200+80, 400,10);  // Translated x position by +370
//circle(30,20,665+200, 390);  // Translated x position by +370
drawCircle5(665+200, 370, 7);  // Translated x position by +370
drawCircle5(665-150, 370, 7);  // Translated x position by +370
drawCircle5(665-100, 370, 7);  // Translated x position by +370







//village


glBegin(GL_POLYGON);
glColor3f(0.49, 0.431, 0.088); // Brown color for the shape
glVertex2f(0, 330);    // Vertex 1 (top left)
glVertex2f(1000, 330); // Vertex 2 (top right)
glVertex2f(1000, 230); // Vertex 3 (bottom right)
glVertex2f(0, 230);    // Vertex 4 (bottom left)
glEnd();








    glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(260,320);    // Vertex 2 (upper left)
glVertex2f(280,280);
glVertex2f(100,280);
glEnd();



//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();



    glBegin(GL_TRIANGLES);
glColor3f(0.337, 0.251, 0.89); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(30,280);    // Vertex 2 (upper left)
glVertex2f(100,280);
glEnd();


    glBegin(GL_POLYGON);
glColor3f(0.18, 0.125, 0.529); // Color for the polygon
glVertex2f(40,280);    // Vertex 1 (top left)
glVertex2f(95,280);    // Vertex 2 (upper left)
glVertex2f(95,240);
glVertex2f(40,240);
glEnd();

    glBegin(GL_POLYGON);
glColor3f(0.616, 0.573, 0.902); // Color for the polygon
glVertex2f(95,280);    // Vertex 1 (top left)
glVertex2f(95,240);    // Vertex 2 (upper left)
glVertex2f(270,240);
glVertex2f(270,280);
glEnd();




  glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0); // Color for the lines

    // Draw 20 vertical lines horizontally by adjusting the x-coordinate
    for (int i = 0; i < 35; i++) {
        float xOffset = i * 5.0; // Increase xOffset by 20 units for each line
        glVertex2f(100 + xOffset, 280);  // Start point of the line (shifted horizontally)
        glVertex2f(100 + xOffset, 240);  // End point of the line (shifted horizontally)
    }

    glEnd();




    glBegin(GL_POLYGON);
glColor3f(0.251, 0.694, 0.949); // Color for the polygon
glVertex2f(30,240);    // Vertex 1 (top left)
glVertex2f(280,240);    // Vertex 2 (upper left)
glVertex2f(280,230);
glVertex2f(30,230);
glEnd();



//house2

glPushMatrix();  // Save the current matrix state

glTranslatef(210.0f, 0.0f, 0.0f);  // Translate by 300 units along the x-axis

// Draw the base of the house (main rectangle)
glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the main structure
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(260, 240);   // Bottom-right corner
glVertex2f(75, 240);    // Bottom-left corner
glEnd();

// Draw the roof (triangle shape)
glBegin(GL_QUADS);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(85, 330);    // Left-top corner of the base
glVertex2f(250, 330);   // Right-top corner of the base
glVertex2f(260, 300); // Peak of the roof
glVertex2f(75, 300); // Peak of the roof
glEnd();

// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 280);  // Top-right of the door
glVertex2f(140, 280);  // Top-left of the door
glEnd();

// Draw a window on the left side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(90, 270);  // Bottom-left of the window
glVertex2f(130, 270); // Bottom-right of the window
glVertex2f(130, 290); // Top-right of the window
glVertex2f(90, 290);  // Top-left of the window
glEnd();

// Draw a window on the right side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(200, 270);  // Bottom-left of the window
glVertex2f(240, 270);  // Bottom-right of the window
glVertex2f(240, 290);  // Top-right of the window
glVertex2f(200, 290);  // Top-left of the window
glEnd();

// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();



// Draw a chimney (small rectangle on the roof)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Chimney color (gray)
glVertex2f(200, 310);    // Bottom-left of the chimney
glVertex2f(215, 310);    // Bottom-right of the chimney
glVertex2f(215, 340);    // Top-right of the chimney
glVertex2f(200, 340);    // Top-left of the chimney
glEnd();




glPopMatrix();  // Restore the previous matrix state
 // Restore the previous matrix state



//house3

 glPushMatrix();  // Save the current matrix state

glTranslatef(410.0f, 0.0f, 0.0f);  // Translate the building along the x-axis

// Draw the main base of the house (trapezoid for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.5, 0.2); // Color for the main structure (greenish)
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner (more inward for a trapezoid shape)
glVertex2f(100, 240);   // Bottom-left corner (more inward for a trapezoid shape)
glEnd();

// Draw a second floor (smaller trapezoid above the main base)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for the second floor (gray)
glVertex2f(115, 280);    // Top-left corner
glVertex2f(245, 280);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner
glVertex2f(100, 240);   // Bottom-left corner
glEnd();

// Draw the roof (sloped roof, larger triangle for the top)
glBegin(GL_POLYGON);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(75, 300);    // Left-top corner of the base
glVertex2f(100, 240);   // Left-bottom corner of the base
glVertex2f(230, 240);   // Right-bottom corner of the base
glVertex2f(260, 300);   // Right-top corner of the base
glEnd();



// Draw a window on the left side (larger rectangle for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.631, 0.82); // Window color (light blue)
glVertex2f(90, 290);  // Bottom-left of the window
glVertex2f(240, 290); // Bottom-right of the window
glVertex2f(240, 270); // Top-right of the window
glVertex2f(90, 270);  // Top-left of the window
glEnd();






// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();




// Draw decorative side walls (for depth)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(75, 300);    // Left-top corner
glVertex2f(100, 240);   // Left-bottom corner
glVertex2f(100, 230);   // Left-bottom corner (lower)
glVertex2f(75, 230);    // Left-top corner (lower)
glEnd();




// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 260);  // Top-right of the door
glVertex2f(140, 260);  // Top-left of the door
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(260, 300);   // Right-top corner
glVertex2f(230, 240);   // Right-bottom corner
glVertex2f(230, 230);   // Right-bottom corner (lower)
glVertex2f(260, 230);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state



glBegin(GL_POLYGON);
glColor3f(0.0, 0.8, 0.0); // Color for side walls
glVertex2f(690, 320);   // Right-top corner
glVertex2f(810, 320);   // Right-bottom corner
glVertex2f(810, 240);   // Right-bottom corner (lower)
glVertex2f(690, 240);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state

circle2(20,10,750,280);
circle3(18,8,750,280);
circle3(18,8,750,280);

//football
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Color for side walls
glVertex2f(750, 320);   // Right-top corner
glVertex2f(750, 240);   // Right-bottom corner
glEnd();


// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685, 305+5);   // Right-top corner
glVertex2f(690, 285+5);   // Slanted point (above the lower part)
glVertex2f(690, 255+5);   // Lower slanted point
glVertex2f(685, 265+5);   // Bottom-right corner
glEnd();

// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690, 300);   // Right-top corner
glVertex2f(710, 300);   // Right-top corner
glVertex2f(710, 260);   // Right-bottom corner
glVertex2f(690, 260);   // Left-bottom corner
glEnd();











// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 260);   // Right-bottom corner (translated)
glVertex2f(690 + 100, 260);   // Left-bottom corner (translated)
glEnd();

// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685 + 100+20, 305 + 5);   // Right-top corner (translated)
glVertex2f(690 + 100+20, 285 + 5);   // Slanted point (above the lower part, translated)
glVertex2f(690 + 100+20, 255 + 5);   // Lower slanted point (translated)
glVertex2f(685 + 100+20, 265 + 5);   // Bottom-right corner (translated)
glEnd();

//tree
circle4(10,20,830,290);
circle4(10,20,830,290);
circle4(10,20,845,290);
circle4(10,20,860,290);
circle4(10,20,875,290);

circle4(10,20,845,300);
circle4(10,20,860,300);


// Draw circles horizontally
for (int i = 0; i < 5; i++) {
    circle4(10, 20, 830 + (i * 15), 290-40);  // Change x by 15 for each iteration, keep y constant at 290
}

// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 10)-40);  // Change y by 10 for each iteration, keep x constant at 845
}



// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 20)-40);  // Change y by 10 for each iteration, keep x constant at 845
}


circle4(15,30,920,290);
circle4(10,20,920,290);
circle4(12,40,935,290);
circle4(8,35,950,290);
circle4(15,40,965,290);

circle4(10,20,935,300);
circle4(10,20,950,300);


circle4(15,15,920,250);
circle4(10,20,920,250);
circle4(12,40,935,250);
circle4(8,35,950,250);
circle4(9,20,965,250);

circle4(10,7,935,260);
circle4(10,5,950,260);


//flower
      // Draw the first polygon (yellow side wall)
     glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0);  // Dark amber (night-like color)
    glVertex2f(0 , 230);     // Right-top corner
    glVertex2f(1000 , 230);  // Slanted point (above the lower part)
    glVertex2f(1000 , 200);  // Lower slanted point
    glVertex2f(0 , 200);     // Bottom-right corner
glEnd();



//230-200

   for (int i = 0; i < 32; i++) {
        float xOffset = i * 30.0f;  // Shift the polygons and circles horizontally by 55 units



        // Draw the second polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(30 + xOffset, 210);   // Right-top corner
        glVertex2f(32 + xOffset, 212);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the third polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(40 + xOffset, 216);   // Right-top corner
        glVertex2f(42 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the fourth polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(50 + xOffset, 216);   // Right-top corner
        glVertex2f(52 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the circles with different colors
        randomColor();  // Assign a random color for the first circle
        drawCircle1(31 + xOffset, 211, 2.5);

        randomColor();  // Assign a random color for the second circle
        drawCircle1(41 + xOffset, 215, 2.5);

        randomColor();  // Assign a random color for the third circle
        drawCircle1(51 + xOffset, 215, 2.5);
    }



        // First polygon (Blue)
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 1.0);  // Blue color
glVertex2f(15, 215);   // Right-top corner
glVertex2f(17, 217);   // Slanted point
glVertex2f(17, 200);   // Lower slanted point
glVertex2f(15, 200);   // Bottom-right corner
glEnd();

// Second polygon (Red)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.0, 0.0);  // Red color
glVertex2f(13, 222);   // Right-top corner
glVertex2f(19, 222);   // Slanted point
glVertex2f(19, 217);   // Lower slanted point
glVertex2f(13, 217);   // Bottom-right corner
glEnd();







         // Draw the polygons horizontally with a loop
    for (int i = 0; i < 32; i++) {  // 10 instances, change as needed
        float xOffset = i * 60.0f;  // Horizontal offset for each polygon

        // Draw the first polygon with a random color
        randomColor();  // Assign a random color for the polygon
        glBegin(GL_POLYGON);
        glVertex2f(15 + xOffset, 715);   // Right-top corner
        glVertex2f(17 + xOffset, 717);   // Slanted point
        glVertex2f(17 + xOffset, 700);   // Lower slanted point
        glVertex2f(15 + xOffset, 700);   // Bottom-right corner
        glEnd();

        // Draw the second polygon with a random color
        randomColor();  // Assign a random color for the second polygon
        glBegin(GL_POLYGON);
        glVertex2f(13 + xOffset, 722);   // Right-top corner
        glVertex2f(19 + xOffset, 722);   // Slanted point
        glVertex2f(19 + xOffset, 717);   // Lower slanted point
        glVertex2f(13 + xOffset, 717);   // Bottom-right corner
  glEnd();


    }




//0-100 dhankhet
glBegin(GL_POLYGON);
   glColor3f(0, 0.5, 0);  // Deep green color

  // Green color
    glVertex2f(0, 0);        // Bottom-left corner
    glVertex2f(0, 100);      // Top-left corner
    glVertex2f(1000, 100);   // Top-right corner
    glVertex2f(1000, 0);     // Bottom-right corner
glEnd();

        //dhan
 for (int i = 0; i < 100; i++) {
    float offsetX = i * 80.0f;  // Increment the x-offset to move along the x-axis

    glBegin(GL_POLYGON);
        glColor3f(0.722, 0.408, 0.051);  // Yellow color
        glVertex2f(0 + offsetX, 100);   // Right-top corner, shifted by offsetX
        glVertex2f(5 + offsetX, 100);   // Slanted point (above the lower part), shifted by offsetX
        glVertex2f(45 + offsetX, 0);   // Lower slanted point, shifted by offsetX
        glVertex2f(40 + offsetX, 0);   // Bottom-right corner, shifted by offsetX
    glEnd();
}







for (int j = 0; j < 8; j++) {  // Loop to draw 5 times along the y-axis
    float offsetY = j * -15.0f;  // Increment the y-offset for each iteration

    for (int i = 0; i < 100; i++) {
        float offsetX = i * 15.0f; // Increment the x-offset to move along the x-axis

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(1 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(5 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();
    }
}


//manush
glPopMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(40.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(140.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(90.0f, 40.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();



//traccter 1
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+s , 70);   // Right-top corner
        glVertex2f(30+s , 70);   // Slanted point (above the lower part)
        glVertex2f(30+s , 50);   // Lower slanted point
        glVertex2f(20+s , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+s , 68);   // Right-top corner
        glVertex2f(28+s , 68);   // Slanted point (above the lower part)
        glVertex2f(28+s , 52);   // Lower slanted point
        glVertex2f(22+s , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);  // Yellow color
        glVertex2f(10+s , 50);   // Right-top corner
        glVertex2f(50+s , 50);   // Slanted point (above the lower part)
        glVertex2f(50+s , 20);   // Lower slanted point
        glVertex2f(10+s , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+s,20,8);
drawCircle2(21+s,20,5);


drawCircle(41+s,20,8);
drawCircle2(41+s,20,5);




//traccter 2
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+400+ok , 70);   // Right-top corner
        glVertex2f(30+400+ok , 70);   // Slanted point (above the lower part)
        glVertex2f(30+400+ok , 50);   // Lower slanted point
        glVertex2f(20+400+ok , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+400+ok , 68);   // Right-top corner
        glVertex2f(28+400+ok , 68);   // Slanted point (above the lower part)
        glVertex2f(28+400+ok , 52);   // Lower slanted point
        glVertex2f(22+400+ok , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(0.7, 0.5, 0.5);  // Yellow color
        glVertex2f(10+400+ok , 50);   // Right-top corner
        glVertex2f(50+400+ok , 50);   // Slanted point (above the lower part)
        glVertex2f(50+400+ok , 20);   // Lower slanted point
        glVertex2f(10+400+ok , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+400+ok,20,8);
drawCircle2(21+400+ok,20,5);


drawCircle(41+400+ok,20,8);
drawCircle2(41+400+ok,20,5);














//tracker2



 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+10+600+si , 70);   // Right-top corner
        glVertex2f(30+10+600+si , 70);   // Slanted point (above the lower part)
        glVertex2f(30+10+600+si , 50);   // Lower slanted point
        glVertex2f(20+10+600+si , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+10+600+si , 68);   // Right-top corner
        glVertex2f(28+10+600+si , 68);   // Slanted point (above the lower part)
        glVertex2f(28+10+600+si , 52);   // Lower slanted point
        glVertex2f(22+10+600+si , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 1.0);  // Yellow color
        glVertex2f(10+600+si , 50);   // Right-top corner
        glVertex2f(50+600+si , 50);   // Slanted point (above the lower part)
        glVertex2f(50+600+si , 20);   // Lower slanted point
        glVertex2f(10+600+si , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+600+si,20,8);
drawCircle2(21+600+si,20,5);


drawCircle(41+600+si,20,8);
drawCircle2(41+600+si,20,5);

//jomi line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 100);   // Right-top corner
        glVertex2f(1000 , 100);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 200);   // Right-top corner
        glVertex2f(1000 , 200);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 230);   // Right-top corner
        glVertex2f(1000 , 230);    // Bottom-right corner
        glEnd();







    //100-200

glBegin(GL_POLYGON);
    glColor3f(0.439, 0.431, 0.039);  // Deep blue/purple color to simulate night
    glVertex2f(0, 199);         // Top-left corner
    glVertex2f(1000, 199);      // Top-right corner
    glVertex2f(1000, 100);      // Bottom-right corner
    glVertex2f(0, 100);         // Bottom-left corner
glEnd();





        //zar
            for (int i = 0; i < 30; i++) {
        // Draw the first set of circles
        drawCirclez(10 + i * 54, 180, 5);
        drawCirclez(10 + i *54, 175, 5);

        // Draw the second set of circles
        drawCirclez(20 + i * 54, 180, 9);
        drawCirclez(20 + i * 54, 175, 9);

        // Draw the third set of circles
        drawCirclez(30 + i * 54, 180, 5);
        drawCirclez(30 + i * 54, 175, 5);

        // Draw the fourth set of circles
        drawCirclez(45 + i * 54, 180, 11);
        drawCirclez(45 + i * 54, 175, 11);

        // Draw the fifth set of circles
        drawCirclez(55 + i * 54, 180, 5);
        drawCirclez(55 + i * 54, 175, 5);
    }

//rasta
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(0, 173);  // Bottom-left corner of the left shutter
    glVertex2f(1000, 173);  // Bottom-right corner of the left shutter
    glVertex2f(1000, 153);  // Top-right corner of the left shutter
    glVertex2f(0, 153);  // Top-left corner of the left shutter
glEnd();


// Draw the first part of the house (Yellow)
glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);  // Yellow color
    glVertex2f(30, 175);   // Right-top corner
    glVertex2f(80, 175);   // Slanted point
    glVertex2f(85, 150);   // Lower slanted point
    glVertex2f(25, 150);   // Bottom-right corner
glEnd();

// Draw the second part of the house (Red)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color
    glVertex2f(30, 150);   // Right-top corner
    glVertex2f(80, 150);   // Slanted point
    glVertex2f(80, 120);   // Lower slanted point
    glVertex2f(30, 120);   // Bottom-right corner
glEnd();

// Draw the left window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(35, 145);   // Right-top corner
    glVertex2f(40, 145);   // Slanted point
    glVertex2f(40, 130);   // Lower slanted point
    glVertex2f(35, 130);   // Bottom-right corner
glEnd();

// Draw the right window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(70, 145);   // Right-top corner
    glVertex2f(75, 145);   // Slanted point
    glVertex2f(75, 130);   // Lower slanted point
    glVertex2f(70, 130);   // Bottom-right corner
glEnd();

// Draw the door (Brown)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45, 150);   // Right-top corner
    glVertex2f(65, 150);   // Top-right corner
    glVertex2f(65, 120);   // Bottom-right corner
    glVertex2f(45, 120);   // Bottom-left corner
glEnd();



// house 2
// Apply translation to shift the house by 130 units along the X-axis
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 80 units along the X-axis
glTranslatef(80.0f, 32.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);  // Orange color for the roof
    glVertex2f(40+20 , 200);   // Top peak of the roof
    glVertex2f(100+20 , 175);  // Bottom-right corner of the roof
    glVertex2f(0 , 175);       // Bottom-left corner of the roof
glEnd();

// Draw the body of the house (Rectangle, different proportions)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the body of the house
    glVertex2f(20 , 175);      // Bottom-left corner
    glVertex2f(90 , 175);      // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner (lower position)
    glVertex2f(20 , 100);      // Top-left corner
glEnd();

// Draw the left window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(30 , 150);      // Top-left corner
    glVertex2f(50 , 150);      // Top-right corner
    glVertex2f(50, 130);       // Bottom-right corner
    glVertex2f(30 , 130);      // Bottom-left corner
glEnd();

// Draw the right window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(60 , 150);      // Top-left corner
    glVertex2f(80 , 150);      // Top-right corner
    glVertex2f(80, 130);       // Bottom-right corner
    glVertex2f(60 , 130);      // Bottom-left corner
glEnd();

// Draw the door (Wider door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45 , 100+50);       // Top-left corner of the door
    glVertex2f(65 , 100+50);       // Top-right corner of the door
    glVertex2f(65, 50+50);         // Bottom-right corner of the door
    glVertex2f(45 , 50+50);        // Bottom-left corner of the door
glEnd();

// Restore the previous transformation matrix
glPopMatrix();





//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 160 units along the X-axis
glTranslatef(160.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new slanted roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color for the roof
    glVertex2f(20, 200);       // Left peak of the roof (Y=200)
    glVertex2f(100, 200);      // Right peak of the roof (Y=200)
    glVertex2f(90, 175);       // Right-bottom corner of the roof (Y=175)
    glVertex2f(30, 175);       // Left-bottom corner of the roof (Y=175)
glEnd();

// Draw the body of the house (Rectangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.9, 0.0);  // Green color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner (Y=175)
    glVertex2f(90, 175);       // Bottom-right corner (Y=175)
    glVertex2f(90, 100);       // Top-right corner (Y=100)
    glVertex2f(30, 100);       // Top-left corner (Y=100)
glEnd();

// Draw the left window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(40, 150);       // Top-left corner (Y=150)
    glVertex2f(60, 150);       // Top-right corner (Y=150)
    glVertex2f(60, 130);       // Bottom-right corner (Y=130)
    glVertex2f(40, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the right window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(60, 150);       // Top-left corner (Y=150)
    glVertex2f(80, 150);       // Top-right corner (Y=150)
    glVertex2f(80, 130);       // Bottom-right corner (Y=130)
    glVertex2f(60, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the door (Smaller door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.75, 0.0);  // Brown color for the door
    glVertex2f(50, 100+40+10);       // Top-left corner of the door (Y=100)
    glVertex2f(70, 100+40+10);       // Top-right corner of the door (Y=100)
    glVertex2f(70, 50+40+10);        // Bottom-right corner of the door (Y=50)
    glVertex2f(50, 50+40+10);        // Bottom-left corner of the door (Y=50)
glEnd();

// Draw a chimney (Small rectangle on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 210-14);       // Bottom-left corner of the chimney (Y=205)
    glVertex2f(70, 210-14);       // Bottom-right corner of the chimney (Y=205)
    glVertex2f(70, 225);       // Top-right corner of the chimney (Y=225)
    glVertex2f(60, 225);       // Top-left corner of the chimney (Y=225)
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 260 units along the X-axis
glTranslatef(230.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the curved roof (Bezier-style shape for smooth curves)
glBegin(GL_POLYGON);
    glColor3f(0.9, 0.0, 0.0);  // Deep Red color for the roof
    glVertex2f(20-8, 180);       // Left peak of the roof
    glVertex2f(40-8, 220);       // Left-top curve of the roof
    glVertex2f(100-8, 220);      // Right-top curve of the roof
    glVertex2f(120-8, 170);      // Right peak of the roof
    glVertex2f(100-8, 154);      // Right-bottom corner of the roof
    glVertex2f(40-8, 154);       // Left-bottom corner of the roof
glEnd();

// Draw the body of the house (Rounded corners for a soft look)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.9, 0.4);  // Light Yellow color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner
    glVertex2f(90, 175);       // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner
    glVertex2f(30, 100);       // Top-left corner
glEnd();

// Draw the left window (Rounded square for elegance)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Bright Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        // Adjusting left window position (radius = 15, x = 50, y = 140)
        glVertex2f(60 + cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();



// Draw the door (Rounded top with a handle)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.0);  // Brown color for the door
    glVertex2f(50, 100);       // Top-left corner of the door
    glVertex2f(70, 100);       // Top-right corner of the door
    glVertex2f(70, 125);        // Bottom-right corner of the door
    glVertex2f(50, 125);        // Bottom-left corner of the door
glEnd();

// Draw the door handle (Small circle on the right side of the door)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.0);  // Yellow color for the handle
    for (float angle = 0; angle <= 360; angle += 1.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(60 + cos(rad) * 2, 75 + sin(rad) * 2); // Circular handle
    }
glEnd();

// Draw a chimney (Decorative chimney on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 205);       // Bottom-left corner of the chimney
    glVertex2f(65, 205);       // Bottom-right corner of the chimney
    glVertex2f(65, 225);       // Top-right corner of the chimney
    glVertex2f(60, 225);       // Top-left corner of the chimney
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house

// Draw the chimney base (original brown)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(400 - 80, 190);  // Bottom-left corner of the chimney
    glVertex2f(550 - 80, 190);  // Bottom-right corner of the chimney
    glVertex2f(550 - 80, 100);  // Top-right corner of the chimney
    glVertex2f(400 - 80, 100);  // Top-left corner of the chimney
glEnd();

// Draw the chimney top (darker color for a more realistic look)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.9);  // Darker color for the top of the chimney
    glVertex2f(400 - 70, 180);  // Bottom-left corner of the chimney top
    glVertex2f(530 - 70, 180);  // Bottom-right corner of the chimney top
    glVertex2f(530 - 70, 110);  // Top-right corner of the chimney top
    glVertex2f(400 - 70, 110);  // Top-left corner of the chimney top
glEnd();

// --- Draw the Window with Shutters ---
// Left Window
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(435+ cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();

// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-25, 145-17);  // Bottom-left corner of the left shutter
    glVertex2f(465-25, 145-17);  // Bottom-right corner of the left shutter
    glVertex2f(465-25, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-25, 170-17);  // Top-left corner of the left shutter
glEnd();

// Right Window (same as left)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(355 + cos(rad) * 15, 140 + sin(rad) * 15); // Right window
    }
glEnd();

// Right window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(505-155, 145-17);  // Bottom-left corner of the right shutter
    glVertex2f(515-155, 145-17);  // Bottom-right corner of the right shutter
    glVertex2f(515-155, 170-17);  // Top-right corner of the right shutter
    glVertex2f(505-155, 170-17);  // Top-left corner of the right shutter
glEnd();
// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-75, 125-17);  // Bottom-left corner of the left shutter
    glVertex2f(485-75, 125-17);  // Bottom-right corner of the left shutter
    glVertex2f(485-75, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-75, 170-17);  // Top-left corner of the left shutter
glEnd();



//house

// Translate the entire house upwards or downwards along the Y-axis

    glTranslatef(-20.0f, -20.0f, 0.0f);  // Translate the house 50 units upwards along the Y-axis

    // Draw the base of the house (rectangle)
    glColor3f(0.8f, 0.4f, 0.2f);  // Brown color for the house
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the base of the house
    glVertex2f(500, 120);
    glVertex2f(600, 120);
    glVertex2f(600, 180);
    glVertex2f(500, 180);
    glEnd();  // End drawing the rectangle

    // Draw the roof of the house (triangle)
    glColor3f(0.6f, 0.2f, 0.2f);  // Dark red color for the roof
    glBegin(GL_TRIANGLES);  // Begin drawing the triangle for the roof
    glVertex2f(500, 180);  // Left corner of the roof
    glVertex2f(600, 180);  // Right corner of the roof
    glVertex2f(550, 210);  // Peak of the roof
    glEnd();  // End drawing the triangle

    // Draw the door (rectangle)
    glColor3f(0.5f, 0.3f, 0.1f);  // Dark brown color for the door
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the door
    glVertex2f(535, 120);
    glVertex2f(565, 120);
    glVertex2f(565, 150);
    glVertex2f(535, 150);
    glEnd();  // End drawing the rectangle

    // Draw windows (rectangles)
    glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for windows
    glBegin(GL_QUADS);  // Left window
    glVertex2f(510, 150);
    glVertex2f(530, 150);
    glVertex2f(530, 170);
    glVertex2f(510, 170);
    glEnd();  // End drawing the left window

    glBegin(GL_QUADS);  // Right window
    glVertex2f(570, 150);
    glVertex2f(590, 150);
    glVertex2f(590, 170);
    glVertex2f(570, 170);
    glEnd();  // End drawing the right window




    //well



       // Translate the entire well 100 units to the right (along the X-axis)
    glTranslatef(80.0f, 0.0f, 0.0f);  // Move the well to the right

    // Draw the base of the well (circle)
    glColor3f(0.5f, 0.5f, 0.5f);  // Gray color for the well's base
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the base
    glVertex2f(550, 120);  // Center of the circle (well's base)
    const int numi_segments = 100;  // Number of segments to make the circle smooth
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the circle's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the circle's edge
        glVertex2f(x + 550, y + 135);  // Vertex of the circle
    }
    glEnd();  // End drawing the base circle

    // Draw the walls of the well (rectangle)
    glColor3f(0.3f, 0.3f, 0.3f);  // Dark gray color for the well's walls
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the walls of the well
    glVertex2f(535, 130);  // Bottom-left corner
    glVertex2f(565, 130);  // Bottom-right corner
    glVertex2f(565, 160);  // Top-right corner
    glVertex2f(535, 160);  // Top-left corner
    glEnd();  // End drawing the rectangle

    // Draw the top of the well (roof, another circle)
    glColor3f(0.0f, 0.0f, 1.0f);  // Dark brown color for the roof
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
    glVertex2f(550, 170);  // Center of the roof circle
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the roof's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the roof's edge
        glVertex2f(x + 550, y + 160);  // Vertex of the roof circle
    }
    glEnd();  // End drawing the roof circle

//kher

glColor3f(0.0f, 0.0f, 1.0f);  // Blue color for the roof
glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
glVertex2f(620, 170);  // Center of the roof circle (original position)

// New translation value for the Y-axis (roof)
float translationY = 50.0f;  // Translate 50 units up (can change this value)
float additionalTranslationY = 5.0f;  // Additional 5 units translation
float newCenterY = 120 + translationY + additionalTranslationY;  // New Y position after translation

// New radius value for a wider roof
float raddius = 31.0f;  // Increase the radius to make the circle wider

// Loop to create the circle for the roof
const int numq_segments = 100;  // Number of segments for smoothness
for (int i = 0; i <= numq_segments; i++) {
    float theta = 2.0f * 3.1415926f * float(i) / float(numq_segments);  // Calculate angle
    float x = raddius * cosf(theta);  // X coordinate for the roof's edge
    float y = raddius * sinf(theta);  // Y coordinate for the roof's edge
    glVertex2f(x + 620, y + newCenterY);  // Vertex of the roof circle with translated Y-coordinate
}
glEnd();  // End drawing the roof circle

// Set the color for the house body (brown)
glColor3f(0.6f, 0.3f, 0.0f);  // Brown color for the house body
glBegin(GL_QUADS);  // Begin drawing the rectangle for the body

// The body of the house (a smaller rectangle)
float houseWidth = 60.0f;  // Further reduced width of the house
float houseHeight = 60.0f;  // Further reduced height of the house

// Bottom-left corner of the house body (relative to the roof center)
float houseBottomLeftX = 620 - houseWidth / 2;
float houseBottomLeftY = newCenterY - raddius - houseHeight + 50.0f;  // Translate 50 units up (adjusted Y position)

// Bottom-right corner of the house body
float houseBottomRightX = houseBottomLeftX + houseWidth;
float houseBottomRightY = houseBottomLeftY;

// Top-left corner of the house body
float houseTopLeftX = houseBottomLeftX;
float houseTopLeftY = houseBottomLeftY + houseHeight;

// Top-right corner of the house body
float houseTopRightX = houseBottomRightX;
float houseTopRightY = houseTopLeftY;

// Define the 4 corners of the rectangle (house body)
glVertex2f(houseBottomLeftX, houseBottomLeftY);  // Bottom-left
glVertex2f(houseBottomRightX, houseBottomRightY);  // Bottom-right
glVertex2f(houseTopRightX, houseTopRightY);  // Top-right
glVertex2f(houseTopLeftX, houseTopLeftY);  // Top-left

glEnd();  // End drawing the house body

// Draw the window (small rectangle)
glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for the window
glBegin(GL_QUADS);  // Begin drawing the window

float windowWidth = 15.0f;  // Reduced width of the window
float windowHeight = 15.0f;  // Reduced height of the window

// Bottom-left corner of the window
float windowBottomLeftX = 627 - houseWidth / 4;  // Position window to the left of center
float windowBottomLeftY = houseTopLeftY - 25.0f;  // Positioned a little below the roof

// Bottom-right corner of the window
float windowBottomRightX = windowBottomLeftX + windowWidth;
float windowBottomRightY = windowBottomLeftY;

// Top-left corner of the window
float windowTopLeftX = windowBottomLeftX;
float windowTopLeftY = windowBottomLeftY + windowHeight;

// Top-right corner of the window
float windowTopRightX = windowBottomRightX;
float windowTopRightY = windowTopLeftY;

// Define the 4 corners of the window rectangle
glVertex2f(windowBottomLeftX, windowBottomLeftY);  // Bottom-left
glVertex2f(windowBottomRightX, windowBottomRightY);  // Bottom-right
glVertex2f(windowTopRightX, windowTopRightY);  // Top-right
glVertex2f(windowTopLeftX, windowTopLeftY);  // Top-left

glEnd();  // End drawing the window

// Draw the door (larger rectangle)
glColor3f(0.4f, 0.2f, 0.0f);  // Dark brown color for the door
glBegin(GL_QUADS);  // Begin drawing the door

float doorWidth = 20.0f;  // Reduced width of the door
float doorHeight = 40.0f;  // Reduced height of the door

// Bottom-left corner of the door (centered at the bottom)
float doorBottomLeftX = 620 - doorWidth / 2;
float doorBottomLeftY = houseBottomLeftY;

// Bottom-right corner of the door
float doorBottomRightX = doorBottomLeftX + doorWidth;
float doorBottomRightY = doorBottomLeftY;

// Top-left corner of the door
float doorTopLeftX = doorBottomLeftX;
float doorTopLeftY = doorBottomLeftY + doorHeight;

// Top-right corner of the door
float doorTopRightX = doorBottomRightX;
float doorTopRightY = doorTopLeftY;

// Define the 4 corners of the door rectangle
glVertex2f(doorBottomLeftX, doorBottomLeftY);  // Bottom-left
glVertex2f(doorBottomRightX, doorBottomRightY);  // Bottom-right
glVertex2f(doorTopRightX, doorTopRightY);  // Top-right
glVertex2f(doorTopLeftX, doorTopLeftY);  // Top-left

glEnd();  // End drawing the door



float translationX = 100.0f;  // Translation value on the X-axis

glColor3f(0.5f, 0.0f, 0.9f);

// Begin drawing a rectangle (structure) using GL_QUADS
glBegin(GL_QUADS);
    // Define the four vertices of the rectangle, translating them by `translationX`
    glVertex2f(760.0f + translationX, 120.0f); // bottom-left corner
    glVertex2f(840.0f + translationX, 120.0f); // bottom-right corner
    glVertex2f(840.0f + translationX, 190.0f); // top-right corner
    glVertex2f(760.0f + translationX, 190.0f); // top-left corner
glEnd();

// Draw a complex structure

// Set color for the base rectangle (red)
glColor3f(1.0f, 0.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 130.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 130.0f); // bottom-right corner
    glVertex2f(830.0f + translationX, 170.0f); // top-right corner
    glVertex2f(770.0f + translationX, 170.0f); // top-left corner
glEnd();

// Set color for the top triangle (blue)
glColor3f(0.7f, 0.6f, 0.4f);
glBegin(GL_TRIANGLES);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // peak of the triangle
glEnd();

// Set color for another rectangle (green)
glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(800.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // top-right corner
    glVertex2f(770.0f + translationX, 200.0f); // top-left corner
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(160+740, 130);  // Bottom-left of the door
glVertex2f(140+740, 130);  // Bottom-right of the door
glVertex2f(140+740, 170);  // Top-right of the door
glVertex2f(160+740, 170);  // Top-left of the door
glEnd();

//cricket
drawCircle7(755,150,15);
drawCircle7(730,150,15);
drawCircle7(775,150,15);
drawCircle7(710,150,15);
drawCircle7(795,150,15);
drawCircle7(805,150,15);


drawCircle5(755,150,14);
drawCircle5(730,150,14);
drawCircle5(775,150,14);
drawCircle5(710,150,14);
drawCircle5(795,150,14);
drawCircle5(805,150,14);
glColor3f(1.0f, 1.0f, 0.0f); // Color the polygon yellow (you can change this)
glBegin(GL_QUADS);

// Define the four vertices of the polygon (you can adjust the coordinates to fit your design)
glVertex2f(720.0f, 140.0f); // bottom-left corner
glVertex2f(785.0f, 140.0f); // bottom-right corner
glVertex2f(785.0f, 160.0f); // top-right corner
glVertex2f(720.0f, 160.0f); // top-left corner

glEnd();




bird();
bird1();




t();





    glutSwapBuffers();


}






void drawScene3() {




    //tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();
//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen
    glLoadIdentity(); // Reset the drawing perspective
    gluOrtho2D(0.0, 1000.0, 0.0, 1000.0); // Set orthographic projection range
    glMatrixMode(GL_MODELVIEW); // Set the matrix mode to modelview for 2D drawing

    // Drawing the sky (a blue rectangle)
 glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.3); // Dark blue color for night sky
    glVertex2f(0, 800); // Bottom-left corner
    glVertex2f(0, 1000); // Top-left corner
    glVertex2f(1000, 1000); // Top-right corner
    glVertex2f(1000, 800); // Bottom-right corner
glEnd();


    glPushMatrix();
    glTranslatef(500.0, 900.0, 0); // Move to center of the window (500, 900)




       // Draw the moon (simple white or gray circle)
    float radius = 25.0f; // Radius of the moon
    int num_segments = 100; // Number of segments to approximate the circle

    // Draw the moon itself
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f); // Light gray color for the moon
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments); // Calculate the angle for each vertex
        float x = radius * cos(theta); // X position of each vertex
        float y = radius * sin(theta); // Y position of each vertex
        glVertex2f(x, y); // Plot the vertex
    }
    glEnd();


clouds1();


clouds2();


clouds3();

//plane

  glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 920 ); // Bottom-left corner
    glVertex2f(600+ shifti, 940 ); // Top-left corner
    glVertex2f(680+ shifti, 940 ); // Top-right corner
    glVertex2f(680+ shifti, 920 ); // Bottom-right corner
    glEnd();



       glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(700+ shifti, 960 ); // Bottom-right corner
   glVertex2f(700+ shifti, 920 ); // Top-right corner
    glVertex2f(680+ shifti, 920) ; // Top-right corner

    glEnd();

        glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)

     glVertex2f(680+ shifti, 940 ); // Top-right corner
   glVertex2f(700 + shifti, 940 ); // Top-right corner
   glVertex2f(680 + shifti, 920 ); // Bottom-right corner

    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(640+ shifti, 930 ); // Bottom-left corner
    glVertex2f(650 + shifti, 930 ); // Top-left corner
     glVertex2f(670+ shifti, 890 ); // Bottom-right corner
    glVertex2f(660+ shifti, 890 ); // Top-right corner

    glEnd();

    drawCircle(600.0f + shifti, 930.0f, 10.0f);

  glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 935 ); // Bottom-left corner

    glVertex2f(600 + shifti, 933 ); // Top-left corner
    glVertex2f(680 + shifti, 933 ); // Bottom-right corner

    glVertex2f(680 + shifti, 935 ); // Top-right corner
    glEnd();


// the rocket


    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 890 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
    glVertex2f(90, 830 + shift); // Top-right corner
    glVertex2f(90, 890 + shift); // Bottom-right corner
    glEnd;



      glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 880 + shift); // Bottom-left corner
    glVertex2f(100, 870 + shift); // Top-left corner
    glVertex2f(90, 870 + shift); // Top-right corner
    glVertex2f(90, 880 + shift); // Bottom-right corner
    glEnd;




       glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.5); // Sky color (light blue)
    glVertex2f(100, 860 + shift); // Bottom-left corner
    glVertex2f(100, 850 + shift); // Top-left corner
    glVertex2f(90, 850 + shift); // Top-right corner
    glVertex2f(90, 860 + shift); // Bottom-right corner
    glEnd;




    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(90, 830 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
      glVertex2f(102, 815 + shift); // Top-right corner
       glVertex2f(88, 815 + shift); // Bottom-right corner


    glEnd();

   glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(95, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(92, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(98, 800 + shift); // Top-right corner

    glEnd();



      glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
     glVertex2f(90, 890 + shift); // Bottom-right corner

    glVertex2f(95, 910 + shift); // Top-right corner
     glVertex2f(100, 890 + shift); // Top-left corner

    glEnd();








///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.2, 0.1);  // Darker green, soft night color
    glVertex2f(0,800);
    glVertex2f(100,800);
    glVertex2f(50,850);
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.4, 0.1);  // Muted green for night effect
    glVertex2f(20,850);
    glVertex2f(100,800);
    glVertex2f(0,800);
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.4, 0.1);  // Muted green for night effect
    glVertex2f(70,850);
    glVertex2f(100,800);
    glVertex2f(0,800);
    glEnd();


/// hill 2

//polygon1//
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.3, 0.1);  // Darker green shade
    glVertex2f(100,800);
    glVertex2f(200,800);
    glVertex2f(180,835);
    glVertex2f(160,840);
    glVertex2f(155,845);
    glVertex2f(150,840);
    glVertex2f(130,845);
    glVertex2f(120,840);
    glVertex2f(150,835);
    glEnd();

/// hill3

glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.2);  // Darker green-blue for the hill at night
glVertex2f(200, 800);   // Vertex 1
glVertex2f(330, 800);   // Vertex 2
glVertex2f(330, 800);   // Vertex 3 (new point)
glVertex2f(330, 800);   // Vertex 4 (new point)
glVertex2f(310, 860);   // Vertex 5 (new point)
glVertex2f(270, 870);   // Vertex 6 (new point)
glVertex2f(230, 860);   // Vertex 7 (new point)
glVertex2f(200, 800);   // Vertex 8 (new point)
glEnd();





//hill 4

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(330, 800);    // Vertex 1 (top left)
glVertex2f(430, 800);    // Vertex 2 (upper left)
glVertex2f(430, 900);    // Vertex 3 (middle left)
glVertex2f(330, 900);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(330+33, 800);    // Vertex 1 (top left)

glVertex2f(330+33, 900);    // Vertex 3 (middle left)

glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430-33, 800);    // Vertex 2 (upper left)
glVertex2f(430-33, 900);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 825);    // Vertex 2 (upper left)
glVertex2f(330, 825);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 850);    // Vertex 2 (upper left)
glVertex2f(330, 850);    // Vertex 3 (middle left)
glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 875);    // Vertex 2 (upper left)
glVertex2f(330, 875);    // Vertex 3 (middle left)
glEnd();




int x_start = 330, x_end = 430; // X range
int y_start = 800, y_end = 900; // Y range
int horizontal_count = 3;       // Number of polygons horizontally
int vertical_count = 4;         // Number of polygons vertically

// Initial polygon points (given)
float initial_x = 347.0f;
float initial_y = 812.0f; // Corrected initial y value

// Loop to create the polygons
for (int i = 0; i < vertical_count; i++) {
    for (int j = 0; j < horizontal_count; j++) {
        // Calculate x and y positions for each polygon
        float x = initial_x + j * ((x_end - x_start) / horizontal_count);
        float y = initial_y + i * ((y_end - y_start) / vertical_count);

        // Draw the polygon at (x, y)
        glBegin(GL_POLYGON);
        glColor3f(0.125, 0.404, 0.49);  // Green color for the polygon (customize as needed)

        // Define 4 vertices for each polygon, with (x, y) as the center
        glVertex2f(x - 6, y + 5);   // Vertex 1 (top left)
        glVertex2f(x + 6, y + 5);   // Vertex 2 (top right)
        glVertex2f(x + 6, y - 5);   // Vertex 3 (bottom right)
        glVertex2f(x - 6, y - 5);   // Vertex 4 (bottom left)

        glEnd();
    }
}





///hill
glBegin(GL_POLYGON);
glColor3f(0.2, 0.4, 0.05);  // Darker, muted green color for nighttime
glVertex2f(430, 800);    // Vertex 1 (top left)
glVertex2f(530, 800);    // Vertex 2 (upper left)
glVertex2f(480, 840);    // Vertex 3 (middle left)
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.05);  // A deeper, darker green for a more subdued effect
glVertex2f(530, 800);    // Vertex 1 (top left)
glVertex2f(580, 800);    // Vertex 2 (upper left)
glVertex2f(555, 850);    // Vertex 3 (middle left)
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.1, 0.2, 0.1);  // Muted dark green to match nighttime ambiance
glVertex2f(580, 800);    // Vertex 1 (top left)
glVertex2f(555, 850);    // Vertex 2 (middle left)
glVertex2f(620, 800);    // Vertex 3 (middle left)
glEnd();



///new byulding

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(620, 800);    // Vertex 1 (top left)
glVertex2f(620, 900);    // Vertex 2 (upper left)
glVertex2f(730, 900);    // Vertex 3 (middle left)
glVertex2f(730, 800);    // Vertex 3 (middle left)

glEnd();




// Park dimensions and configuration
int x_range_start = 620, x_range_end = 720; // X range
int y_range_start = 800, y_range_end = 900; // Y range
int num_polygons_horizontal = 3;            // Number of polygons horizontally
int num_polygons_vertical = 4;              // Number of polygons vertically

// Initial position of the first polygon
float initial_pos_x = 642.0f;
float initial_pos_y = 810.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row = 0; row < num_polygons_vertical; row++) {
    for (int col = 0; col < num_polygons_horizontal; col++) {
        // Calculate X and Y positions for each polygon
        float pos_x = initial_pos_x + col * ((x_range_end - x_range_start) / num_polygons_horizontal);
        float pos_y = initial_pos_y + row * ((y_range_end - y_range_start) / num_polygons_vertical);

        // Draw the polygon at (pos_x, pos_y)
        glBegin(GL_POLYGON);
        glColor3f(0.153, 0.808, 0.961);  // Green color for the polygon (customize as needed)

        // Define 6 vertices for each polygon, with the (pos_x, pos_y) as the center
        glVertex2f(pos_x - 10, pos_y + 10);   // Vertex 1
        glVertex2f(pos_x + 10, pos_y + 10);   // Vertex 2
        glVertex2f(pos_x + 20, pos_y);        // Vertex 3
        glVertex2f(pos_x + 10, pos_y - 10);   // Vertex 4
        glVertex2f(pos_x - 10, pos_y - 10);   // Vertex 5
        glVertex2f(pos_x - 20, pos_y);        // Vertex 6

        glEnd();
    }
}


/// new building


glBegin(GL_POLYGON);
glColor3f(0.89, 0.105, 0.4); // Green color (for the shape)
glVertex2f(730, 800);    // Vertex 1 (top left)
glVertex2f(730, 850);    // Vertex 2 (upper left)
glVertex2f(845, 850);    // Vertex 3 (middle left)
glVertex2f(845, 800);    // Vertex 3 (middle left)

glEnd();

// Park dimensions and configuration
int park_x_start = 720, park_x_end = 820;   // X range for the park area
int park_y_start = 800, park_y_end = 850;   // Y range for the park area
int total_polygons_horizontal = 4;           // Number of polygons horizontally
int total_polygons_vertical = 4;             // Number of polygons vertically

// Initial position of the first polygon
float start_pos_x = 750.0f;
float start_pos_y = 807.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row_index = 0; row_index < total_polygons_vertical; row_index++) {
    for (int col_index = 0; col_index < total_polygons_horizontal; col_index++) {
        // Calculate X and Y positions for each polygon
        float polygon_pos_x = start_pos_x + col_index * ((park_x_end - park_x_start) / total_polygons_horizontal);
        float polygon_pos_y = start_pos_y + row_index * ((park_y_end - park_y_start) / total_polygons_vertical);

        // Draw the polygon at (polygon_pos_x, polygon_pos_y)
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygon (customize as needed)

        // Define 8 vertices for each polygon, with (polygon_pos_x, polygon_pos_y) as the center
        glVertex2f(polygon_pos_x - 6, polygon_pos_y + 3);  // Vertex 1
        glVertex2f(polygon_pos_x + 6, polygon_pos_y + 3);  // Vertex 2
        glVertex2f(polygon_pos_x + 15, polygon_pos_y + 2);   // Vertex 3
        glVertex2f(polygon_pos_x + 15, polygon_pos_y - 2);   // Vertex 4
        glVertex2f(polygon_pos_x + 6, polygon_pos_y - 3);  // Vertex 5
        glVertex2f(polygon_pos_x - 6, polygon_pos_y - 3);  // Vertex 6
        glVertex2f(polygon_pos_x - 15, polygon_pos_y - 2);   // Vertex 7
        glVertex2f(polygon_pos_x - 15, polygon_pos_y + 2);   // Vertex 8

        glEnd();
    }
}


///hill


glBegin(GL_POLYGON);
glColor3ub(34, 139, 34);
glVertex2f(845, 800);    // Vertex 1 (top left)
glVertex2f(845, 835);    // Vertex 2 (upper left)
glVertex2f(1000, 835);    // Vertex 3 (middle left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)

glEnd();

drawCircle2(873.0f, 830.0f, 15.0f);

drawCircle2(900.0f, 830.0f, 15.0f);
drawCircle2(930.0f, 830.0f, 18.0f);

drawCircle2(955.0f, 830.0f, 15.0f);
drawCircle2(985.0f, 830.0f, 18.0f);

drawCircle2(1020.0f, 830.0f, 18.0f);

drawCircle3(850.0f, 820.0f, 6.0f);

drawCircle3(860.0f, 820.0f, 6.0f);






//nodi
// Polygon with a night-like color (Dark blue for night)
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.6);  // Dark blue, suitable for a nighttime look
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)
glVertex2f(0, 800);    // Vertex 4 (bottom left)
glEnd();

float gadp = 5.0f;  // The gap between objects
float widt = 0.75f;  // The width of each object

// Starting position for the Y-coordinate
float startY = 797.0f;

// Adjust this gap to prevent overlap, assuming your object height is 1.0f
float vert_gap = 4.0f;

for (int j = 0; j < 200; j++) {  // Loop for drawing 200 rows vertically
    for (int i = 0; i < 500; i++) {
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);

        // Calculate the X positions with gap between objects
        float x_offset = (widt + gadp) * i;

        // Calculate the Y position for each row, with a gap between them
        float y_offset = startY - j * vert_gap;  // Adjust Y for each row

        glVertex2f(x_offset, y_offset);
        glVertex2f(x_offset + widt, y_offset);
        glVertex2f(x_offset + widt, y_offset - 1.0f);  // Slightly adjust for the height of the object
        glVertex2f(x_offset, y_offset - 1.0f);  // Slightly adjust for the height of the object

        glEnd();
    }
}



//road
// Polygon with a muted, dark nighttime color
glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.2);  // Dark gray/brown, suitable for night
glVertex2f(0, 700);    // Vertex 1 (top left)
glVertex2f(1000, 700);    // Vertex 2 (upper left)
glVertex2f(1000, 630);    // Vertex 3 (middle left)
glVertex2f(0, 630);    // Vertex 4 (bottom left)
glEnd();


float ga = 5.0f;  // The gap between objects
float wi = 4.0f;  // The width of each object

for (int i = 0; i < 150; i++) {
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // Black color (for the shape)

    // Calculate the X position with gap between objects
    float x_offset = (wi + ga) * i;

    glVertex2f(x_offset, 657);    // Vertex 1 (top left)
    glVertex2f(x_offset + wi, 657);    // Vertex 2 (upper right)
    glVertex2f(x_offset + wi, 653);    // Vertex 3 (bottom right)
    glVertex2f(x_offset, 653);    // Vertex 4 (bottom left)

    glEnd();
}



glEnd();





// pillar of bridge
// Set the gap between each pillar
float gap = 100.0f; // You can adjust this value for a bigger or smaller gap between pillars

// Loop to draw multiple pillars along the horizontal axis
for (float xOffset = 0; xOffset < 1200; xOffset += gap) { // Change 300 to the desired number of pillars (adjust as needed)
    // Draw the main pillar body (rectangle-like shape with slight curve)
    glBegin(GL_POLYGON);
    glColor3f(0.541, 0.541, 0.514); // Pillar color
    glVertex2f(10 + xOffset, 630);  // Top left vertex
    glVertex2f(60 + xOffset, 630);  // Top right vertex
    glVertex2f(60 + xOffset, 600);  // Bottom right vertex
    glVertex2f(10 + xOffset, 600);  // Bottom left vertex
    glEnd();

    // Add subtle ridges for texture (details for aesthetics)
    glLineWidth(2.0);
    glColor3f(0.396, 0.263, 0.129); // Dark color for ridges
    for (float y = 610; y <= 620; y += 2) {
        glBegin(GL_LINES);
        glVertex2f(10 + xOffset, y);  // Start from the left side
        glVertex2f(60 + xOffset, y);  // End at the right side
        glEnd();
    }
    glLineWidth(1.0); // Reset line width after the detailing

    // Add a cap to the top of the pillar for extra detail (a rectangle-like top)
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176); // Darker brown color for the cap
    glVertex2f(10 + xOffset, 620);  // Left top of the cap
    glVertex2f(60 + xOffset, 620);  // Right top of the cap
    glVertex2f(60 + xOffset, 630);  // Right side raised for cap
    glVertex2f(10 + xOffset, 630);  // Left side raised for cap
    glEnd();
}



// rail line

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 680);
    glVertex2f(1000, 680);
glEnd();

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 670);
    glVertex2f(1000, 670);
glEnd();


// Number of lines to draw
int numLines = 350; // You can adjust this as needed
float gapi = 4.0f; // Gap between each line

// Loop to draw multiple lines with a gap
for (int i = 0; i < numLines; ++i) {
    float offsetX = i * gapi;  // Increment the x-coordinate by 'gap' each time

    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Set the line color to black

        // Draw the line horizontally, with each line moved by 'offsetX'
        glVertex2f(0 + offsetX, 670); // Starting point of the line
        glVertex2f(0 + offsetX, 680); // End point of the line (100 units to the right)

    glEnd();
}

// rail 3

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 633);
    glVertex2f(1000, 633);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 635);
    glVertex2f(1000, 635);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 636);
    glVertex2f(1000, 637);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 637);
    glVertex2f(1000, 639);
glEnd();

// rail 4

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 700);
    glVertex2f(1000, 700);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 698);
    glVertex2f(1000, 698);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 696);
    glVertex2f(1000, 696);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 694);
    glVertex2f(1000, 694);
glEnd();












//ship 3
// Polygon 1 (green element)
glBegin(GL_POLYGON);
glColor3f(0.1, 0.2, 0.05);  // Dark green for nighttime
glVertex2f(850 + sh, 760);    // Vertex 1 (top left)
glVertex2f(950 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(950 + sh, 740);    // Vertex 3 (middle left)
glVertex2f(870 + sh, 740);    // Vertex 4 (middle left)
glEnd();

// Polygon 2 (light gray for nighttime)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.2);  // Dark gray, softer for night
glVertex2f(880 + sh, 760);    // Vertex 1 (top left)
glVertex2f(940 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(940 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(880 + sh, 780);    // Vertex 4 (middle left)
glEnd();

// Polygon 3 (soft purple for night effect)
glBegin(GL_POLYGON);
glColor3f(0.4, 0.2, 0.4);  // Muted purple tone for a moonlit feel
glVertex2f(920 + sh, 800);    // Vertex 1 (top left)
glVertex2f(930 + sh, 800);    // Vertex 2 (upper left)
glVertex2f(930 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(920 + sh, 780);    // Vertex 4 (middle left)
glEnd();

// Polygon 4 (dark brown, more natural night shade)
glBegin(GL_POLYGON);
glColor3f(0.4, 0.2, 0.1);  // Dark brown for a natural night effect
glVertex2f(900 + sh, 800);    // Vertex 1 (top left)
glVertex2f(910 + sh, 800);    // Vertex 2 (upper left)
glVertex2f(910 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(900 + sh, 780);    // Vertex 4 (middle left)
glEnd();

// Circles with a softer night effect (muted blue-green or pale tones)
drawCircle2(910.0f + sh, 770.0f, 5.0f); // Pale blue-green circle
drawCircle2(930.0f + sh, 770.0f, 5.0f); // Soft glow-like circle
drawCircle2(880.0f + sh, 750.0f, 5.0f); // Subtle night-colored circle
drawCircle2(880.0f + sh, 750.0f, 3.0f); // Smaller, dimmed circle

// Ship Polygon (with muted colors for nighttime)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.1, 0.05);  // Dark brown color for the ship's body
glVertex2f(100 + shif, 750);    // Vertex 1 (top left)
glVertex2f(300 + shif, 750);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 730);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 730);    // Vertex 4 (middle left)
glEnd();

// Ship Top Polygon (lighter tone for a soft moonlit effect)
glBegin(GL_POLYGON);
glColor3f(0.4, 0.4, 0.1);  // Soft olive yellow for moonlit effect
glVertex2f(110 + shif, 790);    // Vertex 1 (top left)
glVertex2f(290 + shif, 790);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 750);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 750);    // Vertex 4 (middle left)
glEnd();

   // Define the gap between polygons
    float gapX = 5.0;  // Horizontal gap (between columns)
    float gapY = 6.0;  // Vertical gap (between rows)

    // Size of each polygon (hexagon)
    float radi = 3.0;  // Radius of the hexagon

    // Loop to create 4 vertical and 22 horizontal polygons (grid)
    for (int row = 0; row < 3; row++) {          // Loop through rows (4 rows)
        for (int col = 0; col < 16; col++) {     // Loop through columns (22 columns)
            // Calculate the X and Y offset for each polygon
            float offsetX = 115 + col * (2 * radi + gapX);  // Horizontal offset (including gapX)
            float offsetY = 776 - row * (radi * 2 + gapY);  // Vertical offset (including gapY)

            // Draw the hexagon at the calculated position
            glBegin(GL_POLYGON);
            glColor3f(0.043, 0.58, 0.961);  // White color (for the shape)

            // Calculate the six vertices of the hexagon
            for (int i = 0; i < 8; i++) {
                float angle = i * 2.0 * M_PI / 8;  // Divide 360 degrees by 6 vertices (2π/6)
                float x = offsetX + radi * cos(angle);
                float y = offsetY + radi * sin(angle);

                glVertex2f(x + + shif, y);  // Add the vertex to the polygon
            }

            glEnd();
        }
    }

// Ship2 Base Polygon (muted brown for nighttime)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.15, 0.05);  // Dark brown, muted tone for night
glVertex2f(500 + shi, 750);    // Vertex 1 (top left)
glVertex2f(700 + shi, 750);    // Vertex 2 (upper left)
glVertex2f(680 + shi, 720);    // Vertex 3 (middle left)
glVertex2f(500 + shi, 720);    // Vertex 4 (bottom left)
glEnd();

// Ship2 Top Polygon (darker blue for night)
glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.3);  // Dark blue, subtle night tone
glVertex2f(510 + shi, 770);    // Vertex 1 (top left)
glVertex2f(680 + shi, 770);    // Vertex 2 (upper left)
glVertex2f(680 + shi, 740);    // Vertex 3 (middle left)
glVertex2f(510 + shi, 740);    // Vertex 4 (bottom left)
glEnd();




glColor3f(1.0, 1.0, 1.0);

    // Size of the polygon
    float width = 3.0;
    float height = 3.0;

    // Gap between polygons
    float gapy = 2.0;

    // Number of rows and columns
    int rows = 4;  // You can adjust the number of rows
    int cols = 33;  // You can adjust the number of columns

    // Draw the grid of polygons with a gap between them
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            glBegin(GL_POLYGON);

            // Draw the polygon at the current position, adding the gap to the offset
            glVertex2f(512 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Top left
            glVertex2f(515 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Upper left
            glVertex2f(515 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom left
            glVertex2f(512 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom right

            glEnd();
        }

    }






    // Polygon 1 (Nighttime muted purple for the top part of the ship)
glBegin(GL_POLYGON);
glColor3f(0.3, 1.0, 0.3);  // Muted purple, softer for night
glVertex2f(520 + shi, 790);    // Vertex 1 (top left)
glVertex2f(670 + shi, 790);    // Vertex 2 (upper left)
glVertex2f(670 + shi, 770);    // Vertex 3 (middle left)
glVertex2f(520 + shi, 770);    // Vertex 4 (bottom left)
glEnd();

// Polygon 2 (Soft gray-blue for the body, reflecting moonlight)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.3);  // Soft gray-blue for nighttime
glVertex2f(523 + shi, 787);    // Vertex 1 (top left)
glVertex2f(667 + shi, 787);    // Vertex 2 (upper left)
glVertex2f(667 + shi, 773);    // Vertex 3 (middle left)
glVertex2f(523 + shi, 773);    // Vertex 4 (bottom left)
glEnd();



train();
cargo();
cars();


//600px
// Background Polygon (nighttime color, dark brownish for ground)
glBegin(GL_POLYGON);
glColor3f(0.0, 0.2, 0.1);
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 500);    // Vertex 3 (middle left)
glVertex2f(0, 500);    // Vertex 4 (bottom left)
glEnd();

// Building (lower part, soft orange for dim lights)
glBegin(GL_POLYGON);
glColor3f(0.6, 0.3, 0.0);  // Muted, soft orange for dim lights at night
glVertex2f(20, 525);    // Vertex 1 (top left)
glVertex2f(150, 525);    // Vertex 2 (upper left)
glVertex2f(150, 520);    // Vertex 3 (middle left)
glVertex2f(20, 520);    // Vertex 4 (bottom left)
glEnd();

// Building (upper part, cool white for a lit window at night)
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 0.9);  // Cool white, softer light, like a lit building window
glVertex2f(20, 580);    // Vertex 1 (top left)
glVertex2f(150, 580);    // Vertex 2 (upper left)
glVertex2f(150, 525);    // Vertex 3 (middle left)
glVertex2f(20, 525);    // Vertex 4 (bottom left)
glEnd();

  for (int i = 0; i < 10; i++) {
        // Loop to create 20 columns
        for (int j = 0; j < 25; j++) {
            float x_offset = j * 5.0f; // Horizontal distance between rectangles
            float y_offset = i * 5.0f; // Vertical distance between rectangles

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0); // Black color for the rectangles

            // Define the four vertices of each rectangle
            glVertex2f(23 + x_offset, 578 - y_offset); // Vertex 1 (top left)
            glVertex2f(27 + x_offset, 578 - y_offset); // Vertex 2 (upper right)
            glVertex2f(27 + x_offset, 572 - y_offset); // Vertex 3 (bottom right)
            glVertex2f(23 + x_offset, 572 - y_offset); // Vertex 4 (bottom left)

            glEnd();
        }
    }



   for (int i = 0; i < 7; i++) {
        float x_offset = i * 15.0f;  // Horizontal distance between triangles

        // Draw the main triangle
        glBegin(GL_TRIANGLES);
        glColor3f(1.0, 1.0, 1.0); // White color for the triangle
        glVertex2f(20 + x_offset, 580);    // Vertex 1 (top left)
        glVertex2f(60 + x_offset, 580);    // Vertex 2 (top right)
        glVertex2f(40 + x_offset, 595);    // Vertex 3 (middle top)
        glEnd();

        // Decorative pattern inside each triangle (smaller triangle)
        glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 0.0); // Black color for the decoration

        glVertex2f(30 + x_offset, 580);    // Vertex 1 (top left of inner triangle)
        glVertex2f(50 + x_offset, 580);    // Vertex 2 (top right of inner triangle)
        glVertex2f(40 + x_offset, 590);    // Vertex 3 (middle of inner triangle)
        glEnd();
    }






// Building 2 (Nighttime color, dark green with subtle lighting)
glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.2);  // Darker green for a nighttime look
glVertex2f(160, 525);    // Vertex 1 (top left)
glVertex2f(280, 525);    // Vertex 2 (upper left)
glVertex2f(280, 605);    // Vertex 3 (middle left)
glVertex2f(160, 605);    // Vertex 4 (bottom left)
glEnd();

    // Loop to create multiple rectangles horizontally
    for (int i = 0; i < 6; i++) { // For 6 rectangles (you can increase the count)
        float y_offset = i * 18.0f;  // Vertical distance between rectangles

        // Change color for each rectangle (cycling between blue and orange)
        float red = (i % 2 == 0) ? 1.0f : 1.0f; // Keep red component for both blue and orange
        float green = (i % 2 == 0) ? 0.0f : 0.5f; // Blue (green = 0) and Orange (green = 0.5)
        float blue = (i % 2 == 0) ? 1.0f : 0.0f; // Blue (blue = 1) and Orange (blue = 0)

        // Draw the main rectangle
        glBegin(GL_POLYGON);
        glColor3f(red, green, blue); // Set the color dynamically for each rectangle

        // Define the four vertices of each rectangle
        glVertex2f(160 , 525 + y_offset);    // Vertex 1 (top left)
        glVertex2f(280 , 525 + y_offset);    // Vertex 2 (top right)
        glVertex2f(280 , 510 + y_offset);    // Vertex 3 (bottom right)
        glVertex2f(160 , 510 + y_offset);    // Vertex 4 (bottom left)

        glEnd();

        // Add a new color in the gap between rectangles (e.g., pink color)
        float gap_red = 1.0f;  // Set the red component for pink color
        float gap_green = 0.75f; // Set the green component for pink color
        float gap_blue = 0.8f;  // Set the blue component for pink color

        glBegin(GL_POLYGON);
        glColor3f(gap_red, gap_green, gap_blue); // Set the gap color to pink

        // Draw a smaller rectangle in the gap between each main rectangle
        glVertex2f(160 , 525 + y_offset - 9.0f);    // Top left of gap shape
        glVertex2f(280 , 525 + y_offset - 9.0f);    // Top right of gap shape
        glVertex2f(280 , 510 + y_offset + 9.0f);    // Bottom right of gap shape
        glVertex2f(160 , 510 + y_offset + 9.0f);    // Bottom left of gap shape

        glEnd();

        // Add a smaller shape (e.g., a smaller rectangle) inside the gap with cyan color
        float inner_red = 0.0f;  // No red for cyan
        float inner_green = 1.0f; // Full green for cyan
        float inner_blue = 1.0f;  // Full blue for cyan

        glBegin(GL_POLYGON);
        glColor3f(inner_red, inner_green, inner_blue); // Set the inner shape color to cyan

        // Draw a smaller rectangle inside the gap
        glVertex2f(160 + 30.0f, 525 + y_offset);    // Top left of inner shape
        glVertex2f(280 - 30.0f, 525 + y_offset);    // Top right of inner shape
        glVertex2f(280 - 30.0f, 510 + y_offset);    // Bottom right of inner shape
        glVertex2f(160 + 30.0f, 510 + y_offset);    // Bottom left of inner shape

        glEnd();
    }


    for (int i = 0; i < 10; i++) {  // Loop for 20 rows
    for (int j = 0; j < 6; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 193 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 610 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}









///building 2.2


   // Loop to draw 24 rows of polygons (vertically)
 for (int i = 0; i < 24; i++) {
    for (int j = 0; j < 30; j++) {
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 3;  // Horizontal spacing (30 columns)
        float y = 595 - i * 4;  // Vertical spacing (24 rows)

        // Choose a color based on the index
          if ((i + j) % 3 == 0) {
                glColor3f(1.0, 0.0, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(1.0, 1.0, 0.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 1.0, 0.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

        // Draw a polygon (triangle) at (x, y)
        glBegin(GL_POLYGON);
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 5, y);     // Vertex 2 (upper left)
        glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
        glEnd();
    }
}


    // Loop to draw another set of polygons with a different color pattern
    // Introduce a horizontal gap by adjusting the starting x position for the second set
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 20; j++) {
            // Calculate the x and y positions for each polygon
            float x = 350 + j * 3 + 4;  // Add a 4-unit horizontal gap (shifted by 4 units)
            float y = 595 - i * 4;  // Vertical spacing (24 rows)

            // Choose a color based on the index
            if ((i + j) % 3 == 0) {
                glColor3f(0.0, 0.5, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(0.0, 1.0, 1.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 0.0, 1.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

            // Draw a polygon (triangle) at (x, y)
            glBegin(GL_POLYGON);
            glVertex2f(x, y);         // Vertex 1 (top left)
            glVertex2f(x + 5, y);     // Vertex 2 (upper left)
            glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
            glEnd();
        }
    }


for (int i = 0; i < 8; i++) {  // Loop for 20 rows
    for (int j = 0; j < 13; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}
















// building 3
// Loop to draw the grid of hexagons

// Building/Polygon with a more subdued color for night
glBegin(GL_POLYGON);
glColor3f(0.1, 0.3, 0.4);  // Muted, darker blue-green for night
glVertex2f(420, 600);    // Vertex 1 (top left)
glVertex2f(565, 600);    // Vertex 2 (upper left)
glVertex2f(565, 500);    // Vertex 3 (bottom right)
glVertex2f(420, 500);    // Vertex 4 (bottom left)
glEnd();

for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each hexagon
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each hexagon to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the hexagon at the calculated position
        glBegin(GL_POLYGON);

        // Define the six vertices for the hexagon
        glVertex2f(x, y);           // Vertex 1 (top left)
        glVertex2f(x + 1.5, y + 1.5); // Vertex 2 (top middle right)
        glVertex2f(x + 3.5, y + 1.5); // Vertex 3 (top right)
        glVertex2f(x + 5, y);       // Vertex 4 (bottom right)
        glVertex2f(x + 3.5, y - 1.5); // Vertex 5 (bottom middle left)
        glVertex2f(x + 1.5, y - 1.5); // Vertex 6 (bottom left)

        glEnd();
    }
}

// Loop to draw the grid of triangles
for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each triangle
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each triangle to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the triangle at the calculated position
        glBegin(GL_POLYGON);

        // Define the three vertices for the triangle
        glVertex2f(x, y);            // Vertex 1 (top)
        glVertex2f(x + 6, y + 5);    // Vertex 2 (bottom right)
        glVertex2f(x + 12, y);       // Vertex 3 (bottom left)

        glEnd();
    }
}


for (int i = 0; i < 9; i++) {  // Loop for 20 rows
    for (int j = 0; j < 14; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 425 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}





//deyal
// Building/Polygon with a more subdued color for night
glBegin(GL_POLYGON);
glColor3f(0.05, 0.2, 0.3);  // Darker blue-green for nighttime atmosphere
glVertex2f(570, 600);    // Vertex 1 (top left)
glVertex2f(700, 600);    // Vertex 2 (upper left)
glVertex2f(700, 500);    // Vertex 3 (bottom right)
glVertex2f(570, 500);    // Vertex 4 (bottom left)
glEnd();


// Loop to draw the grid of polygons
for (int i = 0; i < 9; i++) {         // Vertical loop (9 rows)
    for (int j = 0; j < 10; j++) {    // Horizontal loop (10 columns)
        // Calculate the x and y positions for each polygon
        float xOffset = j * 12;       // Horizontal spacing (12 units)
        float yOffset = i * 12;       // Vertical spacing (12 units) - Increased gap

        // Adjust the x and y positions for each polygon to form the grid
        float x = 570 + xOffset;      // Horizontal starting position
        float y = 600 - yOffset;      // Vertical starting position

        // Choose a color based on the index (using a new pattern with 4 colors)
        if ((i + j) % 4 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 4 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else if ((i + j) % 4 == 2) {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for another set
        } else {
            glColor3f(0.9, 0.9, 0.0);  // Yellow color for the new set
        }

        // Draw the polygon (rectangle) at the calculated position
        glBegin(GL_POLYGON);

        // Define the four vertices for the rectangle
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 20, y);    // Vertex 2 (upper right)
        glVertex2f(x + 20, y - 5); // Vertex 3 (bottom right)
        glVertex2f(x, y - 5);     // Vertex 4 (bottom left)

        glEnd();
    }
}

drawCircle(600,570, 15);
drawCircle4(600,570, 12);

drawCircle3(635,570, 6.5);
drawCircle(635,570, 7.5);
drawCircle4(635,570, 4.5);




drawCircle(670,570, 15);
drawCircle4(670,570, 12);

drawCircle(600,530, 15);
drawCircle4(600,530, 12);
drawCircle3(635,530, 6.5);
drawCircle(635,530, 7.5);

drawCircle4(635,530, 4.5);



drawCircle(670,530, 15);
drawCircle4(670,530, 12);

//building 4





// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 3; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 10;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 525 - yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
     glColor3f(0.69, 0.729, 0.035);  // Green color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);    // Vertex 1 (top left)
    glVertex2f(820, y);    // Vertex 2 (upper right)
    glVertex2f(820, y + 50); // Vertex 3 (bottom right)
    glVertex2f(710, y + 50);  // Vertex 4 (bottom left)

    glEnd();
}



glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 505);    // Vertex 1 (top left)
glVertex2f(820, 505);    // Vertex 2 (upper left)
glVertex2f(820, 500);
glVertex2f(710, 500);

glEnd();

// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 4; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 20;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 505 + yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);        // Vertex 1 (top left)
    glVertex2f(820, y);        // Vertex 2 (upper right)
    glVertex2f(820, y - 5);    // Vertex 3 (bottom right)
    glVertex2f(710, y - 5);    // Vertex 4 (bottom left)

    glEnd();
}

// Windows/Building Lights (Nighttime colors)

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Very dark color (almost black) for the first window
glVertex2f(770, 505);    // Vertex 1 (top left)
glVertex2f(772, 505);    // Vertex 2 (upper left)
glVertex2f(772, 574);
glVertex2f(770, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Same dark color for other windows
glVertex2f(790, 505);
glVertex2f(792, 505);
glVertex2f(792, 574);
glVertex2f(790, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(818, 505);
glVertex2f(820, 505);
glVertex2f(820, 574);
glVertex2f(818, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(750, 505);
glVertex2f(752, 505);
glVertex2f(752, 574);
glVertex2f(750, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(730, 505);
glVertex2f(732, 505);
glVertex2f(732, 574);
glVertex2f(730, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(710, 505);
glVertex2f(712, 505);
glVertex2f(712, 574);
glVertex2f(710, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for other window
glVertex2f(810, 505);
glVertex2f(812, 505);
glVertex2f(812, 574);
glVertex2f(810, 574);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.1);  // Dark color for window base
glVertex2f(710, 574);
glVertex2f(820, 574);
glVertex2f(820, 572);
glVertex2f(710, 572);
glEnd();


// Building Cathedral (Nighttime version)

// Base
glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.3);  // Darker blue for a nighttime feel
glVertex2f(825, 520);
glVertex2f(980, 520);
glVertex2f(980, 500);
glVertex2f(825, 500);
glEnd();

// Roof
glBegin(GL_POLYGON);
glColor3f(0.4, 0.1, 0.1);  // Dark red for the roof at night
glVertex2f(835, 540);
glVertex2f(970, 540);
glVertex2f(970, 520);
glVertex2f(835, 520);
glEnd();

// Middle Section
glBegin(GL_POLYGON);
glColor3f(0.1, 0.5, 0.1);  // Darker green for the middle section
glVertex2f(845, 560);
glVertex2f(960, 560);
glVertex2f(960, 540);
glVertex2f(845, 540);
glEnd();

// Upper Section
glBegin(GL_POLYGON);
glColor3f(0.1, 0.1, 0.3);  // Deep blue for the upper section
glVertex2f(850, 580);
glVertex2f(955, 580);
glVertex2f(955, 560);
glVertex2f(850, 560);
glEnd();

// Window section
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.1);  // Dim yellow for windows (nighttime lights)
glVertex2f(855, 590);
glVertex2f(950, 590);
glVertex2f(950, 580);
glVertex2f(855, 580);
glEnd();

// Additional Sections with darker colors

glBegin(GL_POLYGON);
glColor3f(0.3, 0.1, 0.5);  // Purple for the section at the top
glVertex2f(865, 600);
glVertex2f(940, 600);
glVertex2f(940, 590);
glVertex2f(865, 590);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1, 0.7, 0.7);  // Cyan color for upper windows
glVertex2f(875, 610);
glVertex2f(930, 610);
glVertex2f(930, 600);
glVertex2f(875, 600);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.6, 0.3, 0.1);  // Dim orange for the top section
glVertex2f(885, 620);
glVertex2f(920, 620);
glVertex2f(920, 610);
glVertex2f(885, 610);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3);  // Gray for the topmost section
glVertex2f(895, 630);
glVertex2f(910, 630);
glVertex2f(910, 620);
glVertex2f(895, 620);
glEnd();


// road


glBegin(GL_POLYGON);
glColor3f(0.25, 0.25, 0.25); // Grey color for the ninth polygon
glVertex2f(0, 470);    // Vertex 1 (top left)
glVertex2f(1000, 470);    // Vertex 2 (upper left)
glVertex2f(1000, 500);
glVertex2f(0, 500);
glEnd();




// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 485);   // Vertex 1 (top left)
    glVertex2f(x + 6, 485);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 489);  // Vertex 3 (bottom right)
    glVertex2f(x, 489);   // Vertex 4 (bottom left)

    glEnd();
}

cars1();


//road divder
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0); // Grey color for the ninth polygon
glVertex2f(0, 460);    // Vertex 1 (top left)
glVertex2f(1000, 460);    // Vertex 2 (upper left)
glVertex2f(1000, 470);
glVertex2f(0, 470);
glEnd();

//road
glBegin(GL_POLYGON);
glColor3f(0.25, 0.25, 0.25); // Grey color for the ninth polygon
glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 460);
glVertex2f(0, 460);
glEnd();

// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 445);   // Vertex 1 (top left)
    glVertex2f(x + 6, 445);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 449);  // Vertex 3 (bottom right)
    glVertex2f(x, 449);   // Vertex 4 (bottom left)

    glEnd();
}

cargo1();

//road line line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();


// tree

glBegin(GL_POLYGON);
glColor3f(0.2, 0.3, 0.2); // Dark green color

glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 330);    // Vertex 3 (bottom right)
glVertex2f(0, 330);    // Vertex 4 (bottom left)
glEnd();




for (int i = 0; i < 5; i++) {
    int translateX = -120 * i;  // Translation on x-axis

    // First set of circles
    circle(7, 14, 330 + translateX, 350);
    circle(7, 14, 320 + translateX, 360);
    circle(7, 14, 330 + translateX, 370);
    circle(7, 14, 340 + translateX, 360);

    // Second set of circles
    circle(7, 14, 370 + translateX, 350);
    circle(7, 14, 360 + translateX, 360);
    circle(7, 14, 370 + translateX, 370);
    circle(7, 14, 380 + translateX, 360);

    // Third set of circles
    circle(7, 14, 410 + translateX, 350);
    circle(7, 14, 400 + translateX, 360);
    circle(7, 14, 410 + translateX, 370);
    circle(7, 14, 420 + translateX, 360);

    // Fourth set of circles
    circle(7, 14, 330 + 50 + translateX, 370 + 30);
    circle(7, 14, 320 + 50 + translateX, 380 + 30);
    circle(7, 14, 330 + 50 + translateX, 390 + 30);
    circle(7, 14, 340 + 50 + translateX, 380 + 30);

    // Fifth set of circles
    circle(7, 14, 370 + 50 + translateX, 370 + 30);
    circle(7, 14, 360 + 50 + translateX, 380 + 30);
    circle(7, 14, 370 + 50 + translateX, 390 + 30);
    circle(7, 14, 380 + 50 + translateX, 380 + 30);

    // Sixth set of circles
    circle(7, 14, 410 + 50 + translateX, 370 + 30);
    circle(7, 14, 400 + 50 + translateX, 380 + 30);
    circle(7, 14, 410 + 50 + translateX, 390 + 30);
    circle(7, 14, 420 + 50 + translateX, 380 + 30);
}












//tree1

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Grey color for the ninth polygon
glVertex2f(60, 380);    // Vertex 1 (top left)
glVertex2f(80, 380);    // Vertex 2 (upper left)
glVertex2f(80, 330);
glVertex2f(60, 330);
glEnd();

drawCircle3(60,380,10);

drawCircle3(60,390,10);
drawCircle3(60,390,10);
drawCircle3(50,400,10);
drawCircle3(60,410,10);
drawCircle3(70,410,10);
drawCircle3(80,410,10);
drawCircle3(80,400,10);
drawCircle3(90,390,10);
drawCircle3(50,390,10);
drawCircle3(70,380,10);
drawCircle3(80,380,10);

//tree2
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370, 330);
glVertex2f(160 + 370, 330);    // Vertex 4 (bottom left)
glEnd();
// Tree 1 - Trunk
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(60, 380);    // Vertex 1 (top left)
glVertex2f(80, 380);    // Vertex 2 (upper left)
glVertex2f(80, 330);    // Vertex 3 (bottom right)
glVertex2f(60, 330);    // Vertex 4 (bottom left)
glEnd();

// Tree 1 - Foliage (Multiple circles)
drawCircle3(60, 380, 10);
drawCircle3(60, 390, 10);
drawCircle3(60, 390, 10);
drawCircle3(50, 400, 10);
drawCircle3(60, 410, 10);
drawCircle3(70, 410, 10);
drawCircle3(80, 410, 10);
drawCircle3(80, 400, 10);
drawCircle3(90, 390, 10);
drawCircle3(50, 390, 10);
drawCircle3(70, 380, 10);
drawCircle3(80, 380, 10);

// Tree 2 - Trunk
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(160 + 370, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370, 330);    // Vertex 3 (bottom right)
glVertex2f(160 + 370, 330);    // Vertex 4 (bottom left)
glEnd();

// Tree 2 - Foliage (Multiple circles)
drawCircle3(160 + 370, 380, 10);
drawCircle3(160 + 370, 390, 10);
drawCircle3(160 + 370, 390, 10);
drawCircle3(150 + 370, 400, 10);
drawCircle3(160 + 370, 410, 10);
drawCircle3(170 + 370, 410, 10);
drawCircle3(180 + 370, 410, 10);
drawCircle3(180 + 370, 400, 10);
drawCircle3(190 + 370, 390, 10);
drawCircle3(150 + 370, 390, 10);
drawCircle3(170 + 370, 380, 10);
drawCircle3(180 + 370, 380, 10);

// Drawing circles with the x position shifted by +370
drawCircle5(160 + 370, 380, 10);  // Translated x position by +370

drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 400, 10);  // Translated x position by +370
drawCircle5(160 + 370, 410, 10);  // Translated x position by +370
drawCircle5(170 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 400, 10);  // Translated x position by +370
drawCircle5(190 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 390, 10);  // Translated x position by +370
drawCircle5(170 + 370, 380, 10);  // Translated x position by +370
drawCircle5(180 + 370, 380, 10);  // Translated x position by +370

//tree3

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(250, 380);    // Vertex 1 (top left)
glVertex2f(270, 380);    // Vertex 2 (upper left)
glVertex2f(270, 330);
glVertex2f(250, 330);
glEnd();

drawCircle5(260, 370, 5);  // Translated x position by +100
drawCircle5(255, 390, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle3(275, 410, 10);  // Translated x position by +100
drawCircle3(265, 410, 10);  // Translated x position by +100
drawCircle3(257, 410, 10);  // Translated x position by +100
drawCircle3(247, 410, 10);  // Translated x position by +100
drawCircle3(265, 370, 10);  // Translated x position by +100
drawCircle3(257, 370, 10);  // Translated x position by +100
drawCircle3(247, 370, 10);  // Translated x position by +100
drawCircle3(275, 375, 10);  // Translated x position by +100
drawCircle5(260, 370, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle5(260, 390, 10);  // Translated x position by +100


//tree




//backgroun
// First set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 + 70 - 200, 350 + 30); // Translated circle

circle(20, 10, 790 + 80 - 200, 360 + 30);
circle(20, 10, 805 + 80 - 200, 355 + 30);
circle(20, 10, 810 + 80 - 200, 365 + 30);
circle(20, 10, 805 + 80 - 200, 375 + 30);
circle(20, 10, 815 + 80 - 200, 365 + 30);
circle(20, 10, 820 + 80 - 200, 360 + 30);
circle(20, 10, 820 + 80 - 200, 345 + 30);
circle(20, 10, 790 + 80 - 200, 345 + 30);
circle(20, 10, 805 + 80 - 200, 340 + 30); // Translated last circle

// Second set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 - 200, 350);

circle(20, 10, 790 - 200, 360);
circle(20, 10, 805 - 200, 355);
circle(20, 10, 810 - 200, 365);
circle(20, 10, 805 - 200, 375);
circle(20, 10, 815 - 200, 365);
circle(20, 10, 820 - 200, 360);
circle(20, 10, 820 - 200, 345);
circle(20, 10, 790 - 200, 345);
circle(20, 10, 805 - 200, 340);






  circle(7, 14, 330, 350);
circle(7, 14, 320, 360);
circle(7, 14, 330, 370);
circle(7, 14, 340, 360);


circle(7, 14, 370, 350);
circle(7, 14, 360, 360);
circle(7, 14, 370, 370);
circle(7, 14, 380, 360);


  circle(7, 14, 410, 350);
circle(7, 14, 400, 360);
circle(7, 14, 410, 370);
circle(7, 14, 420, 360);



circle(7, 14, 330 + 50, 370 + 30);
circle(7, 14, 320 + 50, 380 + 30);
circle(7, 14, 330 + 50, 390 + 30);
circle(7, 14, 340 + 50, 380 + 30);


circle(7, 14, 370 + 50, 370 + 30);
circle(7, 14, 360 + 50, 380 + 30);
circle(7, 14, 370 + 50, 390 + 30);
circle(7, 14, 380 + 50, 380 + 30);


circle(7, 14, 410 + 50, 370 + 30);
circle(7, 14, 400 + 50, 380 + 30);
circle(7, 14, 410 + 50, 390 + 30);
circle(7, 14, 420 + 50, 380 + 30);


glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(490, 330);
glVertex2f(430, 330);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0, 0.0, 1.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(460, 380);
glEnd();

 for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            float translateX = -10.0f * i;  // Translate horizontally by 50 units
            float translateY = -10.0f * j;  // Translate vertically by 50 units

            glPushMatrix();  // Save the current transformation matrix
            glTranslatef(translateX, translateY, 0.0f);  // Apply translation

            // Begin drawing the polygon
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);  // Grey color for the polygon
            glVertex2f(432+50, 360+5);    // Vertex 1 (top left)
            glVertex2f(437+50, 360+5);    // Vertex 2 (upper left)
            glVertex2f(437+50, 365+5);
            glVertex2f(432+50, 365+5);    // Vertex 4 (bottom left)
            glEnd();

            glPopMatrix();  // Restore the previous transformation matrix
        }
    }



    //tree paitentence


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370+120, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370+120, 330);
glVertex2f(160 + 370+120, 330);    // Vertex 4 (bottom left)
glEnd();

    drawCircle5(630, 390, 7);  // Translated x position by +370
 drawCircle5(650, 400, 7);  // Translated x position by +370
drawCircle5(640, 410, 7);  // Translated x position by +370
drawCircle5(660, 420, 7);  // Translated x position by +370

drawCircle5(670, 410, 7);  // Translated x position by +370
drawCircle5(680, 400, 7);  // Translated x position by +370
drawCircle5(685, 390, 7);  // Translated x position by +370

drawCircle5(675, 395, 7);  // Translated x position by +370
drawCircle5(650, 380, 7);  // Translated x position by +370
drawCircle5(660, 380, 7);  // Translated x position by +370



//tree traingle


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120+90, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370+120+90, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370+120+90, 330);
glVertex2f(160 + 370+120+90, 330);    // Vertex 4 (bottom left)
glEnd();


 for (int i = 0; i < 4; i++) {
        float translateY = 20.0f * i;  // Translate vertically by 40 units (you can adjust this value)

        glPushMatrix();  // Save the current transformation matrix
        glTranslatef(0.0f, translateY, 0.0f);  // Apply vertical translation

        // Draw the polygon
        glBegin(GL_POLYGON);
         glColor3ub(34, 139, 34); // Color for the polygon
        glVertex2f(690 + 30, 350);    // Vertex 1 (top left)
        glVertex2f(740 + 30, 350);    // Vertex 2 (upper left)
        glVertex2f(715 + 30, 390);    // Vertex 3 (bottom center)
        glEnd();

        glPopMatrix();  // Restore the previous transformation matrix
    }



circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80, 360 + 30);
circle(20, 10, 805 + 80, 355 + 30);
circle(20, 10, 810 + 80, 365 + 30);
circle(20, 10, 805 + 80, 375 + 30);
circle(20, 10, 815 + 80, 365 + 30);
circle(20, 10, 820 + 80, 360 + 30);
circle(20, 10, 820 + 80, 345 + 30);
circle(20, 10, 790 + 80, 345 + 30);
circle(20, 10, 805 + 80, 340 + 30); // Translated last circle






circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80+70, 360 + 10);
circle(20, 10, 805 + 80+70, 355 + 10);
circle(20, 10, 810 + 80+70, 365 + 10);
circle(20, 10, 805 + 80+70, 375 + 10);
circle(20, 10, 815 + 80+70, 365 + 10);
circle(20, 10, 820 + 80+70, 360 + 10);
circle(20, 10, 820 + 80+70, 345 + 10);
circle(20, 10, 790 + 80+70, 345 + 10);
circle(20, 10, 805 + 80+70, 340 + 10); // Translated last circle



    circle(20,10,800,350);

    circle(20,10,790,360);
 circle(20,10,805,355);
 circle(20,10,810,365);
 circle(20,10,805,375);
 circle(20,10,815,365);
 circle(20,10,820,360);
  circle(20,10,820,345);
   circle(20,10,790,345);
    circle(20,10,805,340);





glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370 + 120 + 90 + 200, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370 + 120 + 90 + 200, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370 + 120 + 90 + 200, 330);
glVertex2f(160 + 370 + 120 + 90 + 200, 330);    // Vertex 4 (bottom left)
glEnd();

glPushMatrix();  // Save the current transformation matrix
//glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon (green)
glVertex2f(690 + 30, 350);    // Vertex 1 (top left)
glVertex2f(740 + 30, 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30, 390);    // Vertex 3 (bottom center)
glEnd();


glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix




//last traingle tree

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix







//tree last er agehr ta

    //tree paitentence

// Draw the tree trunk (rectangle)
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Brown color for the trunk
glVertex2f(160 + 35 + 370 + 290, 380);    // Top left
glVertex2f(180 + 35 + 370 + 290, 380);    // Top right
glVertex2f(180 + 35 + 370 + 290, 330);    // Bottom right
glVertex2f(160 + 35 + 370 + 290, 330);    // Bottom left
glEnd();


    drawCircle5(640 +200, 390, 7);  // Translated x position by +370
 drawCircle5(650+200, 400, 7);  // Translated x position by +370
drawCircle5(645+200, 410, 7);  // Translated x position by +370
drawCircle5(665+200, 420, 7);  // Translated x position by +370

drawCircle5(675+200, 410, 7);  // Translated x position by +370
drawCircle5(685+200, 400, 7);  // Translated x position by +370
drawCircle5(685+200, 390, 7);  // Translated x position by +370

drawCircle5(685+200, 395, 7);  // Translated x position by +370
drawCircle5(660+200, 380, 7);  // Translated x position by +370
drawCircle5(670+200, 380, 7);  // Translated x position by +370
drawCircle5(665+200, 430, 7);  // Translated x position by +370

//tree adjustments
drawCircle5(665+200+80, 380,10);  // Translated x position by +370
drawCircle5(665+200+80, 390,10);  // Translated x position by +370
drawCircle5(665+200+80, 400,10);  // Translated x position by +370
//circle(30,20,665+200, 390);  // Translated x position by +370
drawCircle5(665+200, 370, 7);  // Translated x position by +370
drawCircle5(665-150, 370, 7);  // Translated x position by +370
drawCircle5(665-100, 370, 7);  // Translated x position by +370







//village


glBegin(GL_POLYGON);
glColor3f(0.49, 0.431, 0.088); // Brown color for the shape
glVertex2f(0, 330);    // Vertex 1 (top left)
glVertex2f(1000, 330); // Vertex 2 (top right)
glVertex2f(1000, 230); // Vertex 3 (bottom right)
glVertex2f(0, 230);    // Vertex 4 (bottom left)
glEnd();








    glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(260,320);    // Vertex 2 (upper left)
glVertex2f(280,280);
glVertex2f(100,280);
glEnd();



//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();



    glBegin(GL_TRIANGLES);
glColor3f(0.337, 0.251, 0.89); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(30,280);    // Vertex 2 (upper left)
glVertex2f(100,280);
glEnd();


    glBegin(GL_POLYGON);
glColor3f(0.18, 0.125, 0.529); // Color for the polygon
glVertex2f(40,280);    // Vertex 1 (top left)
glVertex2f(95,280);    // Vertex 2 (upper left)
glVertex2f(95,240);
glVertex2f(40,240);
glEnd();

    glBegin(GL_POLYGON);
glColor3f(0.616, 0.573, 0.902); // Color for the polygon
glVertex2f(95,280);    // Vertex 1 (top left)
glVertex2f(95,240);    // Vertex 2 (upper left)
glVertex2f(270,240);
glVertex2f(270,280);
glEnd();




  glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0); // Color for the lines

    // Draw 20 vertical lines horizontally by adjusting the x-coordinate
    for (int i = 0; i < 35; i++) {
        float xOffset = i * 5.0; // Increase xOffset by 20 units for each line
        glVertex2f(100 + xOffset, 280);  // Start point of the line (shifted horizontally)
        glVertex2f(100 + xOffset, 240);  // End point of the line (shifted horizontally)
    }

    glEnd();




    glBegin(GL_POLYGON);
glColor3f(0.251, 0.694, 0.949); // Color for the polygon
glVertex2f(30,240);    // Vertex 1 (top left)
glVertex2f(280,240);    // Vertex 2 (upper left)
glVertex2f(280,230);
glVertex2f(30,230);
glEnd();



//house2

glPushMatrix();  // Save the current matrix state

glTranslatef(210.0f, 0.0f, 0.0f);  // Translate by 300 units along the x-axis

// Draw the base of the house (main rectangle)
glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the main structure
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(260, 240);   // Bottom-right corner
glVertex2f(75, 240);    // Bottom-left corner
glEnd();

// Draw the roof (triangle shape)
glBegin(GL_QUADS);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(85, 330);    // Left-top corner of the base
glVertex2f(250, 330);   // Right-top corner of the base
glVertex2f(260, 300); // Peak of the roof
glVertex2f(75, 300); // Peak of the roof
glEnd();

// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 280);  // Top-right of the door
glVertex2f(140, 280);  // Top-left of the door
glEnd();

// Draw a window on the left side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(90, 270);  // Bottom-left of the window
glVertex2f(130, 270); // Bottom-right of the window
glVertex2f(130, 290); // Top-right of the window
glVertex2f(90, 290);  // Top-left of the window
glEnd();

// Draw a window on the right side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(200, 270);  // Bottom-left of the window
glVertex2f(240, 270);  // Bottom-right of the window
glVertex2f(240, 290);  // Top-right of the window
glVertex2f(200, 290);  // Top-left of the window
glEnd();

// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();



// Draw a chimney (small rectangle on the roof)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Chimney color (gray)
glVertex2f(200, 310);    // Bottom-left of the chimney
glVertex2f(215, 310);    // Bottom-right of the chimney
glVertex2f(215, 340);    // Top-right of the chimney
glVertex2f(200, 340);    // Top-left of the chimney
glEnd();




glPopMatrix();  // Restore the previous matrix state
 // Restore the previous matrix state



//house3

 glPushMatrix();  // Save the current matrix state

glTranslatef(410.0f, 0.0f, 0.0f);  // Translate the building along the x-axis

// Draw the main base of the house (trapezoid for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.5, 0.2); // Color for the main structure (greenish)
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner (more inward for a trapezoid shape)
glVertex2f(100, 240);   // Bottom-left corner (more inward for a trapezoid shape)
glEnd();

// Draw a second floor (smaller trapezoid above the main base)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for the second floor (gray)
glVertex2f(115, 280);    // Top-left corner
glVertex2f(245, 280);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner
glVertex2f(100, 240);   // Bottom-left corner
glEnd();

// Draw the roof (sloped roof, larger triangle for the top)
glBegin(GL_POLYGON);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(75, 300);    // Left-top corner of the base
glVertex2f(100, 240);   // Left-bottom corner of the base
glVertex2f(230, 240);   // Right-bottom corner of the base
glVertex2f(260, 300);   // Right-top corner of the base
glEnd();



// Draw a window on the left side (larger rectangle for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.631, 0.82); // Window color (light blue)
glVertex2f(90, 290);  // Bottom-left of the window
glVertex2f(240, 290); // Bottom-right of the window
glVertex2f(240, 270); // Top-right of the window
glVertex2f(90, 270);  // Top-left of the window
glEnd();






// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();




// Draw decorative side walls (for depth)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(75, 300);    // Left-top corner
glVertex2f(100, 240);   // Left-bottom corner
glVertex2f(100, 230);   // Left-bottom corner (lower)
glVertex2f(75, 230);    // Left-top corner (lower)
glEnd();




// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 260);  // Top-right of the door
glVertex2f(140, 260);  // Top-left of the door
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(260, 300);   // Right-top corner
glVertex2f(230, 240);   // Right-bottom corner
glVertex2f(230, 230);   // Right-bottom corner (lower)
glVertex2f(260, 230);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state



glBegin(GL_POLYGON);
glColor3f(0.0, 0.8, 0.0); // Color for side walls
glVertex2f(690, 320);   // Right-top corner
glVertex2f(810, 320);   // Right-bottom corner
glVertex2f(810, 240);   // Right-bottom corner (lower)
glVertex2f(690, 240);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state

circle2(20,10,750,280);
circle3(18,8,750,280);
circle3(18,8,750,280);

//football
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Color for side walls
glVertex2f(750, 320);   // Right-top corner
glVertex2f(750, 240);   // Right-bottom corner
glEnd();


// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685, 305+5);   // Right-top corner
glVertex2f(690, 285+5);   // Slanted point (above the lower part)
glVertex2f(690, 255+5);   // Lower slanted point
glVertex2f(685, 265+5);   // Bottom-right corner
glEnd();

// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690, 300);   // Right-top corner
glVertex2f(710, 300);   // Right-top corner
glVertex2f(710, 260);   // Right-bottom corner
glVertex2f(690, 260);   // Left-bottom corner
glEnd();











// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 260);   // Right-bottom corner (translated)
glVertex2f(690 + 100, 260);   // Left-bottom corner (translated)
glEnd();

// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685 + 100+20, 305 + 5);   // Right-top corner (translated)
glVertex2f(690 + 100+20, 285 + 5);   // Slanted point (above the lower part, translated)
glVertex2f(690 + 100+20, 255 + 5);   // Lower slanted point (translated)
glVertex2f(685 + 100+20, 265 + 5);   // Bottom-right corner (translated)
glEnd();

//tree
circle4(10,20,830,290);
circle4(10,20,830,290);
circle4(10,20,845,290);
circle4(10,20,860,290);
circle4(10,20,875,290);

circle4(10,20,845,300);
circle4(10,20,860,300);


// Draw circles horizontally
for (int i = 0; i < 5; i++) {
    circle4(10, 20, 830 + (i * 15), 290-40);  // Change x by 15 for each iteration, keep y constant at 290
}

// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 10)-40);  // Change y by 10 for each iteration, keep x constant at 845
}



// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 20)-40);  // Change y by 10 for each iteration, keep x constant at 845
}


circle4(15,30,920,290);
circle4(10,20,920,290);
circle4(12,40,935,290);
circle4(8,35,950,290);
circle4(15,40,965,290);

circle4(10,20,935,300);
circle4(10,20,950,300);


circle4(15,15,920,250);
circle4(10,20,920,250);
circle4(12,40,935,250);
circle4(8,35,950,250);
circle4(9,20,965,250);

circle4(10,7,935,260);
circle4(10,5,950,260);


//flower
      // Draw the first polygon (yellow side wall)
     glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0);  // Dark amber (night-like color)
    glVertex2f(0 , 230);     // Right-top corner
    glVertex2f(1000 , 230);  // Slanted point (above the lower part)
    glVertex2f(1000 , 200);  // Lower slanted point
    glVertex2f(0 , 200);     // Bottom-right corner
glEnd();



//230-200

   for (int i = 0; i < 32; i++) {
        float xOffset = i * 30.0f;  // Shift the polygons and circles horizontally by 55 units



        // Draw the second polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(30 + xOffset, 210);   // Right-top corner
        glVertex2f(32 + xOffset, 212);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the third polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(40 + xOffset, 216);   // Right-top corner
        glVertex2f(42 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the fourth polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(50 + xOffset, 216);   // Right-top corner
        glVertex2f(52 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the circles with different colors
        randomColor();  // Assign a random color for the first circle
        drawCircle1(31 + xOffset, 211, 2.5);

        randomColor();  // Assign a random color for the second circle
        drawCircle1(41 + xOffset, 215, 2.5);

        randomColor();  // Assign a random color for the third circle
        drawCircle1(51 + xOffset, 215, 2.5);
    }



        // First polygon (Blue)
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 1.0);  // Blue color
glVertex2f(15, 215);   // Right-top corner
glVertex2f(17, 217);   // Slanted point
glVertex2f(17, 200);   // Lower slanted point
glVertex2f(15, 200);   // Bottom-right corner
glEnd();

// Second polygon (Red)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.0, 0.0);  // Red color
glVertex2f(13, 222);   // Right-top corner
glVertex2f(19, 222);   // Slanted point
glVertex2f(19, 217);   // Lower slanted point
glVertex2f(13, 217);   // Bottom-right corner
glEnd();







         // Draw the polygons horizontally with a loop
    for (int i = 0; i < 32; i++) {  // 10 instances, change as needed
        float xOffset = i * 60.0f;  // Horizontal offset for each polygon

        // Draw the first polygon with a random color
        randomColor();  // Assign a random color for the polygon
        glBegin(GL_POLYGON);
        glVertex2f(15 + xOffset, 715);   // Right-top corner
        glVertex2f(17 + xOffset, 717);   // Slanted point
        glVertex2f(17 + xOffset, 700);   // Lower slanted point
        glVertex2f(15 + xOffset, 700);   // Bottom-right corner
        glEnd();

        // Draw the second polygon with a random color
        randomColor();  // Assign a random color for the second polygon
        glBegin(GL_POLYGON);
        glVertex2f(13 + xOffset, 722);   // Right-top corner
        glVertex2f(19 + xOffset, 722);   // Slanted point
        glVertex2f(19 + xOffset, 717);   // Lower slanted point
        glVertex2f(13 + xOffset, 717);   // Bottom-right corner
  glEnd();


    }




//0-100 dhankhet
glBegin(GL_POLYGON);
   glColor3f(0, 0.5, 0);  // Deep green color

  // Green color
    glVertex2f(0, 0);        // Bottom-left corner
    glVertex2f(0, 100);      // Top-left corner
    glVertex2f(1000, 100);   // Top-right corner
    glVertex2f(1000, 0);     // Bottom-right corner
glEnd();

        //dhan
 for (int i = 0; i < 100; i++) {
    float offsetX = i * 80.0f;  // Increment the x-offset to move along the x-axis

    glBegin(GL_POLYGON);
        glColor3f(0.722, 0.408, 0.051);  // Yellow color
        glVertex2f(0 + offsetX, 100);   // Right-top corner, shifted by offsetX
        glVertex2f(5 + offsetX, 100);   // Slanted point (above the lower part), shifted by offsetX
        glVertex2f(45 + offsetX, 0);   // Lower slanted point, shifted by offsetX
        glVertex2f(40 + offsetX, 0);   // Bottom-right corner, shifted by offsetX
    glEnd();
}







for (int j = 0; j < 8; j++) {  // Loop to draw 5 times along the y-axis
    float offsetY = j * -15.0f;  // Increment the y-offset for each iteration

    for (int i = 0; i < 100; i++) {
        float offsetX = i * 15.0f; // Increment the x-offset to move along the x-axis

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(1 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(5 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();
    }
}


//manush
glPopMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(40.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(140.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(90.0f, 40.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();



//traccter 1
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+s , 70);   // Right-top corner
        glVertex2f(30+s , 70);   // Slanted point (above the lower part)
        glVertex2f(30+s , 50);   // Lower slanted point
        glVertex2f(20+s , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+s , 68);   // Right-top corner
        glVertex2f(28+s , 68);   // Slanted point (above the lower part)
        glVertex2f(28+s , 52);   // Lower slanted point
        glVertex2f(22+s , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);  // Yellow color
        glVertex2f(10+s , 50);   // Right-top corner
        glVertex2f(50+s , 50);   // Slanted point (above the lower part)
        glVertex2f(50+s , 20);   // Lower slanted point
        glVertex2f(10+s , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+s,20,8);
drawCircle2(21+s,20,5);


drawCircle(41+s,20,8);
drawCircle2(41+s,20,5);




//traccter 2
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+400+ok , 70);   // Right-top corner
        glVertex2f(30+400+ok , 70);   // Slanted point (above the lower part)
        glVertex2f(30+400+ok , 50);   // Lower slanted point
        glVertex2f(20+400+ok , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+400+ok , 68);   // Right-top corner
        glVertex2f(28+400+ok , 68);   // Slanted point (above the lower part)
        glVertex2f(28+400+ok , 52);   // Lower slanted point
        glVertex2f(22+400+ok , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(0.7, 0.5, 0.5);  // Yellow color
        glVertex2f(10+400+ok , 50);   // Right-top corner
        glVertex2f(50+400+ok , 50);   // Slanted point (above the lower part)
        glVertex2f(50+400+ok , 20);   // Lower slanted point
        glVertex2f(10+400+ok , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+400+ok,20,8);
drawCircle2(21+400+ok,20,5);


drawCircle(41+400+ok,20,8);
drawCircle2(41+400+ok,20,5);














//tracker2



 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+10+600+si , 70);   // Right-top corner
        glVertex2f(30+10+600+si , 70);   // Slanted point (above the lower part)
        glVertex2f(30+10+600+si , 50);   // Lower slanted point
        glVertex2f(20+10+600+si , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+10+600+si , 68);   // Right-top corner
        glVertex2f(28+10+600+si , 68);   // Slanted point (above the lower part)
        glVertex2f(28+10+600+si , 52);   // Lower slanted point
        glVertex2f(22+10+600+si , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 1.0);  // Yellow color
        glVertex2f(10+600+si , 50);   // Right-top corner
        glVertex2f(50+600+si , 50);   // Slanted point (above the lower part)
        glVertex2f(50+600+si , 20);   // Lower slanted point
        glVertex2f(10+600+si , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+600+si,20,8);
drawCircle2(21+600+si,20,5);


drawCircle(41+600+si,20,8);
drawCircle2(41+600+si,20,5);

//jomi line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 100);   // Right-top corner
        glVertex2f(1000 , 100);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 200);   // Right-top corner
        glVertex2f(1000 , 200);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 230);   // Right-top corner
        glVertex2f(1000 , 230);    // Bottom-right corner
        glEnd();







    //100-200

glBegin(GL_POLYGON);
    glColor3f(0.439, 0.431, 0.039);  // Deep blue/purple color to simulate night
    glVertex2f(0, 199);         // Top-left corner
    glVertex2f(1000, 199);      // Top-right corner
    glVertex2f(1000, 100);      // Bottom-right corner
    glVertex2f(0, 100);         // Bottom-left corner
glEnd();





        //zar
            for (int i = 0; i < 30; i++) {
        // Draw the first set of circles
        drawCirclez(10 + i * 54, 180, 5);
        drawCirclez(10 + i *54, 175, 5);

        // Draw the second set of circles
        drawCirclez(20 + i * 54, 180, 9);
        drawCirclez(20 + i * 54, 175, 9);

        // Draw the third set of circles
        drawCirclez(30 + i * 54, 180, 5);
        drawCirclez(30 + i * 54, 175, 5);

        // Draw the fourth set of circles
        drawCirclez(45 + i * 54, 180, 11);
        drawCirclez(45 + i * 54, 175, 11);

        // Draw the fifth set of circles
        drawCirclez(55 + i * 54, 180, 5);
        drawCirclez(55 + i * 54, 175, 5);
    }

//rasta
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(0, 173);  // Bottom-left corner of the left shutter
    glVertex2f(1000, 173);  // Bottom-right corner of the left shutter
    glVertex2f(1000, 153);  // Top-right corner of the left shutter
    glVertex2f(0, 153);  // Top-left corner of the left shutter
glEnd();


// Draw the first part of the house (Yellow)
glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);  // Yellow color
    glVertex2f(30, 175);   // Right-top corner
    glVertex2f(80, 175);   // Slanted point
    glVertex2f(85, 150);   // Lower slanted point
    glVertex2f(25, 150);   // Bottom-right corner
glEnd();

// Draw the second part of the house (Red)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color
    glVertex2f(30, 150);   // Right-top corner
    glVertex2f(80, 150);   // Slanted point
    glVertex2f(80, 120);   // Lower slanted point
    glVertex2f(30, 120);   // Bottom-right corner
glEnd();

// Draw the left window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(35, 145);   // Right-top corner
    glVertex2f(40, 145);   // Slanted point
    glVertex2f(40, 130);   // Lower slanted point
    glVertex2f(35, 130);   // Bottom-right corner
glEnd();

// Draw the right window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(70, 145);   // Right-top corner
    glVertex2f(75, 145);   // Slanted point
    glVertex2f(75, 130);   // Lower slanted point
    glVertex2f(70, 130);   // Bottom-right corner
glEnd();

// Draw the door (Brown)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45, 150);   // Right-top corner
    glVertex2f(65, 150);   // Top-right corner
    glVertex2f(65, 120);   // Bottom-right corner
    glVertex2f(45, 120);   // Bottom-left corner
glEnd();



// house 2
// Apply translation to shift the house by 130 units along the X-axis
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 80 units along the X-axis
glTranslatef(80.0f, 32.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);  // Orange color for the roof
    glVertex2f(40+20 , 200);   // Top peak of the roof
    glVertex2f(100+20 , 175);  // Bottom-right corner of the roof
    glVertex2f(0 , 175);       // Bottom-left corner of the roof
glEnd();

// Draw the body of the house (Rectangle, different proportions)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the body of the house
    glVertex2f(20 , 175);      // Bottom-left corner
    glVertex2f(90 , 175);      // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner (lower position)
    glVertex2f(20 , 100);      // Top-left corner
glEnd();

// Draw the left window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(30 , 150);      // Top-left corner
    glVertex2f(50 , 150);      // Top-right corner
    glVertex2f(50, 130);       // Bottom-right corner
    glVertex2f(30 , 130);      // Bottom-left corner
glEnd();

// Draw the right window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(60 , 150);      // Top-left corner
    glVertex2f(80 , 150);      // Top-right corner
    glVertex2f(80, 130);       // Bottom-right corner
    glVertex2f(60 , 130);      // Bottom-left corner
glEnd();

// Draw the door (Wider door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45 , 100+50);       // Top-left corner of the door
    glVertex2f(65 , 100+50);       // Top-right corner of the door
    glVertex2f(65, 50+50);         // Bottom-right corner of the door
    glVertex2f(45 , 50+50);        // Bottom-left corner of the door
glEnd();

// Restore the previous transformation matrix
glPopMatrix();





//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 160 units along the X-axis
glTranslatef(160.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new slanted roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color for the roof
    glVertex2f(20, 200);       // Left peak of the roof (Y=200)
    glVertex2f(100, 200);      // Right peak of the roof (Y=200)
    glVertex2f(90, 175);       // Right-bottom corner of the roof (Y=175)
    glVertex2f(30, 175);       // Left-bottom corner of the roof (Y=175)
glEnd();

// Draw the body of the house (Rectangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.9, 0.0);  // Green color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner (Y=175)
    glVertex2f(90, 175);       // Bottom-right corner (Y=175)
    glVertex2f(90, 100);       // Top-right corner (Y=100)
    glVertex2f(30, 100);       // Top-left corner (Y=100)
glEnd();

// Draw the left window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(40, 150);       // Top-left corner (Y=150)
    glVertex2f(60, 150);       // Top-right corner (Y=150)
    glVertex2f(60, 130);       // Bottom-right corner (Y=130)
    glVertex2f(40, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the right window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(60, 150);       // Top-left corner (Y=150)
    glVertex2f(80, 150);       // Top-right corner (Y=150)
    glVertex2f(80, 130);       // Bottom-right corner (Y=130)
    glVertex2f(60, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the door (Smaller door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.75, 0.0);  // Brown color for the door
    glVertex2f(50, 100+40+10);       // Top-left corner of the door (Y=100)
    glVertex2f(70, 100+40+10);       // Top-right corner of the door (Y=100)
    glVertex2f(70, 50+40+10);        // Bottom-right corner of the door (Y=50)
    glVertex2f(50, 50+40+10);        // Bottom-left corner of the door (Y=50)
glEnd();

// Draw a chimney (Small rectangle on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 210-14);       // Bottom-left corner of the chimney (Y=205)
    glVertex2f(70, 210-14);       // Bottom-right corner of the chimney (Y=205)
    glVertex2f(70, 225);       // Top-right corner of the chimney (Y=225)
    glVertex2f(60, 225);       // Top-left corner of the chimney (Y=225)
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 260 units along the X-axis
glTranslatef(230.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the curved roof (Bezier-style shape for smooth curves)
glBegin(GL_POLYGON);
    glColor3f(0.9, 0.0, 0.0);  // Deep Red color for the roof
    glVertex2f(20-8, 180);       // Left peak of the roof
    glVertex2f(40-8, 220);       // Left-top curve of the roof
    glVertex2f(100-8, 220);      // Right-top curve of the roof
    glVertex2f(120-8, 170);      // Right peak of the roof
    glVertex2f(100-8, 154);      // Right-bottom corner of the roof
    glVertex2f(40-8, 154);       // Left-bottom corner of the roof
glEnd();

// Draw the body of the house (Rounded corners for a soft look)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.9, 0.4);  // Light Yellow color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner
    glVertex2f(90, 175);       // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner
    glVertex2f(30, 100);       // Top-left corner
glEnd();

// Draw the left window (Rounded square for elegance)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Bright Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        // Adjusting left window position (radius = 15, x = 50, y = 140)
        glVertex2f(60 + cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();



// Draw the door (Rounded top with a handle)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.0);  // Brown color for the door
    glVertex2f(50, 100);       // Top-left corner of the door
    glVertex2f(70, 100);       // Top-right corner of the door
    glVertex2f(70, 125);        // Bottom-right corner of the door
    glVertex2f(50, 125);        // Bottom-left corner of the door
glEnd();

// Draw the door handle (Small circle on the right side of the door)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.0);  // Yellow color for the handle
    for (float angle = 0; angle <= 360; angle += 1.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(60 + cos(rad) * 2, 75 + sin(rad) * 2); // Circular handle
    }
glEnd();

// Draw a chimney (Decorative chimney on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 205);       // Bottom-left corner of the chimney
    glVertex2f(65, 205);       // Bottom-right corner of the chimney
    glVertex2f(65, 225);       // Top-right corner of the chimney
    glVertex2f(60, 225);       // Top-left corner of the chimney
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house

// Draw the chimney base (original brown)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(400 - 80, 190);  // Bottom-left corner of the chimney
    glVertex2f(550 - 80, 190);  // Bottom-right corner of the chimney
    glVertex2f(550 - 80, 100);  // Top-right corner of the chimney
    glVertex2f(400 - 80, 100);  // Top-left corner of the chimney
glEnd();

// Draw the chimney top (darker color for a more realistic look)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.9);  // Darker color for the top of the chimney
    glVertex2f(400 - 70, 180);  // Bottom-left corner of the chimney top
    glVertex2f(530 - 70, 180);  // Bottom-right corner of the chimney top
    glVertex2f(530 - 70, 110);  // Top-right corner of the chimney top
    glVertex2f(400 - 70, 110);  // Top-left corner of the chimney top
glEnd();

// --- Draw the Window with Shutters ---
// Left Window
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(435+ cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();

// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-25, 145-17);  // Bottom-left corner of the left shutter
    glVertex2f(465-25, 145-17);  // Bottom-right corner of the left shutter
    glVertex2f(465-25, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-25, 170-17);  // Top-left corner of the left shutter
glEnd();

// Right Window (same as left)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(355 + cos(rad) * 15, 140 + sin(rad) * 15); // Right window
    }
glEnd();

// Right window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(505-155, 145-17);  // Bottom-left corner of the right shutter
    glVertex2f(515-155, 145-17);  // Bottom-right corner of the right shutter
    glVertex2f(515-155, 170-17);  // Top-right corner of the right shutter
    glVertex2f(505-155, 170-17);  // Top-left corner of the right shutter
glEnd();
// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-75, 125-17);  // Bottom-left corner of the left shutter
    glVertex2f(485-75, 125-17);  // Bottom-right corner of the left shutter
    glVertex2f(485-75, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-75, 170-17);  // Top-left corner of the left shutter
glEnd();



//house

// Translate the entire house upwards or downwards along the Y-axis

    glTranslatef(-20.0f, -20.0f, 0.0f);  // Translate the house 50 units upwards along the Y-axis

    // Draw the base of the house (rectangle)
    glColor3f(0.8f, 0.4f, 0.2f);  // Brown color for the house
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the base of the house
    glVertex2f(500, 120);
    glVertex2f(600, 120);
    glVertex2f(600, 180);
    glVertex2f(500, 180);
    glEnd();  // End drawing the rectangle

    // Draw the roof of the house (triangle)
    glColor3f(0.6f, 0.2f, 0.2f);  // Dark red color for the roof
    glBegin(GL_TRIANGLES);  // Begin drawing the triangle for the roof
    glVertex2f(500, 180);  // Left corner of the roof
    glVertex2f(600, 180);  // Right corner of the roof
    glVertex2f(550, 210);  // Peak of the roof
    glEnd();  // End drawing the triangle

    // Draw the door (rectangle)
    glColor3f(0.5f, 0.3f, 0.1f);  // Dark brown color for the door
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the door
    glVertex2f(535, 120);
    glVertex2f(565, 120);
    glVertex2f(565, 150);
    glVertex2f(535, 150);
    glEnd();  // End drawing the rectangle

    // Draw windows (rectangles)
    glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for windows
    glBegin(GL_QUADS);  // Left window
    glVertex2f(510, 150);
    glVertex2f(530, 150);
    glVertex2f(530, 170);
    glVertex2f(510, 170);
    glEnd();  // End drawing the left window

    glBegin(GL_QUADS);  // Right window
    glVertex2f(570, 150);
    glVertex2f(590, 150);
    glVertex2f(590, 170);
    glVertex2f(570, 170);
    glEnd();  // End drawing the right window




    //well



       // Translate the entire well 100 units to the right (along the X-axis)
    glTranslatef(80.0f, 0.0f, 0.0f);  // Move the well to the right

    // Draw the base of the well (circle)
    glColor3f(0.5f, 0.5f, 0.5f);  // Gray color for the well's base
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the base
    glVertex2f(550, 120);  // Center of the circle (well's base)
    const int numi_segments = 100;  // Number of segments to make the circle smooth
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the circle's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the circle's edge
        glVertex2f(x + 550, y + 135);  // Vertex of the circle
    }
    glEnd();  // End drawing the base circle

    // Draw the walls of the well (rectangle)
    glColor3f(0.3f, 0.3f, 0.3f);  // Dark gray color for the well's walls
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the walls of the well
    glVertex2f(535, 130);  // Bottom-left corner
    glVertex2f(565, 130);  // Bottom-right corner
    glVertex2f(565, 160);  // Top-right corner
    glVertex2f(535, 160);  // Top-left corner
    glEnd();  // End drawing the rectangle

    // Draw the top of the well (roof, another circle)
    glColor3f(0.0f, 0.0f, 1.0f);  // Dark brown color for the roof
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
    glVertex2f(550, 170);  // Center of the roof circle
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the roof's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the roof's edge
        glVertex2f(x + 550, y + 160);  // Vertex of the roof circle
    }
    glEnd();  // End drawing the roof circle

//kher

glColor3f(0.0f, 0.0f, 1.0f);  // Blue color for the roof
glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
glVertex2f(620, 170);  // Center of the roof circle (original position)

// New translation value for the Y-axis (roof)
float translationY = 50.0f;  // Translate 50 units up (can change this value)
float additionalTranslationY = 5.0f;  // Additional 5 units translation
float newCenterY = 120 + translationY + additionalTranslationY;  // New Y position after translation

// New radius value for a wider roof
float raddius = 31.0f;  // Increase the radius to make the circle wider

// Loop to create the circle for the roof
const int numq_segments = 100;  // Number of segments for smoothness
for (int i = 0; i <= numq_segments; i++) {
    float theta = 2.0f * 3.1415926f * float(i) / float(numq_segments);  // Calculate angle
    float x = raddius * cosf(theta);  // X coordinate for the roof's edge
    float y = raddius * sinf(theta);  // Y coordinate for the roof's edge
    glVertex2f(x + 620, y + newCenterY);  // Vertex of the roof circle with translated Y-coordinate
}
glEnd();  // End drawing the roof circle

// Set the color for the house body (brown)
glColor3f(0.6f, 0.3f, 0.0f);  // Brown color for the house body
glBegin(GL_QUADS);  // Begin drawing the rectangle for the body

// The body of the house (a smaller rectangle)
float houseWidth = 60.0f;  // Further reduced width of the house
float houseHeight = 60.0f;  // Further reduced height of the house

// Bottom-left corner of the house body (relative to the roof center)
float houseBottomLeftX = 620 - houseWidth / 2;
float houseBottomLeftY = newCenterY - raddius - houseHeight + 50.0f;  // Translate 50 units up (adjusted Y position)

// Bottom-right corner of the house body
float houseBottomRightX = houseBottomLeftX + houseWidth;
float houseBottomRightY = houseBottomLeftY;

// Top-left corner of the house body
float houseTopLeftX = houseBottomLeftX;
float houseTopLeftY = houseBottomLeftY + houseHeight;

// Top-right corner of the house body
float houseTopRightX = houseBottomRightX;
float houseTopRightY = houseTopLeftY;

// Define the 4 corners of the rectangle (house body)
glVertex2f(houseBottomLeftX, houseBottomLeftY);  // Bottom-left
glVertex2f(houseBottomRightX, houseBottomRightY);  // Bottom-right
glVertex2f(houseTopRightX, houseTopRightY);  // Top-right
glVertex2f(houseTopLeftX, houseTopLeftY);  // Top-left

glEnd();  // End drawing the house body

// Draw the window (small rectangle)
glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for the window
glBegin(GL_QUADS);  // Begin drawing the window

float windowWidth = 15.0f;  // Reduced width of the window
float windowHeight = 15.0f;  // Reduced height of the window

// Bottom-left corner of the window
float windowBottomLeftX = 627 - houseWidth / 4;  // Position window to the left of center
float windowBottomLeftY = houseTopLeftY - 25.0f;  // Positioned a little below the roof

// Bottom-right corner of the window
float windowBottomRightX = windowBottomLeftX + windowWidth;
float windowBottomRightY = windowBottomLeftY;

// Top-left corner of the window
float windowTopLeftX = windowBottomLeftX;
float windowTopLeftY = windowBottomLeftY + windowHeight;

// Top-right corner of the window
float windowTopRightX = windowBottomRightX;
float windowTopRightY = windowTopLeftY;

// Define the 4 corners of the window rectangle
glVertex2f(windowBottomLeftX, windowBottomLeftY);  // Bottom-left
glVertex2f(windowBottomRightX, windowBottomRightY);  // Bottom-right
glVertex2f(windowTopRightX, windowTopRightY);  // Top-right
glVertex2f(windowTopLeftX, windowTopLeftY);  // Top-left

glEnd();  // End drawing the window

// Draw the door (larger rectangle)
glColor3f(0.4f, 0.2f, 0.0f);  // Dark brown color for the door
glBegin(GL_QUADS);  // Begin drawing the door

float doorWidth = 20.0f;  // Reduced width of the door
float doorHeight = 40.0f;  // Reduced height of the door

// Bottom-left corner of the door (centered at the bottom)
float doorBottomLeftX = 620 - doorWidth / 2;
float doorBottomLeftY = houseBottomLeftY;

// Bottom-right corner of the door
float doorBottomRightX = doorBottomLeftX + doorWidth;
float doorBottomRightY = doorBottomLeftY;

// Top-left corner of the door
float doorTopLeftX = doorBottomLeftX;
float doorTopLeftY = doorBottomLeftY + doorHeight;

// Top-right corner of the door
float doorTopRightX = doorBottomRightX;
float doorTopRightY = doorTopLeftY;

// Define the 4 corners of the door rectangle
glVertex2f(doorBottomLeftX, doorBottomLeftY);  // Bottom-left
glVertex2f(doorBottomRightX, doorBottomRightY);  // Bottom-right
glVertex2f(doorTopRightX, doorTopRightY);  // Top-right
glVertex2f(doorTopLeftX, doorTopLeftY);  // Top-left

glEnd();  // End drawing the door



float translationX = 100.0f;  // Translation value on the X-axis

glColor3f(0.5f, 0.0f, 0.9f);

// Begin drawing a rectangle (structure) using GL_QUADS
glBegin(GL_QUADS);
    // Define the four vertices of the rectangle, translating them by `translationX`
    glVertex2f(760.0f + translationX, 120.0f); // bottom-left corner
    glVertex2f(840.0f + translationX, 120.0f); // bottom-right corner
    glVertex2f(840.0f + translationX, 190.0f); // top-right corner
    glVertex2f(760.0f + translationX, 190.0f); // top-left corner
glEnd();

// Draw a complex structure

// Set color for the base rectangle (red)
glColor3f(1.0f, 0.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 130.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 130.0f); // bottom-right corner
    glVertex2f(830.0f + translationX, 170.0f); // top-right corner
    glVertex2f(770.0f + translationX, 170.0f); // top-left corner
glEnd();

// Set color for the top triangle (blue)
glColor3f(0.7f, 0.6f, 0.4f);
glBegin(GL_TRIANGLES);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // peak of the triangle
glEnd();

// Set color for another rectangle (green)
glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(800.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // top-right corner
    glVertex2f(770.0f + translationX, 200.0f); // top-left corner
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(160+740, 130);  // Bottom-left of the door
glVertex2f(140+740, 130);  // Bottom-right of the door
glVertex2f(140+740, 170);  // Top-right of the door
glVertex2f(160+740, 170);  // Top-left of the door
glEnd();

//cricket
drawCircle7(755,150,15);
drawCircle7(730,150,15);
drawCircle7(775,150,15);
drawCircle7(710,150,15);
drawCircle7(795,150,15);
drawCircle7(805,150,15);


drawCircle5(755,150,14);
drawCircle5(730,150,14);
drawCircle5(775,150,14);
drawCircle5(710,150,14);
drawCircle5(795,150,14);
drawCircle5(805,150,14);
glColor3f(1.0f, 1.0f, 0.0f); // Color the polygon yellow (you can change this)
glBegin(GL_QUADS);

// Define the four vertices of the polygon (you can adjust the coordinates to fit your design)
glVertex2f(720.0f, 140.0f); // bottom-left corner
glVertex2f(785.0f, 140.0f); // bottom-right corner
glVertex2f(785.0f, 160.0f); // top-right corner
glVertex2f(720.0f, 160.0f); // top-left corner

glEnd();




bird();
bird1();

l();








    glutSwapBuffers();


}






void drawScene() {

    // Print 'd' for day
    std::cout << "a for program termination" << std::endl;

    std::cout << "d for day" << std::endl;
        std::cout << "n for night" << std::endl;

    std::cout << "1 for plane" << std::endl;
std::cout << "2 for red ship" << std::endl;
std::cout << "3 for blue ship" << std::endl;
std::cout << "4 for small ship" << std::endl;
std::cout << "6 for rocket launch" << std::endl;
std::cout << "5 for rocket set back" << std::endl;
    std::cout << "w for day raining" << std::endl;
     std::cout << "i for night raining" << std::endl;
      std::cout << "u for night show" << std::endl;
           std::cout << "j for day snow" << std::endl;
    // Print name and ID for day
    std::cout << "Jafor Sadak: 212-15-4159" << std::endl;

    // Print 'n' for night




    // Print name and ID for night
    std::cout << "Mst Sadia Akter Shifa: 213-15-4368" << std::endl;
}
void drawScene2()
{


glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();
//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen
    glLoadIdentity(); // Reset the drawing perspective
    gluOrtho2D(0.0, 1000.0, 0.0, 1000.0); // Set orthographic projection range
    glMatrixMode(GL_MODELVIEW); // Set the matrix mode to modelview for 2D drawing

    // Drawing the sky (a blue rectangle)
    glBegin(GL_POLYGON);
    glColor3f(0.122, 0.635, 1); // Sky color (light blue)
    glVertex2f(0, 800); // Bottom-left corner
    glVertex2f(0, 1000); // Top-left corner
    glVertex2f(1000, 1000); // Top-right corner
    glVertex2f(1000, 800); // Bottom-right corner
    glEnd();

    glPushMatrix();
    glTranslatef(500.0, 900.0, 0); // Move to center of the window (500, 900)

    // Draw sun halo (glowing effect)
    float radius = 25.0f; // Radius of the sun
    int num_segments = 100; // Number of segments to approximate the circle
    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.2f, 0.3f); // Light yellow with transparency for a soft glow
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * 1.3f * cos(theta); // Make halo larger than the sun
        float y = radius * 1.3f * sin(theta); // Make halo larger than the sun
        glVertex2f(x, y); // Plot the halo vertex
    }
    glEnd();

    // Draw the sun (gradient yellow circle)
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * cos(theta); // X position of each vertex
        float y = radius * sin(theta); // Y position of each vertex

        // Create a gradient from yellow to light orange for a glowing effect
        float r = 1.0f - 0.6f * (float(i) / float(num_segments)); // Red decreases over time
        float g = 1.0f - 0.4f * (float(i) / float(num_segments)); // Green decreases over time
        float b = 0.333f; // Fixed blue value for the sun color

        glColor3f(r, g, b); // Apply the gradient color
        glVertex2f(x, y); // Plot the vertex
    }
    glEnd();

    // Draw sun rays for extra effect
 glLineWidth(2.5); // Set line width for rays
glColor3f(1.0f, 0.9f, 0.2f); // Light yellow color for the rays

float ray_length = 30.0f; // Adjust the length of the rays

for (int i = 0; i < 12; i++) { // Drawing 12 rays
    float angle = (2.0f * 3.1415926f * float(i)) / 12.0f; // Angle for each ray
    float x_start = radius * cos(angle); // X start point of the ray
    float y_start = radius * sin(angle); // Y start point of the ray
    float x_end = (radius + ray_length) * cos(angle); // X end point of the ray (shortened)
    float y_end = (radius + ray_length) * sin(angle); // Y end point of the ray (shortened)

    glBegin(GL_LINES);
    glVertex2f(x_start, y_start); // Starting point of the ray
    glVertex2f(x_end, y_end); // Ending point of the ray
    glEnd();
}


    glPopMatrix();

clouds1();


clouds2();


clouds3();

//plane

  glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 920 ); // Bottom-left corner
    glVertex2f(600+ shifti, 940 ); // Top-left corner
    glVertex2f(680+ shifti, 940 ); // Top-right corner
    glVertex2f(680+ shifti, 920 ); // Bottom-right corner
    glEnd();



       glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(700+ shifti, 960 ); // Bottom-right corner
   glVertex2f(700+ shifti, 920 ); // Top-right corner
    glVertex2f(680+ shifti, 920) ; // Top-right corner

    glEnd();

        glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)

     glVertex2f(680+ shifti, 940 ); // Top-right corner
   glVertex2f(700 + shifti, 940 ); // Top-right corner
   glVertex2f(680 + shifti, 920 ); // Bottom-right corner

    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(640+ shifti, 930 ); // Bottom-left corner
    glVertex2f(650 + shifti, 930 ); // Top-left corner
     glVertex2f(670+ shifti, 890 ); // Bottom-right corner
    glVertex2f(660+ shifti, 890 ); // Top-right corner

    glEnd();

    drawCircle(600.0f + shifti, 930.0f, 10.0f);

  glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 935 ); // Bottom-left corner

    glVertex2f(600 + shifti, 933 ); // Top-left corner
    glVertex2f(680 + shifti, 933 ); // Bottom-right corner

    glVertex2f(680 + shifti, 935 ); // Top-right corner
    glEnd();


// the rocket


    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 890 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
    glVertex2f(90, 830 + shift); // Top-right corner
    glVertex2f(90, 890 + shift); // Bottom-right corner
    glEnd;



      glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 880 + shift); // Bottom-left corner
    glVertex2f(100, 870 + shift); // Top-left corner
    glVertex2f(90, 870 + shift); // Top-right corner
    glVertex2f(90, 880 + shift); // Bottom-right corner
    glEnd;




       glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.5); // Sky color (light blue)
    glVertex2f(100, 860 + shift); // Bottom-left corner
    glVertex2f(100, 850 + shift); // Top-left corner
    glVertex2f(90, 850 + shift); // Top-right corner
    glVertex2f(90, 860 + shift); // Bottom-right corner
    glEnd;




    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(90, 830 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
      glVertex2f(102, 815 + shift); // Top-right corner
       glVertex2f(88, 815 + shift); // Bottom-right corner


    glEnd();

   glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(95, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(92, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(98, 800 + shift); // Top-right corner

    glEnd();



      glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
     glVertex2f(90, 890 + shift); // Bottom-right corner

    glVertex2f(95, 910 + shift); // Top-right corner
     glVertex2f(100, 890 + shift); // Top-left corner

    glEnd();








///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(0,800);
    glVertex2f(100,800);
    glVertex2f(50,850);


    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
     glColor3f(0.416, 0.69, 0.153);
    glVertex2f(20,850);
   glVertex2f(100,800);
    glVertex2f(0,800);

    glEnd();

    //polygon2//
    glBegin(GL_POLYGON);
     glColor3f(0.416, 0.69, 0.153);
    glVertex2f(70,850);
   glVertex2f(100,800);
    glVertex2f(0,800);

    glEnd();


/// hill 2

//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(100,800);
    glVertex2f(200,800);
    glVertex2f(180,835);
    glVertex2f(160,840);
    glVertex2f(155,845);



    glVertex2f(150,840);

   glVertex2f(130,845);

    glVertex2f(120,840);
       glVertex2f(150,835);



    glEnd();



/// hill3

glBegin(GL_POLYGON);
glColor3f(0.157, 0.42, 0.255);
glVertex2f(200, 800);   // Vertex 1
glVertex2f(330, 800);   // Vertex 2
glVertex2f(330, 800);   // Vertex 3 (new point)
glVertex2f(330, 800);   // Vertex 4 (new point)
glVertex2f(310, 860);   // Vertex 5 (new point)
glVertex2f(270, 870);   // Vertex 6 (new point)
glVertex2f(230, 860);   // Vertex 7 (new point)
glVertex2f(200, 800);   // Vertex 8 (new point)
glEnd();






//hill 4

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(330, 800);    // Vertex 1 (top left)
glVertex2f(430, 800);    // Vertex 2 (upper left)
glVertex2f(430, 900);    // Vertex 3 (middle left)
glVertex2f(330, 900);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(330+33, 800);    // Vertex 1 (top left)

glVertex2f(330+33, 900);    // Vertex 3 (middle left)

glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430-33, 800);    // Vertex 2 (upper left)
glVertex2f(430-33, 900);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 825);    // Vertex 2 (upper left)
glVertex2f(330, 825);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 850);    // Vertex 2 (upper left)
glVertex2f(330, 850);    // Vertex 3 (middle left)
glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 875);    // Vertex 2 (upper left)
glVertex2f(330, 875);    // Vertex 3 (middle left)
glEnd();




int x_start = 330, x_end = 430; // X range
int y_start = 800, y_end = 900; // Y range
int horizontal_count = 3;       // Number of polygons horizontally
int vertical_count = 4;         // Number of polygons vertically

// Initial polygon points (given)
float initial_x = 347.0f;
float initial_y = 812.0f; // Corrected initial y value

// Loop to create the polygons
for (int i = 0; i < vertical_count; i++) {
    for (int j = 0; j < horizontal_count; j++) {
        // Calculate x and y positions for each polygon
        float x = initial_x + j * ((x_end - x_start) / horizontal_count);
        float y = initial_y + i * ((y_end - y_start) / vertical_count);

        // Draw the polygon at (x, y)
        glBegin(GL_POLYGON);
        glColor3f(0.125, 0.404, 0.49);  // Green color for the polygon (customize as needed)

        // Define 4 vertices for each polygon, with (x, y) as the center
        glVertex2f(x - 6, y + 5);   // Vertex 1 (top left)
        glVertex2f(x + 6, y + 5);   // Vertex 2 (top right)
        glVertex2f(x + 6, y - 5);   // Vertex 3 (bottom right)
        glVertex2f(x - 6, y - 5);   // Vertex 4 (bottom left)

        glEnd();
    }
}





///dsfdfd
glBegin(GL_POLYGON);
glColor3f(0.89, 0.722, 0.098); // Green color (for the shape)
glVertex2f(430, 800);    // Vertex 1 (top left)
glVertex2f(530, 800);    // Vertex 2 (upper left)
glVertex2f(480, 840);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Green color (for the shape)
glVertex2f(530, 800);    // Vertex 1 (top left)
glVertex2f(580, 800);    // Vertex 2 (upper left)
glVertex2f(555, 850);    // Vertex 3 (middle left)

glEnd();



glBegin(GL_POLYGON);
glColor3ub(34, 5, 34); // Green color (for the shape)
    // Vertex 1 (top left)
glVertex2f(580, 800);    // Vertex 2 (upper left)
glVertex2f(555, 850);
glVertex2f(620, 800);    // Vertex 3 (middle left)

glEnd();


///new byulding

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(620, 800);    // Vertex 1 (top left)
glVertex2f(620, 900);    // Vertex 2 (upper left)
glVertex2f(730, 900);    // Vertex 3 (middle left)
glVertex2f(730, 800);    // Vertex 3 (middle left)

glEnd();




// Park dimensions and configuration
int x_range_start = 620, x_range_end = 720; // X range
int y_range_start = 800, y_range_end = 900; // Y range
int num_polygons_horizontal = 3;            // Number of polygons horizontally
int num_polygons_vertical = 4;              // Number of polygons vertically

// Initial position of the first polygon
float initial_pos_x = 642.0f;
float initial_pos_y = 810.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row = 0; row < num_polygons_vertical; row++) {
    for (int col = 0; col < num_polygons_horizontal; col++) {
        // Calculate X and Y positions for each polygon
        float pos_x = initial_pos_x + col * ((x_range_end - x_range_start) / num_polygons_horizontal);
        float pos_y = initial_pos_y + row * ((y_range_end - y_range_start) / num_polygons_vertical);

        // Draw the polygon at (pos_x, pos_y)
        glBegin(GL_POLYGON);
        glColor3f(0.153, 0.808, 0.961);  // Green color for the polygon (customize as needed)

        // Define 6 vertices for each polygon, with the (pos_x, pos_y) as the center
        glVertex2f(pos_x - 10, pos_y + 10);   // Vertex 1
        glVertex2f(pos_x + 10, pos_y + 10);   // Vertex 2
        glVertex2f(pos_x + 20, pos_y);        // Vertex 3
        glVertex2f(pos_x + 10, pos_y - 10);   // Vertex 4
        glVertex2f(pos_x - 10, pos_y - 10);   // Vertex 5
        glVertex2f(pos_x - 20, pos_y);        // Vertex 6

        glEnd();
    }
}


/// new building


glBegin(GL_POLYGON);
glColor3f(0.89, 0.105, 0.4); // Green color (for the shape)
glVertex2f(730, 800);    // Vertex 1 (top left)
glVertex2f(730, 850);    // Vertex 2 (upper left)
glVertex2f(845, 850);    // Vertex 3 (middle left)
glVertex2f(845, 800);    // Vertex 3 (middle left)

glEnd();

// Park dimensions and configuration
int park_x_start = 720, park_x_end = 820;   // X range for the park area
int park_y_start = 800, park_y_end = 850;   // Y range for the park area
int total_polygons_horizontal = 4;           // Number of polygons horizontally
int total_polygons_vertical = 4;             // Number of polygons vertically

// Initial position of the first polygon
float start_pos_x = 750.0f;
float start_pos_y = 807.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row_index = 0; row_index < total_polygons_vertical; row_index++) {
    for (int col_index = 0; col_index < total_polygons_horizontal; col_index++) {
        // Calculate X and Y positions for each polygon
        float polygon_pos_x = start_pos_x + col_index * ((park_x_end - park_x_start) / total_polygons_horizontal);
        float polygon_pos_y = start_pos_y + row_index * ((park_y_end - park_y_start) / total_polygons_vertical);

        // Draw the polygon at (polygon_pos_x, polygon_pos_y)
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygon (customize as needed)

        // Define 8 vertices for each polygon, with (polygon_pos_x, polygon_pos_y) as the center
        glVertex2f(polygon_pos_x - 6, polygon_pos_y + 3);  // Vertex 1
        glVertex2f(polygon_pos_x + 6, polygon_pos_y + 3);  // Vertex 2
        glVertex2f(polygon_pos_x + 15, polygon_pos_y + 2);   // Vertex 3
        glVertex2f(polygon_pos_x + 15, polygon_pos_y - 2);   // Vertex 4
        glVertex2f(polygon_pos_x + 6, polygon_pos_y - 3);  // Vertex 5
        glVertex2f(polygon_pos_x - 6, polygon_pos_y - 3);  // Vertex 6
        glVertex2f(polygon_pos_x - 15, polygon_pos_y - 2);   // Vertex 7
        glVertex2f(polygon_pos_x - 15, polygon_pos_y + 2);   // Vertex 8

        glEnd();
    }
}


///new obkec


glBegin(GL_POLYGON);
glColor3ub(34, 139, 34);
glVertex2f(845, 800);    // Vertex 1 (top left)
glVertex2f(845, 835);    // Vertex 2 (upper left)
glVertex2f(1000, 835);    // Vertex 3 (middle left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)

glEnd();

drawCircle2(873.0f, 830.0f, 15.0f);

drawCircle2(900.0f, 830.0f, 15.0f);
drawCircle2(930.0f, 830.0f, 18.0f);

drawCircle2(955.0f, 830.0f, 15.0f);
drawCircle2(985.0f, 830.0f, 18.0f);

drawCircle2(1020.0f, 830.0f, 18.0f);

drawCircle3(850.0f, 820.0f, 6.0f);

drawCircle3(860.0f, 820.0f, 6.0f);






//nodi
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,1.0); // Green color (for the shape)
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)
glVertex2f(0, 800);    // Vertex 3 (middle left)

glEnd();

float gadp = 5.0f;  // The gap between objects
float widt = 0.75f;  // The width of each object

// Starting position for the Y-coordinate
float startY = 797.0f;

// Adjust this gap to prevent overlap, assuming your object height is 1.0f
float vert_gap = 4.0f;

for (int j = 0; j < 200; j++) {  // Loop for drawing 200 rows vertically
    for (int i = 0; i < 500; i++) {
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);

        // Calculate the X positions with gap between objects
        float x_offset = (widt + gadp) * i;

        // Calculate the Y position for each row, with a gap between them
        float y_offset = startY - j * vert_gap;  // Adjust Y for each row

        glVertex2f(x_offset, y_offset);
        glVertex2f(x_offset + widt, y_offset);
        glVertex2f(x_offset + widt, y_offset - 1.0f);  // Slightly adjust for the height of the object
        glVertex2f(x_offset, y_offset - 1.0f);  // Slightly adjust for the height of the object

        glEnd();
    }
}



//road
glBegin(GL_POLYGON);
glColor3f(0.541, 0.541, 0.514); // Green color (for the shape)
glVertex2f(0, 700);    // Vertex 1 (top left)
glVertex2f(1000, 700);    // Vertex 2 (upper left)
glVertex2f(1000, 630);    // Vertex 3 (middle left)
glVertex2f(0, 630);    // Vertex 3 (middle left)


glEnd();

float ga = 5.0f;  // The gap between objects
float wi = 4.0f;  // The width of each object

for (int i = 0; i < 150; i++) {
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // Black color (for the shape)

    // Calculate the X position with gap between objects
    float x_offset = (wi + ga) * i;

    glVertex2f(x_offset, 657);    // Vertex 1 (top left)
    glVertex2f(x_offset + wi, 657);    // Vertex 2 (upper right)
    glVertex2f(x_offset + wi, 653);    // Vertex 3 (bottom right)
    glVertex2f(x_offset, 653);    // Vertex 4 (bottom left)

    glEnd();
}



glEnd();





// pillar of bridge
// Set the gap between each pillar
float gap = 100.0f; // You can adjust this value for a bigger or smaller gap between pillars

// Loop to draw multiple pillars along the horizontal axis
for (float xOffset = 0; xOffset < 1200; xOffset += gap) { // Change 300 to the desired number of pillars (adjust as needed)
    // Draw the main pillar body (rectangle-like shape with slight curve)
    glBegin(GL_POLYGON);
    glColor3f(0.541, 0.541, 0.514); // Pillar color
    glVertex2f(10 + xOffset, 630);  // Top left vertex
    glVertex2f(60 + xOffset, 630);  // Top right vertex
    glVertex2f(60 + xOffset, 600);  // Bottom right vertex
    glVertex2f(10 + xOffset, 600);  // Bottom left vertex
    glEnd();

    // Add subtle ridges for texture (details for aesthetics)
    glLineWidth(2.0);
    glColor3f(0.396, 0.263, 0.129); // Dark color for ridges
    for (float y = 610; y <= 620; y += 2) {
        glBegin(GL_LINES);
        glVertex2f(10 + xOffset, y);  // Start from the left side
        glVertex2f(60 + xOffset, y);  // End at the right side
        glEnd();
    }
    glLineWidth(1.0); // Reset line width after the detailing

    // Add a cap to the top of the pillar for extra detail (a rectangle-like top)
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176); // Darker brown color for the cap
    glVertex2f(10 + xOffset, 620);  // Left top of the cap
    glVertex2f(60 + xOffset, 620);  // Right top of the cap
    glVertex2f(60 + xOffset, 630);  // Right side raised for cap
    glVertex2f(10 + xOffset, 630);  // Left side raised for cap
    glEnd();
}



// rail line

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 680);
    glVertex2f(1000, 680);
glEnd();

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 670);
    glVertex2f(1000, 670);
glEnd();


// Number of lines to draw
int numLines = 350; // You can adjust this as needed
float gapi = 4.0f; // Gap between each line

// Loop to draw multiple lines with a gap
for (int i = 0; i < numLines; ++i) {
    float offsetX = i * gapi;  // Increment the x-coordinate by 'gap' each time

    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Set the line color to black

        // Draw the line horizontally, with each line moved by 'offsetX'
        glVertex2f(0 + offsetX, 670); // Starting point of the line
        glVertex2f(0 + offsetX, 680); // End point of the line (100 units to the right)

    glEnd();
}

// rail 3

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 633);
    glVertex2f(1000, 633);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 635);
    glVertex2f(1000, 635);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 636);
    glVertex2f(1000, 637);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 637);
    glVertex2f(1000, 639);
glEnd();

// rail 4

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 700);
    glVertex2f(1000, 700);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 698);
    glVertex2f(1000, 698);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 696);
    glVertex2f(1000, 696);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 694);
    glVertex2f(1000, 694);
glEnd();












//ship 3


 glBegin(GL_POLYGON);
glColor3f(0.318, 0.91, 0.184); // Green color (for the shape)
glVertex2f(850 + sh, 760);    // Vertex 1 (top left)
glVertex2f(950 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(950 + sh, 740);    // Vertex 3 (middle left)
glVertex2f(870 + sh, 740);    // Vertex 3 (middle left)


  glEnd();

 glBegin(GL_POLYGON);
glColor3f(0.737, 0.737, 0.737); // Green color (for the shape)
glVertex2f(880 + sh, 760);    // Vertex 1 (top left)
glVertex2f(940 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(940 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(880 + sh, 780);    // Vertex 3 (middle left)


  glEnd();


   glBegin(GL_POLYGON);
glColor3f(0.737, 0.49, 0.737); // Green color (for the shape)
glVertex2f(920 + sh, 800);    // Vertex 1 (top left)
glVertex2f(930 + sh, 800);    // Vertex 2 (upper left)
glVertex2f(930 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(920 + sh, 780);    // Vertex 3 (middle left)


  glEnd();

   glBegin(GL_POLYGON);
glColor3f(0.737, 0.49, 0.31); // Green color (for the shape)
glVertex2f(900+ sh, 800);    // Vertex 1 (top left)
glVertex2f(910+ sh, 800);    // Vertex 2 (upper left)
glVertex2f(910+ sh, 780);    // Vertex 3 (middle left)
glVertex2f(900+ sh, 780);    // Vertex 3 (middle left)


  glEnd();

  drawCircle2(910.0f + sh , 770.0f, 5.0f);
drawCircle2(930.0f + sh , 770.0f, 5.0f);
drawCircle2(880.0f + sh , 750.0f, 5.0f);
drawCircle2(880.0f + sh , 750.0f, 3.0f);






//ship

glBegin(GL_POLYGON);
glColor3f(1, 0.235, 0); // Green color (for the shape)
glVertex2f(100 + shif, 750);    // Vertex 1 (top left)
glVertex2f(300 + shif, 750);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 730);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 730);    // Vertex 3 (middle left)

  glEnd();


  glBegin(GL_POLYGON);
glColor3f(0.957, 1, 0); // Green color (for the shape)
glVertex2f(110 + shif, 790);    // Vertex 1 (top left)
glVertex2f(290 + shif, 790);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 750);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 750);    // Vertex 3 (middle left)

  glEnd();


   // Define the gap between polygons
    float gapX = 5.0;  // Horizontal gap (between columns)
    float gapY = 6.0;  // Vertical gap (between rows)

    // Size of each polygon (hexagon)
    float radi = 3.0;  // Radius of the hexagon

    // Loop to create 4 vertical and 22 horizontal polygons (grid)
    for (int row = 0; row < 3; row++) {          // Loop through rows (4 rows)
        for (int col = 0; col < 16; col++) {     // Loop through columns (22 columns)
            // Calculate the X and Y offset for each polygon
            float offsetX = 115 + col * (2 * radi + gapX);  // Horizontal offset (including gapX)
            float offsetY = 776 - row * (radi * 2 + gapY);  // Vertical offset (including gapY)

            // Draw the hexagon at the calculated position
            glBegin(GL_POLYGON);
            glColor3f(0.043, 0.58, 0.961);  // White color (for the shape)

            // Calculate the six vertices of the hexagon
            for (int i = 0; i < 8; i++) {
                float angle = i * 2.0 * M_PI / 8;  // Divide 360 degrees by 6 vertices (2π/6)
                float x = offsetX + radi * cos(angle);
                float y = offsetY + radi * sin(angle);

                glVertex2f(x + + shif, y);  // Add the vertex to the polygon
            }

            glEnd();
        }
    }



//ship2

glBegin(GL_POLYGON);
glColor3f(0.831, 0.486, 0.098); // Green color (for the shape)
glVertex2f(500 + shi, 750);    // Vertex 1 (top left)
glVertex2f(700 + shi, 750);    // Vertex 2 (upper left)
glVertex2f(680 + shi, 720);    // Vertex 3 (middle left)
glVertex2f(500 + shi, 720);    // Vertex 3 (middle left)

  glEnd();


glBegin(GL_POLYGON);
glColor3f(0.027, 0.686, 0.941); // Green color (for the shape)
glVertex2f(510 + shi, 770);    // Vertex 1 (top left)
glVertex2f(680 + shi, 770);    // Vertex 2 (upper left)
glVertex2f(680+ shi, 740);    // Vertex 3 (middle left)
glVertex2f(510+ shi, 740);    // Vertex 3 (middle left)


  glEnd();




glColor3f(1.0, 1.0, 1.0);

    // Size of the polygon
    float width = 3.0;
    float height = 3.0;

    // Gap between polygons
    float gapy = 2.0;

    // Number of rows and columns
    int rows = 4;  // You can adjust the number of rows
    int cols = 33;  // You can adjust the number of columns

    // Draw the grid of polygons with a gap between them
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            glBegin(GL_POLYGON);

            // Draw the polygon at the current position, adding the gap to the offset
            glVertex2f(512 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Top left
            glVertex2f(515 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Upper left
            glVertex2f(515 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom left
            glVertex2f(512 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom right

            glEnd();
        }

    }


 glBegin(GL_POLYGON);
glColor3f(1.0,0.0,1.0); // Green color (for the shape)
glVertex2f(520+ shi, 790);    // Vertex 1 (top left)
glVertex2f(670+ shi, 790);    // Vertex 2 (upper left)
glVertex2f(670+ shi, 770);    // Vertex 3 (middle left)
glVertex2f(520+ shi, 770);    // Vertex 3 (middle left)


  glEnd();

 glBegin(GL_POLYGON);
glColor3f(0.353, 0.569, 0.651); // Green color (for the shape)
glVertex2f(523+ shi, 787);    // Vertex 1 (top left)
glVertex2f(667+ shi, 787);    // Vertex 2 (upper left)
glVertex2f(667+ shi, 773);    // Vertex 3 (middle left)
glVertex2f(523+ shi, 773);    // Vertex 3 (middle left)


  glEnd();





train();
cargo();
cars();


//600px
glBegin(GL_POLYGON);
glColor3f(0.361, 0.318, 0.035);
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 500);    // Vertex 3 (middle left)
glVertex2f(0, 500);    // Vertex 3 (middle left)

glEnd();


//bulding 600px

glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex2f(20, 525);    // Vertex 1 (top left)
glVertex2f(150, 525);    // Vertex 2 (upper left)
glVertex2f(150, 520);    // Vertex 3 (middle left)
glVertex2f(20, 520);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_POLYGON);
glColor3f(1.0,1.0,1.0);
glVertex2f(20, 580);    // Vertex 1 (top left)
glVertex2f(150, 580);    // Vertex 2 (upper left)
glVertex2f(150, 525);    // Vertex 3 (middle left)
glVertex2f(20, 525);    // Vertex 3 (middle left)

glEnd();

  for (int i = 0; i < 10; i++) {
        // Loop to create 20 columns
        for (int j = 0; j < 25; j++) {
            float x_offset = j * 5.0f; // Horizontal distance between rectangles
            float y_offset = i * 5.0f; // Vertical distance between rectangles

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0); // Black color for the rectangles

            // Define the four vertices of each rectangle
            glVertex2f(23 + x_offset, 578 - y_offset); // Vertex 1 (top left)
            glVertex2f(27 + x_offset, 578 - y_offset); // Vertex 2 (upper right)
            glVertex2f(27 + x_offset, 572 - y_offset); // Vertex 3 (bottom right)
            glVertex2f(23 + x_offset, 572 - y_offset); // Vertex 4 (bottom left)

            glEnd();
        }
    }



   for (int i = 0; i < 7; i++) {
        float x_offset = i * 15.0f;  // Horizontal distance between triangles

        // Draw the main triangle
        glBegin(GL_TRIANGLES);
        glColor3f(1.0, 1.0, 1.0); // White color for the triangle
        glVertex2f(20 + x_offset, 580);    // Vertex 1 (top left)
        glVertex2f(60 + x_offset, 580);    // Vertex 2 (top right)
        glVertex2f(40 + x_offset, 595);    // Vertex 3 (middle top)
        glEnd();

        // Decorative pattern inside each triangle (smaller triangle)
        glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 0.0); // Black color for the decoration

        glVertex2f(30 + x_offset, 580);    // Vertex 1 (top left of inner triangle)
        glVertex2f(50 + x_offset, 580);    // Vertex 2 (top right of inner triangle)
        glVertex2f(40 + x_offset, 590);    // Vertex 3 (middle of inner triangle)
        glEnd();
    }







// building 2

   glBegin(GL_POLYGON);
glColor3f(0.,0.5,0.4);
glVertex2f(160, 525);    // Vertex 1 (top left)
glVertex2f(280, 525);    // Vertex 2 (upper left)
glVertex2f(280, 605);    // Vertex 3 (middle left)
glVertex2f(160, 605);    // Vertex 3 (middle left)

glEnd();


    // Loop to create multiple rectangles horizontally
    for (int i = 0; i < 6; i++) { // For 6 rectangles (you can increase the count)
        float y_offset = i * 18.0f;  // Vertical distance between rectangles

        // Change color for each rectangle (cycling between blue and orange)
        float red = (i % 2 == 0) ? 1.0f : 1.0f; // Keep red component for both blue and orange
        float green = (i % 2 == 0) ? 0.0f : 0.5f; // Blue (green = 0) and Orange (green = 0.5)
        float blue = (i % 2 == 0) ? 1.0f : 0.0f; // Blue (blue = 1) and Orange (blue = 0)

        // Draw the main rectangle
        glBegin(GL_POLYGON);
        glColor3f(red, green, blue); // Set the color dynamically for each rectangle

        // Define the four vertices of each rectangle
        glVertex2f(160 , 525 + y_offset);    // Vertex 1 (top left)
        glVertex2f(280 , 525 + y_offset);    // Vertex 2 (top right)
        glVertex2f(280 , 510 + y_offset);    // Vertex 3 (bottom right)
        glVertex2f(160 , 510 + y_offset);    // Vertex 4 (bottom left)

        glEnd();

        // Add a new color in the gap between rectangles (e.g., pink color)
        float gap_red = 1.0f;  // Set the red component for pink color
        float gap_green = 0.75f; // Set the green component for pink color
        float gap_blue = 0.8f;  // Set the blue component for pink color

        glBegin(GL_POLYGON);
        glColor3f(gap_red, gap_green, gap_blue); // Set the gap color to pink

        // Draw a smaller rectangle in the gap between each main rectangle
        glVertex2f(160 , 525 + y_offset - 9.0f);    // Top left of gap shape
        glVertex2f(280 , 525 + y_offset - 9.0f);    // Top right of gap shape
        glVertex2f(280 , 510 + y_offset + 9.0f);    // Bottom right of gap shape
        glVertex2f(160 , 510 + y_offset + 9.0f);    // Bottom left of gap shape

        glEnd();

        // Add a smaller shape (e.g., a smaller rectangle) inside the gap with cyan color
        float inner_red = 0.0f;  // No red for cyan
        float inner_green = 1.0f; // Full green for cyan
        float inner_blue = 1.0f;  // Full blue for cyan

        glBegin(GL_POLYGON);
        glColor3f(inner_red, inner_green, inner_blue); // Set the inner shape color to cyan

        // Draw a smaller rectangle inside the gap
        glVertex2f(160 + 30.0f, 525 + y_offset);    // Top left of inner shape
        glVertex2f(280 - 30.0f, 525 + y_offset);    // Top right of inner shape
        glVertex2f(280 - 30.0f, 510 + y_offset);    // Bottom right of inner shape
        glVertex2f(160 + 30.0f, 510 + y_offset);    // Bottom left of inner shape

        glEnd();
    }


    for (int i = 0; i < 10; i++) {  // Loop for 20 rows
    for (int j = 0; j < 6; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 193 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 610 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}









///building 2.2


   // Loop to draw 24 rows of polygons (vertically)
 for (int i = 0; i < 24; i++) {
    for (int j = 0; j < 30; j++) {
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 3;  // Horizontal spacing (30 columns)
        float y = 595 - i * 4;  // Vertical spacing (24 rows)

        // Choose a color based on the index
          if ((i + j) % 3 == 0) {
                glColor3f(1.0, 0.0, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(1.0, 1.0, 0.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 1.0, 0.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

        // Draw a polygon (triangle) at (x, y)
        glBegin(GL_POLYGON);
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 5, y);     // Vertex 2 (upper left)
        glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
        glEnd();
    }
}


    // Loop to draw another set of polygons with a different color pattern
    // Introduce a horizontal gap by adjusting the starting x position for the second set
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 20; j++) {
            // Calculate the x and y positions for each polygon
            float x = 350 + j * 3 + 4;  // Add a 4-unit horizontal gap (shifted by 4 units)
            float y = 595 - i * 4;  // Vertical spacing (24 rows)

            // Choose a color based on the index
            if ((i + j) % 3 == 0) {
                glColor3f(0.0, 0.5, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(0.0, 1.0, 1.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 0.0, 1.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

            // Draw a polygon (triangle) at (x, y)
            glBegin(GL_POLYGON);
            glVertex2f(x, y);         // Vertex 1 (top left)
            glVertex2f(x + 5, y);     // Vertex 2 (upper left)
            glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
            glEnd();
        }
    }


for (int i = 0; i < 8; i++) {  // Loop for 20 rows
    for (int j = 0; j < 13; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}
















// building 3
// Loop to draw the grid of hexagons



glBegin(GL_POLYGON);

glColor3f(0.055, 0.929, 0.949);
glVertex2f(420, 600);    // Vertex 1 (top left)
glVertex2f(565, 600);    // Vertex 2 (upper left)
glVertex2f(565, 500);
glVertex2f(420, 500);

glEnd();

for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each hexagon
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each hexagon to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the hexagon at the calculated position
        glBegin(GL_POLYGON);

        // Define the six vertices for the hexagon
        glVertex2f(x, y);           // Vertex 1 (top left)
        glVertex2f(x + 1.5, y + 1.5); // Vertex 2 (top middle right)
        glVertex2f(x + 3.5, y + 1.5); // Vertex 3 (top right)
        glVertex2f(x + 5, y);       // Vertex 4 (bottom right)
        glVertex2f(x + 3.5, y - 1.5); // Vertex 5 (bottom middle left)
        glVertex2f(x + 1.5, y - 1.5); // Vertex 6 (bottom left)

        glEnd();
    }
}

// Loop to draw the grid of triangles
for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each triangle
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each triangle to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the triangle at the calculated position
        glBegin(GL_POLYGON);

        // Define the three vertices for the triangle
        glVertex2f(x, y);            // Vertex 1 (top)
        glVertex2f(x + 6, y + 5);    // Vertex 2 (bottom right)
        glVertex2f(x + 12, y);       // Vertex 3 (bottom left)

        glEnd();
    }
}


for (int i = 0; i < 9; i++) {  // Loop for 20 rows
    for (int j = 0; j < 14; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 425 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}





//deyal

glBegin(GL_POLYGON);

glColor3f(0.055, 0.929, 0.949);
glVertex2f(570, 600);    // Vertex 1 (top left)
glVertex2f(700, 600);    // Vertex 2 (upper left)
glVertex2f(700, 500);
glVertex2f(570, 500);

glEnd();

// Loop to draw the grid of polygons
for (int i = 0; i < 9; i++) {         // Vertical loop (9 rows)
    for (int j = 0; j < 10; j++) {    // Horizontal loop (10 columns)
        // Calculate the x and y positions for each polygon
        float xOffset = j * 12;       // Horizontal spacing (12 units)
        float yOffset = i * 12;       // Vertical spacing (12 units) - Increased gap

        // Adjust the x and y positions for each polygon to form the grid
        float x = 570 + xOffset;      // Horizontal starting position
        float y = 600 - yOffset;      // Vertical starting position

        // Choose a color based on the index (using a new pattern with 4 colors)
        if ((i + j) % 4 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 4 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else if ((i + j) % 4 == 2) {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for another set
        } else {
            glColor3f(0.9, 0.9, 0.0);  // Yellow color for the new set
        }

        // Draw the polygon (rectangle) at the calculated position
        glBegin(GL_POLYGON);

        // Define the four vertices for the rectangle
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 20, y);    // Vertex 2 (upper right)
        glVertex2f(x + 20, y - 5); // Vertex 3 (bottom right)
        glVertex2f(x, y - 5);     // Vertex 4 (bottom left)

        glEnd();
    }
}

drawCircle(600,570, 15);
drawCircle4(600,570, 12);

drawCircle3(635,570, 6.5);
drawCircle(635,570, 7.5);
drawCircle4(635,570, 4.5);




drawCircle(670,570, 15);
drawCircle4(670,570, 12);

drawCircle(600,530, 15);
drawCircle4(600,530, 12);
drawCircle3(635,530, 6.5);
drawCircle(635,530, 7.5);

drawCircle4(635,530, 4.5);



drawCircle(670,530, 15);
drawCircle4(670,530, 12);

//building 4





// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 3; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 10;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 525 - yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
     glColor3f(0.69, 0.729, 0.035);  // Green color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);    // Vertex 1 (top left)
    glVertex2f(820, y);    // Vertex 2 (upper right)
    glVertex2f(820, y + 50); // Vertex 3 (bottom right)
    glVertex2f(710, y + 50);  // Vertex 4 (bottom left)

    glEnd();
}



glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 505);    // Vertex 1 (top left)
glVertex2f(820, 505);    // Vertex 2 (upper left)
glVertex2f(820, 500);
glVertex2f(710, 500);

glEnd();

// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 4; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 20;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 505 + yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);        // Vertex 1 (top left)
    glVertex2f(820, y);        // Vertex 2 (upper right)
    glVertex2f(820, y - 5);    // Vertex 3 (bottom right)
    glVertex2f(710, y - 5);    // Vertex 4 (bottom left)

    glEnd();
}


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(770, 505);    // Vertex 1 (top left)
glVertex2f(772, 505);    // Vertex 2 (upper left)
glVertex2f(772, 574);
glVertex2f(770, 574);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(790, 505);    // Vertex 1 (top left)
glVertex2f(792, 505);    // Vertex 2 (upper left)
glVertex2f(792, 574);
glVertex2f(790, 574);

glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(818, 505);    // Vertex 1 (top left)
glVertex2f(820, 505);    // Vertex 2 (upper left)
glVertex2f(820, 574);
glVertex2f(818, 574);

glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(750, 505);    // Vertex 1 (top left)
glVertex2f(752, 505);    // Vertex 2 (upper left)
glVertex2f(752, 574);
glVertex2f(750, 574);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(730, 505);    // Vertex 1 (top left)
glVertex2f(732, 505);    // Vertex 2 (upper left)
glVertex2f(732, 574);
glVertex2f(730, 574);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 505);    // Vertex 1 (top left)
glVertex2f(712, 505);    // Vertex 2 (upper left)
glVertex2f(712, 574);
glVertex2f(710, 574);
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(810, 505);    // Vertex 1 (top left)
glVertex2f(812, 505);    // Vertex 2 (upper left)
glVertex2f(812, 574);
glVertex2f(810, 574);
glEnd();




glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 574);    // Vertex 1 (top left)
glVertex2f(820, 574);    // Vertex 2 (upper left)
glVertex2f(820, 572);
glVertex2f(710, 572);
glEnd();




//buidiunf cathedaral

glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 1.0); // Blue color for the first polygon
glVertex2f(825, 520);    // Vertex 1 (top left)
glVertex2f(980, 520);    // Vertex 2 (upper left)
glVertex2f(980, 500);
glVertex2f(825, 500);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.8, 0.2, 0.2); // Red color for the second polygon
glVertex2f(835, 540);    // Vertex 1 (top left)
glVertex2f(970, 540);    // Vertex 2 (upper left)
glVertex2f(970, 520);
glVertex2f(835, 520);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.2, 0.8, 0.2); // Bright Green color for the third polygon
glVertex2f(845, 560);    // Vertex 1 (top left)
glVertex2f(960, 560);    // Vertex 2 (upper left)
glVertex2f(960, 540);
glVertex2f(845, 540);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.8); // Deep Blue color for the fourth polygon
glVertex2f(850, 580);    // Vertex 1 (top left)
glVertex2f(955, 580);    // Vertex 2 (upper left)
glVertex2f(955, 560);
glVertex2f(850, 560);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0); // Bright Yellow color for the fifth polygon
glVertex2f(855, 590);    // Vertex 1 (top left)
glVertex2f(950, 590);    // Vertex 2 (upper left)
glVertex2f(950, 580);
glVertex2f(855, 580);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.4, 0.0, 0.8); // Purple color for the sixth polygon
glVertex2f(865, 600);    // Vertex 1 (top left)
glVertex2f(940, 600);    // Vertex 2 (upper left)
glVertex2f(940, 590);
glVertex2f(865, 590);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 1.0); // Cyan color for the seventh polygon
glVertex2f(875, 610);    // Vertex 1 (top left)
glVertex2f(930, 610);    // Vertex 2 (upper left)
glVertex2f(930, 600);
glVertex2f(875, 600);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0, 0.5, 0.0); // Orange color for the eighth polygon
glVertex2f(885, 620);    // Vertex 1 (top left)
glVertex2f(920, 620);    // Vertex 2 (upper left)
glVertex2f(920, 610);
glVertex2f(885, 610);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Grey color for the ninth polygon
glVertex2f(895, 630);    // Vertex 1 (top left)
glVertex2f(910, 630);    // Vertex 2 (upper left)
glVertex2f(910, 620);
glVertex2f(895, 620);
glEnd();
// road


glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Grey color for the ninth polygon
glVertex2f(0, 470);    // Vertex 1 (top left)
glVertex2f(1000, 470);    // Vertex 2 (upper left)
glVertex2f(1000, 500);
glVertex2f(0, 500);
glEnd();




// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 485);   // Vertex 1 (top left)
    glVertex2f(x + 6, 485);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 489);  // Vertex 3 (bottom right)
    glVertex2f(x, 489);   // Vertex 4 (bottom left)

    glEnd();
}

cars1();


//road divder
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0); // Grey color for the ninth polygon
glVertex2f(0, 460);    // Vertex 1 (top left)
glVertex2f(1000, 460);    // Vertex 2 (upper left)
glVertex2f(1000, 470);
glVertex2f(0, 470);
glEnd();

//road
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Grey color for the ninth polygon
glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 460);
glVertex2f(0, 460);
glEnd();

// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 445);   // Vertex 1 (top left)
    glVertex2f(x + 6, 445);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 449);  // Vertex 3 (bottom right)
    glVertex2f(x, 449);   // Vertex 4 (bottom left)

    glEnd();
}

cargo1();

//road line line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();


// tree

glBegin(GL_POLYGON);
glColor3f(0.584, 0.678, 0.349); // Grey color for the ninth polygon
glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 330);
glVertex2f(0, 330);
glEnd();



for (int i = 0; i < 5; i++) {
    int translateX = -120 * i;  // Translation on x-axis

    // First set of circles
    circle(7, 14, 330 + translateX, 350);
    circle(7, 14, 320 + translateX, 360);
    circle(7, 14, 330 + translateX, 370);
    circle(7, 14, 340 + translateX, 360);

    // Second set of circles
    circle(7, 14, 370 + translateX, 350);
    circle(7, 14, 360 + translateX, 360);
    circle(7, 14, 370 + translateX, 370);
    circle(7, 14, 380 + translateX, 360);

    // Third set of circles
    circle(7, 14, 410 + translateX, 350);
    circle(7, 14, 400 + translateX, 360);
    circle(7, 14, 410 + translateX, 370);
    circle(7, 14, 420 + translateX, 360);

    // Fourth set of circles
    circle(7, 14, 330 + 50 + translateX, 370 + 30);
    circle(7, 14, 320 + 50 + translateX, 380 + 30);
    circle(7, 14, 330 + 50 + translateX, 390 + 30);
    circle(7, 14, 340 + 50 + translateX, 380 + 30);

    // Fifth set of circles
    circle(7, 14, 370 + 50 + translateX, 370 + 30);
    circle(7, 14, 360 + 50 + translateX, 380 + 30);
    circle(7, 14, 370 + 50 + translateX, 390 + 30);
    circle(7, 14, 380 + 50 + translateX, 380 + 30);

    // Sixth set of circles
    circle(7, 14, 410 + 50 + translateX, 370 + 30);
    circle(7, 14, 400 + 50 + translateX, 380 + 30);
    circle(7, 14, 410 + 50 + translateX, 390 + 30);
    circle(7, 14, 420 + 50 + translateX, 380 + 30);
}












//tree1

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Grey color for the ninth polygon
glVertex2f(60, 380);    // Vertex 1 (top left)
glVertex2f(80, 380);    // Vertex 2 (upper left)
glVertex2f(80, 330);
glVertex2f(60, 330);
glEnd();

drawCircle3(60,380,10);

drawCircle3(60,390,10);
drawCircle3(60,390,10);
drawCircle3(50,400,10);
drawCircle3(60,410,10);
drawCircle3(70,410,10);
drawCircle3(80,410,10);
drawCircle3(80,400,10);
drawCircle3(90,390,10);
drawCircle3(50,390,10);
drawCircle3(70,380,10);
drawCircle3(80,380,10);

//tree2
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370, 330);
glVertex2f(160 + 370, 330);    // Vertex 4 (bottom left)
glEnd();

// Drawing circles with the x position shifted by +370
drawCircle5(160 + 370, 380, 10);  // Translated x position by +370

drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 400, 10);  // Translated x position by +370
drawCircle5(160 + 370, 410, 10);  // Translated x position by +370
drawCircle5(170 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 400, 10);  // Translated x position by +370
drawCircle5(190 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 390, 10);  // Translated x position by +370
drawCircle5(170 + 370, 380, 10);  // Translated x position by +370
drawCircle5(180 + 370, 380, 10);  // Translated x position by +370

//tree3

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Grey color for the ninth polygon
glVertex2f(250, 380);    // Vertex 1 (top left)
glVertex2f(270, 380);    // Vertex 2 (upper left)
glVertex2f(270, 330);
glVertex2f(250, 330);
glEnd();

drawCircle5(260, 370, 5);  // Translated x position by +100
drawCircle5(255, 390, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle3(275, 410, 10);  // Translated x position by +100
drawCircle3(265, 410, 10);  // Translated x position by +100
drawCircle3(257, 410, 10);  // Translated x position by +100
drawCircle3(247, 410, 10);  // Translated x position by +100
drawCircle3(265, 370, 10);  // Translated x position by +100
drawCircle3(257, 370, 10);  // Translated x position by +100
drawCircle3(247, 370, 10);  // Translated x position by +100
drawCircle3(275, 375, 10);  // Translated x position by +100
drawCircle5(260, 370, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle5(260, 390, 10);  // Translated x position by +100


//tree




//backgroun
// First set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 + 70 - 200, 350 + 30); // Translated circle

circle(20, 10, 790 + 80 - 200, 360 + 30);
circle(20, 10, 805 + 80 - 200, 355 + 30);
circle(20, 10, 810 + 80 - 200, 365 + 30);
circle(20, 10, 805 + 80 - 200, 375 + 30);
circle(20, 10, 815 + 80 - 200, 365 + 30);
circle(20, 10, 820 + 80 - 200, 360 + 30);
circle(20, 10, 820 + 80 - 200, 345 + 30);
circle(20, 10, 790 + 80 - 200, 345 + 30);
circle(20, 10, 805 + 80 - 200, 340 + 30); // Translated last circle

// Second set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 - 200, 350);

circle(20, 10, 790 - 200, 360);
circle(20, 10, 805 - 200, 355);
circle(20, 10, 810 - 200, 365);
circle(20, 10, 805 - 200, 375);
circle(20, 10, 815 - 200, 365);
circle(20, 10, 820 - 200, 360);
circle(20, 10, 820 - 200, 345);
circle(20, 10, 790 - 200, 345);
circle(20, 10, 805 - 200, 340);






  circle(7, 14, 330, 350);
circle(7, 14, 320, 360);
circle(7, 14, 330, 370);
circle(7, 14, 340, 360);


circle(7, 14, 370, 350);
circle(7, 14, 360, 360);
circle(7, 14, 370, 370);
circle(7, 14, 380, 360);


  circle(7, 14, 410, 350);
circle(7, 14, 400, 360);
circle(7, 14, 410, 370);
circle(7, 14, 420, 360);



circle(7, 14, 330 + 50, 370 + 30);
circle(7, 14, 320 + 50, 380 + 30);
circle(7, 14, 330 + 50, 390 + 30);
circle(7, 14, 340 + 50, 380 + 30);


circle(7, 14, 370 + 50, 370 + 30);
circle(7, 14, 360 + 50, 380 + 30);
circle(7, 14, 370 + 50, 390 + 30);
circle(7, 14, 380 + 50, 380 + 30);


circle(7, 14, 410 + 50, 370 + 30);
circle(7, 14, 400 + 50, 380 + 30);
circle(7, 14, 410 + 50, 390 + 30);
circle(7, 14, 420 + 50, 380 + 30);


glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(490, 330);
glVertex2f(430, 330);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0, 0.0, 1.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(460, 380);



glEnd();

 for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            float translateX = -10.0f * i;  // Translate horizontally by 50 units
            float translateY = -10.0f * j;  // Translate vertically by 50 units

            glPushMatrix();  // Save the current transformation matrix
            glTranslatef(translateX, translateY, 0.0f);  // Apply translation

            // Begin drawing the polygon
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);  // Grey color for the polygon
            glVertex2f(432+50, 360+5);    // Vertex 1 (top left)
            glVertex2f(437+50, 360+5);    // Vertex 2 (upper left)
            glVertex2f(437+50, 365+5);
            glVertex2f(432+50, 365+5);    // Vertex 4 (bottom left)
            glEnd();

            glPopMatrix();  // Restore the previous transformation matrix
        }
    }



    //tree paitentence


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370+120, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370+120, 330);
glVertex2f(160 + 370+120, 330);    // Vertex 4 (bottom left)
glEnd();

    drawCircle5(630, 390, 7);  // Translated x position by +370
 drawCircle5(650, 400, 7);  // Translated x position by +370
drawCircle5(640, 410, 7);  // Translated x position by +370
drawCircle5(660, 420, 7);  // Translated x position by +370

drawCircle5(670, 410, 7);  // Translated x position by +370
drawCircle5(680, 400, 7);  // Translated x position by +370
drawCircle5(685, 390, 7);  // Translated x position by +370

drawCircle5(675, 395, 7);  // Translated x position by +370
drawCircle5(650, 380, 7);  // Translated x position by +370
drawCircle5(660, 380, 7);  // Translated x position by +370



//tree traingle


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120+90, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370+120+90, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370+120+90, 330);
glVertex2f(160 + 370+120+90, 330);    // Vertex 4 (bottom left)
glEnd();


 for (int i = 0; i < 4; i++) {
        float translateY = 20.0f * i;  // Translate vertically by 40 units (you can adjust this value)

        glPushMatrix();  // Save the current transformation matrix
        glTranslatef(0.0f, translateY, 0.0f);  // Apply vertical translation

        // Draw the polygon
        glBegin(GL_POLYGON);
         glColor3ub(34, 139, 34); // Color for the polygon
        glVertex2f(690 + 30, 350);    // Vertex 1 (top left)
        glVertex2f(740 + 30, 350);    // Vertex 2 (upper left)
        glVertex2f(715 + 30, 390);    // Vertex 3 (bottom center)
        glEnd();

        glPopMatrix();  // Restore the previous transformation matrix
    }



circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80, 360 + 30);
circle(20, 10, 805 + 80, 355 + 30);
circle(20, 10, 810 + 80, 365 + 30);
circle(20, 10, 805 + 80, 375 + 30);
circle(20, 10, 815 + 80, 365 + 30);
circle(20, 10, 820 + 80, 360 + 30);
circle(20, 10, 820 + 80, 345 + 30);
circle(20, 10, 790 + 80, 345 + 30);
circle(20, 10, 805 + 80, 340 + 30); // Translated last circle






circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80+70, 360 + 10);
circle(20, 10, 805 + 80+70, 355 + 10);
circle(20, 10, 810 + 80+70, 365 + 10);
circle(20, 10, 805 + 80+70, 375 + 10);
circle(20, 10, 815 + 80+70, 365 + 10);
circle(20, 10, 820 + 80+70, 360 + 10);
circle(20, 10, 820 + 80+70, 345 + 10);
circle(20, 10, 790 + 80+70, 345 + 10);
circle(20, 10, 805 + 80+70, 340 + 10); // Translated last circle



    circle(20,10,800,350);

    circle(20,10,790,360);
 circle(20,10,805,355);
 circle(20,10,810,365);
 circle(20,10,805,375);
 circle(20,10,815,365);
 circle(20,10,820,360);
  circle(20,10,820,345);
   circle(20,10,790,345);
    circle(20,10,805,340);





glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370 + 120 + 90 + 200, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370 + 120 + 90 + 200, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370 + 120 + 90 + 200, 330);
glVertex2f(160 + 370 + 120 + 90 + 200, 330);    // Vertex 4 (bottom left)
glEnd();

glPushMatrix();  // Save the current transformation matrix
//glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix




//last traingle tree

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix







//tree last er agehr ta

    //tree paitentence


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160+35 + 370+290, 380);    // Vertex 1 (top left)
glVertex2f(180+35 + 370+290, 380);    // Vertex 2 (upper left)
glVertex2f(180+35 + 370+290, 330);
glVertex2f(160 +35 + 370+290, 330);    // Vertex 4 (bottom left)
glEnd();

    drawCircle5(640 +200, 390, 7);  // Translated x position by +370
 drawCircle5(650+200, 400, 7);  // Translated x position by +370
drawCircle5(645+200, 410, 7);  // Translated x position by +370
drawCircle5(665+200, 420, 7);  // Translated x position by +370

drawCircle5(675+200, 410, 7);  // Translated x position by +370
drawCircle5(685+200, 400, 7);  // Translated x position by +370
drawCircle5(685+200, 390, 7);  // Translated x position by +370

drawCircle5(685+200, 395, 7);  // Translated x position by +370
drawCircle5(660+200, 380, 7);  // Translated x position by +370
drawCircle5(670+200, 380, 7);  // Translated x position by +370
drawCircle5(665+200, 430, 7);  // Translated x position by +370

//tree adjustments
drawCircle5(665+200+80, 380,10);  // Translated x position by +370
drawCircle5(665+200+80, 390,10);  // Translated x position by +370
drawCircle5(665+200+80, 400,10);  // Translated x position by +370
//circle(30,20,665+200, 390);  // Translated x position by +370
drawCircle5(665+200, 370, 7);  // Translated x position by +370
drawCircle5(665-150, 370, 7);  // Translated x position by +370
drawCircle5(665-100, 370, 7);  // Translated x position by +370







//village


    glBegin(GL_POLYGON);
glColor3f(0.49, 0.431, 0.088); // Color for the polygon
glVertex2f(0,330);    // Vertex 1 (top left)
glVertex2f(1000,330);    // Vertex 2 (upper left)
glVertex2f(1000,230);
glVertex2f(0,230);


glEnd();




    glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(260,320);    // Vertex 2 (upper left)
glVertex2f(280,280);
glVertex2f(100,280);
glEnd();



//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();



    glBegin(GL_TRIANGLES);
glColor3f(0.337, 0.251, 0.89); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(30,280);    // Vertex 2 (upper left)
glVertex2f(100,280);
glEnd();


    glBegin(GL_POLYGON);
glColor3f(0.18, 0.125, 0.529); // Color for the polygon
glVertex2f(40,280);    // Vertex 1 (top left)
glVertex2f(95,280);    // Vertex 2 (upper left)
glVertex2f(95,240);
glVertex2f(40,240);
glEnd();

    glBegin(GL_POLYGON);
glColor3f(0.616, 0.573, 0.902); // Color for the polygon
glVertex2f(95,280);    // Vertex 1 (top left)
glVertex2f(95,240);    // Vertex 2 (upper left)
glVertex2f(270,240);
glVertex2f(270,280);
glEnd();




  glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0); // Color for the lines

    // Draw 20 vertical lines horizontally by adjusting the x-coordinate
    for (int i = 0; i < 35; i++) {
        float xOffset = i * 5.0; // Increase xOffset by 20 units for each line
        glVertex2f(100 + xOffset, 280);  // Start point of the line (shifted horizontally)
        glVertex2f(100 + xOffset, 240);  // End point of the line (shifted horizontally)
    }

    glEnd();




    glBegin(GL_POLYGON);
glColor3f(0.251, 0.694, 0.949); // Color for the polygon
glVertex2f(30,240);    // Vertex 1 (top left)
glVertex2f(280,240);    // Vertex 2 (upper left)
glVertex2f(280,230);
glVertex2f(30,230);
glEnd();



//house2

glPushMatrix();  // Save the current matrix state

glTranslatef(210.0f, 0.0f, 0.0f);  // Translate by 300 units along the x-axis

// Draw the base of the house (main rectangle)
glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the main structure
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(260, 240);   // Bottom-right corner
glVertex2f(75, 240);    // Bottom-left corner
glEnd();

// Draw the roof (triangle shape)
glBegin(GL_QUADS);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(85, 330);    // Left-top corner of the base
glVertex2f(250, 330);   // Right-top corner of the base
glVertex2f(260, 300); // Peak of the roof
glVertex2f(75, 300); // Peak of the roof
glEnd();

// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 280);  // Top-right of the door
glVertex2f(140, 280);  // Top-left of the door
glEnd();

// Draw a window on the left side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(90, 270);  // Bottom-left of the window
glVertex2f(130, 270); // Bottom-right of the window
glVertex2f(130, 290); // Top-right of the window
glVertex2f(90, 290);  // Top-left of the window
glEnd();

// Draw a window on the right side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(200, 270);  // Bottom-left of the window
glVertex2f(240, 270);  // Bottom-right of the window
glVertex2f(240, 290);  // Top-right of the window
glVertex2f(200, 290);  // Top-left of the window
glEnd();

// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();



// Draw a chimney (small rectangle on the roof)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Chimney color (gray)
glVertex2f(200, 310);    // Bottom-left of the chimney
glVertex2f(215, 310);    // Bottom-right of the chimney
glVertex2f(215, 340);    // Top-right of the chimney
glVertex2f(200, 340);    // Top-left of the chimney
glEnd();




glPopMatrix();  // Restore the previous matrix state
 // Restore the previous matrix state



//house3

 glPushMatrix();  // Save the current matrix state

glTranslatef(410.0f, 0.0f, 0.0f);  // Translate the building along the x-axis

// Draw the main base of the house (trapezoid for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.5, 0.2); // Color for the main structure (greenish)
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner (more inward for a trapezoid shape)
glVertex2f(100, 240);   // Bottom-left corner (more inward for a trapezoid shape)
glEnd();

// Draw a second floor (smaller trapezoid above the main base)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for the second floor (gray)
glVertex2f(115, 280);    // Top-left corner
glVertex2f(245, 280);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner
glVertex2f(100, 240);   // Bottom-left corner
glEnd();

// Draw the roof (sloped roof, larger triangle for the top)
glBegin(GL_POLYGON);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(75, 300);    // Left-top corner of the base
glVertex2f(100, 240);   // Left-bottom corner of the base
glVertex2f(230, 240);   // Right-bottom corner of the base
glVertex2f(260, 300);   // Right-top corner of the base
glEnd();



// Draw a window on the left side (larger rectangle for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.631, 0.82); // Window color (light blue)
glVertex2f(90, 290);  // Bottom-left of the window
glVertex2f(240, 290); // Bottom-right of the window
glVertex2f(240, 270); // Top-right of the window
glVertex2f(90, 270);  // Top-left of the window
glEnd();






// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();




// Draw decorative side walls (for depth)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(75, 300);    // Left-top corner
glVertex2f(100, 240);   // Left-bottom corner
glVertex2f(100, 230);   // Left-bottom corner (lower)
glVertex2f(75, 230);    // Left-top corner (lower)
glEnd();




// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 260);  // Top-right of the door
glVertex2f(140, 260);  // Top-left of the door
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(260, 300);   // Right-top corner
glVertex2f(230, 240);   // Right-bottom corner
glVertex2f(230, 230);   // Right-bottom corner (lower)
glVertex2f(260, 230);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state



glBegin(GL_POLYGON);
glColor3f(0.0, 0.8, 0.0); // Color for side walls
glVertex2f(690, 320);   // Right-top corner
glVertex2f(810, 320);   // Right-bottom corner
glVertex2f(810, 240);   // Right-bottom corner (lower)
glVertex2f(690, 240);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state

circle2(20,10,750,280);
circle3(18,8,750,280);
circle3(18,8,750,280);

//football
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Color for side walls
glVertex2f(750, 320);   // Right-top corner
glVertex2f(750, 240);   // Right-bottom corner
glEnd();


// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685, 305+5);   // Right-top corner
glVertex2f(690, 285+5);   // Slanted point (above the lower part)
glVertex2f(690, 255+5);   // Lower slanted point
glVertex2f(685, 265+5);   // Bottom-right corner
glEnd();

// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690, 300);   // Right-top corner
glVertex2f(710, 300);   // Right-top corner
glVertex2f(710, 260);   // Right-bottom corner
glVertex2f(690, 260);   // Left-bottom corner
glEnd();











// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 260);   // Right-bottom corner (translated)
glVertex2f(690 + 100, 260);   // Left-bottom corner (translated)
glEnd();

// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685 + 100+20, 305 + 5);   // Right-top corner (translated)
glVertex2f(690 + 100+20, 285 + 5);   // Slanted point (above the lower part, translated)
glVertex2f(690 + 100+20, 255 + 5);   // Lower slanted point (translated)
glVertex2f(685 + 100+20, 265 + 5);   // Bottom-right corner (translated)
glEnd();

//tree
circle4(10,20,830,290);
circle4(10,20,830,290);
circle4(10,20,845,290);
circle4(10,20,860,290);
circle4(10,20,875,290);

circle4(10,20,845,300);
circle4(10,20,860,300);


// Draw circles horizontally
for (int i = 0; i < 5; i++) {
    circle4(10, 20, 830 + (i * 15), 290-40);  // Change x by 15 for each iteration, keep y constant at 290
}

// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 10)-40);  // Change y by 10 for each iteration, keep x constant at 845
}



// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 20)-40);  // Change y by 10 for each iteration, keep x constant at 845
}


circle4(15,30,920,290);
circle4(10,20,920,290);
circle4(12,40,935,290);
circle4(8,35,950,290);
circle4(15,40,965,290);

circle4(10,20,935,300);
circle4(10,20,950,300);


circle4(15,15,920,250);
circle4(10,20,920,250);
circle4(12,40,935,250);
circle4(8,35,950,250);
circle4(9,20,965,250);

circle4(10,7,935,260);
circle4(10,5,950,260);


//flower
      // Draw the first polygon (yellow side wall)
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);  // Yellow color
        glVertex2f(0 , 230);   // Right-top corner
        glVertex2f(1000 , 230);   // Slanted point (above the lower part)
        glVertex2f(1000 , 200);   // Lower slanted point
        glVertex2f(0 , 200);   // Bottom-right corner
        glEnd();


//230-200

   for (int i = 0; i < 32; i++) {
        float xOffset = i * 30.0f;  // Shift the polygons and circles horizontally by 55 units



        // Draw the second polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(30 + xOffset, 210);   // Right-top corner
        glVertex2f(32 + xOffset, 212);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the third polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(40 + xOffset, 216);   // Right-top corner
        glVertex2f(42 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the fourth polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(50 + xOffset, 216);   // Right-top corner
        glVertex2f(52 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the circles with different colors
        randomColor();  // Assign a random color for the first circle
        drawCircle1(31 + xOffset, 211, 2.5);

        randomColor();  // Assign a random color for the second circle
        drawCircle1(41 + xOffset, 215, 2.5);

        randomColor();  // Assign a random color for the third circle
        drawCircle1(51 + xOffset, 215, 2.5);
    }



         glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(15, 215);   // Right-top corner
        glVertex2f(17 , 217);   // Slanted point
        glVertex2f(17 ,200);   // Lower slanted point
        glVertex2f(15, 200);   // Bottom-right corner
        glEnd();





         glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);  // Blue color
        glVertex2f(13, 222);   // Right-top corner
        glVertex2f(19 , 222);   // Slanted point
        glVertex2f(19 ,217);   // Lower slanted point
        glVertex2f(13, 217);   // Bottom-right corner
        glEnd();








         // Draw the polygons horizontally with a loop
    for (int i = 0; i < 32; i++) {  // 10 instances, change as needed
        float xOffset = i * 60.0f;  // Horizontal offset for each polygon

        // Draw the first polygon with a random color
        randomColor();  // Assign a random color for the polygon
        glBegin(GL_POLYGON);
        glVertex2f(15 + xOffset, 715);   // Right-top corner
        glVertex2f(17 + xOffset, 717);   // Slanted point
        glVertex2f(17 + xOffset, 700);   // Lower slanted point
        glVertex2f(15 + xOffset, 700);   // Bottom-right corner
        glEnd();

        // Draw the second polygon with a random color
        randomColor();  // Assign a random color for the second polygon
        glBegin(GL_POLYGON);
        glVertex2f(13 + xOffset, 722);   // Right-top corner
        glVertex2f(19 + xOffset, 722);   // Slanted point
        glVertex2f(19 + xOffset, 717);   // Lower slanted point
        glVertex2f(13 + xOffset, 717);   // Bottom-right corner
  glEnd();


    }




//0-100 dhankhet
    glBegin(GL_POLYGON);
        glColor3f(0, 1.0, 0.0);  // Blue color
        glVertex2f(0, 0);   // Right-top corner
        glVertex2f(0 , 100);   // Slanted point
        glVertex2f(1000 ,100);   // Lower slanted point
        glVertex2f(1000, 0);   // Bottom-right corner
        glEnd();

        //dhan
 for (int i = 0; i < 100; i++) {
    float offsetX = i * 80.0f;  // Increment the x-offset to move along the x-axis

    glBegin(GL_POLYGON);
        glColor3f(0.722, 0.408, 0.051);  // Yellow color
        glVertex2f(0 + offsetX, 100);   // Right-top corner, shifted by offsetX
        glVertex2f(5 + offsetX, 100);   // Slanted point (above the lower part), shifted by offsetX
        glVertex2f(45 + offsetX, 0);   // Lower slanted point, shifted by offsetX
        glVertex2f(40 + offsetX, 0);   // Bottom-right corner, shifted by offsetX
    glEnd();
}







for (int j = 0; j < 8; j++) {  // Loop to draw 5 times along the y-axis
    float offsetY = j * -15.0f;  // Increment the y-offset for each iteration

    for (int i = 0; i < 100; i++) {
        float offsetX = i * 15.0f; // Increment the x-offset to move along the x-axis

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(1 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(5 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();
    }
}


//manush
glPopMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(40.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(140.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(90.0f, 40.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();



//traccter 1
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+s , 70);   // Right-top corner
        glVertex2f(30+s , 70);   // Slanted point (above the lower part)
        glVertex2f(30+s , 50);   // Lower slanted point
        glVertex2f(20+s , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+s , 68);   // Right-top corner
        glVertex2f(28+s , 68);   // Slanted point (above the lower part)
        glVertex2f(28+s , 52);   // Lower slanted point
        glVertex2f(22+s , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);  // Yellow color
        glVertex2f(10+s , 50);   // Right-top corner
        glVertex2f(50+s , 50);   // Slanted point (above the lower part)
        glVertex2f(50+s , 20);   // Lower slanted point
        glVertex2f(10+s , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+s,20,8);
drawCircle2(21+s,20,5);


drawCircle(41+s,20,8);
drawCircle2(41+s,20,5);




//traccter 2
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+400+ok , 70);   // Right-top corner
        glVertex2f(30+400+ok , 70);   // Slanted point (above the lower part)
        glVertex2f(30+400+ok , 50);   // Lower slanted point
        glVertex2f(20+400+ok , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+400+ok , 68);   // Right-top corner
        glVertex2f(28+400+ok , 68);   // Slanted point (above the lower part)
        glVertex2f(28+400+ok , 52);   // Lower slanted point
        glVertex2f(22+400+ok , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.5, 0.5);  // Yellow color
        glVertex2f(10+400+ok , 50);   // Right-top corner
        glVertex2f(50+400+ok , 50);   // Slanted point (above the lower part)
        glVertex2f(50+400+ok , 20);   // Lower slanted point
        glVertex2f(10+400+ok , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+400+ok,20,8);
drawCircle2(21+400+ok,20,5);


drawCircle(41+400+ok,20,8);
drawCircle2(41+400+ok,20,5);














//tracker2



 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+10+600+si , 70);   // Right-top corner
        glVertex2f(30+10+600+si , 70);   // Slanted point (above the lower part)
        glVertex2f(30+10+600+si , 50);   // Lower slanted point
        glVertex2f(20+10+600+si , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+10+600+si , 68);   // Right-top corner
        glVertex2f(28+10+600+si , 68);   // Slanted point (above the lower part)
        glVertex2f(28+10+600+si , 52);   // Lower slanted point
        glVertex2f(22+10+600+si , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 1.0);  // Yellow color
        glVertex2f(10+600+si , 50);   // Right-top corner
        glVertex2f(50+600+si , 50);   // Slanted point (above the lower part)
        glVertex2f(50+600+si , 20);   // Lower slanted point
        glVertex2f(10+600+si , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+600+si,20,8);
drawCircle2(21+600+si,20,5);


drawCircle(41+600+si,20,8);
drawCircle2(41+600+si,20,5);

//jomi line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 100);   // Right-top corner
        glVertex2f(1000 , 100);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 200);   // Right-top corner
        glVertex2f(1000 , 200);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 230);   // Right-top corner
        glVertex2f(1000 , 230);    // Bottom-right corner
        glEnd();







    //100-200

    glBegin(GL_POLYGON);
        glColor3f(0.941, 0.773, 0.153);  // Yellow color
        glVertex2f(0 , 199);   // Right-top corner
        glVertex2f(1000 , 199);   // Slanted point (above the lower part)
        glVertex2f(1000, 100);   // Lower slanted point
        glVertex2f(0 , 100);   // Bottom-right corner
        glEnd();




        //zar
            for (int i = 0; i < 30; i++) {
        // Draw the first set of circles
        drawCirclez(10 + i * 54, 180, 5);
        drawCirclez(10 + i *54, 175, 5);

        // Draw the second set of circles
        drawCirclez(20 + i * 54, 180, 9);
        drawCirclez(20 + i * 54, 175, 9);

        // Draw the third set of circles
        drawCirclez(30 + i * 54, 180, 5);
        drawCirclez(30 + i * 54, 175, 5);

        // Draw the fourth set of circles
        drawCirclez(45 + i * 54, 180, 11);
        drawCirclez(45 + i * 54, 175, 11);

        // Draw the fifth set of circles
        drawCirclez(55 + i * 54, 180, 5);
        drawCirclez(55 + i * 54, 175, 5);
    }

//rasta
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(0, 173);  // Bottom-left corner of the left shutter
    glVertex2f(1000, 173);  // Bottom-right corner of the left shutter
    glVertex2f(1000, 153);  // Top-right corner of the left shutter
    glVertex2f(0, 153);  // Top-left corner of the left shutter
glEnd();



   // Draw the first part of the house (Yellow)
glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);  // Yellow color
    glVertex2f(30 , 175);   // Right-top corner
    glVertex2f(80 , 175);   // Slanted point (above the lower part)
    glVertex2f(85, 150);    // Lower slanted point
    glVertex2f(25 , 150);   // Bottom-right corner
glEnd();

// Draw the second part of the house (Red)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color
    glVertex2f(30 , 150);   // Right-top corner
    glVertex2f(80 , 150);   // Slanted point (above the lower part)
    glVertex2f(80, 120);    // Lower slanted point
    glVertex2f(30 , 120);   // Bottom-right corner
glEnd();

// Draw the left window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(35 , 145);   // Right-top corner
    glVertex2f(40 , 145);   // Slanted point (above the lower part)
    glVertex2f(40, 130);    // Lower slanted point
    glVertex2f(35 , 130);   // Bottom-right corner
glEnd();

// Draw the right window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(70 , 145);   // Right-top corner
    glVertex2f(75 , 145);   // Slanted point (above the lower part)
    glVertex2f(75, 130);    // Lower slanted point
    glVertex2f(70 , 130);   // Bottom-right corner
glEnd();

// Now, let's draw the door
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45 , 120+30);   // Right-top corner (starting point for the door)
    glVertex2f(65 , 120+30);   // Top-right corner
    glVertex2f(65, 80+30+8);     // Bottom-right corner
    glVertex2f(45 , 80+30+8);    // Bottom-left corner
glEnd();






// house 2
// Apply translation to shift the house by 130 units along the X-axis
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 80 units along the X-axis
glTranslatef(80.0f, 32.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);  // Orange color for the roof
    glVertex2f(40+20 , 200);   // Top peak of the roof
    glVertex2f(100+20 , 175);  // Bottom-right corner of the roof
    glVertex2f(0 , 175);       // Bottom-left corner of the roof
glEnd();

// Draw the body of the house (Rectangle, different proportions)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the body of the house
    glVertex2f(20 , 175);      // Bottom-left corner
    glVertex2f(90 , 175);      // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner (lower position)
    glVertex2f(20 , 100);      // Top-left corner
glEnd();

// Draw the left window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(30 , 150);      // Top-left corner
    glVertex2f(50 , 150);      // Top-right corner
    glVertex2f(50, 130);       // Bottom-right corner
    glVertex2f(30 , 130);      // Bottom-left corner
glEnd();

// Draw the right window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(60 , 150);      // Top-left corner
    glVertex2f(80 , 150);      // Top-right corner
    glVertex2f(80, 130);       // Bottom-right corner
    glVertex2f(60 , 130);      // Bottom-left corner
glEnd();

// Draw the door (Wider door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45 , 100+50);       // Top-left corner of the door
    glVertex2f(65 , 100+50);       // Top-right corner of the door
    glVertex2f(65, 50+50);         // Bottom-right corner of the door
    glVertex2f(45 , 50+50);        // Bottom-left corner of the door
glEnd();

// Restore the previous transformation matrix
glPopMatrix();





//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 160 units along the X-axis
glTranslatef(160.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new slanted roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color for the roof
    glVertex2f(20, 200);       // Left peak of the roof (Y=200)
    glVertex2f(100, 200);      // Right peak of the roof (Y=200)
    glVertex2f(90, 175);       // Right-bottom corner of the roof (Y=175)
    glVertex2f(30, 175);       // Left-bottom corner of the roof (Y=175)
glEnd();

// Draw the body of the house (Rectangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.9, 0.0);  // Green color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner (Y=175)
    glVertex2f(90, 175);       // Bottom-right corner (Y=175)
    glVertex2f(90, 100);       // Top-right corner (Y=100)
    glVertex2f(30, 100);       // Top-left corner (Y=100)
glEnd();

// Draw the left window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(40, 150);       // Top-left corner (Y=150)
    glVertex2f(60, 150);       // Top-right corner (Y=150)
    glVertex2f(60, 130);       // Bottom-right corner (Y=130)
    glVertex2f(40, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the right window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(60, 150);       // Top-left corner (Y=150)
    glVertex2f(80, 150);       // Top-right corner (Y=150)
    glVertex2f(80, 130);       // Bottom-right corner (Y=130)
    glVertex2f(60, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the door (Smaller door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.75, 0.0);  // Brown color for the door
    glVertex2f(50, 100+40+10);       // Top-left corner of the door (Y=100)
    glVertex2f(70, 100+40+10);       // Top-right corner of the door (Y=100)
    glVertex2f(70, 50+40+10);        // Bottom-right corner of the door (Y=50)
    glVertex2f(50, 50+40+10);        // Bottom-left corner of the door (Y=50)
glEnd();

// Draw a chimney (Small rectangle on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 210-14);       // Bottom-left corner of the chimney (Y=205)
    glVertex2f(70, 210-14);       // Bottom-right corner of the chimney (Y=205)
    glVertex2f(70, 225);       // Top-right corner of the chimney (Y=225)
    glVertex2f(60, 225);       // Top-left corner of the chimney (Y=225)
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 260 units along the X-axis
glTranslatef(230.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the curved roof (Bezier-style shape for smooth curves)
glBegin(GL_POLYGON);
    glColor3f(0.9, 0.0, 0.0);  // Deep Red color for the roof
    glVertex2f(20-8, 180);       // Left peak of the roof
    glVertex2f(40-8, 220);       // Left-top curve of the roof
    glVertex2f(100-8, 220);      // Right-top curve of the roof
    glVertex2f(120-8, 170);      // Right peak of the roof
    glVertex2f(100-8, 154);      // Right-bottom corner of the roof
    glVertex2f(40-8, 154);       // Left-bottom corner of the roof
glEnd();

// Draw the body of the house (Rounded corners for a soft look)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.9, 0.4);  // Light Yellow color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner
    glVertex2f(90, 175);       // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner
    glVertex2f(30, 100);       // Top-left corner
glEnd();

// Draw the left window (Rounded square for elegance)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Bright Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        // Adjusting left window position (radius = 15, x = 50, y = 140)
        glVertex2f(60 + cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();



// Draw the door (Rounded top with a handle)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.0);  // Brown color for the door
    glVertex2f(50, 100);       // Top-left corner of the door
    glVertex2f(70, 100);       // Top-right corner of the door
    glVertex2f(70, 125);        // Bottom-right corner of the door
    glVertex2f(50, 125);        // Bottom-left corner of the door
glEnd();

// Draw the door handle (Small circle on the right side of the door)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.0);  // Yellow color for the handle
    for (float angle = 0; angle <= 360; angle += 1.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(60 + cos(rad) * 2, 75 + sin(rad) * 2); // Circular handle
    }
glEnd();

// Draw a chimney (Decorative chimney on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 205);       // Bottom-left corner of the chimney
    glVertex2f(65, 205);       // Bottom-right corner of the chimney
    glVertex2f(65, 225);       // Top-right corner of the chimney
    glVertex2f(60, 225);       // Top-left corner of the chimney
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house

// Draw the chimney base (original brown)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(400 - 80, 190);  // Bottom-left corner of the chimney
    glVertex2f(550 - 80, 190);  // Bottom-right corner of the chimney
    glVertex2f(550 - 80, 100);  // Top-right corner of the chimney
    glVertex2f(400 - 80, 100);  // Top-left corner of the chimney
glEnd();

// Draw the chimney top (darker color for a more realistic look)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.9);  // Darker color for the top of the chimney
    glVertex2f(400 - 70, 180);  // Bottom-left corner of the chimney top
    glVertex2f(530 - 70, 180);  // Bottom-right corner of the chimney top
    glVertex2f(530 - 70, 110);  // Top-right corner of the chimney top
    glVertex2f(400 - 70, 110);  // Top-left corner of the chimney top
glEnd();

// --- Draw the Window with Shutters ---
// Left Window
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(435+ cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();

// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-25, 145-17);  // Bottom-left corner of the left shutter
    glVertex2f(465-25, 145-17);  // Bottom-right corner of the left shutter
    glVertex2f(465-25, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-25, 170-17);  // Top-left corner of the left shutter
glEnd();

// Right Window (same as left)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(355 + cos(rad) * 15, 140 + sin(rad) * 15); // Right window
    }
glEnd();

// Right window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(505-155, 145-17);  // Bottom-left corner of the right shutter
    glVertex2f(515-155, 145-17);  // Bottom-right corner of the right shutter
    glVertex2f(515-155, 170-17);  // Top-right corner of the right shutter
    glVertex2f(505-155, 170-17);  // Top-left corner of the right shutter
glEnd();
// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-75, 125-17);  // Bottom-left corner of the left shutter
    glVertex2f(485-75, 125-17);  // Bottom-right corner of the left shutter
    glVertex2f(485-75, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-75, 170-17);  // Top-left corner of the left shutter
glEnd();



//house

// Translate the entire house upwards or downwards along the Y-axis

    glTranslatef(-20.0f, -20.0f, 0.0f);  // Translate the house 50 units upwards along the Y-axis

    // Draw the base of the house (rectangle)
    glColor3f(0.8f, 0.4f, 0.2f);  // Brown color for the house
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the base of the house
    glVertex2f(500, 120);
    glVertex2f(600, 120);
    glVertex2f(600, 180);
    glVertex2f(500, 180);
    glEnd();  // End drawing the rectangle

    // Draw the roof of the house (triangle)
    glColor3f(0.6f, 0.2f, 0.2f);  // Dark red color for the roof
    glBegin(GL_TRIANGLES);  // Begin drawing the triangle for the roof
    glVertex2f(500, 180);  // Left corner of the roof
    glVertex2f(600, 180);  // Right corner of the roof
    glVertex2f(550, 210);  // Peak of the roof
    glEnd();  // End drawing the triangle

    // Draw the door (rectangle)
    glColor3f(0.5f, 0.3f, 0.1f);  // Dark brown color for the door
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the door
    glVertex2f(535, 120);
    glVertex2f(565, 120);
    glVertex2f(565, 150);
    glVertex2f(535, 150);
    glEnd();  // End drawing the rectangle

    // Draw windows (rectangles)
    glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for windows
    glBegin(GL_QUADS);  // Left window
    glVertex2f(510, 150);
    glVertex2f(530, 150);
    glVertex2f(530, 170);
    glVertex2f(510, 170);
    glEnd();  // End drawing the left window

    glBegin(GL_QUADS);  // Right window
    glVertex2f(570, 150);
    glVertex2f(590, 150);
    glVertex2f(590, 170);
    glVertex2f(570, 170);
    glEnd();  // End drawing the right window




    //well



       // Translate the entire well 100 units to the right (along the X-axis)
    glTranslatef(80.0f, 0.0f, 0.0f);  // Move the well to the right

    // Draw the base of the well (circle)
    glColor3f(0.5f, 0.5f, 0.5f);  // Gray color for the well's base
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the base
    glVertex2f(550, 120);  // Center of the circle (well's base)
    const int numi_segments = 100;  // Number of segments to make the circle smooth
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the circle's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the circle's edge
        glVertex2f(x + 550, y + 135);  // Vertex of the circle
    }
    glEnd();  // End drawing the base circle

    // Draw the walls of the well (rectangle)
    glColor3f(0.3f, 0.3f, 0.3f);  // Dark gray color for the well's walls
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the walls of the well
    glVertex2f(535, 130);  // Bottom-left corner
    glVertex2f(565, 130);  // Bottom-right corner
    glVertex2f(565, 160);  // Top-right corner
    glVertex2f(535, 160);  // Top-left corner
    glEnd();  // End drawing the rectangle

    // Draw the top of the well (roof, another circle)
    glColor3f(0.0f, 0.0f, 1.0f);  // Dark brown color for the roof
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
    glVertex2f(550, 170);  // Center of the roof circle
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the roof's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the roof's edge
        glVertex2f(x + 550, y + 160);  // Vertex of the roof circle
    }
    glEnd();  // End drawing the roof circle

//kher

glColor3f(0.0f, 0.0f, 1.0f);  // Blue color for the roof
glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
glVertex2f(620, 170);  // Center of the roof circle (original position)

// New translation value for the Y-axis (roof)
float translationY = 50.0f;  // Translate 50 units up (can change this value)
float additionalTranslationY = 5.0f;  // Additional 5 units translation
float newCenterY = 120 + translationY + additionalTranslationY;  // New Y position after translation

// New radius value for a wider roof
float raddius = 31.0f;  // Increase the radius to make the circle wider

// Loop to create the circle for the roof
const int numq_segments = 100;  // Number of segments for smoothness
for (int i = 0; i <= numq_segments; i++) {
    float theta = 2.0f * 3.1415926f * float(i) / float(numq_segments);  // Calculate angle
    float x = raddius * cosf(theta);  // X coordinate for the roof's edge
    float y = raddius * sinf(theta);  // Y coordinate for the roof's edge
    glVertex2f(x + 620, y + newCenterY);  // Vertex of the roof circle with translated Y-coordinate
}
glEnd();  // End drawing the roof circle

// Set the color for the house body (brown)
glColor3f(0.6f, 0.3f, 0.0f);  // Brown color for the house body
glBegin(GL_QUADS);  // Begin drawing the rectangle for the body

// The body of the house (a smaller rectangle)
float houseWidth = 60.0f;  // Further reduced width of the house
float houseHeight = 60.0f;  // Further reduced height of the house

// Bottom-left corner of the house body (relative to the roof center)
float houseBottomLeftX = 620 - houseWidth / 2;
float houseBottomLeftY = newCenterY - raddius - houseHeight + 50.0f;  // Translate 50 units up (adjusted Y position)

// Bottom-right corner of the house body
float houseBottomRightX = houseBottomLeftX + houseWidth;
float houseBottomRightY = houseBottomLeftY;

// Top-left corner of the house body
float houseTopLeftX = houseBottomLeftX;
float houseTopLeftY = houseBottomLeftY + houseHeight;

// Top-right corner of the house body
float houseTopRightX = houseBottomRightX;
float houseTopRightY = houseTopLeftY;

// Define the 4 corners of the rectangle (house body)
glVertex2f(houseBottomLeftX, houseBottomLeftY);  // Bottom-left
glVertex2f(houseBottomRightX, houseBottomRightY);  // Bottom-right
glVertex2f(houseTopRightX, houseTopRightY);  // Top-right
glVertex2f(houseTopLeftX, houseTopLeftY);  // Top-left

glEnd();  // End drawing the house body

// Draw the window (small rectangle)
glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for the window
glBegin(GL_QUADS);  // Begin drawing the window

float windowWidth = 15.0f;  // Reduced width of the window
float windowHeight = 15.0f;  // Reduced height of the window

// Bottom-left corner of the window
float windowBottomLeftX = 627 - houseWidth / 4;  // Position window to the left of center
float windowBottomLeftY = houseTopLeftY - 25.0f;  // Positioned a little below the roof

// Bottom-right corner of the window
float windowBottomRightX = windowBottomLeftX + windowWidth;
float windowBottomRightY = windowBottomLeftY;

// Top-left corner of the window
float windowTopLeftX = windowBottomLeftX;
float windowTopLeftY = windowBottomLeftY + windowHeight;

// Top-right corner of the window
float windowTopRightX = windowBottomRightX;
float windowTopRightY = windowTopLeftY;

// Define the 4 corners of the window rectangle
glVertex2f(windowBottomLeftX, windowBottomLeftY);  // Bottom-left
glVertex2f(windowBottomRightX, windowBottomRightY);  // Bottom-right
glVertex2f(windowTopRightX, windowTopRightY);  // Top-right
glVertex2f(windowTopLeftX, windowTopLeftY);  // Top-left

glEnd();  // End drawing the window

// Draw the door (larger rectangle)
glColor3f(0.4f, 0.2f, 0.0f);  // Dark brown color for the door
glBegin(GL_QUADS);  // Begin drawing the door

float doorWidth = 20.0f;  // Reduced width of the door
float doorHeight = 40.0f;  // Reduced height of the door

// Bottom-left corner of the door (centered at the bottom)
float doorBottomLeftX = 620 - doorWidth / 2;
float doorBottomLeftY = houseBottomLeftY;

// Bottom-right corner of the door
float doorBottomRightX = doorBottomLeftX + doorWidth;
float doorBottomRightY = doorBottomLeftY;

// Top-left corner of the door
float doorTopLeftX = doorBottomLeftX;
float doorTopLeftY = doorBottomLeftY + doorHeight;

// Top-right corner of the door
float doorTopRightX = doorBottomRightX;
float doorTopRightY = doorTopLeftY;

// Define the 4 corners of the door rectangle
glVertex2f(doorBottomLeftX, doorBottomLeftY);  // Bottom-left
glVertex2f(doorBottomRightX, doorBottomRightY);  // Bottom-right
glVertex2f(doorTopRightX, doorTopRightY);  // Top-right
glVertex2f(doorTopLeftX, doorTopLeftY);  // Top-left

glEnd();  // End drawing the door



float translationX = 100.0f;  // Translation value on the X-axis

glColor3f(0.5f, 0.0f, 0.9f);

// Begin drawing a rectangle (structure) using GL_QUADS
glBegin(GL_QUADS);
    // Define the four vertices of the rectangle, translating them by `translationX`
    glVertex2f(760.0f + translationX, 120.0f); // bottom-left corner
    glVertex2f(840.0f + translationX, 120.0f); // bottom-right corner
    glVertex2f(840.0f + translationX, 190.0f); // top-right corner
    glVertex2f(760.0f + translationX, 190.0f); // top-left corner
glEnd();

// Draw a complex structure

// Set color for the base rectangle (red)
glColor3f(1.0f, 0.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 130.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 130.0f); // bottom-right corner
    glVertex2f(830.0f + translationX, 170.0f); // top-right corner
    glVertex2f(770.0f + translationX, 170.0f); // top-left corner
glEnd();

// Set color for the top triangle (blue)
glColor3f(0.7f, 0.6f, 0.4f);
glBegin(GL_TRIANGLES);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // peak of the triangle
glEnd();

// Set color for another rectangle (green)
glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(800.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // top-right corner
    glVertex2f(770.0f + translationX, 200.0f); // top-left corner
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(160+740, 130);  // Bottom-left of the door
glVertex2f(140+740, 130);  // Bottom-right of the door
glVertex2f(140+740, 170);  // Top-right of the door
glVertex2f(160+740, 170);  // Top-left of the door
glEnd();

//cricket
drawCircle7(755,150,15);
drawCircle7(730,150,15);
drawCircle7(775,150,15);
drawCircle7(710,150,15);
drawCircle7(795,150,15);
drawCircle7(805,150,15);


drawCircle5(755,150,14);
drawCircle5(730,150,14);
drawCircle5(775,150,14);
drawCircle5(710,150,14);
drawCircle5(795,150,14);
drawCircle5(805,150,14);
glColor3f(1.0f, 1.0f, 0.0f); // Color the polygon yellow (you can change this)
glBegin(GL_QUADS);

// Define the four vertices of the polygon (you can adjust the coordinates to fit your design)
glVertex2f(720.0f, 140.0f); // bottom-left corner
glVertex2f(785.0f, 140.0f); // bottom-right corner
glVertex2f(785.0f, 160.0f); // top-right corner
glVertex2f(720.0f, 160.0f); // top-left corner

glEnd();




bird();
bird1();




    glutSwapBuffers();




}



void drawScene6()
{


glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();
//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen
    glLoadIdentity(); // Reset the drawing perspective
    gluOrtho2D(0.0, 1000.0, 0.0, 1000.0); // Set orthographic projection range
    glMatrixMode(GL_MODELVIEW); // Set the matrix mode to modelview for 2D drawing

    // Drawing the sky (a blue rectangle)
    glBegin(GL_POLYGON);
    glColor3f(0.122, 0.635, 1); // Sky color (light blue)
    glVertex2f(0, 800); // Bottom-left corner
    glVertex2f(0, 1000); // Top-left corner
    glVertex2f(1000, 1000); // Top-right corner
    glVertex2f(1000, 800); // Bottom-right corner
    glEnd();

    glPushMatrix();
    glTranslatef(500.0, 900.0, 0); // Move to center of the window (500, 900)

    // Draw sun halo (glowing effect)
    float radius = 25.0f; // Radius of the sun
    int num_segments = 100; // Number of segments to approximate the circle
    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.2f, 0.3f); // Light yellow with transparency for a soft glow
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * 1.3f * cos(theta); // Make halo larger than the sun
        float y = radius * 1.3f * sin(theta); // Make halo larger than the sun
        glVertex2f(x, y); // Plot the halo vertex
    }
    glEnd();

    // Draw the sun (gradient yellow circle)
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * cos(theta); // X position of each vertex
        float y = radius * sin(theta); // Y position of each vertex

        // Create a gradient from yellow to light orange for a glowing effect
        float r = 1.0f - 0.6f * (float(i) / float(num_segments)); // Red decreases over time
        float g = 1.0f - 0.4f * (float(i) / float(num_segments)); // Green decreases over time
        float b = 0.333f; // Fixed blue value for the sun color

        glColor3f(r, g, b); // Apply the gradient color
        glVertex2f(x, y); // Plot the vertex
    }
    glEnd();

    // Draw sun rays for extra effect
 glLineWidth(2.5); // Set line width for rays
glColor3f(1.0f, 0.9f, 0.2f); // Light yellow color for the rays

float ray_length = 30.0f; // Adjust the length of the rays

for (int i = 0; i < 12; i++) { // Drawing 12 rays
    float angle = (2.0f * 3.1415926f * float(i)) / 12.0f; // Angle for each ray
    float x_start = radius * cos(angle); // X start point of the ray
    float y_start = radius * sin(angle); // Y start point of the ray
    float x_end = (radius + ray_length) * cos(angle); // X end point of the ray (shortened)
    float y_end = (radius + ray_length) * sin(angle); // Y end point of the ray (shortened)

    glBegin(GL_LINES);
    glVertex2f(x_start, y_start); // Starting point of the ray
    glVertex2f(x_end, y_end); // Ending point of the ray
    glEnd();
}


    glPopMatrix();

clouds1();


clouds2();


clouds3();

//plane

  glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 920 ); // Bottom-left corner
    glVertex2f(600+ shifti, 940 ); // Top-left corner
    glVertex2f(680+ shifti, 940 ); // Top-right corner
    glVertex2f(680+ shifti, 920 ); // Bottom-right corner
    glEnd();



       glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(700+ shifti, 960 ); // Bottom-right corner
   glVertex2f(700+ shifti, 920 ); // Top-right corner
    glVertex2f(680+ shifti, 920) ; // Top-right corner

    glEnd();

        glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)

     glVertex2f(680+ shifti, 940 ); // Top-right corner
   glVertex2f(700 + shifti, 940 ); // Top-right corner
   glVertex2f(680 + shifti, 920 ); // Bottom-right corner

    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(640+ shifti, 930 ); // Bottom-left corner
    glVertex2f(650 + shifti, 930 ); // Top-left corner
     glVertex2f(670+ shifti, 890 ); // Bottom-right corner
    glVertex2f(660+ shifti, 890 ); // Top-right corner

    glEnd();

    drawCircle(600.0f + shifti, 930.0f, 10.0f);

  glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 935 ); // Bottom-left corner

    glVertex2f(600 + shifti, 933 ); // Top-left corner
    glVertex2f(680 + shifti, 933 ); // Bottom-right corner

    glVertex2f(680 + shifti, 935 ); // Top-right corner
    glEnd();


// the rocket


    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 890 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
    glVertex2f(90, 830 + shift); // Top-right corner
    glVertex2f(90, 890 + shift); // Bottom-right corner
    glEnd;



      glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 880 + shift); // Bottom-left corner
    glVertex2f(100, 870 + shift); // Top-left corner
    glVertex2f(90, 870 + shift); // Top-right corner
    glVertex2f(90, 880 + shift); // Bottom-right corner
    glEnd;




       glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.5); // Sky color (light blue)
    glVertex2f(100, 860 + shift); // Bottom-left corner
    glVertex2f(100, 850 + shift); // Top-left corner
    glVertex2f(90, 850 + shift); // Top-right corner
    glVertex2f(90, 860 + shift); // Bottom-right corner
    glEnd;




    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(90, 830 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
      glVertex2f(102, 815 + shift); // Top-right corner
       glVertex2f(88, 815 + shift); // Bottom-right corner


    glEnd();

   glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(95, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(92, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(98, 800 + shift); // Top-right corner

    glEnd();



      glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
     glVertex2f(90, 890 + shift); // Bottom-right corner

    glVertex2f(95, 910 + shift); // Top-right corner
     glVertex2f(100, 890 + shift); // Top-left corner

    glEnd();








///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(0,800);
    glVertex2f(100,800);
    glVertex2f(50,850);


    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
     glColor3f(0.416, 0.69, 0.153);
    glVertex2f(20,850);
   glVertex2f(100,800);
    glVertex2f(0,800);

    glEnd();

    //polygon2//
    glBegin(GL_POLYGON);
     glColor3f(0.416, 0.69, 0.153);
    glVertex2f(70,850);
   glVertex2f(100,800);
    glVertex2f(0,800);

    glEnd();


/// hill 2

//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(100,800);
    glVertex2f(200,800);
    glVertex2f(180,835);
    glVertex2f(160,840);
    glVertex2f(155,845);



    glVertex2f(150,840);

   glVertex2f(130,845);

    glVertex2f(120,840);
       glVertex2f(150,835);



    glEnd();



/// hill3

glBegin(GL_POLYGON);
glColor3f(0.157, 0.42, 0.255);
glVertex2f(200, 800);   // Vertex 1
glVertex2f(330, 800);   // Vertex 2
glVertex2f(330, 800);   // Vertex 3 (new point)
glVertex2f(330, 800);   // Vertex 4 (new point)
glVertex2f(310, 860);   // Vertex 5 (new point)
glVertex2f(270, 870);   // Vertex 6 (new point)
glVertex2f(230, 860);   // Vertex 7 (new point)
glVertex2f(200, 800);   // Vertex 8 (new point)
glEnd();






//hill 4

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(330, 800);    // Vertex 1 (top left)
glVertex2f(430, 800);    // Vertex 2 (upper left)
glVertex2f(430, 900);    // Vertex 3 (middle left)
glVertex2f(330, 900);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(330+33, 800);    // Vertex 1 (top left)

glVertex2f(330+33, 900);    // Vertex 3 (middle left)

glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430-33, 800);    // Vertex 2 (upper left)
glVertex2f(430-33, 900);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 825);    // Vertex 2 (upper left)
glVertex2f(330, 825);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 850);    // Vertex 2 (upper left)
glVertex2f(330, 850);    // Vertex 3 (middle left)
glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 875);    // Vertex 2 (upper left)
glVertex2f(330, 875);    // Vertex 3 (middle left)
glEnd();




int x_start = 330, x_end = 430; // X range
int y_start = 800, y_end = 900; // Y range
int horizontal_count = 3;       // Number of polygons horizontally
int vertical_count = 4;         // Number of polygons vertically

// Initial polygon points (given)
float initial_x = 347.0f;
float initial_y = 812.0f; // Corrected initial y value

// Loop to create the polygons
for (int i = 0; i < vertical_count; i++) {
    for (int j = 0; j < horizontal_count; j++) {
        // Calculate x and y positions for each polygon
        float x = initial_x + j * ((x_end - x_start) / horizontal_count);
        float y = initial_y + i * ((y_end - y_start) / vertical_count);

        // Draw the polygon at (x, y)
        glBegin(GL_POLYGON);
        glColor3f(0.125, 0.404, 0.49);  // Green color for the polygon (customize as needed)

        // Define 4 vertices for each polygon, with (x, y) as the center
        glVertex2f(x - 6, y + 5);   // Vertex 1 (top left)
        glVertex2f(x + 6, y + 5);   // Vertex 2 (top right)
        glVertex2f(x + 6, y - 5);   // Vertex 3 (bottom right)
        glVertex2f(x - 6, y - 5);   // Vertex 4 (bottom left)

        glEnd();
    }
}





///dsfdfd
glBegin(GL_POLYGON);
glColor3f(0.89, 0.722, 0.098); // Green color (for the shape)
glVertex2f(430, 800);    // Vertex 1 (top left)
glVertex2f(530, 800);    // Vertex 2 (upper left)
glVertex2f(480, 840);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Green color (for the shape)
glVertex2f(530, 800);    // Vertex 1 (top left)
glVertex2f(580, 800);    // Vertex 2 (upper left)
glVertex2f(555, 850);    // Vertex 3 (middle left)

glEnd();



glBegin(GL_POLYGON);
glColor3ub(34, 5, 34); // Green color (for the shape)
    // Vertex 1 (top left)
glVertex2f(580, 800);    // Vertex 2 (upper left)
glVertex2f(555, 850);
glVertex2f(620, 800);    // Vertex 3 (middle left)

glEnd();


///new byulding

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(620, 800);    // Vertex 1 (top left)
glVertex2f(620, 900);    // Vertex 2 (upper left)
glVertex2f(730, 900);    // Vertex 3 (middle left)
glVertex2f(730, 800);    // Vertex 3 (middle left)

glEnd();




// Park dimensions and configuration
int x_range_start = 620, x_range_end = 720; // X range
int y_range_start = 800, y_range_end = 900; // Y range
int num_polygons_horizontal = 3;            // Number of polygons horizontally
int num_polygons_vertical = 4;              // Number of polygons vertically

// Initial position of the first polygon
float initial_pos_x = 642.0f;
float initial_pos_y = 810.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row = 0; row < num_polygons_vertical; row++) {
    for (int col = 0; col < num_polygons_horizontal; col++) {
        // Calculate X and Y positions for each polygon
        float pos_x = initial_pos_x + col * ((x_range_end - x_range_start) / num_polygons_horizontal);
        float pos_y = initial_pos_y + row * ((y_range_end - y_range_start) / num_polygons_vertical);

        // Draw the polygon at (pos_x, pos_y)
        glBegin(GL_POLYGON);
        glColor3f(0.153, 0.808, 0.961);  // Green color for the polygon (customize as needed)

        // Define 6 vertices for each polygon, with the (pos_x, pos_y) as the center
        glVertex2f(pos_x - 10, pos_y + 10);   // Vertex 1
        glVertex2f(pos_x + 10, pos_y + 10);   // Vertex 2
        glVertex2f(pos_x + 20, pos_y);        // Vertex 3
        glVertex2f(pos_x + 10, pos_y - 10);   // Vertex 4
        glVertex2f(pos_x - 10, pos_y - 10);   // Vertex 5
        glVertex2f(pos_x - 20, pos_y);        // Vertex 6

        glEnd();
    }
}


/// new building


glBegin(GL_POLYGON);
glColor3f(0.89, 0.105, 0.4); // Green color (for the shape)
glVertex2f(730, 800);    // Vertex 1 (top left)
glVertex2f(730, 850);    // Vertex 2 (upper left)
glVertex2f(845, 850);    // Vertex 3 (middle left)
glVertex2f(845, 800);    // Vertex 3 (middle left)

glEnd();

// Park dimensions and configuration
int park_x_start = 720, park_x_end = 820;   // X range for the park area
int park_y_start = 800, park_y_end = 850;   // Y range for the park area
int total_polygons_horizontal = 4;           // Number of polygons horizontally
int total_polygons_vertical = 4;             // Number of polygons vertically

// Initial position of the first polygon
float start_pos_x = 750.0f;
float start_pos_y = 807.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row_index = 0; row_index < total_polygons_vertical; row_index++) {
    for (int col_index = 0; col_index < total_polygons_horizontal; col_index++) {
        // Calculate X and Y positions for each polygon
        float polygon_pos_x = start_pos_x + col_index * ((park_x_end - park_x_start) / total_polygons_horizontal);
        float polygon_pos_y = start_pos_y + row_index * ((park_y_end - park_y_start) / total_polygons_vertical);

        // Draw the polygon at (polygon_pos_x, polygon_pos_y)
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygon (customize as needed)

        // Define 8 vertices for each polygon, with (polygon_pos_x, polygon_pos_y) as the center
        glVertex2f(polygon_pos_x - 6, polygon_pos_y + 3);  // Vertex 1
        glVertex2f(polygon_pos_x + 6, polygon_pos_y + 3);  // Vertex 2
        glVertex2f(polygon_pos_x + 15, polygon_pos_y + 2);   // Vertex 3
        glVertex2f(polygon_pos_x + 15, polygon_pos_y - 2);   // Vertex 4
        glVertex2f(polygon_pos_x + 6, polygon_pos_y - 3);  // Vertex 5
        glVertex2f(polygon_pos_x - 6, polygon_pos_y - 3);  // Vertex 6
        glVertex2f(polygon_pos_x - 15, polygon_pos_y - 2);   // Vertex 7
        glVertex2f(polygon_pos_x - 15, polygon_pos_y + 2);   // Vertex 8

        glEnd();
    }
}


///new obkec


glBegin(GL_POLYGON);
glColor3ub(34, 139, 34);
glVertex2f(845, 800);    // Vertex 1 (top left)
glVertex2f(845, 835);    // Vertex 2 (upper left)
glVertex2f(1000, 835);    // Vertex 3 (middle left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)

glEnd();

drawCircle2(873.0f, 830.0f, 15.0f);

drawCircle2(900.0f, 830.0f, 15.0f);
drawCircle2(930.0f, 830.0f, 18.0f);

drawCircle2(955.0f, 830.0f, 15.0f);
drawCircle2(985.0f, 830.0f, 18.0f);

drawCircle2(1020.0f, 830.0f, 18.0f);

drawCircle3(850.0f, 820.0f, 6.0f);

drawCircle3(860.0f, 820.0f, 6.0f);






//nodi
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,1.0); // Green color (for the shape)
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)
glVertex2f(0, 800);    // Vertex 3 (middle left)

glEnd();

float gadp = 5.0f;  // The gap between objects
float widt = 0.75f;  // The width of each object

// Starting position for the Y-coordinate
float startY = 797.0f;

// Adjust this gap to prevent overlap, assuming your object height is 1.0f
float vert_gap = 4.0f;

for (int j = 0; j < 200; j++) {  // Loop for drawing 200 rows vertically
    for (int i = 0; i < 500; i++) {
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);

        // Calculate the X positions with gap between objects
        float x_offset = (widt + gadp) * i;

        // Calculate the Y position for each row, with a gap between them
        float y_offset = startY - j * vert_gap;  // Adjust Y for each row

        glVertex2f(x_offset, y_offset);
        glVertex2f(x_offset + widt, y_offset);
        glVertex2f(x_offset + widt, y_offset - 1.0f);  // Slightly adjust for the height of the object
        glVertex2f(x_offset, y_offset - 1.0f);  // Slightly adjust for the height of the object

        glEnd();
    }
}



//road
glBegin(GL_POLYGON);
glColor3f(0.541, 0.541, 0.514); // Green color (for the shape)
glVertex2f(0, 700);    // Vertex 1 (top left)
glVertex2f(1000, 700);    // Vertex 2 (upper left)
glVertex2f(1000, 630);    // Vertex 3 (middle left)
glVertex2f(0, 630);    // Vertex 3 (middle left)


glEnd();

float ga = 5.0f;  // The gap between objects
float wi = 4.0f;  // The width of each object

for (int i = 0; i < 150; i++) {
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // Black color (for the shape)

    // Calculate the X position with gap between objects
    float x_offset = (wi + ga) * i;

    glVertex2f(x_offset, 657);    // Vertex 1 (top left)
    glVertex2f(x_offset + wi, 657);    // Vertex 2 (upper right)
    glVertex2f(x_offset + wi, 653);    // Vertex 3 (bottom right)
    glVertex2f(x_offset, 653);    // Vertex 4 (bottom left)

    glEnd();
}



glEnd();





// pillar of bridge
// Set the gap between each pillar
float gap = 100.0f; // You can adjust this value for a bigger or smaller gap between pillars

// Loop to draw multiple pillars along the horizontal axis
for (float xOffset = 0; xOffset < 1200; xOffset += gap) { // Change 300 to the desired number of pillars (adjust as needed)
    // Draw the main pillar body (rectangle-like shape with slight curve)
    glBegin(GL_POLYGON);
    glColor3f(0.541, 0.541, 0.514); // Pillar color
    glVertex2f(10 + xOffset, 630);  // Top left vertex
    glVertex2f(60 + xOffset, 630);  // Top right vertex
    glVertex2f(60 + xOffset, 600);  // Bottom right vertex
    glVertex2f(10 + xOffset, 600);  // Bottom left vertex
    glEnd();

    // Add subtle ridges for texture (details for aesthetics)
    glLineWidth(2.0);
    glColor3f(0.396, 0.263, 0.129); // Dark color for ridges
    for (float y = 610; y <= 620; y += 2) {
        glBegin(GL_LINES);
        glVertex2f(10 + xOffset, y);  // Start from the left side
        glVertex2f(60 + xOffset, y);  // End at the right side
        glEnd();
    }
    glLineWidth(1.0); // Reset line width after the detailing

    // Add a cap to the top of the pillar for extra detail (a rectangle-like top)
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176); // Darker brown color for the cap
    glVertex2f(10 + xOffset, 620);  // Left top of the cap
    glVertex2f(60 + xOffset, 620);  // Right top of the cap
    glVertex2f(60 + xOffset, 630);  // Right side raised for cap
    glVertex2f(10 + xOffset, 630);  // Left side raised for cap
    glEnd();
}



// rail line

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 680);
    glVertex2f(1000, 680);
glEnd();

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 670);
    glVertex2f(1000, 670);
glEnd();


// Number of lines to draw
int numLines = 350; // You can adjust this as needed
float gapi = 4.0f; // Gap between each line

// Loop to draw multiple lines with a gap
for (int i = 0; i < numLines; ++i) {
    float offsetX = i * gapi;  // Increment the x-coordinate by 'gap' each time

    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Set the line color to black

        // Draw the line horizontally, with each line moved by 'offsetX'
        glVertex2f(0 + offsetX, 670); // Starting point of the line
        glVertex2f(0 + offsetX, 680); // End point of the line (100 units to the right)

    glEnd();
}

// rail 3

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 633);
    glVertex2f(1000, 633);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 635);
    glVertex2f(1000, 635);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 636);
    glVertex2f(1000, 637);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 637);
    glVertex2f(1000, 639);
glEnd();

// rail 4

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 700);
    glVertex2f(1000, 700);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 698);
    glVertex2f(1000, 698);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 696);
    glVertex2f(1000, 696);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 694);
    glVertex2f(1000, 694);
glEnd();












//ship 3


 glBegin(GL_POLYGON);
glColor3f(0.318, 0.91, 0.184); // Green color (for the shape)
glVertex2f(850 + sh, 760);    // Vertex 1 (top left)
glVertex2f(950 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(950 + sh, 740);    // Vertex 3 (middle left)
glVertex2f(870 + sh, 740);    // Vertex 3 (middle left)


  glEnd();

 glBegin(GL_POLYGON);
glColor3f(0.737, 0.737, 0.737); // Green color (for the shape)
glVertex2f(880 + sh, 760);    // Vertex 1 (top left)
glVertex2f(940 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(940 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(880 + sh, 780);    // Vertex 3 (middle left)


  glEnd();


   glBegin(GL_POLYGON);
glColor3f(0.737, 0.49, 0.737); // Green color (for the shape)
glVertex2f(920 + sh, 800);    // Vertex 1 (top left)
glVertex2f(930 + sh, 800);    // Vertex 2 (upper left)
glVertex2f(930 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(920 + sh, 780);    // Vertex 3 (middle left)


  glEnd();

   glBegin(GL_POLYGON);
glColor3f(0.737, 0.49, 0.31); // Green color (for the shape)
glVertex2f(900+ sh, 800);    // Vertex 1 (top left)
glVertex2f(910+ sh, 800);    // Vertex 2 (upper left)
glVertex2f(910+ sh, 780);    // Vertex 3 (middle left)
glVertex2f(900+ sh, 780);    // Vertex 3 (middle left)


  glEnd();

  drawCircle2(910.0f + sh , 770.0f, 5.0f);
drawCircle2(930.0f + sh , 770.0f, 5.0f);
drawCircle2(880.0f + sh , 750.0f, 5.0f);
drawCircle2(880.0f + sh , 750.0f, 3.0f);






//ship

glBegin(GL_POLYGON);
glColor3f(1, 0.235, 0); // Green color (for the shape)
glVertex2f(100 + shif, 750);    // Vertex 1 (top left)
glVertex2f(300 + shif, 750);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 730);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 730);    // Vertex 3 (middle left)

  glEnd();


  glBegin(GL_POLYGON);
glColor3f(0.957, 1, 0); // Green color (for the shape)
glVertex2f(110 + shif, 790);    // Vertex 1 (top left)
glVertex2f(290 + shif, 790);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 750);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 750);    // Vertex 3 (middle left)

  glEnd();


   // Define the gap between polygons
    float gapX = 5.0;  // Horizontal gap (between columns)
    float gapY = 6.0;  // Vertical gap (between rows)

    // Size of each polygon (hexagon)
    float radi = 3.0;  // Radius of the hexagon

    // Loop to create 4 vertical and 22 horizontal polygons (grid)
    for (int row = 0; row < 3; row++) {          // Loop through rows (4 rows)
        for (int col = 0; col < 16; col++) {     // Loop through columns (22 columns)
            // Calculate the X and Y offset for each polygon
            float offsetX = 115 + col * (2 * radi + gapX);  // Horizontal offset (including gapX)
            float offsetY = 776 - row * (radi * 2 + gapY);  // Vertical offset (including gapY)

            // Draw the hexagon at the calculated position
            glBegin(GL_POLYGON);
            glColor3f(0.043, 0.58, 0.961);  // White color (for the shape)

            // Calculate the six vertices of the hexagon
            for (int i = 0; i < 8; i++) {
                float angle = i * 2.0 * M_PI / 8;  // Divide 360 degrees by 6 vertices (2π/6)
                float x = offsetX + radi * cos(angle);
                float y = offsetY + radi * sin(angle);

                glVertex2f(x + + shif, y);  // Add the vertex to the polygon
            }

            glEnd();
        }
    }



//ship2

glBegin(GL_POLYGON);
glColor3f(0.831, 0.486, 0.098); // Green color (for the shape)
glVertex2f(500 + shi, 750);    // Vertex 1 (top left)
glVertex2f(700 + shi, 750);    // Vertex 2 (upper left)
glVertex2f(680 + shi, 720);    // Vertex 3 (middle left)
glVertex2f(500 + shi, 720);    // Vertex 3 (middle left)

  glEnd();


glBegin(GL_POLYGON);
glColor3f(0.027, 0.686, 0.941); // Green color (for the shape)
glVertex2f(510 + shi, 770);    // Vertex 1 (top left)
glVertex2f(680 + shi, 770);    // Vertex 2 (upper left)
glVertex2f(680+ shi, 740);    // Vertex 3 (middle left)
glVertex2f(510+ shi, 740);    // Vertex 3 (middle left)


  glEnd();




glColor3f(1.0, 1.0, 1.0);

    // Size of the polygon
    float width = 3.0;
    float height = 3.0;

    // Gap between polygons
    float gapy = 2.0;

    // Number of rows and columns
    int rows = 4;  // You can adjust the number of rows
    int cols = 33;  // You can adjust the number of columns

    // Draw the grid of polygons with a gap between them
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            glBegin(GL_POLYGON);

            // Draw the polygon at the current position, adding the gap to the offset
            glVertex2f(512 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Top left
            glVertex2f(515 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Upper left
            glVertex2f(515 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom left
            glVertex2f(512 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom right

            glEnd();
        }

    }


 glBegin(GL_POLYGON);
glColor3f(1.0,0.0,1.0); // Green color (for the shape)
glVertex2f(520+ shi, 790);    // Vertex 1 (top left)
glVertex2f(670+ shi, 790);    // Vertex 2 (upper left)
glVertex2f(670+ shi, 770);    // Vertex 3 (middle left)
glVertex2f(520+ shi, 770);    // Vertex 3 (middle left)


  glEnd();

 glBegin(GL_POLYGON);
glColor3f(0.353, 0.569, 0.651); // Green color (for the shape)
glVertex2f(523+ shi, 787);    // Vertex 1 (top left)
glVertex2f(667+ shi, 787);    // Vertex 2 (upper left)
glVertex2f(667+ shi, 773);    // Vertex 3 (middle left)
glVertex2f(523+ shi, 773);    // Vertex 3 (middle left)


  glEnd();





train();
cargo();
cars();


//600px
glBegin(GL_POLYGON);
glColor3f(0.361, 0.318, 0.035);
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 500);    // Vertex 3 (middle left)
glVertex2f(0, 500);    // Vertex 3 (middle left)

glEnd();


//bulding 600px

glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex2f(20, 525);    // Vertex 1 (top left)
glVertex2f(150, 525);    // Vertex 2 (upper left)
glVertex2f(150, 520);    // Vertex 3 (middle left)
glVertex2f(20, 520);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_POLYGON);
glColor3f(1.0,1.0,1.0);
glVertex2f(20, 580);    // Vertex 1 (top left)
glVertex2f(150, 580);    // Vertex 2 (upper left)
glVertex2f(150, 525);    // Vertex 3 (middle left)
glVertex2f(20, 525);    // Vertex 3 (middle left)

glEnd();

  for (int i = 0; i < 10; i++) {
        // Loop to create 20 columns
        for (int j = 0; j < 25; j++) {
            float x_offset = j * 5.0f; // Horizontal distance between rectangles
            float y_offset = i * 5.0f; // Vertical distance between rectangles

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0); // Black color for the rectangles

            // Define the four vertices of each rectangle
            glVertex2f(23 + x_offset, 578 - y_offset); // Vertex 1 (top left)
            glVertex2f(27 + x_offset, 578 - y_offset); // Vertex 2 (upper right)
            glVertex2f(27 + x_offset, 572 - y_offset); // Vertex 3 (bottom right)
            glVertex2f(23 + x_offset, 572 - y_offset); // Vertex 4 (bottom left)

            glEnd();
        }
    }



   for (int i = 0; i < 7; i++) {
        float x_offset = i * 15.0f;  // Horizontal distance between triangles

        // Draw the main triangle
        glBegin(GL_TRIANGLES);
        glColor3f(1.0, 1.0, 1.0); // White color for the triangle
        glVertex2f(20 + x_offset, 580);    // Vertex 1 (top left)
        glVertex2f(60 + x_offset, 580);    // Vertex 2 (top right)
        glVertex2f(40 + x_offset, 595);    // Vertex 3 (middle top)
        glEnd();

        // Decorative pattern inside each triangle (smaller triangle)
        glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 0.0); // Black color for the decoration

        glVertex2f(30 + x_offset, 580);    // Vertex 1 (top left of inner triangle)
        glVertex2f(50 + x_offset, 580);    // Vertex 2 (top right of inner triangle)
        glVertex2f(40 + x_offset, 590);    // Vertex 3 (middle of inner triangle)
        glEnd();
    }







// building 2

   glBegin(GL_POLYGON);
glColor3f(0.,0.5,0.4);
glVertex2f(160, 525);    // Vertex 1 (top left)
glVertex2f(280, 525);    // Vertex 2 (upper left)
glVertex2f(280, 605);    // Vertex 3 (middle left)
glVertex2f(160, 605);    // Vertex 3 (middle left)

glEnd();


    // Loop to create multiple rectangles horizontally
    for (int i = 0; i < 6; i++) { // For 6 rectangles (you can increase the count)
        float y_offset = i * 18.0f;  // Vertical distance between rectangles

        // Change color for each rectangle (cycling between blue and orange)
        float red = (i % 2 == 0) ? 1.0f : 1.0f; // Keep red component for both blue and orange
        float green = (i % 2 == 0) ? 0.0f : 0.5f; // Blue (green = 0) and Orange (green = 0.5)
        float blue = (i % 2 == 0) ? 1.0f : 0.0f; // Blue (blue = 1) and Orange (blue = 0)

        // Draw the main rectangle
        glBegin(GL_POLYGON);
        glColor3f(red, green, blue); // Set the color dynamically for each rectangle

        // Define the four vertices of each rectangle
        glVertex2f(160 , 525 + y_offset);    // Vertex 1 (top left)
        glVertex2f(280 , 525 + y_offset);    // Vertex 2 (top right)
        glVertex2f(280 , 510 + y_offset);    // Vertex 3 (bottom right)
        glVertex2f(160 , 510 + y_offset);    // Vertex 4 (bottom left)

        glEnd();

        // Add a new color in the gap between rectangles (e.g., pink color)
        float gap_red = 1.0f;  // Set the red component for pink color
        float gap_green = 0.75f; // Set the green component for pink color
        float gap_blue = 0.8f;  // Set the blue component for pink color

        glBegin(GL_POLYGON);
        glColor3f(gap_red, gap_green, gap_blue); // Set the gap color to pink

        // Draw a smaller rectangle in the gap between each main rectangle
        glVertex2f(160 , 525 + y_offset - 9.0f);    // Top left of gap shape
        glVertex2f(280 , 525 + y_offset - 9.0f);    // Top right of gap shape
        glVertex2f(280 , 510 + y_offset + 9.0f);    // Bottom right of gap shape
        glVertex2f(160 , 510 + y_offset + 9.0f);    // Bottom left of gap shape

        glEnd();

        // Add a smaller shape (e.g., a smaller rectangle) inside the gap with cyan color
        float inner_red = 0.0f;  // No red for cyan
        float inner_green = 1.0f; // Full green for cyan
        float inner_blue = 1.0f;  // Full blue for cyan

        glBegin(GL_POLYGON);
        glColor3f(inner_red, inner_green, inner_blue); // Set the inner shape color to cyan

        // Draw a smaller rectangle inside the gap
        glVertex2f(160 + 30.0f, 525 + y_offset);    // Top left of inner shape
        glVertex2f(280 - 30.0f, 525 + y_offset);    // Top right of inner shape
        glVertex2f(280 - 30.0f, 510 + y_offset);    // Bottom right of inner shape
        glVertex2f(160 + 30.0f, 510 + y_offset);    // Bottom left of inner shape

        glEnd();
    }


    for (int i = 0; i < 10; i++) {  // Loop for 20 rows
    for (int j = 0; j < 6; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 193 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 610 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}









///building 2.2


   // Loop to draw 24 rows of polygons (vertically)
 for (int i = 0; i < 24; i++) {
    for (int j = 0; j < 30; j++) {
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 3;  // Horizontal spacing (30 columns)
        float y = 595 - i * 4;  // Vertical spacing (24 rows)

        // Choose a color based on the index
          if ((i + j) % 3 == 0) {
                glColor3f(1.0, 0.0, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(1.0, 1.0, 0.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 1.0, 0.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

        // Draw a polygon (triangle) at (x, y)
        glBegin(GL_POLYGON);
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 5, y);     // Vertex 2 (upper left)
        glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
        glEnd();
    }
}


    // Loop to draw another set of polygons with a different color pattern
    // Introduce a horizontal gap by adjusting the starting x position for the second set
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 20; j++) {
            // Calculate the x and y positions for each polygon
            float x = 350 + j * 3 + 4;  // Add a 4-unit horizontal gap (shifted by 4 units)
            float y = 595 - i * 4;  // Vertical spacing (24 rows)

            // Choose a color based on the index
            if ((i + j) % 3 == 0) {
                glColor3f(0.0, 0.5, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(0.0, 1.0, 1.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 0.0, 1.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

            // Draw a polygon (triangle) at (x, y)
            glBegin(GL_POLYGON);
            glVertex2f(x, y);         // Vertex 1 (top left)
            glVertex2f(x + 5, y);     // Vertex 2 (upper left)
            glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
            glEnd();
        }
    }


for (int i = 0; i < 8; i++) {  // Loop for 20 rows
    for (int j = 0; j < 13; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}
















// building 3
// Loop to draw the grid of hexagons



glBegin(GL_POLYGON);

glColor3f(0.055, 0.929, 0.949);
glVertex2f(420, 600);    // Vertex 1 (top left)
glVertex2f(565, 600);    // Vertex 2 (upper left)
glVertex2f(565, 500);
glVertex2f(420, 500);

glEnd();

for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each hexagon
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each hexagon to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the hexagon at the calculated position
        glBegin(GL_POLYGON);

        // Define the six vertices for the hexagon
        glVertex2f(x, y);           // Vertex 1 (top left)
        glVertex2f(x + 1.5, y + 1.5); // Vertex 2 (top middle right)
        glVertex2f(x + 3.5, y + 1.5); // Vertex 3 (top right)
        glVertex2f(x + 5, y);       // Vertex 4 (bottom right)
        glVertex2f(x + 3.5, y - 1.5); // Vertex 5 (bottom middle left)
        glVertex2f(x + 1.5, y - 1.5); // Vertex 6 (bottom left)

        glEnd();
    }
}

// Loop to draw the grid of triangles
for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each triangle
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each triangle to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the triangle at the calculated position
        glBegin(GL_POLYGON);

        // Define the three vertices for the triangle
        glVertex2f(x, y);            // Vertex 1 (top)
        glVertex2f(x + 6, y + 5);    // Vertex 2 (bottom right)
        glVertex2f(x + 12, y);       // Vertex 3 (bottom left)

        glEnd();
    }
}


for (int i = 0; i < 9; i++) {  // Loop for 20 rows
    for (int j = 0; j < 14; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 425 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}





//deyal

glBegin(GL_POLYGON);

glColor3f(0.055, 0.929, 0.949);
glVertex2f(570, 600);    // Vertex 1 (top left)
glVertex2f(700, 600);    // Vertex 2 (upper left)
glVertex2f(700, 500);
glVertex2f(570, 500);

glEnd();

// Loop to draw the grid of polygons
for (int i = 0; i < 9; i++) {         // Vertical loop (9 rows)
    for (int j = 0; j < 10; j++) {    // Horizontal loop (10 columns)
        // Calculate the x and y positions for each polygon
        float xOffset = j * 12;       // Horizontal spacing (12 units)
        float yOffset = i * 12;       // Vertical spacing (12 units) - Increased gap

        // Adjust the x and y positions for each polygon to form the grid
        float x = 570 + xOffset;      // Horizontal starting position
        float y = 600 - yOffset;      // Vertical starting position

        // Choose a color based on the index (using a new pattern with 4 colors)
        if ((i + j) % 4 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 4 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else if ((i + j) % 4 == 2) {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for another set
        } else {
            glColor3f(0.9, 0.9, 0.0);  // Yellow color for the new set
        }

        // Draw the polygon (rectangle) at the calculated position
        glBegin(GL_POLYGON);

        // Define the four vertices for the rectangle
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 20, y);    // Vertex 2 (upper right)
        glVertex2f(x + 20, y - 5); // Vertex 3 (bottom right)
        glVertex2f(x, y - 5);     // Vertex 4 (bottom left)

        glEnd();
    }
}

drawCircle(600,570, 15);
drawCircle4(600,570, 12);

drawCircle3(635,570, 6.5);
drawCircle(635,570, 7.5);
drawCircle4(635,570, 4.5);




drawCircle(670,570, 15);
drawCircle4(670,570, 12);

drawCircle(600,530, 15);
drawCircle4(600,530, 12);
drawCircle3(635,530, 6.5);
drawCircle(635,530, 7.5);

drawCircle4(635,530, 4.5);



drawCircle(670,530, 15);
drawCircle4(670,530, 12);

//building 4





// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 3; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 10;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 525 - yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
     glColor3f(0.69, 0.729, 0.035);  // Green color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);    // Vertex 1 (top left)
    glVertex2f(820, y);    // Vertex 2 (upper right)
    glVertex2f(820, y + 50); // Vertex 3 (bottom right)
    glVertex2f(710, y + 50);  // Vertex 4 (bottom left)

    glEnd();
}



glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 505);    // Vertex 1 (top left)
glVertex2f(820, 505);    // Vertex 2 (upper left)
glVertex2f(820, 500);
glVertex2f(710, 500);

glEnd();

// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 4; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 20;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 505 + yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);        // Vertex 1 (top left)
    glVertex2f(820, y);        // Vertex 2 (upper right)
    glVertex2f(820, y - 5);    // Vertex 3 (bottom right)
    glVertex2f(710, y - 5);    // Vertex 4 (bottom left)

    glEnd();
}


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(770, 505);    // Vertex 1 (top left)
glVertex2f(772, 505);    // Vertex 2 (upper left)
glVertex2f(772, 574);
glVertex2f(770, 574);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(790, 505);    // Vertex 1 (top left)
glVertex2f(792, 505);    // Vertex 2 (upper left)
glVertex2f(792, 574);
glVertex2f(790, 574);

glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(818, 505);    // Vertex 1 (top left)
glVertex2f(820, 505);    // Vertex 2 (upper left)
glVertex2f(820, 574);
glVertex2f(818, 574);

glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(750, 505);    // Vertex 1 (top left)
glVertex2f(752, 505);    // Vertex 2 (upper left)
glVertex2f(752, 574);
glVertex2f(750, 574);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(730, 505);    // Vertex 1 (top left)
glVertex2f(732, 505);    // Vertex 2 (upper left)
glVertex2f(732, 574);
glVertex2f(730, 574);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 505);    // Vertex 1 (top left)
glVertex2f(712, 505);    // Vertex 2 (upper left)
glVertex2f(712, 574);
glVertex2f(710, 574);
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(810, 505);    // Vertex 1 (top left)
glVertex2f(812, 505);    // Vertex 2 (upper left)
glVertex2f(812, 574);
glVertex2f(810, 574);
glEnd();




glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 574);    // Vertex 1 (top left)
glVertex2f(820, 574);    // Vertex 2 (upper left)
glVertex2f(820, 572);
glVertex2f(710, 572);
glEnd();




//buidiunf cathedaral

glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 1.0); // Blue color for the first polygon
glVertex2f(825, 520);    // Vertex 1 (top left)
glVertex2f(980, 520);    // Vertex 2 (upper left)
glVertex2f(980, 500);
glVertex2f(825, 500);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.8, 0.2, 0.2); // Red color for the second polygon
glVertex2f(835, 540);    // Vertex 1 (top left)
glVertex2f(970, 540);    // Vertex 2 (upper left)
glVertex2f(970, 520);
glVertex2f(835, 520);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.2, 0.8, 0.2); // Bright Green color for the third polygon
glVertex2f(845, 560);    // Vertex 1 (top left)
glVertex2f(960, 560);    // Vertex 2 (upper left)
glVertex2f(960, 540);
glVertex2f(845, 540);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.8); // Deep Blue color for the fourth polygon
glVertex2f(850, 580);    // Vertex 1 (top left)
glVertex2f(955, 580);    // Vertex 2 (upper left)
glVertex2f(955, 560);
glVertex2f(850, 560);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0); // Bright Yellow color for the fifth polygon
glVertex2f(855, 590);    // Vertex 1 (top left)
glVertex2f(950, 590);    // Vertex 2 (upper left)
glVertex2f(950, 580);
glVertex2f(855, 580);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.4, 0.0, 0.8); // Purple color for the sixth polygon
glVertex2f(865, 600);    // Vertex 1 (top left)
glVertex2f(940, 600);    // Vertex 2 (upper left)
glVertex2f(940, 590);
glVertex2f(865, 590);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 1.0); // Cyan color for the seventh polygon
glVertex2f(875, 610);    // Vertex 1 (top left)
glVertex2f(930, 610);    // Vertex 2 (upper left)
glVertex2f(930, 600);
glVertex2f(875, 600);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0, 0.5, 0.0); // Orange color for the eighth polygon
glVertex2f(885, 620);    // Vertex 1 (top left)
glVertex2f(920, 620);    // Vertex 2 (upper left)
glVertex2f(920, 610);
glVertex2f(885, 610);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Grey color for the ninth polygon
glVertex2f(895, 630);    // Vertex 1 (top left)
glVertex2f(910, 630);    // Vertex 2 (upper left)
glVertex2f(910, 620);
glVertex2f(895, 620);
glEnd();
// road


glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Grey color for the ninth polygon
glVertex2f(0, 470);    // Vertex 1 (top left)
glVertex2f(1000, 470);    // Vertex 2 (upper left)
glVertex2f(1000, 500);
glVertex2f(0, 500);
glEnd();




// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 485);   // Vertex 1 (top left)
    glVertex2f(x + 6, 485);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 489);  // Vertex 3 (bottom right)
    glVertex2f(x, 489);   // Vertex 4 (bottom left)

    glEnd();
}

cars1();


//road divder
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0); // Grey color for the ninth polygon
glVertex2f(0, 460);    // Vertex 1 (top left)
glVertex2f(1000, 460);    // Vertex 2 (upper left)
glVertex2f(1000, 470);
glVertex2f(0, 470);
glEnd();

//road
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Grey color for the ninth polygon
glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 460);
glVertex2f(0, 460);
glEnd();

// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 445);   // Vertex 1 (top left)
    glVertex2f(x + 6, 445);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 449);  // Vertex 3 (bottom right)
    glVertex2f(x, 449);   // Vertex 4 (bottom left)

    glEnd();
}

cargo1();

//road line line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();


// tree

glBegin(GL_POLYGON);
glColor3f(0.584, 0.678, 0.349); // Grey color for the ninth polygon
glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 330);
glVertex2f(0, 330);
glEnd();



for (int i = 0; i < 5; i++) {
    int translateX = -120 * i;  // Translation on x-axis

    // First set of circles
    circle(7, 14, 330 + translateX, 350);
    circle(7, 14, 320 + translateX, 360);
    circle(7, 14, 330 + translateX, 370);
    circle(7, 14, 340 + translateX, 360);

    // Second set of circles
    circle(7, 14, 370 + translateX, 350);
    circle(7, 14, 360 + translateX, 360);
    circle(7, 14, 370 + translateX, 370);
    circle(7, 14, 380 + translateX, 360);

    // Third set of circles
    circle(7, 14, 410 + translateX, 350);
    circle(7, 14, 400 + translateX, 360);
    circle(7, 14, 410 + translateX, 370);
    circle(7, 14, 420 + translateX, 360);

    // Fourth set of circles
    circle(7, 14, 330 + 50 + translateX, 370 + 30);
    circle(7, 14, 320 + 50 + translateX, 380 + 30);
    circle(7, 14, 330 + 50 + translateX, 390 + 30);
    circle(7, 14, 340 + 50 + translateX, 380 + 30);

    // Fifth set of circles
    circle(7, 14, 370 + 50 + translateX, 370 + 30);
    circle(7, 14, 360 + 50 + translateX, 380 + 30);
    circle(7, 14, 370 + 50 + translateX, 390 + 30);
    circle(7, 14, 380 + 50 + translateX, 380 + 30);

    // Sixth set of circles
    circle(7, 14, 410 + 50 + translateX, 370 + 30);
    circle(7, 14, 400 + 50 + translateX, 380 + 30);
    circle(7, 14, 410 + 50 + translateX, 390 + 30);
    circle(7, 14, 420 + 50 + translateX, 380 + 30);
}












//tree1

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Grey color for the ninth polygon
glVertex2f(60, 380);    // Vertex 1 (top left)
glVertex2f(80, 380);    // Vertex 2 (upper left)
glVertex2f(80, 330);
glVertex2f(60, 330);
glEnd();

drawCircle3(60,380,10);

drawCircle3(60,390,10);
drawCircle3(60,390,10);
drawCircle3(50,400,10);
drawCircle3(60,410,10);
drawCircle3(70,410,10);
drawCircle3(80,410,10);
drawCircle3(80,400,10);
drawCircle3(90,390,10);
drawCircle3(50,390,10);
drawCircle3(70,380,10);
drawCircle3(80,380,10);

//tree2
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370, 330);
glVertex2f(160 + 370, 330);    // Vertex 4 (bottom left)
glEnd();

// Drawing circles with the x position shifted by +370
drawCircle5(160 + 370, 380, 10);  // Translated x position by +370

drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 400, 10);  // Translated x position by +370
drawCircle5(160 + 370, 410, 10);  // Translated x position by +370
drawCircle5(170 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 400, 10);  // Translated x position by +370
drawCircle5(190 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 390, 10);  // Translated x position by +370
drawCircle5(170 + 370, 380, 10);  // Translated x position by +370
drawCircle5(180 + 370, 380, 10);  // Translated x position by +370

//tree3

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Grey color for the ninth polygon
glVertex2f(250, 380);    // Vertex 1 (top left)
glVertex2f(270, 380);    // Vertex 2 (upper left)
glVertex2f(270, 330);
glVertex2f(250, 330);
glEnd();

drawCircle5(260, 370, 5);  // Translated x position by +100
drawCircle5(255, 390, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle3(275, 410, 10);  // Translated x position by +100
drawCircle3(265, 410, 10);  // Translated x position by +100
drawCircle3(257, 410, 10);  // Translated x position by +100
drawCircle3(247, 410, 10);  // Translated x position by +100
drawCircle3(265, 370, 10);  // Translated x position by +100
drawCircle3(257, 370, 10);  // Translated x position by +100
drawCircle3(247, 370, 10);  // Translated x position by +100
drawCircle3(275, 375, 10);  // Translated x position by +100
drawCircle5(260, 370, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle5(260, 390, 10);  // Translated x position by +100


//tree




//backgroun
// First set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 + 70 - 200, 350 + 30); // Translated circle

circle(20, 10, 790 + 80 - 200, 360 + 30);
circle(20, 10, 805 + 80 - 200, 355 + 30);
circle(20, 10, 810 + 80 - 200, 365 + 30);
circle(20, 10, 805 + 80 - 200, 375 + 30);
circle(20, 10, 815 + 80 - 200, 365 + 30);
circle(20, 10, 820 + 80 - 200, 360 + 30);
circle(20, 10, 820 + 80 - 200, 345 + 30);
circle(20, 10, 790 + 80 - 200, 345 + 30);
circle(20, 10, 805 + 80 - 200, 340 + 30); // Translated last circle

// Second set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 - 200, 350);

circle(20, 10, 790 - 200, 360);
circle(20, 10, 805 - 200, 355);
circle(20, 10, 810 - 200, 365);
circle(20, 10, 805 - 200, 375);
circle(20, 10, 815 - 200, 365);
circle(20, 10, 820 - 200, 360);
circle(20, 10, 820 - 200, 345);
circle(20, 10, 790 - 200, 345);
circle(20, 10, 805 - 200, 340);






  circle(7, 14, 330, 350);
circle(7, 14, 320, 360);
circle(7, 14, 330, 370);
circle(7, 14, 340, 360);


circle(7, 14, 370, 350);
circle(7, 14, 360, 360);
circle(7, 14, 370, 370);
circle(7, 14, 380, 360);


  circle(7, 14, 410, 350);
circle(7, 14, 400, 360);
circle(7, 14, 410, 370);
circle(7, 14, 420, 360);



circle(7, 14, 330 + 50, 370 + 30);
circle(7, 14, 320 + 50, 380 + 30);
circle(7, 14, 330 + 50, 390 + 30);
circle(7, 14, 340 + 50, 380 + 30);


circle(7, 14, 370 + 50, 370 + 30);
circle(7, 14, 360 + 50, 380 + 30);
circle(7, 14, 370 + 50, 390 + 30);
circle(7, 14, 380 + 50, 380 + 30);


circle(7, 14, 410 + 50, 370 + 30);
circle(7, 14, 400 + 50, 380 + 30);
circle(7, 14, 410 + 50, 390 + 30);
circle(7, 14, 420 + 50, 380 + 30);


glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(490, 330);
glVertex2f(430, 330);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0, 0.0, 1.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(460, 380);



glEnd();

 for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            float translateX = -10.0f * i;  // Translate horizontally by 50 units
            float translateY = -10.0f * j;  // Translate vertically by 50 units

            glPushMatrix();  // Save the current transformation matrix
            glTranslatef(translateX, translateY, 0.0f);  // Apply translation

            // Begin drawing the polygon
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);  // Grey color for the polygon
            glVertex2f(432+50, 360+5);    // Vertex 1 (top left)
            glVertex2f(437+50, 360+5);    // Vertex 2 (upper left)
            glVertex2f(437+50, 365+5);
            glVertex2f(432+50, 365+5);    // Vertex 4 (bottom left)
            glEnd();

            glPopMatrix();  // Restore the previous transformation matrix
        }
    }



    //tree paitentence


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370+120, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370+120, 330);
glVertex2f(160 + 370+120, 330);    // Vertex 4 (bottom left)
glEnd();

    drawCircle5(630, 390, 7);  // Translated x position by +370
 drawCircle5(650, 400, 7);  // Translated x position by +370
drawCircle5(640, 410, 7);  // Translated x position by +370
drawCircle5(660, 420, 7);  // Translated x position by +370

drawCircle5(670, 410, 7);  // Translated x position by +370
drawCircle5(680, 400, 7);  // Translated x position by +370
drawCircle5(685, 390, 7);  // Translated x position by +370

drawCircle5(675, 395, 7);  // Translated x position by +370
drawCircle5(650, 380, 7);  // Translated x position by +370
drawCircle5(660, 380, 7);  // Translated x position by +370



//tree traingle


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120+90, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370+120+90, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370+120+90, 330);
glVertex2f(160 + 370+120+90, 330);    // Vertex 4 (bottom left)
glEnd();


 for (int i = 0; i < 4; i++) {
        float translateY = 20.0f * i;  // Translate vertically by 40 units (you can adjust this value)

        glPushMatrix();  // Save the current transformation matrix
        glTranslatef(0.0f, translateY, 0.0f);  // Apply vertical translation

        // Draw the polygon
        glBegin(GL_POLYGON);
         glColor3ub(34, 139, 34); // Color for the polygon
        glVertex2f(690 + 30, 350);    // Vertex 1 (top left)
        glVertex2f(740 + 30, 350);    // Vertex 2 (upper left)
        glVertex2f(715 + 30, 390);    // Vertex 3 (bottom center)
        glEnd();

        glPopMatrix();  // Restore the previous transformation matrix
    }



circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80, 360 + 30);
circle(20, 10, 805 + 80, 355 + 30);
circle(20, 10, 810 + 80, 365 + 30);
circle(20, 10, 805 + 80, 375 + 30);
circle(20, 10, 815 + 80, 365 + 30);
circle(20, 10, 820 + 80, 360 + 30);
circle(20, 10, 820 + 80, 345 + 30);
circle(20, 10, 790 + 80, 345 + 30);
circle(20, 10, 805 + 80, 340 + 30); // Translated last circle






circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80+70, 360 + 10);
circle(20, 10, 805 + 80+70, 355 + 10);
circle(20, 10, 810 + 80+70, 365 + 10);
circle(20, 10, 805 + 80+70, 375 + 10);
circle(20, 10, 815 + 80+70, 365 + 10);
circle(20, 10, 820 + 80+70, 360 + 10);
circle(20, 10, 820 + 80+70, 345 + 10);
circle(20, 10, 790 + 80+70, 345 + 10);
circle(20, 10, 805 + 80+70, 340 + 10); // Translated last circle



    circle(20,10,800,350);

    circle(20,10,790,360);
 circle(20,10,805,355);
 circle(20,10,810,365);
 circle(20,10,805,375);
 circle(20,10,815,365);
 circle(20,10,820,360);
  circle(20,10,820,345);
   circle(20,10,790,345);
    circle(20,10,805,340);





glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370 + 120 + 90 + 200, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370 + 120 + 90 + 200, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370 + 120 + 90 + 200, 330);
glVertex2f(160 + 370 + 120 + 90 + 200, 330);    // Vertex 4 (bottom left)
glEnd();

glPushMatrix();  // Save the current transformation matrix
//glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix




//last traingle tree

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix







//tree last er agehr ta

    //tree paitentence


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160+35 + 370+290, 380);    // Vertex 1 (top left)
glVertex2f(180+35 + 370+290, 380);    // Vertex 2 (upper left)
glVertex2f(180+35 + 370+290, 330);
glVertex2f(160 +35 + 370+290, 330);    // Vertex 4 (bottom left)
glEnd();

    drawCircle5(640 +200, 390, 7);  // Translated x position by +370
 drawCircle5(650+200, 400, 7);  // Translated x position by +370
drawCircle5(645+200, 410, 7);  // Translated x position by +370
drawCircle5(665+200, 420, 7);  // Translated x position by +370

drawCircle5(675+200, 410, 7);  // Translated x position by +370
drawCircle5(685+200, 400, 7);  // Translated x position by +370
drawCircle5(685+200, 390, 7);  // Translated x position by +370

drawCircle5(685+200, 395, 7);  // Translated x position by +370
drawCircle5(660+200, 380, 7);  // Translated x position by +370
drawCircle5(670+200, 380, 7);  // Translated x position by +370
drawCircle5(665+200, 430, 7);  // Translated x position by +370

//tree adjustments
drawCircle5(665+200+80, 380,10);  // Translated x position by +370
drawCircle5(665+200+80, 390,10);  // Translated x position by +370
drawCircle5(665+200+80, 400,10);  // Translated x position by +370
//circle(30,20,665+200, 390);  // Translated x position by +370
drawCircle5(665+200, 370, 7);  // Translated x position by +370
drawCircle5(665-150, 370, 7);  // Translated x position by +370
drawCircle5(665-100, 370, 7);  // Translated x position by +370







//village


    glBegin(GL_POLYGON);
glColor3f(0.49, 0.431, 0.088); // Color for the polygon
glVertex2f(0,330);    // Vertex 1 (top left)
glVertex2f(1000,330);    // Vertex 2 (upper left)
glVertex2f(1000,230);
glVertex2f(0,230);


glEnd();




    glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(260,320);    // Vertex 2 (upper left)
glVertex2f(280,280);
glVertex2f(100,280);
glEnd();



//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();



    glBegin(GL_TRIANGLES);
glColor3f(0.337, 0.251, 0.89); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(30,280);    // Vertex 2 (upper left)
glVertex2f(100,280);
glEnd();


    glBegin(GL_POLYGON);
glColor3f(0.18, 0.125, 0.529); // Color for the polygon
glVertex2f(40,280);    // Vertex 1 (top left)
glVertex2f(95,280);    // Vertex 2 (upper left)
glVertex2f(95,240);
glVertex2f(40,240);
glEnd();

    glBegin(GL_POLYGON);
glColor3f(0.616, 0.573, 0.902); // Color for the polygon
glVertex2f(95,280);    // Vertex 1 (top left)
glVertex2f(95,240);    // Vertex 2 (upper left)
glVertex2f(270,240);
glVertex2f(270,280);
glEnd();




  glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0); // Color for the lines

    // Draw 20 vertical lines horizontally by adjusting the x-coordinate
    for (int i = 0; i < 35; i++) {
        float xOffset = i * 5.0; // Increase xOffset by 20 units for each line
        glVertex2f(100 + xOffset, 280);  // Start point of the line (shifted horizontally)
        glVertex2f(100 + xOffset, 240);  // End point of the line (shifted horizontally)
    }

    glEnd();




    glBegin(GL_POLYGON);
glColor3f(0.251, 0.694, 0.949); // Color for the polygon
glVertex2f(30,240);    // Vertex 1 (top left)
glVertex2f(280,240);    // Vertex 2 (upper left)
glVertex2f(280,230);
glVertex2f(30,230);
glEnd();



//house2

glPushMatrix();  // Save the current matrix state

glTranslatef(210.0f, 0.0f, 0.0f);  // Translate by 300 units along the x-axis

// Draw the base of the house (main rectangle)
glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the main structure
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(260, 240);   // Bottom-right corner
glVertex2f(75, 240);    // Bottom-left corner
glEnd();

// Draw the roof (triangle shape)
glBegin(GL_QUADS);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(85, 330);    // Left-top corner of the base
glVertex2f(250, 330);   // Right-top corner of the base
glVertex2f(260, 300); // Peak of the roof
glVertex2f(75, 300); // Peak of the roof
glEnd();

// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 280);  // Top-right of the door
glVertex2f(140, 280);  // Top-left of the door
glEnd();

// Draw a window on the left side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(90, 270);  // Bottom-left of the window
glVertex2f(130, 270); // Bottom-right of the window
glVertex2f(130, 290); // Top-right of the window
glVertex2f(90, 290);  // Top-left of the window
glEnd();

// Draw a window on the right side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(200, 270);  // Bottom-left of the window
glVertex2f(240, 270);  // Bottom-right of the window
glVertex2f(240, 290);  // Top-right of the window
glVertex2f(200, 290);  // Top-left of the window
glEnd();

// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();



// Draw a chimney (small rectangle on the roof)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Chimney color (gray)
glVertex2f(200, 310);    // Bottom-left of the chimney
glVertex2f(215, 310);    // Bottom-right of the chimney
glVertex2f(215, 340);    // Top-right of the chimney
glVertex2f(200, 340);    // Top-left of the chimney
glEnd();




glPopMatrix();  // Restore the previous matrix state
 // Restore the previous matrix state



//house3

 glPushMatrix();  // Save the current matrix state

glTranslatef(410.0f, 0.0f, 0.0f);  // Translate the building along the x-axis

// Draw the main base of the house (trapezoid for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.5, 0.2); // Color for the main structure (greenish)
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner (more inward for a trapezoid shape)
glVertex2f(100, 240);   // Bottom-left corner (more inward for a trapezoid shape)
glEnd();

// Draw a second floor (smaller trapezoid above the main base)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for the second floor (gray)
glVertex2f(115, 280);    // Top-left corner
glVertex2f(245, 280);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner
glVertex2f(100, 240);   // Bottom-left corner
glEnd();

// Draw the roof (sloped roof, larger triangle for the top)
glBegin(GL_POLYGON);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(75, 300);    // Left-top corner of the base
glVertex2f(100, 240);   // Left-bottom corner of the base
glVertex2f(230, 240);   // Right-bottom corner of the base
glVertex2f(260, 300);   // Right-top corner of the base
glEnd();



// Draw a window on the left side (larger rectangle for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.631, 0.82); // Window color (light blue)
glVertex2f(90, 290);  // Bottom-left of the window
glVertex2f(240, 290); // Bottom-right of the window
glVertex2f(240, 270); // Top-right of the window
glVertex2f(90, 270);  // Top-left of the window
glEnd();






// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();




// Draw decorative side walls (for depth)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(75, 300);    // Left-top corner
glVertex2f(100, 240);   // Left-bottom corner
glVertex2f(100, 230);   // Left-bottom corner (lower)
glVertex2f(75, 230);    // Left-top corner (lower)
glEnd();




// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 260);  // Top-right of the door
glVertex2f(140, 260);  // Top-left of the door
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(260, 300);   // Right-top corner
glVertex2f(230, 240);   // Right-bottom corner
glVertex2f(230, 230);   // Right-bottom corner (lower)
glVertex2f(260, 230);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state



glBegin(GL_POLYGON);
glColor3f(0.0, 0.8, 0.0); // Color for side walls
glVertex2f(690, 320);   // Right-top corner
glVertex2f(810, 320);   // Right-bottom corner
glVertex2f(810, 240);   // Right-bottom corner (lower)
glVertex2f(690, 240);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state

circle2(20,10,750,280);
circle3(18,8,750,280);
circle3(18,8,750,280);

//football
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Color for side walls
glVertex2f(750, 320);   // Right-top corner
glVertex2f(750, 240);   // Right-bottom corner
glEnd();


// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685, 305+5);   // Right-top corner
glVertex2f(690, 285+5);   // Slanted point (above the lower part)
glVertex2f(690, 255+5);   // Lower slanted point
glVertex2f(685, 265+5);   // Bottom-right corner
glEnd();

// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690, 300);   // Right-top corner
glVertex2f(710, 300);   // Right-top corner
glVertex2f(710, 260);   // Right-bottom corner
glVertex2f(690, 260);   // Left-bottom corner
glEnd();











// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 260);   // Right-bottom corner (translated)
glVertex2f(690 + 100, 260);   // Left-bottom corner (translated)
glEnd();

// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685 + 100+20, 305 + 5);   // Right-top corner (translated)
glVertex2f(690 + 100+20, 285 + 5);   // Slanted point (above the lower part, translated)
glVertex2f(690 + 100+20, 255 + 5);   // Lower slanted point (translated)
glVertex2f(685 + 100+20, 265 + 5);   // Bottom-right corner (translated)
glEnd();

//tree
circle4(10,20,830,290);
circle4(10,20,830,290);
circle4(10,20,845,290);
circle4(10,20,860,290);
circle4(10,20,875,290);

circle4(10,20,845,300);
circle4(10,20,860,300);


// Draw circles horizontally
for (int i = 0; i < 5; i++) {
    circle4(10, 20, 830 + (i * 15), 290-40);  // Change x by 15 for each iteration, keep y constant at 290
}

// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 10)-40);  // Change y by 10 for each iteration, keep x constant at 845
}



// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 20)-40);  // Change y by 10 for each iteration, keep x constant at 845
}


circle4(15,30,920,290);
circle4(10,20,920,290);
circle4(12,40,935,290);
circle4(8,35,950,290);
circle4(15,40,965,290);

circle4(10,20,935,300);
circle4(10,20,950,300);


circle4(15,15,920,250);
circle4(10,20,920,250);
circle4(12,40,935,250);
circle4(8,35,950,250);
circle4(9,20,965,250);

circle4(10,7,935,260);
circle4(10,5,950,260);


//flower
      // Draw the first polygon (yellow side wall)
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);  // Yellow color
        glVertex2f(0 , 230);   // Right-top corner
        glVertex2f(1000 , 230);   // Slanted point (above the lower part)
        glVertex2f(1000 , 200);   // Lower slanted point
        glVertex2f(0 , 200);   // Bottom-right corner
        glEnd();


//230-200

   for (int i = 0; i < 32; i++) {
        float xOffset = i * 30.0f;  // Shift the polygons and circles horizontally by 55 units



        // Draw the second polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(30 + xOffset, 210);   // Right-top corner
        glVertex2f(32 + xOffset, 212);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the third polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(40 + xOffset, 216);   // Right-top corner
        glVertex2f(42 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the fourth polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(50 + xOffset, 216);   // Right-top corner
        glVertex2f(52 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the circles with different colors
        randomColor();  // Assign a random color for the first circle
        drawCircle1(31 + xOffset, 211, 2.5);

        randomColor();  // Assign a random color for the second circle
        drawCircle1(41 + xOffset, 215, 2.5);

        randomColor();  // Assign a random color for the third circle
        drawCircle1(51 + xOffset, 215, 2.5);
    }



         glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(15, 215);   // Right-top corner
        glVertex2f(17 , 217);   // Slanted point
        glVertex2f(17 ,200);   // Lower slanted point
        glVertex2f(15, 200);   // Bottom-right corner
        glEnd();





         glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);  // Blue color
        glVertex2f(13, 222);   // Right-top corner
        glVertex2f(19 , 222);   // Slanted point
        glVertex2f(19 ,217);   // Lower slanted point
        glVertex2f(13, 217);   // Bottom-right corner
        glEnd();








         // Draw the polygons horizontally with a loop
    for (int i = 0; i < 32; i++) {  // 10 instances, change as needed
        float xOffset = i * 60.0f;  // Horizontal offset for each polygon

        // Draw the first polygon with a random color
        randomColor();  // Assign a random color for the polygon
        glBegin(GL_POLYGON);
        glVertex2f(15 + xOffset, 715);   // Right-top corner
        glVertex2f(17 + xOffset, 717);   // Slanted point
        glVertex2f(17 + xOffset, 700);   // Lower slanted point
        glVertex2f(15 + xOffset, 700);   // Bottom-right corner
        glEnd();

        // Draw the second polygon with a random color
        randomColor();  // Assign a random color for the second polygon
        glBegin(GL_POLYGON);
        glVertex2f(13 + xOffset, 722);   // Right-top corner
        glVertex2f(19 + xOffset, 722);   // Slanted point
        glVertex2f(19 + xOffset, 717);   // Lower slanted point
        glVertex2f(13 + xOffset, 717);   // Bottom-right corner
  glEnd();


    }




//0-100 dhankhet
    glBegin(GL_POLYGON);
        glColor3f(0, 1.0, 0.0);  // Blue color
        glVertex2f(0, 0);   // Right-top corner
        glVertex2f(0 , 100);   // Slanted point
        glVertex2f(1000 ,100);   // Lower slanted point
        glVertex2f(1000, 0);   // Bottom-right corner
        glEnd();

        //dhan
 for (int i = 0; i < 100; i++) {
    float offsetX = i * 80.0f;  // Increment the x-offset to move along the x-axis

    glBegin(GL_POLYGON);
        glColor3f(0.722, 0.408, 0.051);  // Yellow color
        glVertex2f(0 + offsetX, 100);   // Right-top corner, shifted by offsetX
        glVertex2f(5 + offsetX, 100);   // Slanted point (above the lower part), shifted by offsetX
        glVertex2f(45 + offsetX, 0);   // Lower slanted point, shifted by offsetX
        glVertex2f(40 + offsetX, 0);   // Bottom-right corner, shifted by offsetX
    glEnd();
}







for (int j = 0; j < 8; j++) {  // Loop to draw 5 times along the y-axis
    float offsetY = j * -15.0f;  // Increment the y-offset for each iteration

    for (int i = 0; i < 100; i++) {
        float offsetX = i * 15.0f; // Increment the x-offset to move along the x-axis

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(1 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(5 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();
    }
}


//manush
glPopMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(40.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(140.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(90.0f, 40.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();



//traccter 1
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+s , 70);   // Right-top corner
        glVertex2f(30+s , 70);   // Slanted point (above the lower part)
        glVertex2f(30+s , 50);   // Lower slanted point
        glVertex2f(20+s , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+s , 68);   // Right-top corner
        glVertex2f(28+s , 68);   // Slanted point (above the lower part)
        glVertex2f(28+s , 52);   // Lower slanted point
        glVertex2f(22+s , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);  // Yellow color
        glVertex2f(10+s , 50);   // Right-top corner
        glVertex2f(50+s , 50);   // Slanted point (above the lower part)
        glVertex2f(50+s , 20);   // Lower slanted point
        glVertex2f(10+s , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+s,20,8);
drawCircle2(21+s,20,5);


drawCircle(41+s,20,8);
drawCircle2(41+s,20,5);




//traccter 2
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+400+ok , 70);   // Right-top corner
        glVertex2f(30+400+ok , 70);   // Slanted point (above the lower part)
        glVertex2f(30+400+ok , 50);   // Lower slanted point
        glVertex2f(20+400+ok , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+400+ok , 68);   // Right-top corner
        glVertex2f(28+400+ok , 68);   // Slanted point (above the lower part)
        glVertex2f(28+400+ok , 52);   // Lower slanted point
        glVertex2f(22+400+ok , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.5, 0.5);  // Yellow color
        glVertex2f(10+400+ok , 50);   // Right-top corner
        glVertex2f(50+400+ok , 50);   // Slanted point (above the lower part)
        glVertex2f(50+400+ok , 20);   // Lower slanted point
        glVertex2f(10+400+ok , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+400+ok,20,8);
drawCircle2(21+400+ok,20,5);


drawCircle(41+400+ok,20,8);
drawCircle2(41+400+ok,20,5);














//tracker2



 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+10+600+si , 70);   // Right-top corner
        glVertex2f(30+10+600+si , 70);   // Slanted point (above the lower part)
        glVertex2f(30+10+600+si , 50);   // Lower slanted point
        glVertex2f(20+10+600+si , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+10+600+si , 68);   // Right-top corner
        glVertex2f(28+10+600+si , 68);   // Slanted point (above the lower part)
        glVertex2f(28+10+600+si , 52);   // Lower slanted point
        glVertex2f(22+10+600+si , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 1.0);  // Yellow color
        glVertex2f(10+600+si , 50);   // Right-top corner
        glVertex2f(50+600+si , 50);   // Slanted point (above the lower part)
        glVertex2f(50+600+si , 20);   // Lower slanted point
        glVertex2f(10+600+si , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+600+si,20,8);
drawCircle2(21+600+si,20,5);


drawCircle(41+600+si,20,8);
drawCircle2(41+600+si,20,5);

//jomi line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 100);   // Right-top corner
        glVertex2f(1000 , 100);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 200);   // Right-top corner
        glVertex2f(1000 , 200);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 230);   // Right-top corner
        glVertex2f(1000 , 230);    // Bottom-right corner
        glEnd();







    //100-200

    glBegin(GL_POLYGON);
        glColor3f(0.941, 0.773, 0.153);  // Yellow color
        glVertex2f(0 , 199);   // Right-top corner
        glVertex2f(1000 , 199);   // Slanted point (above the lower part)
        glVertex2f(1000, 100);   // Lower slanted point
        glVertex2f(0 , 100);   // Bottom-right corner
        glEnd();




        //zar
            for (int i = 0; i < 30; i++) {
        // Draw the first set of circles
        drawCirclez(10 + i * 54, 180, 5);
        drawCirclez(10 + i *54, 175, 5);

        // Draw the second set of circles
        drawCirclez(20 + i * 54, 180, 9);
        drawCirclez(20 + i * 54, 175, 9);

        // Draw the third set of circles
        drawCirclez(30 + i * 54, 180, 5);
        drawCirclez(30 + i * 54, 175, 5);

        // Draw the fourth set of circles
        drawCirclez(45 + i * 54, 180, 11);
        drawCirclez(45 + i * 54, 175, 11);

        // Draw the fifth set of circles
        drawCirclez(55 + i * 54, 180, 5);
        drawCirclez(55 + i * 54, 175, 5);
    }

//rasta
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(0, 173);  // Bottom-left corner of the left shutter
    glVertex2f(1000, 173);  // Bottom-right corner of the left shutter
    glVertex2f(1000, 153);  // Top-right corner of the left shutter
    glVertex2f(0, 153);  // Top-left corner of the left shutter
glEnd();



   // Draw the first part of the house (Yellow)
glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);  // Yellow color
    glVertex2f(30 , 175);   // Right-top corner
    glVertex2f(80 , 175);   // Slanted point (above the lower part)
    glVertex2f(85, 150);    // Lower slanted point
    glVertex2f(25 , 150);   // Bottom-right corner
glEnd();

// Draw the second part of the house (Red)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color
    glVertex2f(30 , 150);   // Right-top corner
    glVertex2f(80 , 150);   // Slanted point (above the lower part)
    glVertex2f(80, 120);    // Lower slanted point
    glVertex2f(30 , 120);   // Bottom-right corner
glEnd();

// Draw the left window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(35 , 145);   // Right-top corner
    glVertex2f(40 , 145);   // Slanted point (above the lower part)
    glVertex2f(40, 130);    // Lower slanted point
    glVertex2f(35 , 130);   // Bottom-right corner
glEnd();

// Draw the right window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(70 , 145);   // Right-top corner
    glVertex2f(75 , 145);   // Slanted point (above the lower part)
    glVertex2f(75, 130);    // Lower slanted point
    glVertex2f(70 , 130);   // Bottom-right corner
glEnd();

// Now, let's draw the door
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45 , 120+30);   // Right-top corner (starting point for the door)
    glVertex2f(65 , 120+30);   // Top-right corner
    glVertex2f(65, 80+30+8);     // Bottom-right corner
    glVertex2f(45 , 80+30+8);    // Bottom-left corner
glEnd();






// house 2
// Apply translation to shift the house by 130 units along the X-axis
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 80 units along the X-axis
glTranslatef(80.0f, 32.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);  // Orange color for the roof
    glVertex2f(40+20 , 200);   // Top peak of the roof
    glVertex2f(100+20 , 175);  // Bottom-right corner of the roof
    glVertex2f(0 , 175);       // Bottom-left corner of the roof
glEnd();

// Draw the body of the house (Rectangle, different proportions)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the body of the house
    glVertex2f(20 , 175);      // Bottom-left corner
    glVertex2f(90 , 175);      // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner (lower position)
    glVertex2f(20 , 100);      // Top-left corner
glEnd();

// Draw the left window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(30 , 150);      // Top-left corner
    glVertex2f(50 , 150);      // Top-right corner
    glVertex2f(50, 130);       // Bottom-right corner
    glVertex2f(30 , 130);      // Bottom-left corner
glEnd();

// Draw the right window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(60 , 150);      // Top-left corner
    glVertex2f(80 , 150);      // Top-right corner
    glVertex2f(80, 130);       // Bottom-right corner
    glVertex2f(60 , 130);      // Bottom-left corner
glEnd();

// Draw the door (Wider door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45 , 100+50);       // Top-left corner of the door
    glVertex2f(65 , 100+50);       // Top-right corner of the door
    glVertex2f(65, 50+50);         // Bottom-right corner of the door
    glVertex2f(45 , 50+50);        // Bottom-left corner of the door
glEnd();

// Restore the previous transformation matrix
glPopMatrix();





//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 160 units along the X-axis
glTranslatef(160.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new slanted roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color for the roof
    glVertex2f(20, 200);       // Left peak of the roof (Y=200)
    glVertex2f(100, 200);      // Right peak of the roof (Y=200)
    glVertex2f(90, 175);       // Right-bottom corner of the roof (Y=175)
    glVertex2f(30, 175);       // Left-bottom corner of the roof (Y=175)
glEnd();

// Draw the body of the house (Rectangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.9, 0.0);  // Green color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner (Y=175)
    glVertex2f(90, 175);       // Bottom-right corner (Y=175)
    glVertex2f(90, 100);       // Top-right corner (Y=100)
    glVertex2f(30, 100);       // Top-left corner (Y=100)
glEnd();

// Draw the left window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(40, 150);       // Top-left corner (Y=150)
    glVertex2f(60, 150);       // Top-right corner (Y=150)
    glVertex2f(60, 130);       // Bottom-right corner (Y=130)
    glVertex2f(40, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the right window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(60, 150);       // Top-left corner (Y=150)
    glVertex2f(80, 150);       // Top-right corner (Y=150)
    glVertex2f(80, 130);       // Bottom-right corner (Y=130)
    glVertex2f(60, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the door (Smaller door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.75, 0.0);  // Brown color for the door
    glVertex2f(50, 100+40+10);       // Top-left corner of the door (Y=100)
    glVertex2f(70, 100+40+10);       // Top-right corner of the door (Y=100)
    glVertex2f(70, 50+40+10);        // Bottom-right corner of the door (Y=50)
    glVertex2f(50, 50+40+10);        // Bottom-left corner of the door (Y=50)
glEnd();

// Draw a chimney (Small rectangle on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 210-14);       // Bottom-left corner of the chimney (Y=205)
    glVertex2f(70, 210-14);       // Bottom-right corner of the chimney (Y=205)
    glVertex2f(70, 225);       // Top-right corner of the chimney (Y=225)
    glVertex2f(60, 225);       // Top-left corner of the chimney (Y=225)
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 260 units along the X-axis
glTranslatef(230.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the curved roof (Bezier-style shape for smooth curves)
glBegin(GL_POLYGON);
    glColor3f(0.9, 0.0, 0.0);  // Deep Red color for the roof
    glVertex2f(20-8, 180);       // Left peak of the roof
    glVertex2f(40-8, 220);       // Left-top curve of the roof
    glVertex2f(100-8, 220);      // Right-top curve of the roof
    glVertex2f(120-8, 170);      // Right peak of the roof
    glVertex2f(100-8, 154);      // Right-bottom corner of the roof
    glVertex2f(40-8, 154);       // Left-bottom corner of the roof
glEnd();

// Draw the body of the house (Rounded corners for a soft look)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.9, 0.4);  // Light Yellow color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner
    glVertex2f(90, 175);       // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner
    glVertex2f(30, 100);       // Top-left corner
glEnd();

// Draw the left window (Rounded square for elegance)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Bright Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        // Adjusting left window position (radius = 15, x = 50, y = 140)
        glVertex2f(60 + cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();



// Draw the door (Rounded top with a handle)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.0);  // Brown color for the door
    glVertex2f(50, 100);       // Top-left corner of the door
    glVertex2f(70, 100);       // Top-right corner of the door
    glVertex2f(70, 125);        // Bottom-right corner of the door
    glVertex2f(50, 125);        // Bottom-left corner of the door
glEnd();

// Draw the door handle (Small circle on the right side of the door)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.0);  // Yellow color for the handle
    for (float angle = 0; angle <= 360; angle += 1.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(60 + cos(rad) * 2, 75 + sin(rad) * 2); // Circular handle
    }
glEnd();

// Draw a chimney (Decorative chimney on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 205);       // Bottom-left corner of the chimney
    glVertex2f(65, 205);       // Bottom-right corner of the chimney
    glVertex2f(65, 225);       // Top-right corner of the chimney
    glVertex2f(60, 225);       // Top-left corner of the chimney
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house

// Draw the chimney base (original brown)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(400 - 80, 190);  // Bottom-left corner of the chimney
    glVertex2f(550 - 80, 190);  // Bottom-right corner of the chimney
    glVertex2f(550 - 80, 100);  // Top-right corner of the chimney
    glVertex2f(400 - 80, 100);  // Top-left corner of the chimney
glEnd();

// Draw the chimney top (darker color for a more realistic look)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.9);  // Darker color for the top of the chimney
    glVertex2f(400 - 70, 180);  // Bottom-left corner of the chimney top
    glVertex2f(530 - 70, 180);  // Bottom-right corner of the chimney top
    glVertex2f(530 - 70, 110);  // Top-right corner of the chimney top
    glVertex2f(400 - 70, 110);  // Top-left corner of the chimney top
glEnd();

// --- Draw the Window with Shutters ---
// Left Window
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(435+ cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();

// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-25, 145-17);  // Bottom-left corner of the left shutter
    glVertex2f(465-25, 145-17);  // Bottom-right corner of the left shutter
    glVertex2f(465-25, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-25, 170-17);  // Top-left corner of the left shutter
glEnd();

// Right Window (same as left)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(355 + cos(rad) * 15, 140 + sin(rad) * 15); // Right window
    }
glEnd();

// Right window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(505-155, 145-17);  // Bottom-left corner of the right shutter
    glVertex2f(515-155, 145-17);  // Bottom-right corner of the right shutter
    glVertex2f(515-155, 170-17);  // Top-right corner of the right shutter
    glVertex2f(505-155, 170-17);  // Top-left corner of the right shutter
glEnd();
// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-75, 125-17);  // Bottom-left corner of the left shutter
    glVertex2f(485-75, 125-17);  // Bottom-right corner of the left shutter
    glVertex2f(485-75, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-75, 170-17);  // Top-left corner of the left shutter
glEnd();



//house

// Translate the entire house upwards or downwards along the Y-axis

    glTranslatef(-20.0f, -20.0f, 0.0f);  // Translate the house 50 units upwards along the Y-axis

    // Draw the base of the house (rectangle)
    glColor3f(0.8f, 0.4f, 0.2f);  // Brown color for the house
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the base of the house
    glVertex2f(500, 120);
    glVertex2f(600, 120);
    glVertex2f(600, 180);
    glVertex2f(500, 180);
    glEnd();  // End drawing the rectangle

    // Draw the roof of the house (triangle)
    glColor3f(0.6f, 0.2f, 0.2f);  // Dark red color for the roof
    glBegin(GL_TRIANGLES);  // Begin drawing the triangle for the roof
    glVertex2f(500, 180);  // Left corner of the roof
    glVertex2f(600, 180);  // Right corner of the roof
    glVertex2f(550, 210);  // Peak of the roof
    glEnd();  // End drawing the triangle

    // Draw the door (rectangle)
    glColor3f(0.5f, 0.3f, 0.1f);  // Dark brown color for the door
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the door
    glVertex2f(535, 120);
    glVertex2f(565, 120);
    glVertex2f(565, 150);
    glVertex2f(535, 150);
    glEnd();  // End drawing the rectangle

    // Draw windows (rectangles)
    glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for windows
    glBegin(GL_QUADS);  // Left window
    glVertex2f(510, 150);
    glVertex2f(530, 150);
    glVertex2f(530, 170);
    glVertex2f(510, 170);
    glEnd();  // End drawing the left window

    glBegin(GL_QUADS);  // Right window
    glVertex2f(570, 150);
    glVertex2f(590, 150);
    glVertex2f(590, 170);
    glVertex2f(570, 170);
    glEnd();  // End drawing the right window




    //well



       // Translate the entire well 100 units to the right (along the X-axis)
    glTranslatef(80.0f, 0.0f, 0.0f);  // Move the well to the right

    // Draw the base of the well (circle)
    glColor3f(0.5f, 0.5f, 0.5f);  // Gray color for the well's base
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the base
    glVertex2f(550, 120);  // Center of the circle (well's base)
    const int numi_segments = 100;  // Number of segments to make the circle smooth
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the circle's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the circle's edge
        glVertex2f(x + 550, y + 135);  // Vertex of the circle
    }
    glEnd();  // End drawing the base circle

    // Draw the walls of the well (rectangle)
    glColor3f(0.3f, 0.3f, 0.3f);  // Dark gray color for the well's walls
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the walls of the well
    glVertex2f(535, 130);  // Bottom-left corner
    glVertex2f(565, 130);  // Bottom-right corner
    glVertex2f(565, 160);  // Top-right corner
    glVertex2f(535, 160);  // Top-left corner
    glEnd();  // End drawing the rectangle

    // Draw the top of the well (roof, another circle)
    glColor3f(0.0f, 0.0f, 1.0f);  // Dark brown color for the roof
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
    glVertex2f(550, 170);  // Center of the roof circle
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the roof's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the roof's edge
        glVertex2f(x + 550, y + 160);  // Vertex of the roof circle
    }
    glEnd();  // End drawing the roof circle

//kher

glColor3f(0.0f, 0.0f, 1.0f);  // Blue color for the roof
glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
glVertex2f(620, 170);  // Center of the roof circle (original position)

// New translation value for the Y-axis (roof)
float translationY = 50.0f;  // Translate 50 units up (can change this value)
float additionalTranslationY = 5.0f;  // Additional 5 units translation
float newCenterY = 120 + translationY + additionalTranslationY;  // New Y position after translation

// New radius value for a wider roof
float raddius = 31.0f;  // Increase the radius to make the circle wider

// Loop to create the circle for the roof
const int numq_segments = 100;  // Number of segments for smoothness
for (int i = 0; i <= numq_segments; i++) {
    float theta = 2.0f * 3.1415926f * float(i) / float(numq_segments);  // Calculate angle
    float x = raddius * cosf(theta);  // X coordinate for the roof's edge
    float y = raddius * sinf(theta);  // Y coordinate for the roof's edge
    glVertex2f(x + 620, y + newCenterY);  // Vertex of the roof circle with translated Y-coordinate
}
glEnd();  // End drawing the roof circle

// Set the color for the house body (brown)
glColor3f(0.6f, 0.3f, 0.0f);  // Brown color for the house body
glBegin(GL_QUADS);  // Begin drawing the rectangle for the body

// The body of the house (a smaller rectangle)
float houseWidth = 60.0f;  // Further reduced width of the house
float houseHeight = 60.0f;  // Further reduced height of the house

// Bottom-left corner of the house body (relative to the roof center)
float houseBottomLeftX = 620 - houseWidth / 2;
float houseBottomLeftY = newCenterY - raddius - houseHeight + 50.0f;  // Translate 50 units up (adjusted Y position)

// Bottom-right corner of the house body
float houseBottomRightX = houseBottomLeftX + houseWidth;
float houseBottomRightY = houseBottomLeftY;

// Top-left corner of the house body
float houseTopLeftX = houseBottomLeftX;
float houseTopLeftY = houseBottomLeftY + houseHeight;

// Top-right corner of the house body
float houseTopRightX = houseBottomRightX;
float houseTopRightY = houseTopLeftY;

// Define the 4 corners of the rectangle (house body)
glVertex2f(houseBottomLeftX, houseBottomLeftY);  // Bottom-left
glVertex2f(houseBottomRightX, houseBottomRightY);  // Bottom-right
glVertex2f(houseTopRightX, houseTopRightY);  // Top-right
glVertex2f(houseTopLeftX, houseTopLeftY);  // Top-left

glEnd();  // End drawing the house body

// Draw the window (small rectangle)
glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for the window
glBegin(GL_QUADS);  // Begin drawing the window

float windowWidth = 15.0f;  // Reduced width of the window
float windowHeight = 15.0f;  // Reduced height of the window

// Bottom-left corner of the window
float windowBottomLeftX = 627 - houseWidth / 4;  // Position window to the left of center
float windowBottomLeftY = houseTopLeftY - 25.0f;  // Positioned a little below the roof

// Bottom-right corner of the window
float windowBottomRightX = windowBottomLeftX + windowWidth;
float windowBottomRightY = windowBottomLeftY;

// Top-left corner of the window
float windowTopLeftX = windowBottomLeftX;
float windowTopLeftY = windowBottomLeftY + windowHeight;

// Top-right corner of the window
float windowTopRightX = windowBottomRightX;
float windowTopRightY = windowTopLeftY;

// Define the 4 corners of the window rectangle
glVertex2f(windowBottomLeftX, windowBottomLeftY);  // Bottom-left
glVertex2f(windowBottomRightX, windowBottomRightY);  // Bottom-right
glVertex2f(windowTopRightX, windowTopRightY);  // Top-right
glVertex2f(windowTopLeftX, windowTopLeftY);  // Top-left

glEnd();  // End drawing the window

// Draw the door (larger rectangle)
glColor3f(0.4f, 0.2f, 0.0f);  // Dark brown color for the door
glBegin(GL_QUADS);  // Begin drawing the door

float doorWidth = 20.0f;  // Reduced width of the door
float doorHeight = 40.0f;  // Reduced height of the door

// Bottom-left corner of the door (centered at the bottom)
float doorBottomLeftX = 620 - doorWidth / 2;
float doorBottomLeftY = houseBottomLeftY;

// Bottom-right corner of the door
float doorBottomRightX = doorBottomLeftX + doorWidth;
float doorBottomRightY = doorBottomLeftY;

// Top-left corner of the door
float doorTopLeftX = doorBottomLeftX;
float doorTopLeftY = doorBottomLeftY + doorHeight;

// Top-right corner of the door
float doorTopRightX = doorBottomRightX;
float doorTopRightY = doorTopLeftY;

// Define the 4 corners of the door rectangle
glVertex2f(doorBottomLeftX, doorBottomLeftY);  // Bottom-left
glVertex2f(doorBottomRightX, doorBottomRightY);  // Bottom-right
glVertex2f(doorTopRightX, doorTopRightY);  // Top-right
glVertex2f(doorTopLeftX, doorTopLeftY);  // Top-left

glEnd();  // End drawing the door



float translationX = 100.0f;  // Translation value on the X-axis

glColor3f(0.5f, 0.0f, 0.9f);

// Begin drawing a rectangle (structure) using GL_QUADS
glBegin(GL_QUADS);
    // Define the four vertices of the rectangle, translating them by `translationX`
    glVertex2f(760.0f + translationX, 120.0f); // bottom-left corner
    glVertex2f(840.0f + translationX, 120.0f); // bottom-right corner
    glVertex2f(840.0f + translationX, 190.0f); // top-right corner
    glVertex2f(760.0f + translationX, 190.0f); // top-left corner
glEnd();

// Draw a complex structure

// Set color for the base rectangle (red)
glColor3f(1.0f, 0.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 130.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 130.0f); // bottom-right corner
    glVertex2f(830.0f + translationX, 170.0f); // top-right corner
    glVertex2f(770.0f + translationX, 170.0f); // top-left corner
glEnd();

// Set color for the top triangle (blue)
glColor3f(0.7f, 0.6f, 0.4f);
glBegin(GL_TRIANGLES);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // peak of the triangle
glEnd();

// Set color for another rectangle (green)
glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(800.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // top-right corner
    glVertex2f(770.0f + translationX, 200.0f); // top-left corner
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(160+740, 130);  // Bottom-left of the door
glVertex2f(140+740, 130);  // Bottom-right of the door
glVertex2f(140+740, 170);  // Top-right of the door
glVertex2f(160+740, 170);  // Top-left of the door
glEnd();

//cricket
drawCircle7(755,150,15);
drawCircle7(730,150,15);
drawCircle7(775,150,15);
drawCircle7(710,150,15);
drawCircle7(795,150,15);
drawCircle7(805,150,15);


drawCircle5(755,150,14);
drawCircle5(730,150,14);
drawCircle5(775,150,14);
drawCircle5(710,150,14);
drawCircle5(795,150,14);
drawCircle5(805,150,14);
glColor3f(1.0f, 1.0f, 0.0f); // Color the polygon yellow (you can change this)
glBegin(GL_QUADS);

// Define the four vertices of the polygon (you can adjust the coordinates to fit your design)
glVertex2f(720.0f, 140.0f); // bottom-left corner
glVertex2f(785.0f, 140.0f); // bottom-right corner
glVertex2f(785.0f, 160.0f); // top-right corner
glVertex2f(720.0f, 160.0f); // top-left corner

glEnd();




bird();
bird1();

l();



    glutSwapBuffers();




}


void drawScene5()
{


glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();
//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen
    glLoadIdentity(); // Reset the drawing perspective
    gluOrtho2D(0.0, 1000.0, 0.0, 1000.0); // Set orthographic projection range
    glMatrixMode(GL_MODELVIEW); // Set the matrix mode to modelview for 2D drawing

    // Drawing the sky (a blue rectangle)
    glBegin(GL_POLYGON);
    glColor3f(0.122, 0.635, 1); // Sky color (light blue)
    glVertex2f(0, 800); // Bottom-left corner
    glVertex2f(0, 1000); // Top-left corner
    glVertex2f(1000, 1000); // Top-right corner
    glVertex2f(1000, 800); // Bottom-right corner
    glEnd();

    glPushMatrix();
    glTranslatef(500.0, 900.0, 0); // Move to center of the window (500, 900)

    // Draw sun halo (glowing effect)
    float radius = 25.0f; // Radius of the sun
    int num_segments = 100; // Number of segments to approximate the circle
    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.2f, 0.3f); // Light yellow with transparency for a soft glow
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * 1.3f * cos(theta); // Make halo larger than the sun
        float y = radius * 1.3f * sin(theta); // Make halo larger than the sun
        glVertex2f(x, y); // Plot the halo vertex
    }
    glEnd();

    // Draw the sun (gradient yellow circle)
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * cos(theta); // X position of each vertex
        float y = radius * sin(theta); // Y position of each vertex

        // Create a gradient from yellow to light orange for a glowing effect
        float r = 1.0f - 0.6f * (float(i) / float(num_segments)); // Red decreases over time
        float g = 1.0f - 0.4f * (float(i) / float(num_segments)); // Green decreases over time
        float b = 0.333f; // Fixed blue value for the sun color

        glColor3f(r, g, b); // Apply the gradient color
        glVertex2f(x, y); // Plot the vertex
    }
    glEnd();

    // Draw sun rays for extra effect
 glLineWidth(2.5); // Set line width for rays
glColor3f(1.0f, 0.9f, 0.2f); // Light yellow color for the rays

float ray_length = 30.0f; // Adjust the length of the rays

for (int i = 0; i < 12; i++) { // Drawing 12 rays
    float angle = (2.0f * 3.1415926f * float(i)) / 12.0f; // Angle for each ray
    float x_start = radius * cos(angle); // X start point of the ray
    float y_start = radius * sin(angle); // Y start point of the ray
    float x_end = (radius + ray_length) * cos(angle); // X end point of the ray (shortened)
    float y_end = (radius + ray_length) * sin(angle); // Y end point of the ray (shortened)

    glBegin(GL_LINES);
    glVertex2f(x_start, y_start); // Starting point of the ray
    glVertex2f(x_end, y_end); // Ending point of the ray
    glEnd();
}


    glPopMatrix();

clouds1();


clouds2();


clouds3();

//plane

  glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 920 ); // Bottom-left corner
    glVertex2f(600+ shifti, 940 ); // Top-left corner
    glVertex2f(680+ shifti, 940 ); // Top-right corner
    glVertex2f(680+ shifti, 920 ); // Bottom-right corner
    glEnd();



       glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(700+ shifti, 960 ); // Bottom-right corner
   glVertex2f(700+ shifti, 920 ); // Top-right corner
    glVertex2f(680+ shifti, 920) ; // Top-right corner

    glEnd();

        glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)

     glVertex2f(680+ shifti, 940 ); // Top-right corner
   glVertex2f(700 + shifti, 940 ); // Top-right corner
   glVertex2f(680 + shifti, 920 ); // Bottom-right corner

    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(640+ shifti, 930 ); // Bottom-left corner
    glVertex2f(650 + shifti, 930 ); // Top-left corner
     glVertex2f(670+ shifti, 890 ); // Bottom-right corner
    glVertex2f(660+ shifti, 890 ); // Top-right corner

    glEnd();

    drawCircle(600.0f + shifti, 930.0f, 10.0f);

  glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(600 + shifti, 935 ); // Bottom-left corner

    glVertex2f(600 + shifti, 933 ); // Top-left corner
    glVertex2f(680 + shifti, 933 ); // Bottom-right corner

    glVertex2f(680 + shifti, 935 ); // Top-right corner
    glEnd();


// the rocket


    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 890 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
    glVertex2f(90, 830 + shift); // Top-right corner
    glVertex2f(90, 890 + shift); // Bottom-right corner
    glEnd;



      glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0); // Sky color (light blue)
    glVertex2f(100, 880 + shift); // Bottom-left corner
    glVertex2f(100, 870 + shift); // Top-left corner
    glVertex2f(90, 870 + shift); // Top-right corner
    glVertex2f(90, 880 + shift); // Bottom-right corner
    glEnd;




       glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.5); // Sky color (light blue)
    glVertex2f(100, 860 + shift); // Bottom-left corner
    glVertex2f(100, 850 + shift); // Top-left corner
    glVertex2f(90, 850 + shift); // Top-right corner
    glVertex2f(90, 860 + shift); // Bottom-right corner
    glEnd;




    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0); // Sky color (light blue)
    glVertex2f(90, 830 + shift); // Bottom-left corner
    glVertex2f(100, 830 + shift); // Top-left corner
      glVertex2f(102, 815 + shift); // Top-right corner
       glVertex2f(88, 815 + shift); // Bottom-right corner


    glEnd();

   glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(95, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(92, 800 + shift); // Top-right corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
    glVertex2f(88, 815 + shift); // Bottom-right corner
   glVertex2f(102, 815 + shift); // Top-right corner
    glVertex2f(98, 800 + shift); // Top-right corner

    glEnd();



      glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Sky color (light blue)
     glVertex2f(90, 890 + shift); // Bottom-right corner

    glVertex2f(95, 910 + shift); // Top-right corner
     glVertex2f(100, 890 + shift); // Top-left corner

    glEnd();








///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(0,800);
    glVertex2f(100,800);
    glVertex2f(50,850);


    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
     glColor3f(0.416, 0.69, 0.153);
    glVertex2f(20,850);
   glVertex2f(100,800);
    glVertex2f(0,800);

    glEnd();

    //polygon2//
    glBegin(GL_POLYGON);
     glColor3f(0.416, 0.69, 0.153);
    glVertex2f(70,850);
   glVertex2f(100,800);
    glVertex2f(0,800);

    glEnd();


/// hill 2

//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(100,800);
    glVertex2f(200,800);
    glVertex2f(180,835);
    glVertex2f(160,840);
    glVertex2f(155,845);



    glVertex2f(150,840);

   glVertex2f(130,845);

    glVertex2f(120,840);
       glVertex2f(150,835);



    glEnd();



/// hill3

glBegin(GL_POLYGON);
glColor3f(0.157, 0.42, 0.255);
glVertex2f(200, 800);   // Vertex 1
glVertex2f(330, 800);   // Vertex 2
glVertex2f(330, 800);   // Vertex 3 (new point)
glVertex2f(330, 800);   // Vertex 4 (new point)
glVertex2f(310, 860);   // Vertex 5 (new point)
glVertex2f(270, 870);   // Vertex 6 (new point)
glVertex2f(230, 860);   // Vertex 7 (new point)
glVertex2f(200, 800);   // Vertex 8 (new point)
glEnd();






//hill 4

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(330, 800);    // Vertex 1 (top left)
glVertex2f(430, 800);    // Vertex 2 (upper left)
glVertex2f(430, 900);    // Vertex 3 (middle left)
glVertex2f(330, 900);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(330+33, 800);    // Vertex 1 (top left)

glVertex2f(330+33, 900);    // Vertex 3 (middle left)

glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430-33, 800);    // Vertex 2 (upper left)
glVertex2f(430-33, 900);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 825);    // Vertex 2 (upper left)
glVertex2f(330, 825);    // Vertex 3 (middle left)
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 850);    // Vertex 2 (upper left)
glVertex2f(330, 850);    // Vertex 3 (middle left)
glEnd();


glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Green color (for the shape)
glVertex2f(430, 875);    // Vertex 2 (upper left)
glVertex2f(330, 875);    // Vertex 3 (middle left)
glEnd();




int x_start = 330, x_end = 430; // X range
int y_start = 800, y_end = 900; // Y range
int horizontal_count = 3;       // Number of polygons horizontally
int vertical_count = 4;         // Number of polygons vertically

// Initial polygon points (given)
float initial_x = 347.0f;
float initial_y = 812.0f; // Corrected initial y value

// Loop to create the polygons
for (int i = 0; i < vertical_count; i++) {
    for (int j = 0; j < horizontal_count; j++) {
        // Calculate x and y positions for each polygon
        float x = initial_x + j * ((x_end - x_start) / horizontal_count);
        float y = initial_y + i * ((y_end - y_start) / vertical_count);

        // Draw the polygon at (x, y)
        glBegin(GL_POLYGON);
        glColor3f(0.125, 0.404, 0.49);  // Green color for the polygon (customize as needed)

        // Define 4 vertices for each polygon, with (x, y) as the center
        glVertex2f(x - 6, y + 5);   // Vertex 1 (top left)
        glVertex2f(x + 6, y + 5);   // Vertex 2 (top right)
        glVertex2f(x + 6, y - 5);   // Vertex 3 (bottom right)
        glVertex2f(x - 6, y - 5);   // Vertex 4 (bottom left)

        glEnd();
    }
}





///dsfdfd
glBegin(GL_POLYGON);
glColor3f(0.89, 0.722, 0.098); // Green color (for the shape)
glVertex2f(430, 800);    // Vertex 1 (top left)
glVertex2f(530, 800);    // Vertex 2 (upper left)
glVertex2f(480, 840);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Green color (for the shape)
glVertex2f(530, 800);    // Vertex 1 (top left)
glVertex2f(580, 800);    // Vertex 2 (upper left)
glVertex2f(555, 850);    // Vertex 3 (middle left)

glEnd();



glBegin(GL_POLYGON);
glColor3ub(34, 5, 34); // Green color (for the shape)
    // Vertex 1 (top left)
glVertex2f(580, 800);    // Vertex 2 (upper left)
glVertex2f(555, 850);
glVertex2f(620, 800);    // Vertex 3 (middle left)

glEnd();


///new byulding

glBegin(GL_POLYGON);
glColor4f(0.812, 0.741, 0.051, 0.922); // Green color (for the shape)
glVertex2f(620, 800);    // Vertex 1 (top left)
glVertex2f(620, 900);    // Vertex 2 (upper left)
glVertex2f(730, 900);    // Vertex 3 (middle left)
glVertex2f(730, 800);    // Vertex 3 (middle left)

glEnd();




// Park dimensions and configuration
int x_range_start = 620, x_range_end = 720; // X range
int y_range_start = 800, y_range_end = 900; // Y range
int num_polygons_horizontal = 3;            // Number of polygons horizontally
int num_polygons_vertical = 4;              // Number of polygons vertically

// Initial position of the first polygon
float initial_pos_x = 642.0f;
float initial_pos_y = 810.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row = 0; row < num_polygons_vertical; row++) {
    for (int col = 0; col < num_polygons_horizontal; col++) {
        // Calculate X and Y positions for each polygon
        float pos_x = initial_pos_x + col * ((x_range_end - x_range_start) / num_polygons_horizontal);
        float pos_y = initial_pos_y + row * ((y_range_end - y_range_start) / num_polygons_vertical);

        // Draw the polygon at (pos_x, pos_y)
        glBegin(GL_POLYGON);
        glColor3f(0.153, 0.808, 0.961);  // Green color for the polygon (customize as needed)

        // Define 6 vertices for each polygon, with the (pos_x, pos_y) as the center
        glVertex2f(pos_x - 10, pos_y + 10);   // Vertex 1
        glVertex2f(pos_x + 10, pos_y + 10);   // Vertex 2
        glVertex2f(pos_x + 20, pos_y);        // Vertex 3
        glVertex2f(pos_x + 10, pos_y - 10);   // Vertex 4
        glVertex2f(pos_x - 10, pos_y - 10);   // Vertex 5
        glVertex2f(pos_x - 20, pos_y);        // Vertex 6

        glEnd();
    }
}


/// new building


glBegin(GL_POLYGON);
glColor3f(0.89, 0.105, 0.4); // Green color (for the shape)
glVertex2f(730, 800);    // Vertex 1 (top left)
glVertex2f(730, 850);    // Vertex 2 (upper left)
glVertex2f(845, 850);    // Vertex 3 (middle left)
glVertex2f(845, 800);    // Vertex 3 (middle left)

glEnd();

// Park dimensions and configuration
int park_x_start = 720, park_x_end = 820;   // X range for the park area
int park_y_start = 800, park_y_end = 850;   // Y range for the park area
int total_polygons_horizontal = 4;           // Number of polygons horizontally
int total_polygons_vertical = 4;             // Number of polygons vertically

// Initial position of the first polygon
float start_pos_x = 750.0f;
float start_pos_y = 807.0f; // Corrected initial Y value

// Loop to create the polygons
for (int row_index = 0; row_index < total_polygons_vertical; row_index++) {
    for (int col_index = 0; col_index < total_polygons_horizontal; col_index++) {
        // Calculate X and Y positions for each polygon
        float polygon_pos_x = start_pos_x + col_index * ((park_x_end - park_x_start) / total_polygons_horizontal);
        float polygon_pos_y = start_pos_y + row_index * ((park_y_end - park_y_start) / total_polygons_vertical);

        // Draw the polygon at (polygon_pos_x, polygon_pos_y)
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygon (customize as needed)

        // Define 8 vertices for each polygon, with (polygon_pos_x, polygon_pos_y) as the center
        glVertex2f(polygon_pos_x - 6, polygon_pos_y + 3);  // Vertex 1
        glVertex2f(polygon_pos_x + 6, polygon_pos_y + 3);  // Vertex 2
        glVertex2f(polygon_pos_x + 15, polygon_pos_y + 2);   // Vertex 3
        glVertex2f(polygon_pos_x + 15, polygon_pos_y - 2);   // Vertex 4
        glVertex2f(polygon_pos_x + 6, polygon_pos_y - 3);  // Vertex 5
        glVertex2f(polygon_pos_x - 6, polygon_pos_y - 3);  // Vertex 6
        glVertex2f(polygon_pos_x - 15, polygon_pos_y - 2);   // Vertex 7
        glVertex2f(polygon_pos_x - 15, polygon_pos_y + 2);   // Vertex 8

        glEnd();
    }
}


///new obkec


glBegin(GL_POLYGON);
glColor3ub(34, 139, 34);
glVertex2f(845, 800);    // Vertex 1 (top left)
glVertex2f(845, 835);    // Vertex 2 (upper left)
glVertex2f(1000, 835);    // Vertex 3 (middle left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)

glEnd();

drawCircle2(873.0f, 830.0f, 15.0f);

drawCircle2(900.0f, 830.0f, 15.0f);
drawCircle2(930.0f, 830.0f, 18.0f);

drawCircle2(955.0f, 830.0f, 15.0f);
drawCircle2(985.0f, 830.0f, 18.0f);

drawCircle2(1020.0f, 830.0f, 18.0f);

drawCircle3(850.0f, 820.0f, 6.0f);

drawCircle3(860.0f, 820.0f, 6.0f);






//nodi
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,1.0); // Green color (for the shape)
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 800);    // Vertex 3 (middle left)
glVertex2f(0, 800);    // Vertex 3 (middle left)

glEnd();

float gadp = 5.0f;  // The gap between objects
float widt = 0.75f;  // The width of each object

// Starting position for the Y-coordinate
float startY = 797.0f;

// Adjust this gap to prevent overlap, assuming your object height is 1.0f
float vert_gap = 4.0f;

for (int j = 0; j < 200; j++) {  // Loop for drawing 200 rows vertically
    for (int i = 0; i < 500; i++) {
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);

        // Calculate the X positions with gap between objects
        float x_offset = (widt + gadp) * i;

        // Calculate the Y position for each row, with a gap between them
        float y_offset = startY - j * vert_gap;  // Adjust Y for each row

        glVertex2f(x_offset, y_offset);
        glVertex2f(x_offset + widt, y_offset);
        glVertex2f(x_offset + widt, y_offset - 1.0f);  // Slightly adjust for the height of the object
        glVertex2f(x_offset, y_offset - 1.0f);  // Slightly adjust for the height of the object

        glEnd();
    }
}



//road
glBegin(GL_POLYGON);
glColor3f(0.541, 0.541, 0.514); // Green color (for the shape)
glVertex2f(0, 700);    // Vertex 1 (top left)
glVertex2f(1000, 700);    // Vertex 2 (upper left)
glVertex2f(1000, 630);    // Vertex 3 (middle left)
glVertex2f(0, 630);    // Vertex 3 (middle left)


glEnd();

float ga = 5.0f;  // The gap between objects
float wi = 4.0f;  // The width of each object

for (int i = 0; i < 150; i++) {
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // Black color (for the shape)

    // Calculate the X position with gap between objects
    float x_offset = (wi + ga) * i;

    glVertex2f(x_offset, 657);    // Vertex 1 (top left)
    glVertex2f(x_offset + wi, 657);    // Vertex 2 (upper right)
    glVertex2f(x_offset + wi, 653);    // Vertex 3 (bottom right)
    glVertex2f(x_offset, 653);    // Vertex 4 (bottom left)

    glEnd();
}



glEnd();





// pillar of bridge
// Set the gap between each pillar
float gap = 100.0f; // You can adjust this value for a bigger or smaller gap between pillars

// Loop to draw multiple pillars along the horizontal axis
for (float xOffset = 0; xOffset < 1200; xOffset += gap) { // Change 300 to the desired number of pillars (adjust as needed)
    // Draw the main pillar body (rectangle-like shape with slight curve)
    glBegin(GL_POLYGON);
    glColor3f(0.541, 0.541, 0.514); // Pillar color
    glVertex2f(10 + xOffset, 630);  // Top left vertex
    glVertex2f(60 + xOffset, 630);  // Top right vertex
    glVertex2f(60 + xOffset, 600);  // Bottom right vertex
    glVertex2f(10 + xOffset, 600);  // Bottom left vertex
    glEnd();

    // Add subtle ridges for texture (details for aesthetics)
    glLineWidth(2.0);
    glColor3f(0.396, 0.263, 0.129); // Dark color for ridges
    for (float y = 610; y <= 620; y += 2) {
        glBegin(GL_LINES);
        glVertex2f(10 + xOffset, y);  // Start from the left side
        glVertex2f(60 + xOffset, y);  // End at the right side
        glEnd();
    }
    glLineWidth(1.0); // Reset line width after the detailing

    // Add a cap to the top of the pillar for extra detail (a rectangle-like top)
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176); // Darker brown color for the cap
    glVertex2f(10 + xOffset, 620);  // Left top of the cap
    glVertex2f(60 + xOffset, 620);  // Right top of the cap
    glVertex2f(60 + xOffset, 630);  // Right side raised for cap
    glVertex2f(10 + xOffset, 630);  // Left side raised for cap
    glEnd();
}



// rail line

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 680);
    glVertex2f(1000, 680);
glEnd();

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 670);
    glVertex2f(1000, 670);
glEnd();


// Number of lines to draw
int numLines = 350; // You can adjust this as needed
float gapi = 4.0f; // Gap between each line

// Loop to draw multiple lines with a gap
for (int i = 0; i < numLines; ++i) {
    float offsetX = i * gapi;  // Increment the x-coordinate by 'gap' each time

    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0); // Set the line color to black

        // Draw the line horizontally, with each line moved by 'offsetX'
        glVertex2f(0 + offsetX, 670); // Starting point of the line
        glVertex2f(0 + offsetX, 680); // End point of the line (100 units to the right)

    glEnd();
}

// rail 3

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 633);
    glVertex2f(1000, 633);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 635);
    glVertex2f(1000, 635);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 636);
    glVertex2f(1000, 637);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 637);
    glVertex2f(1000, 639);
glEnd();

// rail 4

glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 700);
    glVertex2f(1000, 700);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 698);
    glVertex2f(1000, 698);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 696);
    glVertex2f(1000, 696);
glEnd();
glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 694);
    glVertex2f(1000, 694);
glEnd();












//ship 3


 glBegin(GL_POLYGON);
glColor3f(0.318, 0.91, 0.184); // Green color (for the shape)
glVertex2f(850 + sh, 760);    // Vertex 1 (top left)
glVertex2f(950 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(950 + sh, 740);    // Vertex 3 (middle left)
glVertex2f(870 + sh, 740);    // Vertex 3 (middle left)


  glEnd();

 glBegin(GL_POLYGON);
glColor3f(0.737, 0.737, 0.737); // Green color (for the shape)
glVertex2f(880 + sh, 760);    // Vertex 1 (top left)
glVertex2f(940 + sh, 760);    // Vertex 2 (upper left)
glVertex2f(940 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(880 + sh, 780);    // Vertex 3 (middle left)


  glEnd();


   glBegin(GL_POLYGON);
glColor3f(0.737, 0.49, 0.737); // Green color (for the shape)
glVertex2f(920 + sh, 800);    // Vertex 1 (top left)
glVertex2f(930 + sh, 800);    // Vertex 2 (upper left)
glVertex2f(930 + sh, 780);    // Vertex 3 (middle left)
glVertex2f(920 + sh, 780);    // Vertex 3 (middle left)


  glEnd();

   glBegin(GL_POLYGON);
glColor3f(0.737, 0.49, 0.31); // Green color (for the shape)
glVertex2f(900+ sh, 800);    // Vertex 1 (top left)
glVertex2f(910+ sh, 800);    // Vertex 2 (upper left)
glVertex2f(910+ sh, 780);    // Vertex 3 (middle left)
glVertex2f(900+ sh, 780);    // Vertex 3 (middle left)


  glEnd();

  drawCircle2(910.0f + sh , 770.0f, 5.0f);
drawCircle2(930.0f + sh , 770.0f, 5.0f);
drawCircle2(880.0f + sh , 750.0f, 5.0f);
drawCircle2(880.0f + sh , 750.0f, 3.0f);






//ship

glBegin(GL_POLYGON);
glColor3f(1, 0.235, 0); // Green color (for the shape)
glVertex2f(100 + shif, 750);    // Vertex 1 (top left)
glVertex2f(300 + shif, 750);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 730);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 730);    // Vertex 3 (middle left)

  glEnd();


  glBegin(GL_POLYGON);
glColor3f(0.957, 1, 0); // Green color (for the shape)
glVertex2f(110 + shif, 790);    // Vertex 1 (top left)
glVertex2f(290 + shif, 790);    // Vertex 2 (upper left)
glVertex2f(290 + shif, 750);    // Vertex 3 (middle left)
glVertex2f(110 + shif, 750);    // Vertex 3 (middle left)

  glEnd();


   // Define the gap between polygons
    float gapX = 5.0;  // Horizontal gap (between columns)
    float gapY = 6.0;  // Vertical gap (between rows)

    // Size of each polygon (hexagon)
    float radi = 3.0;  // Radius of the hexagon

    // Loop to create 4 vertical and 22 horizontal polygons (grid)
    for (int row = 0; row < 3; row++) {          // Loop through rows (4 rows)
        for (int col = 0; col < 16; col++) {     // Loop through columns (22 columns)
            // Calculate the X and Y offset for each polygon
            float offsetX = 115 + col * (2 * radi + gapX);  // Horizontal offset (including gapX)
            float offsetY = 776 - row * (radi * 2 + gapY);  // Vertical offset (including gapY)

            // Draw the hexagon at the calculated position
            glBegin(GL_POLYGON);
            glColor3f(0.043, 0.58, 0.961);  // White color (for the shape)

            // Calculate the six vertices of the hexagon
            for (int i = 0; i < 8; i++) {
                float angle = i * 2.0 * M_PI / 8;  // Divide 360 degrees by 6 vertices (2π/6)
                float x = offsetX + radi * cos(angle);
                float y = offsetY + radi * sin(angle);

                glVertex2f(x + + shif, y);  // Add the vertex to the polygon
            }

            glEnd();
        }
    }



//ship2

glBegin(GL_POLYGON);
glColor3f(0.831, 0.486, 0.098); // Green color (for the shape)
glVertex2f(500 + shi, 750);    // Vertex 1 (top left)
glVertex2f(700 + shi, 750);    // Vertex 2 (upper left)
glVertex2f(680 + shi, 720);    // Vertex 3 (middle left)
glVertex2f(500 + shi, 720);    // Vertex 3 (middle left)

  glEnd();


glBegin(GL_POLYGON);
glColor3f(0.027, 0.686, 0.941); // Green color (for the shape)
glVertex2f(510 + shi, 770);    // Vertex 1 (top left)
glVertex2f(680 + shi, 770);    // Vertex 2 (upper left)
glVertex2f(680+ shi, 740);    // Vertex 3 (middle left)
glVertex2f(510+ shi, 740);    // Vertex 3 (middle left)


  glEnd();




glColor3f(1.0, 1.0, 1.0);

    // Size of the polygon
    float width = 3.0;
    float height = 3.0;

    // Gap between polygons
    float gapy = 2.0;

    // Number of rows and columns
    int rows = 4;  // You can adjust the number of rows
    int cols = 33;  // You can adjust the number of columns

    // Draw the grid of polygons with a gap between them
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            glBegin(GL_POLYGON);

            // Draw the polygon at the current position, adding the gap to the offset
            glVertex2f(512 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Top left
            glVertex2f(515 + j * (width + gapy) + shi, 768 - i * (height + gapy));    // Upper left
            glVertex2f(515 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom left
            glVertex2f(512 + j * (width + gapy)+ shi, 765 - i * (height + gapy));    // Bottom right

            glEnd();
        }

    }


 glBegin(GL_POLYGON);
glColor3f(1.0,0.0,1.0); // Green color (for the shape)
glVertex2f(520+ shi, 790);    // Vertex 1 (top left)
glVertex2f(670+ shi, 790);    // Vertex 2 (upper left)
glVertex2f(670+ shi, 770);    // Vertex 3 (middle left)
glVertex2f(520+ shi, 770);    // Vertex 3 (middle left)


  glEnd();

 glBegin(GL_POLYGON);
glColor3f(0.353, 0.569, 0.651); // Green color (for the shape)
glVertex2f(523+ shi, 787);    // Vertex 1 (top left)
glVertex2f(667+ shi, 787);    // Vertex 2 (upper left)
glVertex2f(667+ shi, 773);    // Vertex 3 (middle left)
glVertex2f(523+ shi, 773);    // Vertex 3 (middle left)


  glEnd();





train();
cargo();
cars();


//600px
glBegin(GL_POLYGON);
glColor3f(0.361, 0.318, 0.035);
glVertex2f(0, 600);    // Vertex 1 (top left)
glVertex2f(1000, 600);    // Vertex 2 (upper left)
glVertex2f(1000, 500);    // Vertex 3 (middle left)
glVertex2f(0, 500);    // Vertex 3 (middle left)

glEnd();


//bulding 600px

glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex2f(20, 525);    // Vertex 1 (top left)
glVertex2f(150, 525);    // Vertex 2 (upper left)
glVertex2f(150, 520);    // Vertex 3 (middle left)
glVertex2f(20, 520);    // Vertex 3 (middle left)

glEnd();


glBegin(GL_POLYGON);
glColor3f(1.0,1.0,1.0);
glVertex2f(20, 580);    // Vertex 1 (top left)
glVertex2f(150, 580);    // Vertex 2 (upper left)
glVertex2f(150, 525);    // Vertex 3 (middle left)
glVertex2f(20, 525);    // Vertex 3 (middle left)

glEnd();

  for (int i = 0; i < 10; i++) {
        // Loop to create 20 columns
        for (int j = 0; j < 25; j++) {
            float x_offset = j * 5.0f; // Horizontal distance between rectangles
            float y_offset = i * 5.0f; // Vertical distance between rectangles

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0); // Black color for the rectangles

            // Define the four vertices of each rectangle
            glVertex2f(23 + x_offset, 578 - y_offset); // Vertex 1 (top left)
            glVertex2f(27 + x_offset, 578 - y_offset); // Vertex 2 (upper right)
            glVertex2f(27 + x_offset, 572 - y_offset); // Vertex 3 (bottom right)
            glVertex2f(23 + x_offset, 572 - y_offset); // Vertex 4 (bottom left)

            glEnd();
        }
    }



   for (int i = 0; i < 7; i++) {
        float x_offset = i * 15.0f;  // Horizontal distance between triangles

        // Draw the main triangle
        glBegin(GL_TRIANGLES);
        glColor3f(1.0, 1.0, 1.0); // White color for the triangle
        glVertex2f(20 + x_offset, 580);    // Vertex 1 (top left)
        glVertex2f(60 + x_offset, 580);    // Vertex 2 (top right)
        glVertex2f(40 + x_offset, 595);    // Vertex 3 (middle top)
        glEnd();

        // Decorative pattern inside each triangle (smaller triangle)
        glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 0.0); // Black color for the decoration

        glVertex2f(30 + x_offset, 580);    // Vertex 1 (top left of inner triangle)
        glVertex2f(50 + x_offset, 580);    // Vertex 2 (top right of inner triangle)
        glVertex2f(40 + x_offset, 590);    // Vertex 3 (middle of inner triangle)
        glEnd();
    }







// building 2

   glBegin(GL_POLYGON);
glColor3f(0.,0.5,0.4);
glVertex2f(160, 525);    // Vertex 1 (top left)
glVertex2f(280, 525);    // Vertex 2 (upper left)
glVertex2f(280, 605);    // Vertex 3 (middle left)
glVertex2f(160, 605);    // Vertex 3 (middle left)

glEnd();


    // Loop to create multiple rectangles horizontally
    for (int i = 0; i < 6; i++) { // For 6 rectangles (you can increase the count)
        float y_offset = i * 18.0f;  // Vertical distance between rectangles

        // Change color for each rectangle (cycling between blue and orange)
        float red = (i % 2 == 0) ? 1.0f : 1.0f; // Keep red component for both blue and orange
        float green = (i % 2 == 0) ? 0.0f : 0.5f; // Blue (green = 0) and Orange (green = 0.5)
        float blue = (i % 2 == 0) ? 1.0f : 0.0f; // Blue (blue = 1) and Orange (blue = 0)

        // Draw the main rectangle
        glBegin(GL_POLYGON);
        glColor3f(red, green, blue); // Set the color dynamically for each rectangle

        // Define the four vertices of each rectangle
        glVertex2f(160 , 525 + y_offset);    // Vertex 1 (top left)
        glVertex2f(280 , 525 + y_offset);    // Vertex 2 (top right)
        glVertex2f(280 , 510 + y_offset);    // Vertex 3 (bottom right)
        glVertex2f(160 , 510 + y_offset);    // Vertex 4 (bottom left)

        glEnd();

        // Add a new color in the gap between rectangles (e.g., pink color)
        float gap_red = 1.0f;  // Set the red component for pink color
        float gap_green = 0.75f; // Set the green component for pink color
        float gap_blue = 0.8f;  // Set the blue component for pink color

        glBegin(GL_POLYGON);
        glColor3f(gap_red, gap_green, gap_blue); // Set the gap color to pink

        // Draw a smaller rectangle in the gap between each main rectangle
        glVertex2f(160 , 525 + y_offset - 9.0f);    // Top left of gap shape
        glVertex2f(280 , 525 + y_offset - 9.0f);    // Top right of gap shape
        glVertex2f(280 , 510 + y_offset + 9.0f);    // Bottom right of gap shape
        glVertex2f(160 , 510 + y_offset + 9.0f);    // Bottom left of gap shape

        glEnd();

        // Add a smaller shape (e.g., a smaller rectangle) inside the gap with cyan color
        float inner_red = 0.0f;  // No red for cyan
        float inner_green = 1.0f; // Full green for cyan
        float inner_blue = 1.0f;  // Full blue for cyan

        glBegin(GL_POLYGON);
        glColor3f(inner_red, inner_green, inner_blue); // Set the inner shape color to cyan

        // Draw a smaller rectangle inside the gap
        glVertex2f(160 + 30.0f, 525 + y_offset);    // Top left of inner shape
        glVertex2f(280 - 30.0f, 525 + y_offset);    // Top right of inner shape
        glVertex2f(280 - 30.0f, 510 + y_offset);    // Bottom right of inner shape
        glVertex2f(160 + 30.0f, 510 + y_offset);    // Bottom left of inner shape

        glEnd();
    }


    for (int i = 0; i < 10; i++) {  // Loop for 20 rows
    for (int j = 0; j < 6; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 193 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 610 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}









///building 2.2


   // Loop to draw 24 rows of polygons (vertically)
 for (int i = 0; i < 24; i++) {
    for (int j = 0; j < 30; j++) {
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 3;  // Horizontal spacing (30 columns)
        float y = 595 - i * 4;  // Vertical spacing (24 rows)

        // Choose a color based on the index
          if ((i + j) % 3 == 0) {
                glColor3f(1.0, 0.0, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(1.0, 1.0, 0.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 1.0, 0.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

        // Draw a polygon (triangle) at (x, y)
        glBegin(GL_POLYGON);
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 5, y);     // Vertex 2 (upper left)
        glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
        glEnd();
    }
}


    // Loop to draw another set of polygons with a different color pattern
    // Introduce a horizontal gap by adjusting the starting x position for the second set
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 20; j++) {
            // Calculate the x and y positions for each polygon
            float x = 350 + j * 3 + 4;  // Add a 4-unit horizontal gap (shifted by 4 units)
            float y = 595 - i * 4;  // Vertical spacing (24 rows)

            // Choose a color based on the index
            if ((i + j) % 3 == 0) {
                glColor3f(0.0, 0.5, 0.0);  // Blue color for the polygons (i + j divisible by 3)
            } else if ((i + j) % 3 == 1) {
                glColor3f(0.0, 1.0, 1.0);  // Yellow color for the polygons (i + j mod 3 equals 1)
            } else {
                glColor3f(1.0, 0.0, 1.0);  // Magenta color for the polygons (i + j mod 3 equals 2)
            }

            // Draw a polygon (triangle) at (x, y)
            glBegin(GL_POLYGON);
            glVertex2f(x, y);         // Vertex 1 (top left)
            glVertex2f(x + 5, y);     // Vertex 2 (upper left)
            glVertex2f(x + 2.5, y + 5);  // Vertex 3 (middle)
            glEnd();
        }
    }


for (int i = 0; i < 8; i++) {  // Loop for 20 rows
    for (int j = 0; j < 13; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 290 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}
















// building 3
// Loop to draw the grid of hexagons



glBegin(GL_POLYGON);

glColor3f(0.055, 0.929, 0.949);
glVertex2f(420, 600);    // Vertex 1 (top left)
glVertex2f(565, 600);    // Vertex 2 (upper left)
glVertex2f(565, 500);
glVertex2f(420, 500);

glEnd();

for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each hexagon
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each hexagon to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the hexagon at the calculated position
        glBegin(GL_POLYGON);

        // Define the six vertices for the hexagon
        glVertex2f(x, y);           // Vertex 1 (top left)
        glVertex2f(x + 1.5, y + 1.5); // Vertex 2 (top middle right)
        glVertex2f(x + 3.5, y + 1.5); // Vertex 3 (top right)
        glVertex2f(x + 5, y);       // Vertex 4 (bottom right)
        glVertex2f(x + 3.5, y - 1.5); // Vertex 5 (bottom middle left)
        glVertex2f(x + 1.5, y - 1.5); // Vertex 6 (bottom left)

        glEnd();
    }
}

// Loop to draw the grid of triangles
for (int i = 0; i < 10; i++) {         // Vertical loop (10 rows)
    for (int j = 0; j < 12; j++) {     // Horizontal loop (12 columns)
        // Calculate the x and y positions for each triangle
        float xOffset = j * 12;        // Horizontal spacing (12 units)
        float yOffset = i * 10;        // Vertical spacing (10 units)

        // Adjust the x and y positions for each triangle to form the grid
        float x = 420 + xOffset;       // Horizontal starting position
        float y = 595 - yOffset;       // Vertical starting position

        // Choose a color based on the index
        if ((i + j) % 3 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 3 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for the last set
        }

        // Draw the triangle at the calculated position
        glBegin(GL_POLYGON);

        // Define the three vertices for the triangle
        glVertex2f(x, y);            // Vertex 1 (top)
        glVertex2f(x + 6, y + 5);    // Vertex 2 (bottom right)
        glVertex2f(x + 12, y);       // Vertex 3 (bottom left)

        glEnd();
    }
}


for (int i = 0; i < 9; i++) {  // Loop for 20 rows
    for (int j = 0; j < 14; j++) {  // Loop for 30 columns
        // Calculate the x and y positions for each polygon
        float x = 425 + j * 10;  // Horizontal spacing (30 columns, 6 units apart)
        float y = 590 - i * 10;  // Vertical spacing (20 rows, 5 units apart)

        // Draw the polygon at the calculated position
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Green color for the polygons
        glVertex2f(x, y);          // Vertex 1 (top left)
        glVertex2f(x + 5, y);      // Vertex 2 (upper left)
        glVertex2f(x + 5, y - 5);  // Vertex 3 (bottom left)
        glVertex2f(x, y - 5);      // Vertex 4 (bottom left)
        glEnd();
    }
}





//deyal

glBegin(GL_POLYGON);

glColor3f(0.055, 0.929, 0.949);
glVertex2f(570, 600);    // Vertex 1 (top left)
glVertex2f(700, 600);    // Vertex 2 (upper left)
glVertex2f(700, 500);
glVertex2f(570, 500);

glEnd();

// Loop to draw the grid of polygons
for (int i = 0; i < 9; i++) {         // Vertical loop (9 rows)
    for (int j = 0; j < 10; j++) {    // Horizontal loop (10 columns)
        // Calculate the x and y positions for each polygon
        float xOffset = j * 12;       // Horizontal spacing (12 units)
        float yOffset = i * 12;       // Vertical spacing (12 units) - Increased gap

        // Adjust the x and y positions for each polygon to form the grid
        float x = 570 + xOffset;      // Horizontal starting position
        float y = 600 - yOffset;      // Vertical starting position

        // Choose a color based on the index (using a new pattern with 4 colors)
        if ((i + j) % 4 == 0) {
            glColor3f(0.0, 0.5, 0.4);  // Green color for one set
        } else if ((i + j) % 4 == 1) {
            glColor3f(0.8, 0.2, 0.2);  // Red color for another set
        } else if ((i + j) % 4 == 2) {
            glColor3f(0.2, 0.2, 0.8);  // Blue color for another set
        } else {
            glColor3f(0.9, 0.9, 0.0);  // Yellow color for the new set
        }

        // Draw the polygon (rectangle) at the calculated position
        glBegin(GL_POLYGON);

        // Define the four vertices for the rectangle
        glVertex2f(x, y);         // Vertex 1 (top left)
        glVertex2f(x + 20, y);    // Vertex 2 (upper right)
        glVertex2f(x + 20, y - 5); // Vertex 3 (bottom right)
        glVertex2f(x, y - 5);     // Vertex 4 (bottom left)

        glEnd();
    }
}

drawCircle(600,570, 15);
drawCircle4(600,570, 12);

drawCircle3(635,570, 6.5);
drawCircle(635,570, 7.5);
drawCircle4(635,570, 4.5);




drawCircle(670,570, 15);
drawCircle4(670,570, 12);

drawCircle(600,530, 15);
drawCircle4(600,530, 12);
drawCircle3(635,530, 6.5);
drawCircle(635,530, 7.5);

drawCircle4(635,530, 4.5);



drawCircle(670,530, 15);
drawCircle4(670,530, 12);

//building 4





// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 3; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 10;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 525 - yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
     glColor3f(0.69, 0.729, 0.035);  // Green color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);    // Vertex 1 (top left)
    glVertex2f(820, y);    // Vertex 2 (upper right)
    glVertex2f(820, y + 50); // Vertex 3 (bottom right)
    glVertex2f(710, y + 50);  // Vertex 4 (bottom left)

    glEnd();
}



glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 505);    // Vertex 1 (top left)
glVertex2f(820, 505);    // Vertex 2 (upper left)
glVertex2f(820, 500);
glVertex2f(710, 500);

glEnd();

// Loop to draw the rectangle vertically 4 times
for (int i = 0; i < 4; i++) {  // Vertical loop (4 times)
    // Calculate the y position for each rectangle
    float yOffset = i * 20;  // Vertical gap between the rectangles (adjust the value as needed)

    // Adjust the y position for each rectangle to form the grid
    float y = 505 + yOffset;  // Vertical starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color for the rectangle

    // Define the four vertices for the rectangle
    glVertex2f(710, y);        // Vertex 1 (top left)
    glVertex2f(820, y);        // Vertex 2 (upper right)
    glVertex2f(820, y - 5);    // Vertex 3 (bottom right)
    glVertex2f(710, y - 5);    // Vertex 4 (bottom left)

    glEnd();
}


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(770, 505);    // Vertex 1 (top left)
glVertex2f(772, 505);    // Vertex 2 (upper left)
glVertex2f(772, 574);
glVertex2f(770, 574);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(790, 505);    // Vertex 1 (top left)
glVertex2f(792, 505);    // Vertex 2 (upper left)
glVertex2f(792, 574);
glVertex2f(790, 574);

glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(818, 505);    // Vertex 1 (top left)
glVertex2f(820, 505);    // Vertex 2 (upper left)
glVertex2f(820, 574);
glVertex2f(818, 574);

glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(750, 505);    // Vertex 1 (top left)
glVertex2f(752, 505);    // Vertex 2 (upper left)
glVertex2f(752, 574);
glVertex2f(750, 574);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(730, 505);    // Vertex 1 (top left)
glVertex2f(732, 505);    // Vertex 2 (upper left)
glVertex2f(732, 574);
glVertex2f(730, 574);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 505);    // Vertex 1 (top left)
glVertex2f(712, 505);    // Vertex 2 (upper left)
glVertex2f(712, 574);
glVertex2f(710, 574);
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(810, 505);    // Vertex 1 (top left)
glVertex2f(812, 505);    // Vertex 2 (upper left)
glVertex2f(812, 574);
glVertex2f(810, 574);
glEnd();




glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(710, 574);    // Vertex 1 (top left)
glVertex2f(820, 574);    // Vertex 2 (upper left)
glVertex2f(820, 572);
glVertex2f(710, 572);
glEnd();




//buidiunf cathedaral

glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 1.0); // Blue color for the first polygon
glVertex2f(825, 520);    // Vertex 1 (top left)
glVertex2f(980, 520);    // Vertex 2 (upper left)
glVertex2f(980, 500);
glVertex2f(825, 500);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.8, 0.2, 0.2); // Red color for the second polygon
glVertex2f(835, 540);    // Vertex 1 (top left)
glVertex2f(970, 540);    // Vertex 2 (upper left)
glVertex2f(970, 520);
glVertex2f(835, 520);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.2, 0.8, 0.2); // Bright Green color for the third polygon
glVertex2f(845, 560);    // Vertex 1 (top left)
glVertex2f(960, 560);    // Vertex 2 (upper left)
glVertex2f(960, 540);
glVertex2f(845, 540);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.2, 0.2, 0.8); // Deep Blue color for the fourth polygon
glVertex2f(850, 580);    // Vertex 1 (top left)
glVertex2f(955, 580);    // Vertex 2 (upper left)
glVertex2f(955, 560);
glVertex2f(850, 560);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0); // Bright Yellow color for the fifth polygon
glVertex2f(855, 590);    // Vertex 1 (top left)
glVertex2f(950, 590);    // Vertex 2 (upper left)
glVertex2f(950, 580);
glVertex2f(855, 580);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.4, 0.0, 0.8); // Purple color for the sixth polygon
glVertex2f(865, 600);    // Vertex 1 (top left)
glVertex2f(940, 600);    // Vertex 2 (upper left)
glVertex2f(940, 590);
glVertex2f(865, 590);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 1.0); // Cyan color for the seventh polygon
glVertex2f(875, 610);    // Vertex 1 (top left)
glVertex2f(930, 610);    // Vertex 2 (upper left)
glVertex2f(930, 600);
glVertex2f(875, 600);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0, 0.5, 0.0); // Orange color for the eighth polygon
glVertex2f(885, 620);    // Vertex 1 (top left)
glVertex2f(920, 620);    // Vertex 2 (upper left)
glVertex2f(920, 610);
glVertex2f(885, 610);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Grey color for the ninth polygon
glVertex2f(895, 630);    // Vertex 1 (top left)
glVertex2f(910, 630);    // Vertex 2 (upper left)
glVertex2f(910, 620);
glVertex2f(895, 620);
glEnd();
// road


glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Grey color for the ninth polygon
glVertex2f(0, 470);    // Vertex 1 (top left)
glVertex2f(1000, 470);    // Vertex 2 (upper left)
glVertex2f(1000, 500);
glVertex2f(0, 500);
glEnd();




// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 485);   // Vertex 1 (top left)
    glVertex2f(x + 6, 485);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 489);  // Vertex 3 (bottom right)
    glVertex2f(x, 489);   // Vertex 4 (bottom left)

    glEnd();
}

cars1();


//road divder
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0); // Grey color for the ninth polygon
glVertex2f(0, 460);    // Vertex 1 (top left)
glVertex2f(1000, 460);    // Vertex 2 (upper left)
glVertex2f(1000, 470);
glVertex2f(0, 470);
glEnd();

//road
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Grey color for the ninth polygon
glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 460);
glVertex2f(0, 460);
glEnd();

// Loop to draw the rectangle horizontally with space
for (int i = 0; i < 200; i++) {  // Loop for 10 polygons horizontally
    // Calculate the horizontal offset for each polygon
    float xOffset = i * 10;  // Horizontal gap between the polygons (adjust the value as needed)

    // Adjust the x position for each polygon to form the grid
    float x = 0 + xOffset;  // Horizontal starting position

    // Draw the polygon (rectangle) at the calculated position
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);  // White color for the polygon

    // Define the four vertices for the rectangle
    glVertex2f(x, 445);   // Vertex 1 (top left)
    glVertex2f(x + 6, 445);  // Vertex 2 (upper right)
    glVertex2f(x + 6, 449);  // Vertex 3 (bottom right)
    glVertex2f(x, 449);   // Vertex 4 (bottom left)

    glEnd();
}

cargo1();

//road line line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 430);   // Right-top corner
        glVertex2f(1000 , 430);    // Bottom-right corner
        glEnd();


// tree

glBegin(GL_POLYGON);
glColor3f(0.584, 0.678, 0.349); // Grey color for the ninth polygon
glVertex2f(0, 430);    // Vertex 1 (top left)
glVertex2f(1000, 430);    // Vertex 2 (upper left)
glVertex2f(1000, 330);
glVertex2f(0, 330);
glEnd();



for (int i = 0; i < 5; i++) {
    int translateX = -120 * i;  // Translation on x-axis

    // First set of circles
    circle(7, 14, 330 + translateX, 350);
    circle(7, 14, 320 + translateX, 360);
    circle(7, 14, 330 + translateX, 370);
    circle(7, 14, 340 + translateX, 360);

    // Second set of circles
    circle(7, 14, 370 + translateX, 350);
    circle(7, 14, 360 + translateX, 360);
    circle(7, 14, 370 + translateX, 370);
    circle(7, 14, 380 + translateX, 360);

    // Third set of circles
    circle(7, 14, 410 + translateX, 350);
    circle(7, 14, 400 + translateX, 360);
    circle(7, 14, 410 + translateX, 370);
    circle(7, 14, 420 + translateX, 360);

    // Fourth set of circles
    circle(7, 14, 330 + 50 + translateX, 370 + 30);
    circle(7, 14, 320 + 50 + translateX, 380 + 30);
    circle(7, 14, 330 + 50 + translateX, 390 + 30);
    circle(7, 14, 340 + 50 + translateX, 380 + 30);

    // Fifth set of circles
    circle(7, 14, 370 + 50 + translateX, 370 + 30);
    circle(7, 14, 360 + 50 + translateX, 380 + 30);
    circle(7, 14, 370 + 50 + translateX, 390 + 30);
    circle(7, 14, 380 + 50 + translateX, 380 + 30);

    // Sixth set of circles
    circle(7, 14, 410 + 50 + translateX, 370 + 30);
    circle(7, 14, 400 + 50 + translateX, 380 + 30);
    circle(7, 14, 410 + 50 + translateX, 390 + 30);
    circle(7, 14, 420 + 50 + translateX, 380 + 30);
}












//tree1

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Grey color for the ninth polygon
glVertex2f(60, 380);    // Vertex 1 (top left)
glVertex2f(80, 380);    // Vertex 2 (upper left)
glVertex2f(80, 330);
glVertex2f(60, 330);
glEnd();

drawCircle3(60,380,10);

drawCircle3(60,390,10);
drawCircle3(60,390,10);
drawCircle3(50,400,10);
drawCircle3(60,410,10);
drawCircle3(70,410,10);
drawCircle3(80,410,10);
drawCircle3(80,400,10);
drawCircle3(90,390,10);
drawCircle3(50,390,10);
drawCircle3(70,380,10);
drawCircle3(80,380,10);

//tree2
glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370, 330);
glVertex2f(160 + 370, 330);    // Vertex 4 (bottom left)
glEnd();

// Drawing circles with the x position shifted by +370
drawCircle5(160 + 370, 380, 10);  // Translated x position by +370

drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(160 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 400, 10);  // Translated x position by +370
drawCircle5(160 + 370, 410, 10);  // Translated x position by +370
drawCircle5(170 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 410, 10);  // Translated x position by +370
drawCircle5(180 + 370, 400, 10);  // Translated x position by +370
drawCircle5(190 + 370, 390, 10);  // Translated x position by +370
drawCircle5(150 + 370, 390, 10);  // Translated x position by +370
drawCircle5(170 + 370, 380, 10);  // Translated x position by +370
drawCircle5(180 + 370, 380, 10);  // Translated x position by +370

//tree3

glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Grey color for the ninth polygon
glVertex2f(250, 380);    // Vertex 1 (top left)
glVertex2f(270, 380);    // Vertex 2 (upper left)
glVertex2f(270, 330);
glVertex2f(250, 330);
glEnd();

drawCircle5(260, 370, 5);  // Translated x position by +100
drawCircle5(255, 390, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle3(275, 410, 10);  // Translated x position by +100
drawCircle3(265, 410, 10);  // Translated x position by +100
drawCircle3(257, 410, 10);  // Translated x position by +100
drawCircle3(247, 410, 10);  // Translated x position by +100
drawCircle3(265, 370, 10);  // Translated x position by +100
drawCircle3(257, 370, 10);  // Translated x position by +100
drawCircle3(247, 370, 10);  // Translated x position by +100
drawCircle3(275, 375, 10);  // Translated x position by +100
drawCircle5(260, 370, 10);  // Translated x position by +100
drawCircle5(260, 410, 10);  // Translated x position by +100
drawCircle5(260, 390, 10);  // Translated x position by +100


//tree




//backgroun
// First set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 + 70 - 200, 350 + 30); // Translated circle

circle(20, 10, 790 + 80 - 200, 360 + 30);
circle(20, 10, 805 + 80 - 200, 355 + 30);
circle(20, 10, 810 + 80 - 200, 365 + 30);
circle(20, 10, 805 + 80 - 200, 375 + 30);
circle(20, 10, 815 + 80 - 200, 365 + 30);
circle(20, 10, 820 + 80 - 200, 360 + 30);
circle(20, 10, 820 + 80 - 200, 345 + 30);
circle(20, 10, 790 + 80 - 200, 345 + 30);
circle(20, 10, 805 + 80 - 200, 340 + 30); // Translated last circle

// Second set of circles (original) translated by -200 on the x-axis
circle(20, 10, 800 - 200, 350);

circle(20, 10, 790 - 200, 360);
circle(20, 10, 805 - 200, 355);
circle(20, 10, 810 - 200, 365);
circle(20, 10, 805 - 200, 375);
circle(20, 10, 815 - 200, 365);
circle(20, 10, 820 - 200, 360);
circle(20, 10, 820 - 200, 345);
circle(20, 10, 790 - 200, 345);
circle(20, 10, 805 - 200, 340);






  circle(7, 14, 330, 350);
circle(7, 14, 320, 360);
circle(7, 14, 330, 370);
circle(7, 14, 340, 360);


circle(7, 14, 370, 350);
circle(7, 14, 360, 360);
circle(7, 14, 370, 370);
circle(7, 14, 380, 360);


  circle(7, 14, 410, 350);
circle(7, 14, 400, 360);
circle(7, 14, 410, 370);
circle(7, 14, 420, 360);



circle(7, 14, 330 + 50, 370 + 30);
circle(7, 14, 320 + 50, 380 + 30);
circle(7, 14, 330 + 50, 390 + 30);
circle(7, 14, 340 + 50, 380 + 30);


circle(7, 14, 370 + 50, 370 + 30);
circle(7, 14, 360 + 50, 380 + 30);
circle(7, 14, 370 + 50, 390 + 30);
circle(7, 14, 380 + 50, 380 + 30);


circle(7, 14, 410 + 50, 370 + 30);
circle(7, 14, 400 + 50, 380 + 30);
circle(7, 14, 410 + 50, 390 + 30);
circle(7, 14, 420 + 50, 380 + 30);


glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(490, 330);
glVertex2f(430, 330);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0, 0.0, 1.0); // Grey color for the ninth polygon
glVertex2f(430, 370);    // Vertex 1 (top left)
glVertex2f(490, 370);    // Vertex 2 (upper left)
glVertex2f(460, 380);



glEnd();

 for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            float translateX = -10.0f * i;  // Translate horizontally by 50 units
            float translateY = -10.0f * j;  // Translate vertically by 50 units

            glPushMatrix();  // Save the current transformation matrix
            glTranslatef(translateX, translateY, 0.0f);  // Apply translation

            // Begin drawing the polygon
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);  // Grey color for the polygon
            glVertex2f(432+50, 360+5);    // Vertex 1 (top left)
            glVertex2f(437+50, 360+5);    // Vertex 2 (upper left)
            glVertex2f(437+50, 365+5);
            glVertex2f(432+50, 365+5);    // Vertex 4 (bottom left)
            glEnd();

            glPopMatrix();  // Restore the previous transformation matrix
        }
    }



    //tree paitentence


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120, 380);    // Vertex 1 (top left)
glVertex2f(180 + 370+120, 380);    // Vertex 2 (upper left)
glVertex2f(180 + 370+120, 330);
glVertex2f(160 + 370+120, 330);    // Vertex 4 (bottom left)
glEnd();

    drawCircle5(630, 390, 7);  // Translated x position by +370
 drawCircle5(650, 400, 7);  // Translated x position by +370
drawCircle5(640, 410, 7);  // Translated x position by +370
drawCircle5(660, 420, 7);  // Translated x position by +370

drawCircle5(670, 410, 7);  // Translated x position by +370
drawCircle5(680, 400, 7);  // Translated x position by +370
drawCircle5(685, 390, 7);  // Translated x position by +370

drawCircle5(675, 395, 7);  // Translated x position by +370
drawCircle5(650, 380, 7);  // Translated x position by +370
drawCircle5(660, 380, 7);  // Translated x position by +370



//tree traingle


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370+120+90, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370+120+90, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370+120+90, 330);
glVertex2f(160 + 370+120+90, 330);    // Vertex 4 (bottom left)
glEnd();


 for (int i = 0; i < 4; i++) {
        float translateY = 20.0f * i;  // Translate vertically by 40 units (you can adjust this value)

        glPushMatrix();  // Save the current transformation matrix
        glTranslatef(0.0f, translateY, 0.0f);  // Apply vertical translation

        // Draw the polygon
        glBegin(GL_POLYGON);
         glColor3ub(34, 139, 34); // Color for the polygon
        glVertex2f(690 + 30, 350);    // Vertex 1 (top left)
        glVertex2f(740 + 30, 350);    // Vertex 2 (upper left)
        glVertex2f(715 + 30, 390);    // Vertex 3 (bottom center)
        glEnd();

        glPopMatrix();  // Restore the previous transformation matrix
    }



circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80, 360 + 30);
circle(20, 10, 805 + 80, 355 + 30);
circle(20, 10, 810 + 80, 365 + 30);
circle(20, 10, 805 + 80, 375 + 30);
circle(20, 10, 815 + 80, 365 + 30);
circle(20, 10, 820 + 80, 360 + 30);
circle(20, 10, 820 + 80, 345 + 30);
circle(20, 10, 790 + 80, 345 + 30);
circle(20, 10, 805 + 80, 340 + 30); // Translated last circle






circle(20, 10, 800 + 70, 350 + 30); // Translated circle

circle(20, 10, 790 + 80+70, 360 + 10);
circle(20, 10, 805 + 80+70, 355 + 10);
circle(20, 10, 810 + 80+70, 365 + 10);
circle(20, 10, 805 + 80+70, 375 + 10);
circle(20, 10, 815 + 80+70, 365 + 10);
circle(20, 10, 820 + 80+70, 360 + 10);
circle(20, 10, 820 + 80+70, 345 + 10);
circle(20, 10, 790 + 80+70, 345 + 10);
circle(20, 10, 805 + 80+70, 340 + 10); // Translated last circle



    circle(20,10,800,350);

    circle(20,10,790,360);
 circle(20,10,805,355);
 circle(20,10,810,365);
 circle(20,10,805,375);
 circle(20,10,815,365);
 circle(20,10,820,360);
  circle(20,10,820,345);
   circle(20,10,790,345);
    circle(20,10,805,340);





glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160 + 370 + 120 + 90 + 200, 380);    // Vertex 1 (top left)
glVertex2f(170 + 370 + 120 + 90 + 200, 380);    // Vertex 2 (upper left)
glVertex2f(170 + 370 + 120 + 90 + 200, 330);
glVertex2f(160 + 370 + 120 + 90 + 200, 330);    // Vertex 4 (bottom left)
glEnd();

glPushMatrix();  // Save the current transformation matrix
//glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix




//last traingle tree

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 0.0f, 0.0f);  // Translate horizontally by 100 units

// Draw the first polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 20.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 20 units

// Draw the second polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 40.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 40 units

// Draw the third polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix

glPushMatrix();  // Save the current transformation matrix
glTranslatef(200.0f, 60.0f, 0.0f);  // Translate horizontally by 100 units and vertically by 60 units

// Draw the fourth polygon (translated)
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Color for the polygon
glVertex2f(690 + 30 , 350);    // Vertex 1 (top left)
glVertex2f(740 + 30 , 350);    // Vertex 2 (upper left)
glVertex2f(715 + 30 , 390);    // Vertex 3 (bottom center)
glEnd();

glPopMatrix();  // Restore the previous transformation matrix







//tree last er agehr ta

    //tree paitentence


    glBegin(GL_POLYGON);
glColor3f(0.78, 0.506, 0.047); // Color for the polygon
glVertex2f(160+35 + 370+290, 380);    // Vertex 1 (top left)
glVertex2f(180+35 + 370+290, 380);    // Vertex 2 (upper left)
glVertex2f(180+35 + 370+290, 330);
glVertex2f(160 +35 + 370+290, 330);    // Vertex 4 (bottom left)
glEnd();

    drawCircle5(640 +200, 390, 7);  // Translated x position by +370
 drawCircle5(650+200, 400, 7);  // Translated x position by +370
drawCircle5(645+200, 410, 7);  // Translated x position by +370
drawCircle5(665+200, 420, 7);  // Translated x position by +370

drawCircle5(675+200, 410, 7);  // Translated x position by +370
drawCircle5(685+200, 400, 7);  // Translated x position by +370
drawCircle5(685+200, 390, 7);  // Translated x position by +370

drawCircle5(685+200, 395, 7);  // Translated x position by +370
drawCircle5(660+200, 380, 7);  // Translated x position by +370
drawCircle5(670+200, 380, 7);  // Translated x position by +370
drawCircle5(665+200, 430, 7);  // Translated x position by +370

//tree adjustments
drawCircle5(665+200+80, 380,10);  // Translated x position by +370
drawCircle5(665+200+80, 390,10);  // Translated x position by +370
drawCircle5(665+200+80, 400,10);  // Translated x position by +370
//circle(30,20,665+200, 390);  // Translated x position by +370
drawCircle5(665+200, 370, 7);  // Translated x position by +370
drawCircle5(665-150, 370, 7);  // Translated x position by +370
drawCircle5(665-100, 370, 7);  // Translated x position by +370







//village


    glBegin(GL_POLYGON);
glColor3f(0.49, 0.431, 0.088); // Color for the polygon
glVertex2f(0,330);    // Vertex 1 (top left)
glVertex2f(1000,330);    // Vertex 2 (upper left)
glVertex2f(1000,230);
glVertex2f(0,230);


glEnd();




    glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(260,320);    // Vertex 2 (upper left)
glVertex2f(280,280);
glVertex2f(100,280);
glEnd();



//tree line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 330);   // Right-top corner
        glVertex2f(1000 , 330);    // Bottom-right corner
        glEnd();



    glBegin(GL_TRIANGLES);
glColor3f(0.337, 0.251, 0.89); // Color for the polygon
glVertex2f(75,320);    // Vertex 1 (top left)
glVertex2f(30,280);    // Vertex 2 (upper left)
glVertex2f(100,280);
glEnd();


    glBegin(GL_POLYGON);
glColor3f(0.18, 0.125, 0.529); // Color for the polygon
glVertex2f(40,280);    // Vertex 1 (top left)
glVertex2f(95,280);    // Vertex 2 (upper left)
glVertex2f(95,240);
glVertex2f(40,240);
glEnd();

    glBegin(GL_POLYGON);
glColor3f(0.616, 0.573, 0.902); // Color for the polygon
glVertex2f(95,280);    // Vertex 1 (top left)
glVertex2f(95,240);    // Vertex 2 (upper left)
glVertex2f(270,240);
glVertex2f(270,280);
glEnd();




  glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0); // Color for the lines

    // Draw 20 vertical lines horizontally by adjusting the x-coordinate
    for (int i = 0; i < 35; i++) {
        float xOffset = i * 5.0; // Increase xOffset by 20 units for each line
        glVertex2f(100 + xOffset, 280);  // Start point of the line (shifted horizontally)
        glVertex2f(100 + xOffset, 240);  // End point of the line (shifted horizontally)
    }

    glEnd();




    glBegin(GL_POLYGON);
glColor3f(0.251, 0.694, 0.949); // Color for the polygon
glVertex2f(30,240);    // Vertex 1 (top left)
glVertex2f(280,240);    // Vertex 2 (upper left)
glVertex2f(280,230);
glVertex2f(30,230);
glEnd();



//house2

glPushMatrix();  // Save the current matrix state

glTranslatef(210.0f, 0.0f, 0.0f);  // Translate by 300 units along the x-axis

// Draw the base of the house (main rectangle)
glBegin(GL_POLYGON);
glColor3f(0.251, 0.357, 0.949); // Color for the main structure
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(260, 240);   // Bottom-right corner
glVertex2f(75, 240);    // Bottom-left corner
glEnd();

// Draw the roof (triangle shape)
glBegin(GL_QUADS);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(85, 330);    // Left-top corner of the base
glVertex2f(250, 330);   // Right-top corner of the base
glVertex2f(260, 300); // Peak of the roof
glVertex2f(75, 300); // Peak of the roof
glEnd();

// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 280);  // Top-right of the door
glVertex2f(140, 280);  // Top-left of the door
glEnd();

// Draw a window on the left side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(90, 270);  // Bottom-left of the window
glVertex2f(130, 270); // Bottom-right of the window
glVertex2f(130, 290); // Top-right of the window
glVertex2f(90, 290);  // Top-left of the window
glEnd();

// Draw a window on the right side
glBegin(GL_POLYGON);
glColor3f(0.8, 0.8, 1.0); // Window color (light blue)
glVertex2f(200, 270);  // Bottom-left of the window
glVertex2f(240, 270);  // Bottom-right of the window
glVertex2f(240, 290);  // Top-right of the window
glVertex2f(200, 290);  // Top-left of the window
glEnd();

// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();



// Draw a chimney (small rectangle on the roof)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Chimney color (gray)
glVertex2f(200, 310);    // Bottom-left of the chimney
glVertex2f(215, 310);    // Bottom-right of the chimney
glVertex2f(215, 340);    // Top-right of the chimney
glVertex2f(200, 340);    // Top-left of the chimney
glEnd();




glPopMatrix();  // Restore the previous matrix state
 // Restore the previous matrix state



//house3

 glPushMatrix();  // Save the current matrix state

glTranslatef(410.0f, 0.0f, 0.0f);  // Translate the building along the x-axis

// Draw the main base of the house (trapezoid for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.5, 0.2); // Color for the main structure (greenish)
glVertex2f(75, 300);    // Top-left corner
glVertex2f(260, 300);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner (more inward for a trapezoid shape)
glVertex2f(100, 240);   // Bottom-left corner (more inward for a trapezoid shape)
glEnd();

// Draw a second floor (smaller trapezoid above the main base)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for the second floor (gray)
glVertex2f(115, 280);    // Top-left corner
glVertex2f(245, 280);   // Top-right corner
glVertex2f(230, 240);   // Bottom-right corner
glVertex2f(100, 240);   // Bottom-left corner
glEnd();

// Draw the roof (sloped roof, larger triangle for the top)
glBegin(GL_POLYGON);
glColor3f(0.337, 0.251, 0.89); // Roof color
glVertex2f(75, 300);    // Left-top corner of the base
glVertex2f(100, 240);   // Left-bottom corner of the base
glVertex2f(230, 240);   // Right-bottom corner of the base
glVertex2f(260, 300);   // Right-top corner of the base
glEnd();



// Draw a window on the left side (larger rectangle for the first floor)
glBegin(GL_POLYGON);
glColor3f(0.2, 0.631, 0.82); // Window color (light blue)
glVertex2f(90, 290);  // Bottom-left of the window
glVertex2f(240, 290); // Bottom-right of the window
glVertex2f(240, 270); // Top-right of the window
glVertex2f(90, 270);  // Top-left of the window
glEnd();






// Draw the foundation (a rectangle at the bottom of the house)
glBegin(GL_POLYGON);
glColor3f(0.3, 0.3, 0.3); // Foundation color (gray)
glVertex2f(75, 240);    // Bottom-left of the foundation
glVertex2f(260, 240);   // Bottom-right of the foundation
glVertex2f(260, 230);   // Bottom-right of the foundation (slightly lower)
glVertex2f(75, 230);    // Bottom-left of the foundation (slightly lower)
glEnd();




// Draw decorative side walls (for depth)
glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(75, 300);    // Left-top corner
glVertex2f(100, 240);   // Left-bottom corner
glVertex2f(100, 230);   // Left-bottom corner (lower)
glVertex2f(75, 230);    // Left-top corner (lower)
glEnd();




// Draw the door
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(140, 240);  // Bottom-left of the door
glVertex2f(180, 240);  // Bottom-right of the door
glVertex2f(180, 260);  // Top-right of the door
glVertex2f(140, 260);  // Top-left of the door
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0.5); // Color for side walls
glVertex2f(260, 300);   // Right-top corner
glVertex2f(230, 240);   // Right-bottom corner
glVertex2f(230, 230);   // Right-bottom corner (lower)
glVertex2f(260, 230);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state



glBegin(GL_POLYGON);
glColor3f(0.0, 0.8, 0.0); // Color for side walls
glVertex2f(690, 320);   // Right-top corner
glVertex2f(810, 320);   // Right-bottom corner
glVertex2f(810, 240);   // Right-bottom corner (lower)
glVertex2f(690, 240);   // Right-top corner (l o w e r)
glEnd();

glPopMatrix();  // Restore the previous matrix state

circle2(20,10,750,280);
circle3(18,8,750,280);
circle3(18,8,750,280);

//football
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0); // Color for side walls
glVertex2f(750, 320);   // Right-top corner
glVertex2f(750, 240);   // Right-bottom corner
glEnd();


// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685, 305+5);   // Right-top corner
glVertex2f(690, 285+5);   // Slanted point (above the lower part)
glVertex2f(690, 255+5);   // Lower slanted point
glVertex2f(685, 265+5);   // Bottom-right corner
glEnd();

// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690, 300);   // Right-top corner
glVertex2f(710, 300);   // Right-top corner
glVertex2f(710, 260);   // Right-bottom corner
glVertex2f(690, 260);   // Left-bottom corner
glEnd();











// First Polygon - Main Side Wall (Rectangle)
glBegin(GL_POLYGON);
glColor3f(1.0, 0.8, 0.0); // Color for side wall
glVertex2f(690 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 300);   // Right-top corner (translated)
glVertex2f(710 + 100, 260);   // Right-bottom corner (translated)
glVertex2f(690 + 100, 260);   // Left-bottom corner (translated)
glEnd();

// Second Polygon - Slanted Side Wall (Triangle-like)
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0); // Color for side wall
glVertex2f(685 + 100+20, 305 + 5);   // Right-top corner (translated)
glVertex2f(690 + 100+20, 285 + 5);   // Slanted point (above the lower part, translated)
glVertex2f(690 + 100+20, 255 + 5);   // Lower slanted point (translated)
glVertex2f(685 + 100+20, 265 + 5);   // Bottom-right corner (translated)
glEnd();

//tree
circle4(10,20,830,290);
circle4(10,20,830,290);
circle4(10,20,845,290);
circle4(10,20,860,290);
circle4(10,20,875,290);

circle4(10,20,845,300);
circle4(10,20,860,300);


// Draw circles horizontally
for (int i = 0; i < 5; i++) {
    circle4(10, 20, 830 + (i * 15), 290-40);  // Change x by 15 for each iteration, keep y constant at 290
}

// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 10)-40);  // Change y by 10 for each iteration, keep x constant at 845
}



// Draw circles vertically
for (int i = 0; i < 2; i++) {
    circle4(10, 20, 845, 290 + (i * 20)-40);  // Change y by 10 for each iteration, keep x constant at 845
}


circle4(15,30,920,290);
circle4(10,20,920,290);
circle4(12,40,935,290);
circle4(8,35,950,290);
circle4(15,40,965,290);

circle4(10,20,935,300);
circle4(10,20,950,300);


circle4(15,15,920,250);
circle4(10,20,920,250);
circle4(12,40,935,250);
circle4(8,35,950,250);
circle4(9,20,965,250);

circle4(10,7,935,260);
circle4(10,5,950,260);


//flower
      // Draw the first polygon (yellow side wall)
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);  // Yellow color
        glVertex2f(0 , 230);   // Right-top corner
        glVertex2f(1000 , 230);   // Slanted point (above the lower part)
        glVertex2f(1000 , 200);   // Lower slanted point
        glVertex2f(0 , 200);   // Bottom-right corner
        glEnd();


//230-200

   for (int i = 0; i < 32; i++) {
        float xOffset = i * 30.0f;  // Shift the polygons and circles horizontally by 55 units



        // Draw the second polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(30 + xOffset, 210);   // Right-top corner
        glVertex2f(32 + xOffset, 212);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the third polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(40 + xOffset, 216);   // Right-top corner
        glVertex2f(42 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the fourth polygon (blue side wall)
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(50 + xOffset, 216);   // Right-top corner
        glVertex2f(52 + xOffset, 214);   // Slanted point
        glVertex2f(42 + xOffset, 200);   // Lower slanted point
        glVertex2f(40 + xOffset, 200);   // Bottom-right corner
        glEnd();

        // Draw the circles with different colors
        randomColor();  // Assign a random color for the first circle
        drawCircle1(31 + xOffset, 211, 2.5);

        randomColor();  // Assign a random color for the second circle
        drawCircle1(41 + xOffset, 215, 2.5);

        randomColor();  // Assign a random color for the third circle
        drawCircle1(51 + xOffset, 215, 2.5);
    }



         glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glVertex2f(15, 215);   // Right-top corner
        glVertex2f(17 , 217);   // Slanted point
        glVertex2f(17 ,200);   // Lower slanted point
        glVertex2f(15, 200);   // Bottom-right corner
        glEnd();





         glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);  // Blue color
        glVertex2f(13, 222);   // Right-top corner
        glVertex2f(19 , 222);   // Slanted point
        glVertex2f(19 ,217);   // Lower slanted point
        glVertex2f(13, 217);   // Bottom-right corner
        glEnd();








         // Draw the polygons horizontally with a loop
    for (int i = 0; i < 32; i++) {  // 10 instances, change as needed
        float xOffset = i * 60.0f;  // Horizontal offset for each polygon

        // Draw the first polygon with a random color
        randomColor();  // Assign a random color for the polygon
        glBegin(GL_POLYGON);
        glVertex2f(15 + xOffset, 715);   // Right-top corner
        glVertex2f(17 + xOffset, 717);   // Slanted point
        glVertex2f(17 + xOffset, 700);   // Lower slanted point
        glVertex2f(15 + xOffset, 700);   // Bottom-right corner
        glEnd();

        // Draw the second polygon with a random color
        randomColor();  // Assign a random color for the second polygon
        glBegin(GL_POLYGON);
        glVertex2f(13 + xOffset, 722);   // Right-top corner
        glVertex2f(19 + xOffset, 722);   // Slanted point
        glVertex2f(19 + xOffset, 717);   // Lower slanted point
        glVertex2f(13 + xOffset, 717);   // Bottom-right corner
  glEnd();


    }




//0-100 dhankhet
    glBegin(GL_POLYGON);
        glColor3f(0, 1.0, 0.0);  // Blue color
        glVertex2f(0, 0);   // Right-top corner
        glVertex2f(0 , 100);   // Slanted point
        glVertex2f(1000 ,100);   // Lower slanted point
        glVertex2f(1000, 0);   // Bottom-right corner
        glEnd();

        //dhan
 for (int i = 0; i < 100; i++) {
    float offsetX = i * 80.0f;  // Increment the x-offset to move along the x-axis

    glBegin(GL_POLYGON);
        glColor3f(0.722, 0.408, 0.051);  // Yellow color
        glVertex2f(0 + offsetX, 100);   // Right-top corner, shifted by offsetX
        glVertex2f(5 + offsetX, 100);   // Slanted point (above the lower part), shifted by offsetX
        glVertex2f(45 + offsetX, 0);   // Lower slanted point, shifted by offsetX
        glVertex2f(40 + offsetX, 0);   // Bottom-right corner, shifted by offsetX
    glEnd();
}







for (int j = 0; j < 8; j++) {  // Loop to draw 5 times along the y-axis
    float offsetY = j * -15.0f;  // Increment the y-offset for each iteration

    for (int i = 0; i < 100; i++) {
        float offsetX = i * 15.0f; // Increment the x-offset to move along the x-axis

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(1 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0, 0.0, 0.0);  // Blue color
            glVertex2f(5 + offsetX, 100 + offsetY);   // Right-top corner, shifted by offset
            glVertex2f(2.5 + offsetX, 90 + offsetY);  // Slanted point, shifted by offset
        glEnd();
    }
}


//manush
glPopMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(40.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(140.0f, 30.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();

glPushMatrix();

// Translate the figure by (40, 30)
glTranslatef(90.0f, 40.0f, 0.0f);

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();


// Apply the translation by using glPushMatrix and glPopMatrix
glPushMatrix();

// Translate the figure by (20, 50)
glTranslatef(70.0f, 0.0f, 0.0f); // Translate everything by (20, 50)

// Draw the polygon
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(70 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 20);    // Bottom-right corner (added p to x)
    glVertex2f(75 + p, 50);    // Bottom-right corner (added p to x)
glEnd();

// Draw the first line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the second line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 50);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 40);    // Bottom-right corner (added p to x)
glEnd();

// Draw the third line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(58 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the fourth line
glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);  // Black color
    glVertex2f(70 + p, 20);   // Right-top corner (added p to x)
    glVertex2f(88 + p, 10);    // Bottom-right corner (added p to x)
glEnd();

// Draw the circle (also translated)
drawCircle(72 + p, 54, 5);  // The circle's position will also be translated (added p to x)

// Restore the original transformation state
glPopMatrix();
glPushMatrix();



//traccter 1
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+s , 70);   // Right-top corner
        glVertex2f(30+s , 70);   // Slanted point (above the lower part)
        glVertex2f(30+s , 50);   // Lower slanted point
        glVertex2f(20+s , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+s , 68);   // Right-top corner
        glVertex2f(28+s , 68);   // Slanted point (above the lower part)
        glVertex2f(28+s , 52);   // Lower slanted point
        glVertex2f(22+s , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);  // Yellow color
        glVertex2f(10+s , 50);   // Right-top corner
        glVertex2f(50+s , 50);   // Slanted point (above the lower part)
        glVertex2f(50+s , 20);   // Lower slanted point
        glVertex2f(10+s , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+s,20,8);
drawCircle2(21+s,20,5);


drawCircle(41+s,20,8);
drawCircle2(41+s,20,5);




//traccter 2
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+400+ok , 70);   // Right-top corner
        glVertex2f(30+400+ok , 70);   // Slanted point (above the lower part)
        glVertex2f(30+400+ok , 50);   // Lower slanted point
        glVertex2f(20+400+ok , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+400+ok , 68);   // Right-top corner
        glVertex2f(28+400+ok , 68);   // Slanted point (above the lower part)
        glVertex2f(28+400+ok , 52);   // Lower slanted point
        glVertex2f(22+400+ok , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.5, 0.5);  // Yellow color
        glVertex2f(10+400+ok , 50);   // Right-top corner
        glVertex2f(50+400+ok , 50);   // Slanted point (above the lower part)
        glVertex2f(50+400+ok , 20);   // Lower slanted point
        glVertex2f(10+400+ok , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+400+ok,20,8);
drawCircle2(21+400+ok,20,5);


drawCircle(41+400+ok,20,8);
drawCircle2(41+400+ok,20,5);














//tracker2



 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);  // Yellow color
        glVertex2f(20+10+600+si , 70);   // Right-top corner
        glVertex2f(30+10+600+si , 70);   // Slanted point (above the lower part)
        glVertex2f(30+10+600+si , 50);   // Lower slanted point
        glVertex2f(20+10+600+si , 50);   // Bottom-right corner
        glEnd();


 glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(22+10+600+si , 68);   // Right-top corner
        glVertex2f(28+10+600+si , 68);   // Slanted point (above the lower part)
        glVertex2f(28+10+600+si , 52);   // Lower slanted point
        glVertex2f(22+10+600+si , 52);   // Bottom-right corner
        glEnd();



 glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 1.0);  // Yellow color
        glVertex2f(10+600+si , 50);   // Right-top corner
        glVertex2f(50+600+si , 50);   // Slanted point (above the lower part)
        glVertex2f(50+600+si , 20);   // Lower slanted point
        glVertex2f(10+600+si , 20);   // Bottom-right corner
        glEnd();
//tear
drawCircle(21+600+si,20,8);
drawCircle2(21+600+si,20,5);


drawCircle(41+600+si,20,8);
drawCircle2(41+600+si,20,5);

//jomi line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 100);   // Right-top corner
        glVertex2f(1000 , 100);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 200);   // Right-top corner
        glVertex2f(1000 , 200);    // Bottom-right corner
        glEnd();
//fool line
glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);  // Yellow color
        glVertex2f(0 , 230);   // Right-top corner
        glVertex2f(1000 , 230);    // Bottom-right corner
        glEnd();







    //100-200

    glBegin(GL_POLYGON);
        glColor3f(0.941, 0.773, 0.153);  // Yellow color
        glVertex2f(0 , 199);   // Right-top corner
        glVertex2f(1000 , 199);   // Slanted point (above the lower part)
        glVertex2f(1000, 100);   // Lower slanted point
        glVertex2f(0 , 100);   // Bottom-right corner
        glEnd();




        //zar
            for (int i = 0; i < 30; i++) {
        // Draw the first set of circles
        drawCirclez(10 + i * 54, 180, 5);
        drawCirclez(10 + i *54, 175, 5);

        // Draw the second set of circles
        drawCirclez(20 + i * 54, 180, 9);
        drawCirclez(20 + i * 54, 175, 9);

        // Draw the third set of circles
        drawCirclez(30 + i * 54, 180, 5);
        drawCirclez(30 + i * 54, 175, 5);

        // Draw the fourth set of circles
        drawCirclez(45 + i * 54, 180, 11);
        drawCirclez(45 + i * 54, 175, 11);

        // Draw the fifth set of circles
        drawCirclez(55 + i * 54, 180, 5);
        drawCirclez(55 + i * 54, 175, 5);
    }

//rasta
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(0, 173);  // Bottom-left corner of the left shutter
    glVertex2f(1000, 173);  // Bottom-right corner of the left shutter
    glVertex2f(1000, 153);  // Top-right corner of the left shutter
    glVertex2f(0, 153);  // Top-left corner of the left shutter
glEnd();



   // Draw the first part of the house (Yellow)
glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);  // Yellow color
    glVertex2f(30 , 175);   // Right-top corner
    glVertex2f(80 , 175);   // Slanted point (above the lower part)
    glVertex2f(85, 150);    // Lower slanted point
    glVertex2f(25 , 150);   // Bottom-right corner
glEnd();

// Draw the second part of the house (Red)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color
    glVertex2f(30 , 150);   // Right-top corner
    glVertex2f(80 , 150);   // Slanted point (above the lower part)
    glVertex2f(80, 120);    // Lower slanted point
    glVertex2f(30 , 120);   // Bottom-right corner
glEnd();

// Draw the left window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(35 , 145);   // Right-top corner
    glVertex2f(40 , 145);   // Slanted point (above the lower part)
    glVertex2f(40, 130);    // Lower slanted point
    glVertex2f(35 , 130);   // Bottom-right corner
glEnd();

// Draw the right window (Blue)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(70 , 145);   // Right-top corner
    glVertex2f(75 , 145);   // Slanted point (above the lower part)
    glVertex2f(75, 130);    // Lower slanted point
    glVertex2f(70 , 130);   // Bottom-right corner
glEnd();

// Now, let's draw the door
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45 , 120+30);   // Right-top corner (starting point for the door)
    glVertex2f(65 , 120+30);   // Top-right corner
    glVertex2f(65, 80+30+8);     // Bottom-right corner
    glVertex2f(45 , 80+30+8);    // Bottom-left corner
glEnd();






// house 2
// Apply translation to shift the house by 130 units along the X-axis
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 80 units along the X-axis
glTranslatef(80.0f, 32.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);  // Orange color for the roof
    glVertex2f(40+20 , 200);   // Top peak of the roof
    glVertex2f(100+20 , 175);  // Bottom-right corner of the roof
    glVertex2f(0 , 175);       // Bottom-left corner of the roof
glEnd();

// Draw the body of the house (Rectangle, different proportions)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the body of the house
    glVertex2f(20 , 175);      // Bottom-left corner
    glVertex2f(90 , 175);      // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner (lower position)
    glVertex2f(20 , 100);      // Top-left corner
glEnd();

// Draw the left window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(30 , 150);      // Top-left corner
    glVertex2f(50 , 150);      // Top-right corner
    glVertex2f(50, 130);       // Bottom-right corner
    glVertex2f(30 , 130);      // Bottom-left corner
glEnd();

// Draw the right window (Square shape, smaller than before)
glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);  // Cyan color for the window
    glVertex2f(60 , 150);      // Top-left corner
    glVertex2f(80 , 150);      // Top-right corner
    glVertex2f(80, 130);       // Bottom-right corner
    glVertex2f(60 , 130);      // Bottom-left corner
glEnd();

// Draw the door (Wider door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.25, 0.0);  // Brown color for the door
    glVertex2f(45 , 100+50);       // Top-left corner of the door
    glVertex2f(65 , 100+50);       // Top-right corner of the door
    glVertex2f(65, 50+50);         // Bottom-right corner of the door
    glVertex2f(45 , 50+50);        // Bottom-left corner of the door
glEnd();

// Restore the previous transformation matrix
glPopMatrix();





//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 160 units along the X-axis
glTranslatef(160.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the new slanted roof (Triangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  // Red color for the roof
    glVertex2f(20, 200);       // Left peak of the roof (Y=200)
    glVertex2f(100, 200);      // Right peak of the roof (Y=200)
    glVertex2f(90, 175);       // Right-bottom corner of the roof (Y=175)
    glVertex2f(30, 175);       // Left-bottom corner of the roof (Y=175)
glEnd();

// Draw the body of the house (Rectangle shape)
glBegin(GL_POLYGON);
    glColor3f(1.0, 0.9, 0.0);  // Green color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner (Y=175)
    glVertex2f(90, 175);       // Bottom-right corner (Y=175)
    glVertex2f(90, 100);       // Top-right corner (Y=100)
    glVertex2f(30, 100);       // Top-left corner (Y=100)
glEnd();

// Draw the left window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(40, 150);       // Top-left corner (Y=150)
    glVertex2f(60, 150);       // Top-right corner (Y=150)
    glVertex2f(60, 130);       // Bottom-right corner (Y=130)
    glVertex2f(40, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the right window (Square shape)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color for the window
    glVertex2f(60, 150);       // Top-left corner (Y=150)
    glVertex2f(80, 150);       // Top-right corner (Y=150)
    glVertex2f(80, 130);       // Bottom-right corner (Y=130)
    glVertex2f(60, 130);       // Bottom-left corner (Y=130)
glEnd();

// Draw the door (Smaller door at the base of the house)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.75, 0.0);  // Brown color for the door
    glVertex2f(50, 100+40+10);       // Top-left corner of the door (Y=100)
    glVertex2f(70, 100+40+10);       // Top-right corner of the door (Y=100)
    glVertex2f(70, 50+40+10);        // Bottom-right corner of the door (Y=50)
    glVertex2f(50, 50+40+10);        // Bottom-left corner of the door (Y=50)
glEnd();

// Draw a chimney (Small rectangle on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 210-14);       // Bottom-left corner of the chimney (Y=205)
    glVertex2f(70, 210-14);       // Bottom-right corner of the chimney (Y=205)
    glVertex2f(70, 225);       // Top-right corner of the chimney (Y=225)
    glVertex2f(60, 225);       // Top-left corner of the chimney (Y=225)
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house
glPushMatrix();  // Save the current transformation matrix

// Apply translation to shift the house 260 units along the X-axis
glTranslatef(230.0f, 25.0f, 0.0f);

// Apply scaling to make the house smaller (scale down by 0.8 in both X and Y)
glScalef(0.8f, 0.8f, 1.0f);  // Scale by 0.8 along X and Y axes (Z axis remains unchanged)

// Draw the curved roof (Bezier-style shape for smooth curves)
glBegin(GL_POLYGON);
    glColor3f(0.9, 0.0, 0.0);  // Deep Red color for the roof
    glVertex2f(20-8, 180);       // Left peak of the roof
    glVertex2f(40-8, 220);       // Left-top curve of the roof
    glVertex2f(100-8, 220);      // Right-top curve of the roof
    glVertex2f(120-8, 170);      // Right peak of the roof
    glVertex2f(100-8, 154);      // Right-bottom corner of the roof
    glVertex2f(40-8, 154);       // Left-bottom corner of the roof
glEnd();

// Draw the body of the house (Rounded corners for a soft look)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.9, 0.4);  // Light Yellow color for the body of the house
    glVertex2f(30, 175);       // Bottom-left corner
    glVertex2f(90, 175);       // Bottom-right corner
    glVertex2f(90, 100);       // Top-right corner
    glVertex2f(30, 100);       // Top-left corner
glEnd();

// Draw the left window (Rounded square for elegance)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Bright Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        // Adjusting left window position (radius = 15, x = 50, y = 140)
        glVertex2f(60 + cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();



// Draw the door (Rounded top with a handle)
glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.0);  // Brown color for the door
    glVertex2f(50, 100);       // Top-left corner of the door
    glVertex2f(70, 100);       // Top-right corner of the door
    glVertex2f(70, 125);        // Bottom-right corner of the door
    glVertex2f(50, 125);        // Bottom-left corner of the door
glEnd();

// Draw the door handle (Small circle on the right side of the door)
glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.0);  // Yellow color for the handle
    for (float angle = 0; angle <= 360; angle += 1.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(60 + cos(rad) * 2, 75 + sin(rad) * 2); // Circular handle
    }
glEnd();

// Draw a chimney (Decorative chimney on top of the roof)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(60, 205);       // Bottom-left corner of the chimney
    glVertex2f(65, 205);       // Bottom-right corner of the chimney
    glVertex2f(65, 225);       // Top-right corner of the chimney
    glVertex2f(60, 225);       // Top-left corner of the chimney
glEnd();

// Restore the previous transformation matrix
glPopMatrix();



//house

// Draw the chimney base (original brown)
glBegin(GL_POLYGON);
    glColor3f(0.6, 0.3, 0.0);  // Brown color for the chimney
    glVertex2f(400 - 80, 190);  // Bottom-left corner of the chimney
    glVertex2f(550 - 80, 190);  // Bottom-right corner of the chimney
    glVertex2f(550 - 80, 100);  // Top-right corner of the chimney
    glVertex2f(400 - 80, 100);  // Top-left corner of the chimney
glEnd();

// Draw the chimney top (darker color for a more realistic look)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.9);  // Darker color for the top of the chimney
    glVertex2f(400 - 70, 180);  // Bottom-left corner of the chimney top
    glVertex2f(530 - 70, 180);  // Bottom-right corner of the chimney top
    glVertex2f(530 - 70, 110);  // Top-right corner of the chimney top
    glVertex2f(400 - 70, 110);  // Top-left corner of the chimney top
glEnd();

// --- Draw the Window with Shutters ---
// Left Window
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(435+ cos(rad) * 15, 140 + sin(rad) * 15); // Left window
    }
glEnd();

// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-25, 145-17);  // Bottom-left corner of the left shutter
    glVertex2f(465-25, 145-17);  // Bottom-right corner of the left shutter
    glVertex2f(465-25, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-25, 170-17);  // Top-left corner of the left shutter
glEnd();

// Right Window (same as left)
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0);  // Blue color for the window
    for (float angle = 0; angle <= 360; angle += 3.0) {
        float rad = angle * 3.14159f / 180.0f;
        glVertex2f(355 + cos(rad) * 15, 140 + sin(rad) * 15); // Right window
    }
glEnd();

// Right window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(505-155, 145-17);  // Bottom-left corner of the right shutter
    glVertex2f(515-155, 145-17);  // Bottom-right corner of the right shutter
    glVertex2f(515-155, 170-17);  // Top-right corner of the right shutter
    glVertex2f(505-155, 170-17);  // Top-left corner of the right shutter
glEnd();
// Left window shutters
glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);  // Dark brown for shutters
    glVertex2f(455-75, 125-17);  // Bottom-left corner of the left shutter
    glVertex2f(485-75, 125-17);  // Bottom-right corner of the left shutter
    glVertex2f(485-75, 170-17);  // Top-right corner of the left shutter
    glVertex2f(455-75, 170-17);  // Top-left corner of the left shutter
glEnd();



//house

// Translate the entire house upwards or downwards along the Y-axis

    glTranslatef(-20.0f, -20.0f, 0.0f);  // Translate the house 50 units upwards along the Y-axis

    // Draw the base of the house (rectangle)
    glColor3f(0.8f, 0.4f, 0.2f);  // Brown color for the house
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the base of the house
    glVertex2f(500, 120);
    glVertex2f(600, 120);
    glVertex2f(600, 180);
    glVertex2f(500, 180);
    glEnd();  // End drawing the rectangle

    // Draw the roof of the house (triangle)
    glColor3f(0.6f, 0.2f, 0.2f);  // Dark red color for the roof
    glBegin(GL_TRIANGLES);  // Begin drawing the triangle for the roof
    glVertex2f(500, 180);  // Left corner of the roof
    glVertex2f(600, 180);  // Right corner of the roof
    glVertex2f(550, 210);  // Peak of the roof
    glEnd();  // End drawing the triangle

    // Draw the door (rectangle)
    glColor3f(0.5f, 0.3f, 0.1f);  // Dark brown color for the door
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the door
    glVertex2f(535, 120);
    glVertex2f(565, 120);
    glVertex2f(565, 150);
    glVertex2f(535, 150);
    glEnd();  // End drawing the rectangle

    // Draw windows (rectangles)
    glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for windows
    glBegin(GL_QUADS);  // Left window
    glVertex2f(510, 150);
    glVertex2f(530, 150);
    glVertex2f(530, 170);
    glVertex2f(510, 170);
    glEnd();  // End drawing the left window

    glBegin(GL_QUADS);  // Right window
    glVertex2f(570, 150);
    glVertex2f(590, 150);
    glVertex2f(590, 170);
    glVertex2f(570, 170);
    glEnd();  // End drawing the right window




    //well



       // Translate the entire well 100 units to the right (along the X-axis)
    glTranslatef(80.0f, 0.0f, 0.0f);  // Move the well to the right

    // Draw the base of the well (circle)
    glColor3f(0.5f, 0.5f, 0.5f);  // Gray color for the well's base
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the base
    glVertex2f(550, 120);  // Center of the circle (well's base)
    const int numi_segments = 100;  // Number of segments to make the circle smooth
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the circle's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the circle's edge
        glVertex2f(x + 550, y + 135);  // Vertex of the circle
    }
    glEnd();  // End drawing the base circle

    // Draw the walls of the well (rectangle)
    glColor3f(0.3f, 0.3f, 0.3f);  // Dark gray color for the well's walls
    glBegin(GL_QUADS);  // Begin drawing the rectangle for the walls of the well
    glVertex2f(535, 130);  // Bottom-left corner
    glVertex2f(565, 130);  // Bottom-right corner
    glVertex2f(565, 160);  // Top-right corner
    glVertex2f(535, 160);  // Top-left corner
    glEnd();  // End drawing the rectangle

    // Draw the top of the well (roof, another circle)
    glColor3f(0.0f, 0.0f, 1.0f);  // Dark brown color for the roof
    glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
    glVertex2f(550, 170);  // Center of the roof circle
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);  // Calculate angle
        float x = 15 * cosf(theta);  // Smaller X coordinate for the roof's edge
        float y = 15 * sinf(theta);  // Smaller Y coordinate for the roof's edge
        glVertex2f(x + 550, y + 160);  // Vertex of the roof circle
    }
    glEnd();  // End drawing the roof circle

//kher

glColor3f(0.0f, 0.0f, 1.0f);  // Blue color for the roof
glBegin(GL_TRIANGLE_FAN);  // Begin drawing the circle for the roof
glVertex2f(620, 170);  // Center of the roof circle (original position)

// New translation value for the Y-axis (roof)
float translationY = 50.0f;  // Translate 50 units up (can change this value)
float additionalTranslationY = 5.0f;  // Additional 5 units translation
float newCenterY = 120 + translationY + additionalTranslationY;  // New Y position after translation

// New radius value for a wider roof
float raddius = 31.0f;  // Increase the radius to make the circle wider

// Loop to create the circle for the roof
const int numq_segments = 100;  // Number of segments for smoothness
for (int i = 0; i <= numq_segments; i++) {
    float theta = 2.0f * 3.1415926f * float(i) / float(numq_segments);  // Calculate angle
    float x = raddius * cosf(theta);  // X coordinate for the roof's edge
    float y = raddius * sinf(theta);  // Y coordinate for the roof's edge
    glVertex2f(x + 620, y + newCenterY);  // Vertex of the roof circle with translated Y-coordinate
}
glEnd();  // End drawing the roof circle

// Set the color for the house body (brown)
glColor3f(0.6f, 0.3f, 0.0f);  // Brown color for the house body
glBegin(GL_QUADS);  // Begin drawing the rectangle for the body

// The body of the house (a smaller rectangle)
float houseWidth = 60.0f;  // Further reduced width of the house
float houseHeight = 60.0f;  // Further reduced height of the house

// Bottom-left corner of the house body (relative to the roof center)
float houseBottomLeftX = 620 - houseWidth / 2;
float houseBottomLeftY = newCenterY - raddius - houseHeight + 50.0f;  // Translate 50 units up (adjusted Y position)

// Bottom-right corner of the house body
float houseBottomRightX = houseBottomLeftX + houseWidth;
float houseBottomRightY = houseBottomLeftY;

// Top-left corner of the house body
float houseTopLeftX = houseBottomLeftX;
float houseTopLeftY = houseBottomLeftY + houseHeight;

// Top-right corner of the house body
float houseTopRightX = houseBottomRightX;
float houseTopRightY = houseTopLeftY;

// Define the 4 corners of the rectangle (house body)
glVertex2f(houseBottomLeftX, houseBottomLeftY);  // Bottom-left
glVertex2f(houseBottomRightX, houseBottomRightY);  // Bottom-right
glVertex2f(houseTopRightX, houseTopRightY);  // Top-right
glVertex2f(houseTopLeftX, houseTopLeftY);  // Top-left

glEnd();  // End drawing the house body

// Draw the window (small rectangle)
glColor3f(0.2f, 0.6f, 1.0f);  // Light blue color for the window
glBegin(GL_QUADS);  // Begin drawing the window

float windowWidth = 15.0f;  // Reduced width of the window
float windowHeight = 15.0f;  // Reduced height of the window

// Bottom-left corner of the window
float windowBottomLeftX = 627 - houseWidth / 4;  // Position window to the left of center
float windowBottomLeftY = houseTopLeftY - 25.0f;  // Positioned a little below the roof

// Bottom-right corner of the window
float windowBottomRightX = windowBottomLeftX + windowWidth;
float windowBottomRightY = windowBottomLeftY;

// Top-left corner of the window
float windowTopLeftX = windowBottomLeftX;
float windowTopLeftY = windowBottomLeftY + windowHeight;

// Top-right corner of the window
float windowTopRightX = windowBottomRightX;
float windowTopRightY = windowTopLeftY;

// Define the 4 corners of the window rectangle
glVertex2f(windowBottomLeftX, windowBottomLeftY);  // Bottom-left
glVertex2f(windowBottomRightX, windowBottomRightY);  // Bottom-right
glVertex2f(windowTopRightX, windowTopRightY);  // Top-right
glVertex2f(windowTopLeftX, windowTopLeftY);  // Top-left

glEnd();  // End drawing the window

// Draw the door (larger rectangle)
glColor3f(0.4f, 0.2f, 0.0f);  // Dark brown color for the door
glBegin(GL_QUADS);  // Begin drawing the door

float doorWidth = 20.0f;  // Reduced width of the door
float doorHeight = 40.0f;  // Reduced height of the door

// Bottom-left corner of the door (centered at the bottom)
float doorBottomLeftX = 620 - doorWidth / 2;
float doorBottomLeftY = houseBottomLeftY;

// Bottom-right corner of the door
float doorBottomRightX = doorBottomLeftX + doorWidth;
float doorBottomRightY = doorBottomLeftY;

// Top-left corner of the door
float doorTopLeftX = doorBottomLeftX;
float doorTopLeftY = doorBottomLeftY + doorHeight;

// Top-right corner of the door
float doorTopRightX = doorBottomRightX;
float doorTopRightY = doorTopLeftY;

// Define the 4 corners of the door rectangle
glVertex2f(doorBottomLeftX, doorBottomLeftY);  // Bottom-left
glVertex2f(doorBottomRightX, doorBottomRightY);  // Bottom-right
glVertex2f(doorTopRightX, doorTopRightY);  // Top-right
glVertex2f(doorTopLeftX, doorTopLeftY);  // Top-left

glEnd();  // End drawing the door



float translationX = 100.0f;  // Translation value on the X-axis

glColor3f(0.5f, 0.0f, 0.9f);

// Begin drawing a rectangle (structure) using GL_QUADS
glBegin(GL_QUADS);
    // Define the four vertices of the rectangle, translating them by `translationX`
    glVertex2f(760.0f + translationX, 120.0f); // bottom-left corner
    glVertex2f(840.0f + translationX, 120.0f); // bottom-right corner
    glVertex2f(840.0f + translationX, 190.0f); // top-right corner
    glVertex2f(760.0f + translationX, 190.0f); // top-left corner
glEnd();

// Draw a complex structure

// Set color for the base rectangle (red)
glColor3f(1.0f, 0.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 130.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 130.0f); // bottom-right corner
    glVertex2f(830.0f + translationX, 170.0f); // top-right corner
    glVertex2f(770.0f + translationX, 170.0f); // top-left corner
glEnd();

// Set color for the top triangle (blue)
glColor3f(0.7f, 0.6f, 0.4f);
glBegin(GL_TRIANGLES);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(830.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // peak of the triangle
glEnd();

// Set color for another rectangle (green)
glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
    glVertex2f(770.0f + translationX, 170.0f); // bottom-left corner
    glVertex2f(800.0f + translationX, 170.0f); // bottom-right corner
    glVertex2f(800.0f + translationX, 200.0f); // top-right corner
    glVertex2f(770.0f + translationX, 200.0f); // top-left corner
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5, 0.25, 0.0); // Door color (brown)
glVertex2f(160+740, 130);  // Bottom-left of the door
glVertex2f(140+740, 130);  // Bottom-right of the door
glVertex2f(140+740, 170);  // Top-right of the door
glVertex2f(160+740, 170);  // Top-left of the door
glEnd();

//cricket
drawCircle7(755,150,15);
drawCircle7(730,150,15);
drawCircle7(775,150,15);
drawCircle7(710,150,15);
drawCircle7(795,150,15);
drawCircle7(805,150,15);


drawCircle5(755,150,14);
drawCircle5(730,150,14);
drawCircle5(775,150,14);
drawCircle5(710,150,14);
drawCircle5(795,150,14);
drawCircle5(805,150,14);
glColor3f(1.0f, 1.0f, 0.0f); // Color the polygon yellow (you can change this)
glBegin(GL_QUADS);

// Define the four vertices of the polygon (you can adjust the coordinates to fit your design)
glVertex2f(720.0f, 140.0f); // bottom-left corner
glVertex2f(785.0f, 140.0f); // bottom-right corner
glVertex2f(785.0f, 160.0f); // top-right corner
glVertex2f(720.0f, 160.0f); // top-left corner

glEnd();




bird();
bird1();

t();


    glutSwapBuffers();




}






// Function to handle key press events
void key(unsigned char key, int x, int y) {
    switch (key)
    {
    case '5':  // When '5' key is pressed
        if (shift >0) {  // Only decrease shift if shift is 0 or greater than 200
            shift -= 5;  // Decrease shift by 5
            glutPostRedisplay();  // Request a redraw
        }
        break;
    case '6':  // When '6' key is pressed
        shift += 5;  // Increase shift by 5
        glutPostRedisplay();  // Request a redraw
        break;
           case '1':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)
        shifti -= 5;  // Decrease shifti by 5

        // If shifti reaches -620, reset it to 320
        if (shifti == -620) {
            shifti = 320;
        }
glutPostRedisplay();  // Request a redraw

        break;

             case '2':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)
        shif -= 5;  // Decrease shifti by 5

        // If shifti reaches -620, reset it to 320
        if (shif == -290) {
            shif = 1000;
        }
          glutPostRedisplay();  // Request a redraw
        break;

               case '3':
        shi += 5;

        // If shifti reaches -620, reset it to 320
        if (shi == 500) {
            shi = -500;
        }
         glutPostRedisplay();
        break;
               case '7':
        s += 5;

        // If shifti reaches -620, reset it to 320
        if (s == 1000) {
            s =0 ;
        }




        glutPostRedisplay();  // Request a redraw
        break;


                    case '4':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)
        sh -= 5;  // Decrease shifti by 5

        // If shifti reaches -620, reset it to 320
        if (sh == -1000) {
            sh = 100;
        }
          glutPostRedisplay();  // Request a redraw
        break;


                   case '8':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)
        si -= 5;  // Decrease shifti by 5

        // If shifti reaches -620, reset it to 320
        if (si == -1000) {
            si = 350;
        }
          glutPostRedisplay();  // Request a redraw
        break;
          case '9':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)
        ok += 5;  // Decrease shifti by 5

        // If shifti reaches -620, reset it to 320
        if (ok == 550) {
            ok = -450;
        }
          glutPostRedisplay();  // Request a redraw
        break;


           case '0':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)
        p += 5;  // Decrease shifti by 5

        // If shifti reaches -620, reset it to 320
        if (p == 930) {
            p = -70;
        }
          glutPostRedisplay();  // Request a redraw
        break;




           case 'n':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)
    glutDisplayFunc(drawScene1);


       // drawScene1();
         glutPostRedisplay();  // Request a redraw
        break;

    case 'd':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)


    glutDisplayFunc(drawScene2);
       // drawScene1();
         glutPostRedisplay();  // Request a redraw
        break;

 case 'i':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)


    glutDisplayFunc(drawScene3);// bristi
       // drawScene1();
         glutPostRedisplay();  // Request a redraw
        break;
 case 'j':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)


    glutDisplayFunc(drawScene4);// bristi
       // drawScene1();
         glutPostRedisplay();  // Request a redraw
        break;
case 'u':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)


    glutDisplayFunc(drawScene5);// bristi
       // drawScene1();
         glutPostRedisplay();  // Request a redraw
        break;
case 'w':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)


    glutDisplayFunc(drawScene6);// bristi
       // drawScene1();
         glutPostRedisplay();  // Request a redraw
        break;

        case 'a':  // When '1' key is pressed (you wrote '6' in the comment, but using '1' as per your example)


    exit(0);
         glutPostRedisplay();  // Request a redraw
        break;


    }

}

















void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);








    glutInitWindowSize(1000, 500);
    glutCreateWindow("Transformation");


    init();


    glutDisplayFunc(drawScene);
  glutKeyboardFunc(key);


    glutMainLoop();
    return 0;
}




