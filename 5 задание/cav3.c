#include <stdio.h>

int main(void) {
    int N = 1;

    while (N > 0) {
        printf("Введите количество слагаемых N (для выхода введите 0 или меньше): ");
        scanf("%d", &N);

        double sum = 0.0;

        for (int i = 1; i <= N; i++) {
            double chislitel = (double)(i + 1);
            double znamenatel = (double)(i * i);
            double f_i = chislitel / znamenatel;
            
            sum = sum + f_i;
        }

        for (int check = 0; check < 1 && N > 0; check++) {
            printf("SUM: %.6f\n\n", sum);
        }
    }

    printf("Программа завершена.\n");
    return 0;
}