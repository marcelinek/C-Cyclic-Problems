#include <stdio.h>

int main(){

    int sayi1, sayi2;

    printf("birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    if (sayi1 > sayi2)
    {
        int gecici;
        gecici = sayi1;
        sayi1 = sayi2;
        sayi2 = gecici;
    }
    
    for (; sayi1 <= sayi2; sayi1++)
    {
        printf("%d ", sayi1);
    }
    

    return(0);
}