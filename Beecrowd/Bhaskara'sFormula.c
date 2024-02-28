#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float term1 = 2 * a;
    float term2 = -b;

    float term3 =  sqrt(b * b - 4 * a * c);

    double R1 = (term2 + term3) / term1;
    double R2 = (term2 - term3) / term1;

    printf("R1 = %.5lf\n", R1);
    printf("R2 = %.5lf\n", R2);

    return 0;
}
