#include <stdio.h>

int main(void) {
    int DEC_10 = 10;
    int OCT_10 = 010;
    int HEX_10 = 0x10;
    
    printf("DEC_10: %d\n", DEC_10);
    printf("OCT_10: %d\n", OCT_10);
    printf("HEX_10: %d\n", HEX_10);

    printf("INT_SUFFIX: %d %d %d %d\n", 
           (int)sizeof(10), (int)sizeof(10u), (int)sizeof(10LL), (int)sizeof(10ULL));
           
    printf("FLOAT_SUFFIX: %d %d %d\n", 
           (int)sizeof(0.1f), (int)sizeof(0.1), (int)sizeof(0.1L));
           
    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);
    
    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    
    printf("CHAR_LIT_VAR_STR: %d %d %d\n", 
           (int)sizeof('A'), (int)sizeof(ch), (int)sizeof("A"));

    return 0;
}