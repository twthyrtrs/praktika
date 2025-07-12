#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// Инициализация массива случайными числами
void init_array(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

// Подсчет четных элементов
int count_even(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) count++;
    }
    return count;
}

// Подсчет нечетных элементов
int count_odd(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) count++;
    }
    return count;
}

// Функция, возвращающая количество четных и нечетных элементов
void count_even_odd(int arr[], int size, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) (*even)++;
        else (*odd)++;
    }
}

// Вывод массива
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[SIZE];
    init_array(arr, SIZE);
    print_array(arr, SIZE);

    int even = count_even(arr, SIZE);
    int odd = count_odd(arr, SIZE);
    printf("even: %d, odd: %d\n", even, odd);

    int even2, odd2;
    count_even_odd(arr, SIZE, &even2, &odd2);
    printf("even: %d, odd: %d\n", even2, odd2);

    return 0;
}