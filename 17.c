//  Girilen İki Tam Sayıdan Hangisinin Büyük Olduğunu Bulan Kod

#include <stdio.h>

int main()

{
    int a,b;

    printf("1. Degeri Giriniz : ");
    scanf("%d", &a);

    printf("2. Degeri Giriniz : ");
    scanf("%d", &b);
    
    if (a>b)
        printf("1. Deger Buyuktur");
    
    else if (a<b)
        printf("2. Deger Buyuktur");

    else
        printf("Her Iki Degerde Esittir");
}