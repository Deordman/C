// Girilen Bir Sayının Tam Bölünenlerini Bulan Kodlama

#include<stdio.h>

int main()

{
    int sayi1,bol,bolum;
    
    printf("Herhangi Bir Sayi Giriniz : ");
    scanf("%d",&sayi1);
    	
    for(bol = 1; bol<=sayi1;bol++)
    {
    	bolum=sayi1 % bol;
    
    	
        if(bolum==0)
        {
    		printf("%d Tam Bolunur \n",bol);
    	}
    	
        }
    	
        
}