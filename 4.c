// Dışardan girilen 5 elemanın ortalamasını hesaplayan programı yazınız 

#include <stdio.h>

int main()

{
    int x[5];
    int i;
    float toplam=0, ort=0;

    for (i=0; i<5 ; i++)
    {
        printf("Sayilari Giriniz : ");
        scanf("%d", &x[i]);
    }
    for (i=0; i<5; i++)
    {
        toplam=toplam+x[i];
    }
    ort=toplam/5;
    
    printf("Sonuc : %f", ort);

}

// İstersen çarpmasını da yapabilirsin Örnek Olarak : ort=toplam*5;