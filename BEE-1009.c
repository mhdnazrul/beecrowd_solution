//problem is "Salary with Bonus"
#include<stdio.h>
int main()
{
    double A,B,Bonus,total;
    char name;
    scanf("%s %lf %lf", &name, &A, &B);
    Bonus = B * 0.15; //hints seller receives 15% 
    total = A + Bonus;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}