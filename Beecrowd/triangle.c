#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b ,&c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        float perameter = a + b + c;
        printf("Perimetro = %.1f\n", perameter);
    }
    else{
        float area = (((a + b) / 2) * c);
        printf("Area = %.1f\n", area);
    }
    

    return 0;
}