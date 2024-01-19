//Problem is "Time Conversion"
#include<stdio.h>
int main()
{
    int N,min,hours;
    scanf("%d", &N);
    hours = N / 3600;
    N = N - hours * 3600;
    min = N / 60;
    N = N - min * 60;
    printf("%d:%d:%d\n", hours, min, N);
    return 0;
}