//Problem is "Simple Calculate"
#include<stdio.h>
int main()
{
    float first_product_code, unit1, price1;
    float second_product_code, unit2, price2;
    float first_product_price, second_product_price, total;

    scanf("%f %f %f", &first_product_code, &unit1, &price1);
    scanf("%f %f %f", &second_product_code, &unit2, &price2);

    first_product_price = price1 * unit1;
    second_product_price = price2 * unit2;
    total = first_product_price + second_product_price;

    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}