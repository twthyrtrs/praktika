#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1, x2, x3, y1, y2, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    float a, b, c;
    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    if(a>b && a>c) {
        printf("%f", a);
    }
    else if (b>a && b>c) {
        printf("%f", b);
    }
    else {
        printf("%f", c); 
    }  
    return 0;
}
