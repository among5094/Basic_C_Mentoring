#include <stdio.h>
#include <math.h>

int main() {
    double result = 1.0 - 0.9;
    printf("%d\n", fabs(1.0-0.9) < 0.000001 ? 1 : 0);
    return 0;
}
