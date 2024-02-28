
#include <stdio.h>
int main(){
    float A, B, C;
    scanf("%f\n", &A);
    scanf("%f\n", &B);
    scanf("%f", &C);

    
    float avg = ((A * 2) + (B * 3) +  (C * 5)) / (2 + 3 + 5);

    printf("MEDIA = %.1f\n", avg);
    

    return 0;
}