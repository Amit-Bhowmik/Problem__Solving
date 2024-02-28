#include <stdio.h>
int main()
{
    int productCode, quantity;
    scanf("%d %d", &productCode, &quantity);

    float price1 = 4.00;
    float price2 = 4.50;
    float price3 = 5.00;
    float price4 = 2.00;
    float price5 = 1.50;

    float totalValue;

    switch(productCode){
    case 1:
        totalValue = quantity * price1;
        printf("Total: R$ %.2f\n", totalValue);
        break;
    case 2:
        totalValue = quantity * price2;
        printf("Total: R$ %.2f\n", totalValue);
        break;
    case 3:
        totalValue = quantity * price3;
        printf("Total: R$ %.2f\n", totalValue);
        break;
    case 4:
        totalValue = quantity * price4;
        printf("Total: R$ %.2f\n", totalValue);
        break;
    case 5:
        totalValue = quantity * price5;
        printf("Total: R$ %.2f\n", totalValue);
        break;
    }

    return 0;
}
