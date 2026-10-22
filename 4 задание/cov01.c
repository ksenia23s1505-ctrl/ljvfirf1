#include <stdio.h>
#define KOEF 1000
int main(void) {
    int total_grams; 
    int kg;          
    int g;           

    printf("--- Конвертер массы ---\n");
    printf("Введите массу в граммах (для выхода введите 0 или минус):\n");

    while (scanf("%d", &total_grams) == 1 && total_grams > 0) {
        kg = total_grams / KOEF; 
        g = total_grams % KOEF;  
        printf("Результат: %d кг %d г\n\n", kg, g);

        printf("Введите массу в граммах: ");
    }
    printf("Программа завершена.\n");
    return 0;
}
