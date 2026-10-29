#include <stdio.h>

int main(void) {
    double arr[8];

    arr[0] = 1.0;
    arr[1] = 1.0;
    arr[2] = 2.0;
    arr[3] = 4.0;
    arr[4] = 9.0;
    arr[5] = 21.0;
    arr[6] = 51.0;
    arr[7] = 127.0;

    double min_val = arr[0];

    for (int i = 0; i < 8; i++) {
        min_val = (arr[i] < min_val) ? arr[i] : min_val; 
    }

    printf("Исходный массив:\n");
    for (int i = 0; i < 8; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n\n");
    printf("Минимальный элемент:\n");
    printf("%.2f\n", min_val);

    return 0;
}
