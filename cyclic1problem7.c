#include <stdio.h>

int main(){

    int n, i, sayi;
    float ort = 0;

    printf("kac sayi girilecek? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        printf("lutfen %d. sayiyi giriniz: ", i + 1);
        scanf("%d", &sayi);
        ort += sayi;
    }

    ort /= n;

    printf("girilen sayilarin ortalamasi: %.2f", ort);


    return(0);
}