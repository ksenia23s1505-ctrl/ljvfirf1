#include <stdio.h>
#include <stdbool.h> 

int main(void) {
    int num1, num2;
    
    printf("Введите два целых числа через пробел: ");
    scanf("%d %d", &num1, &num2);
    
    bool  MODULE_READY = num1;
    bool  FAULT_STATE = num2;
    
    printf("MODULE_READY: %d\n", MODULE_READY);
    printf("FAULT_STATE: %d\n", FAULT_STATE);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    
    int FLAGS_SUM = MODULE_READY + FAULT_STATE;
    printf("FLAGS_SUM: %d\n", FLAGS_SUM);
    
    return 0;
}