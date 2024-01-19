//Problem is "Sphere"
#include<stdio.h>
#include<math.h>
int main()
{
    double R, pi, total;
    scanf("%lf", &R);
    pi = 3.14159;
    total = 1.3333333333333333* pi * (pow(R,3));
    //hints 4/3 = 1.333333...
    printf("VOLUME = %.3lf\n", total);
    return 0; 
}