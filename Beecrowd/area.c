
#include <stdio.h>
int main()
{
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    float triangle, circle, trapezium, square, rectangle;
    triangle = (A * C) / 2;
    circle = 3.14159 * C * C;
    trapezium = 0.5 * (A + B) * C;
    square = B * B;
    rectangle = A * B;

    printf("TRIANGULO : %.3f\n", triangle);
    printf("CIRCULO : %.3f\n", circle);
    printf("TRAPEZIO : %.3f\n", trapezium);
    printf("QUADRADO : %.3f\n", square);
    printf("RETANGULO : %.3f\n", rectangle);

    return 0;
}
