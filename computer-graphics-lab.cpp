/*
**ATTENTION**
? All tested solutions of computer graphics lab problems.
? Make sure your environment is set up appropriately otherwise you may face error running these codes.
? file extension must be .cpp but do not use cpp streams such as cout, cin to avoid errors.
? here i'm using usleep(value) instead of delay() which is for Unix systems
? if you are using windows then replace it with Sleep(value)

** How To Run?**
? for vs code setup with libXbgi library configuration(linux). run these commands and enjoy:
gcc -o graphics graphics.cpp /usr/lib/libXbgi.a -lX11 -lm
./graphics

last modified: 28 oct, 2023
prepared by: sabbir ahmed
*/

/* Scaling*/
#include <graphics.h>

#include <iostream>
void main() {
    float p, q, r, s, Sx, Sy;

    cout << "Enter the first coordinate of a line:";
    cin >> p >> " " >> q;
    cout << endl;

    cout << "Enter the second coordinate of a line:";
    cin >> r >> " " >> s;
    cout << endl;

    cout << "Enter the scaling factor:";
    cin >> Sx >> " " >> Sy;
    cout << endl;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    line(p, q, r, s);

    p = p * Sx;
    q = q * Sy;
    r = r * Sx;
    s = s * Sy;

    line(p, q, r, s);

    getch();
    closegraph();
}

/* Ractangle Translation*/
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void translateRectangle(int P[][2], int T[]) {
    int gd = DETECT, gm, errorcode;
    initgraph(&gd, &gm, "c:\\tc\\bgi");
    setcolor(2);
    rectangle(P[0][0], P[0][1], P[1][0], P[1][1]);

    P[0][0] = P[0][0] + T[0];
    P[0][1] = P[0][1] + T[1];
    P[1][0] = P[1][0] + T[0];
    P[1][1] = P[1][1] + T[1];

    rectangle(P[0][0], P[0][1], P[1][0], P[1][1]);
    getch();
    closegraph();
}

int main() {
    int P[2][2] = {5, 8, 12, 18};
    int T[] = {2, 1};  // translation factor
    translateRectangle(P, T);
    return 0;
}

/* Rotation of Triangle*/
#include <graphics.h>
#include <math.h>
#include <stdio.h>

void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
void RotateTriangle(int x1, int y1, int x2, int y2, int x3, int y3, float angle);

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3;
    float angle;

    printf("Enter the 1st point for the triangle (x1 y1): ");
    scanf("%d%d", &x1, &y1);

    printf("Enter the 2nd point for the triangle (x2 y2): ");
    scanf("%d%d", &x2, &y2);

    printf("Enter the 3rd point for the triangle (x3 y3): ");
    scanf("%d%d", &x3, &y3);

    printf("Enter the angle for rotation (in degrees): ");
    scanf("%f", &angle);

    initgraph(&gd, &gm, (char *)"");
    DrawTriangle(x1, y1, x2, y2, x3, y3);
    RotateTriangle(x1, y1, x2, y2, x3, y3, angle);

    getch();
    closegraph();

    return 0;
}

void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3)

