#include <stdio.h>

int main(void) {
    const int HEIGHT = 5;

    for (int i = 0; i < HEIGHT; i++) {
        
        for (int j = 0; j < HEIGHT - i - 1; j++) {
            printf(" ");
        }
        int num = 1;

        for (int k = 0; k < (2 * i + 1); k++) {
            printf("%d", num);
            num = num + 2; 
        }
        printf("\n");
    }

    return 0;
}