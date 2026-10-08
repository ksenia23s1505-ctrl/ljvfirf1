#include <stdio.h>

void pulse() {
    printf("@");
}

int main() {
    for (int line = 1; line <= 3; line++) 
    {
        for (int i = 0; i < line; i++) {
            pulse();
        }
        printf("\n");
    }

    return 0;
}