{
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void RotateTriangle(int x1, int y1, int x2, int y2, int x3, int y3, float angle)

{
    int p = x2, q = y2;

    float radianAngle = (angle * 3.14) / 180.0;

    int a1 = p + (x1 - p) * cos(radianAngle) - (y1 - q) * sin(radianAngle);
    int b1 = q + (x1 - p) * sin(radianAngle) + (y1 - q) * cos(radianAngle);

    int a2 = p + (x2 - p) * cos(radianAngle) - (y2 - q) * sin(radianAngle);
    int b2 = q + (x2 - p) * sin(radianAngle) + (y2 - q) * cos(radianAngle);

    int a3 = p + (x3 - p) * cos(radianAngle) - (y3 - q) * sin(radianAngle);
    int b3 = q + (x3 - p) * sin(radianAngle) + (y3 - q) * cos(radianAngle);

    setcolor(1);
    DrawTriangle(a1, b1, a2, b2, a3, b3);
}

/* Reflection of an object*/
#include <graphics.h>
#include <stdio.h>

int main() {
    // Initialize the drivers
    int gm, gd = DETECT, ax, x1 = 100;
    int x2 = 100, x3 = 200, y1 = 100;
    int y2 = 200, y3 = 100;

    initgraph(&gd, &gm, (char *)"");
    // cleardevice();

    // Draw the graph
    line(getmaxx() / 2, 0, getmaxx() / 2,
         getmaxy());
    line(0, getmaxy() / 2, getmaxx(),
         getmaxy() / 2);

    // Object initially at 2nd quadrant
    printf(
        "Before Reflection Object"
        " in 2nd Quadrant");

    // Set the color
    setcolor(14);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();

    // After reflection
    printf("\nAfter Reflection");

    // Reflection along origin i.e.,
    // in 4th quadrant
    setcolor(4);
    line(getmaxx() - x1, getmaxy() - y1,
         getmaxx() - x2, getmaxy() - y2);

    line(getmaxx() - x2, getmaxy() - y2,
         getmaxx() - x3, getmaxy() - y3);

    line(getmaxx() - x3, getmaxy() - y3,
         getmaxx() - x1, getmaxy() - y1);

    // Reflection along x-axis i.e.,
    // in 1st quadrant
    setcolor(3);
    line(getmaxx() - x1, y1,
         getmaxx() - x2, y2);
    line(getmaxx() - x2, y2,
         getmaxx() - x3, y3);
    line(getmaxx() - x3, y3,
         getmaxx() - x1, y1);

    // Reflection along y-axis i.e.,
    // in 3rd quadrant
    setcolor(2);
    line(x1, getmaxy() - y1, x2,
         getmaxy() - y2);
    line(x2, getmaxy() - y2, x3,
         getmaxy() - y3);
    line(x3, getmaxy() - y3, x1,
         getmaxy() - y1);
    getch();

    closegraph();

    return 0;
}

/* DDA line drawing*/
#include <graphics.h>
#include <math.h>

int main() {
    float x, y, x1, y1, x2, y2, dx, dy, step;

    printf("Enter the value of x1 and y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the value of x2 and y2: ");
    scanf("%f %f", &x2, &y2);

    int i, gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    dx = (x2 - x1);
    dy = (y2 - y1);
    if (abs(dx) >= abs(dy))
        step = abs(dx);
    else
        step = abs(dy);
    dx = dx / step;
    dy = dy / step;
    x = x1;
    y = y1;
    i = 0;
    while (i <= step) {
        putpixel(round(x), round(y), 5);
        x = x + dx;
        y = y + dy;
        i = i + 1;
        usleep(500);
    }
    getch();
    closegraph();

    return 0;
}

/* Bresenham's Line Drawing*/
#include <graphics.h>
void bresenham(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int p = 2 * dy - dx;

    for (size_t x = x1, y = y1; x < x2; x++) {
        if (p < 0) {
            putpixel(x, y, 3);
            p += 2 * dy;
            usleep(500);
        } else {
            putpixel(x, y, 3);
            y++;
            p += (2 * dy - 2 * dx);
            usleep(500);
        }
    }
}
int main() {
    int x1, y1, x2, y2;
    printf("Enter the value of x1, y1, x2, y2: \n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    bresenham(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}

/* Bresenham's Circle Drawing*/
#include <graphics.h>
#include <stdio.h>

void drawCircle(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, RED);
    putpixel(xc - x, yc + y, RED);
    putpixel(xc + x, yc - y, RED);
    putpixel(xc - x, yc - y, RED);
    putpixel(xc + y, yc + x, RED);
    putpixel(xc - y, yc + x, RED);
    putpixel(xc + y, yc - x, RED);
    putpixel(xc - y, yc - x, RED);
}

void circleBres(int xc, int yc, int r) {
    int x = 0, y = r;
    int dp = 3 - 2 * r;
    drawCircle(xc, yc, x, y);
    while (y >= x) {
        x++;

        // check for decision parameter
        // and correspondingly
        // update d, x, y
        if (dp >= 0) {
            y--;
            dp = dp + 4 * (x - y) + 10;
        } else
            dp = dp + 4 * x + 6;
        drawCircle(xc, yc, x, y);
        usleep(100);
    }
}

int main() {
    int xc = 50, yc = 50, r = 30;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    circleBres(xc, yc, r);
    getch();
    closegraph();
    return 0;
}

/*  Mid point line Drawing*/
#include <graphics.h>
void midpointLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int p = 2 * dy - dx;
    int delP = 2 * (dy - dx);

    for (size_t x = x1, y = y1; x < x2; x++) {
        if (p < 0) {
            putpixel(x, y, 3);
            p += 2 * dy;
            usleep(500);
        } else {
            putpixel(x, y, 3);
            y++;
            p += delP;
            usleep(500);
        }
    }
}
int main() {
    int x1, y1, x2, y2;
    printf("Enter the value of x1, y1, x2, y2: \n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    midpointLine(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}

/* Midpoint Circle Drawing*/
#include <graphics.h>
#include <stdio.h>

void drawCircle(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, GREEN);
    putpixel(xc - x, yc + y, GREEN);
    putpixel(xc + x, yc - y, GREEN);
    putpixel(xc - x, yc - y, GREEN);
    putpixel(xc + y, yc + x, GREEN);
    putpixel(xc - y, yc + x, GREEN);
    putpixel(xc + y, yc - x, GREEN);
    putpixel(xc - y, yc - x, GREEN);
}

void circleBres(int xc, int yc, int r) {
    int x = 0, y = r;
    int dp = 1 - r;
    drawCircle(xc, yc, x, y);
    while (y >= x) {
        x++;

        // check for decision parameter
        // and correspondingly
        // update d, x, y
        if (dp >= 0) {
            y--;
            dp = dp - 2 * y + 2 * x + 1;
        } else
            dp = dp + 2 * x + 1;
        drawCircle(xc, yc, x, y);
        usleep(100);
    }
}

int main() {
    int xc = 100, yc = 100, r = 30;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    circleBres(xc, yc, r);
    getch();
    closegraph();
    return 0;
}

/* Cohen Sutherland Line Clipping*/
#include <graphics.h>
#include <stdio.h>

static int LEFT = 1, RIGHT = 2, BOTTOM = 4, TOP = 8, xmin, ymin, xmax, ymax;
int getcode(int x, int y) {
    int code = 0;
    if (y > ymax) code |= TOP;
    if (y < ymin) code |= BOTTOM;
    if (x < xmin) code |= LEFT;
    if (x > xmax) code |= RIGHT;
    return code;
}
int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2;

    printf("ENTER THE WINDOW SIZE");
    scanf("%d %d %d %d", &xmin, &ymin, &xmax, &ymax);

    printf("ENTER THE coordinates of the line");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    initgraph(&gd, &gm, (char *)"");
    rectangle(xmin * 100, ymin * 100, xmax * 100, ymax * 100);
    line(x1 * 100, y1 * 100, x2 * 100, y2 * 100);

    int outcode1 = getcode(x1, y1), outcode2 = getcode(x2, y2);
    bool accept = false;

    while (true) {
        float m = (float)(y2 - y1) / (x2 - x1);
        if (outcode1 == 0 && outcode2 == 0) {
            accept = true;
            break;
        } else if ((outcode1 & outcode2) != 0) {
            break;
        } else {
            int x, y;
            int temp;
            if (outcode1 == 0)
                temp = outcode2;
            else
                temp = outcode1;
            if (temp & TOP) {
                x = round(x1 + (float)(ymax - y1) / m);
                y = ymax;
            } else if (temp & BOTTOM) {
                x = round(x1 + (float)(ymin - y1) / m);
                y = ymin;
            } else if (temp & LEFT) {
                x = xmin;
                y = round(y1 + (float)m * (xmin - x1));
            } else if (temp & RIGHT) {
                x = xmax;
                y = round(y1 + (float)m * (xmax - x1));
            }
            if (temp == outcode1) {
                x1 = x;
                y1 = y;
                outcode1 = getcode(x1, y1);
            } else {
                x2 = x;
                y2 = y;
                outcode2 = getcode(x2, y2);
            }
        }
    }

    if (accept) {
        // initgraph(&gd, &gm, (char *)"");
        rectangle(xmin * 100, ymin * 100, xmax * 100, ymax * 100);
        setcolor(GREEN);
        // printf("x1 = %d y1 = %d\n x2=%d y2=%d\n", x1, y1, x2, y2);
        line(x1 * 100, y1 * 100, x2 * 100, y2 * 100);
    } else
        printf("\nline rejected\n");

    getch();
    closegraph();
    return 0;
}

/* Liang Barsky line clipping*/
#include <graphics.h>

#include <iostream>
using namespace std;
int main() {
    int x1, y1, x2, y2, xmin, xmax, ymin, ymax, xx1, xx2, yy1, yy2, dx, dy;
    float t1, t2, p[4], q[4], temp;
    cout << "\nEnter x1 and y1\n";
    cin >> x1 >> y1;
    cout << "\nEnter x2 and y2\n";
    cin >> x2 >> y2;
    xmin = 100;
    ymin = 100;
    xmax = 250;
    ymax = 250;
    int i, gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    rectangle(xmin, ymin, xmax, ymax);
    dx = x2 - x1;
    dy = y2 - y1;
    p[0] = -dx;
    p[1] = dx;
    p[2] = -dy;
    p[3] = dy;
    q[0] = x1 - xmin;
    q[1] = xmax - x1;
    q[2] = y1 - ymin;
    q[3] = ymax - y1;
    for (i = 0; i < 4; i++) {
        if (p[i] == 0) {
            cout << "line is parallel to one of the clipping boundary";
            if (q[i] >= 0) {
                if (i < 2) {
                    if (y1 < ymin) {
                        y1 = ymin;
                    }
                    if (y2 > ymax) {
                        y2 = ymax;
                    }
                    line(x1, y1, x2, y2);
                }
                if (i > 1) {
                    if (x1 < xmin) {
                        x1 = xmin;
                    }
                    if (x2 > xmax) {
                        x2 = xmax;
                    }
                    line(x1, y1, x2, y2);
                }
            }
        }
    }
    t1 = 0;
    t2 = 1;
    for (i = 0; i < 4; i++) {
        temp = q[i] / p[i];
        if (p[i] < 0) {
            if (t1 <= temp)
                t1 = temp;
        } else {
            if (t2 > temp)
                t2 = temp;
        }
    }
    if (t1 < t2) {
        xx1 = x1 + t1 * p[1];
        xx2 = x1 + t2 * p[1];
        yy1 = y1 + t1 * p[3];
        yy2 = y1 + t2 * p[3];
        line(xx1, yy1, xx2, yy2);
    }
    usleep(5000);
    getch();
    closegraph();
    return 0;
}
