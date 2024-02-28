#include <stdio.h>
int main()
{
    float salary;
    scanf("%f", &salary);

    if(salary > 0 && salary <= 2000){
        printf("Isento");
    }
    else if (salary > 2000 && salary <= 3000)
    {
        salary = (salary - 2000) * 8/100;
        printf("%.2f", salary);
    }

    else if (salary > 3000 && salary <= 4500)
    {
        salary = 1000 * 18/100;
        printf("%.2f", salary);
    }
    

    return 0;
}