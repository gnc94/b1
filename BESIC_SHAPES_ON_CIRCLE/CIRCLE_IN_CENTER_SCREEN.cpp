#include <graphics.h>
#include <conio.h>

int main() {
    int x, y;
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    x = getmaxx() / 2;
    y = getmaxy() / 2;

    outtextxy(x - 100, 20, "NAME NO");
    outtextxy(x - 100, 50, "ELLIPSE USING GRAPHICS IN C");
    ellipse(x, y, 0, 360, 120, 60);

    getch();
    closegraph();
    return 0;
}

