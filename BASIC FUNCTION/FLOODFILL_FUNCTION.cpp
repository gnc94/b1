#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    outtext("Name Roll No: \n");

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(100, 100, 80);
    floodfill(100, 100, RED);

    getch();
    closegraph();

    return 0;
}

