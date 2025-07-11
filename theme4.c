#include <stdio.h>
#include <math.h>

int main(void){
    int a;
    scanf("%d", &a);
    float sum1, sum2, sum3, sum4;
    
    // n = 5 
    for(int n = 1; n<=5; n++){
        sum1 += (1.0 / (pow(a, n)));
    }
    
    // n = 10
    for(int n = 1; n<=10; n++){
        sum2 += (1.0 / (pow(a, n)));
    }
    
    // n = 15
    for(int n = 1; n<=15; n++){
        sum3 += (1.0 / (pow(a, n)));
    }
    
    // n = 20
    for(int n = 1; n<=20; n++){
        sum4 += (1.0 / (pow(a, n)));
    } 

    printf("%f %f %f %f", sum1, sum2, sum3, sum4);
    return 0;
}