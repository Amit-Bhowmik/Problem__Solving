#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float term1 = 2 * a;
    float term2 = -b;
    float term3 = b * b - 4 * a * c;
    float term4 =  sqrt(b * b - 4 * a * c);

    if(term1 == 0 || term3 < 0){
        printf("Impossivel calcular\n");
    }
    else{
        float R1 = (term2 + term4) / term1;
        float R2 = (term2 - term4) / term1;
        
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
        
    }

    return 0;
}
