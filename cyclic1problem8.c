#include <stdio.h>

int main(){

    int sayi1, sayi2, i, x;

    printf("Lutfen Ilk Sayiyi Giriniz: ");
    scanf("%d", &sayi1);

    printf("Lutfen Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);

    for(;;){

        printf("Lutfen Islemi Giriniz: ");
        scanf("%d", &x);

        if (x == 1){
            printf("girilen sayilarin toplami: %d\n", (sayi1 + sayi2));
        }

        else if (x == 2){
            printf("girilen sayilarin farki: %d\n", (sayi1 - sayi2));
        }

        else if (x == 3){
            printf("girilen sayilarin carpimi: %d\n", (sayi1 * sayi2));
        }

        else if (x == 4){
            printf("girilen sayilarin bolumu: %.2f\n", (float)sayi1 / sayi2);
        }

        else if (x == 0){
            printf("program sonlandiriliyor...");
            return(1);
        }

        else {
            printf("hatali islem!\n");
        }

    return(0);
    }







}