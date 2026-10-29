#include <stdio.h>
#include <math.h> 
int main(void) {
    double A = 1.0;
    double B = 5.0;
    double H = 0.5;
    int iteration = 1;
    printf("| No итер.|     X     |     Y      |\n");

    for (double x = A; x <= (B + 0.000001); x += H) {
        
        double y = log(x);
        printf("|    %2d      |  %9.4f |  %9.4f |\n", iteration, x, y);
        iteration++;
    }

    printf("\n");

    return 0;
}