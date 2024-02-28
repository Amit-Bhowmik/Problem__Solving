#include <stdio.h>
int main ()
{
    int sec;
    scanf("%d", &sec);

    int hr, min, timeConversion;
    hr = sec / 3600;
    min = (sec % 3600) / 60;
    timeConversion = sec % 60;

    printf("%d:%d:%d\n", hr, min, timeConversion);
    return 0;
}