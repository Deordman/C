//Fonksiyon Kullanarak Yarı Çapı Bulan Kod

#include <stdio.h>
#include <math.h>

const pi_say=3.14;

float alan, cevre, yaricap;

float alanbul (float r)

{
	return pi_say*pow(r,2);
}

	float cevrebul (float r)
{
	return pi_say*2*r;
}

int main()
{
	printf("Yaricapi Giriniz : ");
	scanf("%f", &yaricap);
	
	alan=alanbul (yaricap);
	cevre=cevrebul (yaricap);
	
	printf("Alanimiz : %f", alan);
	printf("\nCevremiz : %f", cevre);
}