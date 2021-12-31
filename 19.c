/* Girilen 3 basamaklı bir sayının rakamlarının yazıyla karşılığını bulan program FONKSİYONLU */
/*#include <stdio.h>

char* Birler (int a)
{
	if(a==0)
		return " ";
	
	else if (a==1)
		return "Bir";
	
	else if (a==2)
		return "Iki";
	
	else if (a==3)
		return "Uc";
	
	else if (a==4)
		return "Dort";
	
	else if (a==5)
		return "Bes";
	
	else if (a==6)
		return "Alti";
	
	else if (a==7)
		return "Yedi";
	
	else if (a==8)
		return "Sekiz";
	
	else if (a==9)
		return "Dokuz";	
}

char* Onlar (int a)
{
	if(a==0)
		return " ";
	
	else if (a==1)
		return "On";
	
	else if (a==2)
		return "Yirmi";
	
	else if (a==3)
		return "Otuz";
	
	else if (a==4)
		return "Kirk";
	
	else if (a==5)
		return "Elli";
	
	else if (a==6)
		return "Altmis";
	
	else if (a==7)
		return "Yetmis";
	
	else if (a==8)
		return "Seksen";
	
	else if (a==9)
		return "Doksan";	
}

char* Yuzler (int a)
{
	if(a==0)
		return " ";
	
	else if (a==1)
		return "Yuz";
	
	else if (a==2)
		return "Iki Yuz";
	
	else if (a==3)
		return "Uc Yuz";
	
	else if (a==4)
		return "Dort Yuz";
	
	else if (a==5)
		return "Bes Yuz";
	
	else if (a==6)
		return "Alti Yuz";
	
	else if (a==7)
		return "Yedi Yuz";
	
	else if (a==8)
		return "Sekiz Yuz";
	
	else if (a==9)
		return "Dokuz Yuz";	
}

void main()
{
	int sayi;
	
	printf("Deger Giriniz : ");
	scanf("%d", &sayi);
	
	int Y=sayi/100;
	
	int O=(sayi%100) /10;
	
	int B=(sayi%100) %10;
	
	printf("%s", Yuzler (Y));
	printf("%s", Onlar (O));
	printf("%s", Birler (B));
} */























#include <stdio.h>


char* Birler (int a)
{
    if (a==0)
        return " ";

    else if (a==1)
        return "Bir";

    else if (a==2)
        return "Iki";
    
    else if (a==3)
        return "Uc";
    
    else if (a==4)
        return "Dort";
    
    else if (a==5)
        return "Bes";
    
    else if (a==6)
        return "Alti";
    
    else if (a==7)
        return "Yedi";
    
    else if (a==8)
        return "Sekiz";
    
    else if (a==9)
        return "Dokuz";
}

char* Onlar (int a)
{
    if (a==0)
        return " ";

    else if (a==1)
        return "On";

    else if (a==2)
        return "Yirmi";
    
    else if (a==3)
        return "Otuz";
    
    else if (a==4)
        return "Kirk";
    
    else if (a==5)
        return "Elli";
    
    else if (a==6)
        return "Altmis";
    
    else if (a==7)
        return "Yetmis";
    
    else if (a==8)
        return "Seksen";
    
    else if (a==9)
        return "Doksan";
}

char* Yuzler (int a)
{
	if(a==0)
		return " ";
	
	else if (a==1)
		return "Yuz";
	
	else if (a==2)
		return "Iki Yuz";
	
	else if (a==3)
		return "Uc Yuz";
	
	else if (a==4)
		return "Dort Yuz";
	
	else if (a==5)
		return "Bes Yuz";
	
	else if (a==6)
		return "Alti Yuz";
	
	else if (a==7)
		return "Yedi Yuz";
	
	else if (a==8)
		return "Sekiz Yuz";
	
	else if (a==9)
		return "Dokuz Yuz";	
}

char* Binler (int a)
{
    if (a==0)
        return " ";

    else if (a==1)
        return "Bin";

    else if (a==2)
        return "Iki Bin";
    
    else if (a==3)
        return "Uc Bin";
    
    else if (a==4)
        return "Dort Bin";
    
    else if (a==5)
        return "Bes Bin";
    
    else if (a==6)
        return "Alti Bin";
    
    else if (a==7)
        return "Yedi Bin";
    
    else if (a==8)
        return "Sekiz Bin";
    
    else if (a==9)
        return "Dokuz Bin";
}

char* OnBinler (int a)
{
    if (a==0)
        return " ";

    else if (a==1)
        return "On";

    else if (a==2)
        return "Yirmi";
    
    else if (a==3)
        return "Otuz";
    
    else if (a==4)
        return "Kırk";
    
    else if (a==5)
        return "Elli";
    
    else if (a==6)
        return "Altmis";
    
    else if (a==7)
        return "Yetmis";
    
    else if (a==8)
        return "Seksen";
    
    else if (a==9)
        return "Doksan";
}

char* YuzBinler (int a)
{
    if (a==0)
        return " ";

    else if (a==1)
        return "Yuz ";

    else if (a==2)
        return "Iki Yuz";
    
    else if (a==3)
        return "Uc Yuz";
    
    else if (a==4)
        return "Dort Yuz";
    
    else if (a==5)
        return "Bes Yuz";
    
    else if (a==6)
        return "Alti Yuz";
    
    else if (a==7)
        return "Yedi Yuz";
    
    else if (a==8)
        return "Sekiz Yuz";
    
    else if (a==9)
        return "Dokuz Yuz";
}


void main()
{
	int sayi;
	
	printf("Deger Giriniz : ");
	scanf("%d", &sayi);
	
	

    int YUZBIN=sayi/100000;

    int ONBIN=(sayi%100000) /10000;

    int BIN=( (sayi%100000) %10000) /1000;

    int Y=(( (sayi%100000) %10000) %1000) /100;

    int O=((((sayi%100000) %10000) %1000) %100) /10;

    int B=(((((sayi%100000) %10000) %1000) %100) %10) /1;
	


    printf("%s ", YuzBinler (YUZBIN));
    printf("%s ", OnBinler (ONBIN));
    printf("%s ", Binler (BIN));
    printf("%s ", Yuzler (Y));
    printf("%s ", Onlar (O));
    printf("%s ", Birler (B));
}






