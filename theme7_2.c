#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

// Ввод массива с клавиатуры
void input_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Проверка, встречается ли элемент в массиве более одного раза
bool is_repeat(int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) count++;
        if (count >= 2) return true;
    }
    return false;
}

// Удаление неповторяющихся элементов
void del_not_repeat(int arr[], int *size) {
    int new_size = 0;
    for (int i = 0; i < *size; i++) {
        if (is_repeat(arr, *size, arr[i])) {
            arr[new_size++] = arr[i];
        }
    }
    *size = new_size;
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
    input_array(arr, SIZE);
    print_array(arr, SIZE);

    int new_size = SIZE;
    del_not_repeat(arr, &new_size);
    print_array(arr, new_size);

    return 0;
}