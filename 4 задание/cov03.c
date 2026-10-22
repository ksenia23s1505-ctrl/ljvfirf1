#include <stdio.h>

int main(void) {
    int N;          
    int counter = 0;   
    long long current_val = 1; 

    printf("Введите количество элементов N: ");
    scanf("%d", &N);
    printf("Первые %d элементов последовательности: ", N);
    while (counter < N) {
        printf("%lld ", current_val);
        current_val = current_val * 16;
        counter++; 
    }
    printf("\n");
    return 0;
}