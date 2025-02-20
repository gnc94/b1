#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    char array[50];

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int color = getpixel(0, 0);
    sprintf(array, "Color of pixel at (0, 0) = %d", color);

    outtext(array);

    getch();
    closegraph();

    return 0;
}

