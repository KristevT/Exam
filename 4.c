#include <stdio.h>

void leftShift(int arr[], int n) {
    int buff = arr[0]; // Запись первого элемента в буфер
    for (int i = 0; i < n-1; i++) { // Сдвиг влево кроме последнего
        arr[i] = arr[i+1];
    }
    arr[n-1] = buff; // Замена последнего на значение в буфере
}

int main () {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i=0; i<n; i++) { // Ввод массива
        scanf("%d", &arr[i]);
    }

    leftShift(arr, n);

    for (int i=0; i<n; i++) { // Вывод массива
        printf("%d ", arr[i]);
    }

    return 0;
}