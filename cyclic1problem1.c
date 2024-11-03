#include <stdio.h> 

int main() {
    char isim[30]; 
    printf("Lutfen Isminizi Giriniz: ");
    scanf("%s", isim);

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Isim: %s \n", isim); 
    }

    return (0);
}