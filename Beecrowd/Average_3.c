#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, score;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
   

    float avg = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    printf("Media: %.1f\n", avg);

    if (avg >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &score);
        printf("Nota do exame: %.1f\n", score);
        if ((avg + score) / 2 <= 5)
        {
            printf("Aluno reprovado.\n");
        }
        if ((avg + score) / 2 >= 4.9)
        {
            printf("Aluno aprovado.\n");
            float final = (avg + score) / 2;
            printf("Media final: %.1f\n", final);
        }
        
    }
    
    return 0;
}