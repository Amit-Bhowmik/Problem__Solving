#include <stdio.h>
int main()
{
    int startHr, startMin, endHr, endMin;
    scanf("%d %d %d %d", &startHr, &startMin, &endHr, &endMin);
    int hr, min;

    if (startHr < endHr && startMin < endMin)
    {
        hr = endHr - startHr;
        min = endMin - startMin;
    }

    else if (startHr < endHr && startMin > endMin)
    {
        hr = endHr - startHr - 1;
        min = 60 - (startMin - endMin);
    }
    
    
    else if (startHr == endHr && startMin == endMin)
    {
        hr = 24;
        min = 0;
    }


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, min);
    return 0;
}