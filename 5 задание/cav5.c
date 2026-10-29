#include <stdio.h>

double calc(double a, double b) {
  
    double vverh = a * a * b;
    double niz = a + (b * b);
    double otvet = vverh / niz;
    return otvet;
}

int main() {
    double pervoe_chislo;
    double vtoroe_chislo;

    printf("Введите числа a и b через пробел (для выхода введите букву): ");

    while (scanf("%lf %lf", &pervoe_chislo, &vtoroe_chislo) == 2) {
        
        double rezultat_rascheta = calc(pervoe_chislo, vtoroe_chislo);
        printf("Результат: %.4f\n", rezultat_rascheta);
        printf("\nВведите еще два числа: ");
    }
    printf("Вы вышли из программы.\n");

    return 0;
}
