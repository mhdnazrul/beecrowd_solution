//problem is "Area of a Circle"
#include<stdio.h>
#include<math.h>
int main()
{
    double R,pi,Area;
    scanf("%lf",&R);
    pi = 3.14159;
    Area = pi*(pow(R,2));
    printf("A=%.4lf\n",Area);
    return 0;
}