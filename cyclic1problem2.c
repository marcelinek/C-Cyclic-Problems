#include <stdio.h>  

int main() {
    char isim[30];  

    printf("Lutfen Isminizi Giriniz: ");
    scanf("%s", isim);

    int adet, i; 

    printf("Lutfen Sayiyi Giriniz: ");
    scanf("%d", &adet);  


    for (i = 0; i < adet; i++) {
        printf("Isim: %s\n", isim);
    }

    return (0);
}