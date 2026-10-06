#include <stdio.h>

int main() {
    int i1, i2;
    float f1, f2;

    // Read two integers from standard input
    scanf("%d %d", &i1, &i2);
    
    // Read two float numbers from standard input
    scanf("%f %f", &f1, &f2);

    // Print the sum and difference of the two integers
    printf("%d %d\n", i1 + i2, i1 - i2);

    // Print the sum and difference of the two floats rounded to one decimal place
    printf("%.1f %.1f\n", f1 + f2, f1 - f2);

    return 0;
}
