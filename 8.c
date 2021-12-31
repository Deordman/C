// Girilen Sayının Karesini Alma

#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayi1, sayi2, sayi3, sonuc, sonucKare;

    printf("1)Sayi Giriniz: ");
    scanf("%d", &sayi1);
  
    printf("2)Sayi Giriniz: ");
    scanf("%d", &sayi2);
  
    printf("3)Sayi Giriniz: ");
    scanf("%d", &sayi3);

    sonuc = sayi1 + sayi2 + sayi3;
    sonucKare = sonuc * sonuc;

    printf("%d + %d + %d= %d\n", sayi1, sayi2, sayi3, sonuc);
    printf("%d^2= %d", sonuc, sonucKare);


    getch(); 
    return 0; 

}
 