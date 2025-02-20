#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    outtext("Name Roll No:\n");
    circle(100, 100, 80);

    getch();
    closegraph();

    return 0;
}

