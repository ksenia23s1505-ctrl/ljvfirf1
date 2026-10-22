#include <stdio.h>
double c_to_f(double c);
int main(void) {
    double celsius;
    double fahrenheit;

    printf("--- Конвертер Цельсия в Фаренгейты  ---\n");
    printf("Введите температуру в Цельсиях (для выхода введите букву или нажмите Ctrl+D / Ctrl+Z):\n\n");
    printf("Ввод: ");
    while (scanf("%lf", &celsius) == 1) {
        fahrenheit = c_to_f(celsius);
        printf("Результат: %.2f F\n\n", fahrenheit);
        printf("Ввод: ");
    }
    printf("\nПрограмма успешно завершена.\n");
    return 0;
}
double c_to_f(double c) {
    const double MULTIPLIER = 9.0 / 5.0; 
    const double OFFSET = 32.0;
    return (c * MULTIPLIER) + OFFSET;
}
