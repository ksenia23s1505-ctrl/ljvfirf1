#include <stdio.h>

int main(void) {
    int number;         
    int current_digit;  
    int sum = 0;       

    printf("--- Разложение числа на цифры ---\n");
    printf("Введите целое положительное число: ");
    scanf("%d", &number);
    int original_number = number; 

    printf("Цифры числа в обратном порядке: ");

    while (number > 0) {
        current_digit = number % 10; 
        printf("%d ", current_digit); 
        sum += current_digit;       
        number = number / 10;       
    }
    printf("\n\nСумма всех цифр числа %d равна: %d\n", original_number, sum);
    return 0;
}