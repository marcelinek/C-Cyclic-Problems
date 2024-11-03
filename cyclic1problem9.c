#include <stdio.h>  // Standart input-output işlemleri için gerekli kütüphaneyi ekliyoruz

int main(){

    int sayi = 27, x;

    for(;;){

        printf("tahmininizi giriniz: ");
        scanf("%d", &x);

        if (x == sayi)
        {
            printf("tebriler dogru bildiniz!");
            return(1);
        }
        
        else if (x < sayi){

            printf("daha buyuk bir sayi giriniz.\n ");
        }

        else {

            printf("daha kucuk bir sayi giriniz.\n ");
        }
    }

return(0);
}