#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    outtext("Name Roll No:\n");
    arc(100, 100, 0, 135, 50);

    getch();
    closegraph();

    return 0;
}

