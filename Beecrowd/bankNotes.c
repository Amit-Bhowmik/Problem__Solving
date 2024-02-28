#include <stdio.h>

int main() {
    double value;
    scanf("%lf", &value);

    int notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = (int)(value / notes[i]);
        printf("%d nota(s) de R$ %.2f\n", count, notes[i] * 1.0);
        value -= count * notes[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = (int)(value / coins[i]);
        printf("%d moeda(s) de R$ %.2f\n", count, coins[i]);
        value -= count * coins[i];
    }

    return 0;
}
