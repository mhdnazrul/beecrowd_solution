//Problem is "Age in Days"
#include<stdio.h>
int main()
{
    int dia, mes, ano;
    scanf("%d", &dia);
    ano = dia / 365;
    dia = dia - ano * 365;
    mes = dia / 30;
    dia = dia - mes * 30;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
}