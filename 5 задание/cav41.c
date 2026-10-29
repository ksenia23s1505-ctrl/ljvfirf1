#include <stdio.h>

int main() {
    double arr[8];
    for (int i = 0; i < 8; i++) {
        if (i == 0) arr[i] = 1.0;
        if (i == 1) arr[i] = 1.0;
        if (i == 2) arr[i] = 2.0;
        if (i == 3) arr[i] = 4.0;
        if (i == 4) arr[i] = 9.0;
        if (i == 5) arr[i] = 21.0;
        if (i == 6) arr[i] = 51.0;
        if (i == 7) arr[i] = 127.0;
    }
    printf("Исходный массив:\n");
    for (int i = 0; i < 8; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n"); 
    double min = arr[0]; 
    for (int i = 1; i < 8; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Минимум:\n");
    printf("%.2f\n", min);

    return 0;
}
