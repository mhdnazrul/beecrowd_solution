//Problem is "Banknotes"
#include <stdio.h>
int main(){
    int notes, Banknotes;
    scanf("%d", &notes);

    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes/100);
    Banknotes = (notes%100);

    printf("%d nota(s) de R$ 50,00\n", Banknotes/50);
    Banknotes = (Banknotes%50);

    printf("%d nota(s) de R$ 20,00\n", Banknotes/20);                                                                                                                        
    Banknotes = (Banknotes%20);

    printf("%d nota(s) de R$ 10,00\n", Banknotes/10);
    Banknotes = (Banknotes%10);

    printf("%d nota(s) de R$ 5,00\n", Banknotes/5);
    Banknotes = (Banknotes%5);

    printf("%d nota(s) de R$ 2,00\n", Banknotes/2);
    Banknotes = (Banknotes%2);
    
    printf("%d nota(s) de R$ 1,00\n", Banknotes/1);
    return 0;
 }