/* Yarı Çapı Dışaıdan Girilen Çemberin, Alanını ve Çevresini Ön İşlemci Komutlarıyla Bulan C Dili Programı */

#include <stdio.h>
#include <conio.h>
#define pi_say 3.14
#define dairealan(r) pi_say*r*r

float alan, cevre, yaricap;

main()
{
	printf("Yaricapi Giriniz : ");
	scanf("%f", &yaricap);
	
	alan=dairealan(yaricap);
	
	printf("Dairenin Alani : %f", alan);
	
	printf(" \nDairenin Cevresi : %f", pi_say*yaricap*yaricap);

	
}
