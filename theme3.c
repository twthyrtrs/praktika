#include <stdio.h>

int main(void)
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    for (int num = n1; num <= n2; num++) {
        printf("%d: ", num);
        for(int i=1; i <= num; i++) {
            if(num % i == 0){
                printf("%d ", i);
            }
        }
        printf("\n"); 
    }

    return 0;
}
