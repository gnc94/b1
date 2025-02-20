#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    outtext("Name Roll No:\n");
    outtext("Press any key to close the graph");
    getch();

    cleardevice();
    outtext("Press any key to edit");
    getch();

    closegraph();

    return 0;
}

