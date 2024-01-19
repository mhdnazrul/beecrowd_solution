//Problem is "Salary"
#include<stdio.h>
int main()
{
    int num;
    float X,Y,salary;
    scanf("%d %f %f", &num, &X, &Y);
    salary = X * Y;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",salary);
    
    return 0;
}