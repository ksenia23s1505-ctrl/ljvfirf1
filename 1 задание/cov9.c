#include <stdio.h>

void phase_1();
void phase_2();


void phase_1() {
    printf("ALPHA ");
    phase_2();
    printf("GAMMA ");
}

void phase_2() {
    printf("BETA ");
}
int main() {
    printf("START ");
    phase_1();
    printf("END\n");

    return 0;
}