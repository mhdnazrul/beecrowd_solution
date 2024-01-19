//Problem is "Area"
#include<stdio.h>
int main()
{
    double A,B,C,tri,cir,tra,qua,ret;
    scanf("%lf %lf %lf", &A, &B, &C);
    tri = 0.5 * A * C;
    cir = 3.14159 * C * C; //hints (pi=3.14159)
    tra = ((A+B) * C) / 2; 
    qua = B * B;
    ret = A * B;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",qua);
    printf("RETANGULO: %.3lf\n",ret);

    return 0;
    
}