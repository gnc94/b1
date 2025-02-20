#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    circle(100, 100, 50);
    setcolor(GREEN);
    outtext("Name Roll No: \n");
    circle(200, 200, 50);

    getch();
    closegraph();

    return 0;
}

