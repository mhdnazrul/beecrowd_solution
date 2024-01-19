//problem is "Average 2"
#include <stdio.h>
int main() {
    double A,B,C,total,Average;
    scanf("%lf %lf %lf", &A, &B, &C);
    total = (A * 2) + (B * 3) + (C * 5);
    Average = total / 10;   //hints (2+3+5 = 10)
    printf("MEDIA = %.1lf\n",Average);
    return 0;
}
