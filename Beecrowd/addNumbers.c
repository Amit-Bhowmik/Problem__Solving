#include <stdio.h>
int main()
{   
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        int sum = a + b;
        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}