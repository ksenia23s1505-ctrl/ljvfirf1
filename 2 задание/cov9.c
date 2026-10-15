#include <stdio.h>
#include <unistd.h> 

int main(void) {
    printf("START");
    fflush(stdout);
    sleep(1); 

    printf("\b\b\bOP");
    fflush(stdout);
    sleep(1);

    printf("\b\bOP");
    fflush(stdout);
    sleep(1);

    printf(" \b");
    fflush(stdout);
    sleep(1);

    printf("\a\n");

    return 0;
}