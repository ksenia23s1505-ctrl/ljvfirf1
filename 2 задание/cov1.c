#include <stdio.h>

int main(void) {
    int UNIT_ID;
    int UNIT_VERSION;
    int UNIT_STATUS;

    scanf("%d %x %o", &UNIT_ID, &UNIT_VERSION, &UNIT_STATUS);

    int SUM = UNIT_ID + UNIT_VERSION + UNIT_STATUS;

    printf("UNIT_ID: %d\n", UNIT_ID);
    printf("UNIT_VERSION: %d\n", UNIT_VERSION);
    printf("UNIT_STATUS: %d\n", UNIT_STATUS);
    printf("SUM: %d\n", SUM);

    return 0;
}