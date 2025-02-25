#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

main() {
    int rc, rb, xc, yc, i;
    float x, y;
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    outtextxy(100, 20, "NAME NO");

    printf("Enter the radius of the outer circle\n");
    scanf("%d", &rc);

    printf("Enter the radius of the inner circle\n");
    scanf("%d", &rb);

    printf("Enter the center of the circle\n");
    scanf("%d", &xc);
    scanf("%d", &yc);

    for (i = 1; i <= 360; i++) {
        x = xc + (rb * (cos(i)));
        y = yc + (rb * (sin(i)));
        putpixel(x, y, 7);
    }

    for (i = 1; i <= 360; i++) {
        x = xc + (rc * (cos(i)));
        y = yc + (rc * (sin(i)));
        putpixel(x, y, 7);
    }

    getch();
    closegraph();

    return 0;
}
