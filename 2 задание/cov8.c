#include <stdio.h>
#include <float.h> 

int main(void) {
    printf("FLOAT: size=%zu, digits=%d, max=%e\n", sizeof(float), FLT_DIG, FLT_MAX);

    printf("DOUBLE: size=%zu, digits=%d, max=%e\n", sizeof(double), DBL_DIG, DBL_MAX);

    printf("LDOUBLE: size=%zu, digits=%d, max=%Le\n", sizeof(long double), LDBL_DIG, LDBL_MAX);

    /* 
     * 1. Количество цифр в показателе степени (после буквы 'e') может отличаться в зависимости от системы (например, +38 или +038).
     * 2. На некоторых платформах и компиляторах тип long double может полностью совпадать по размеру и свойствам с типом double (быть 8 байт вместо 12 или 16).
     */

    return 0;
}