#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int w, h, l;
    scanf("%d %d %d", &w, &h, &l);

    int v, s;
    v = w * h * l;
    s = 2*(w*h + w*l + h*l);
    printf("Îבתול: %d, ןכמשאהü: %d", v, s);
}
