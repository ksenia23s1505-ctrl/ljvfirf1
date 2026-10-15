#include <stdio.h>

int main(void) {
    long double ld_val;
    double d_val;
    float f_val;

    scanf("%lf", &d_val);

    ld_val = (long double)d_val;
    f_val = (float)d_val;

    printf("FLOAT: %.6f\n", f_val);
    printf("DOUBLE: %.6f\n", d_val);
    printf("LDOUBLE: %.6Lf\n", (double)ld_val);
    printf("FLOAT+1: %.6f\n", f_val + 1.0f);
    printf("DOUBLE+1: %.6f\n", d_val + 1.0);
    printf("LDOUBLE+1: %.6Lf\n", (double)(ld_val + 1.0L));

    return 0;
}