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
prepared by: Sabbir Ahmed
*/

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
