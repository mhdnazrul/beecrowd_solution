//Problem is "Fuel Spent"
#include<stdio.h>
int main()
{
    int A, B;
    double dist, ave;
    scanf("%d %d", &A, &B);
    dist = A * B;
    ave = dist / 12;
    printf("%.3lf\n", ave);
    return 0;
}
