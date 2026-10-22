#include <stdio.h>
#include <stdint.h>
int main(void) {
    uint32_t p; 
    uint32_t t; 

    printf("Введите значение p: ");
    scanf("%u", &p); 

    printf("Введите значение t: ");
    scanf("%u", &t);

    uint64_t result = (uint64_t)p * t;
    printf("Результат вычисления p * t = %llu\n\n", (unsigned long long)result);
    printf("Размер типа uint32_t: %llu байт\n", (unsigned long long)sizeof(uint32_t));
    printf("Размер типа uint64_t: %llu байт\n", (unsigned long long)sizeof(uint64_t));

    return 0;
}