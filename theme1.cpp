#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int w, h, l;
    std::cin >> w >> h >> l;

    int volume = w * h * l;
    int surface_area = 2*(w*h + w*l + h*l);
    
    std::cout << "־בתול: " << volume << ", ֿכמשאהü: " << surface_area;
}

