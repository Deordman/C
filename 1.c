// Düz Kodlama İle Yarı Çap Bulma

#include <stdio.h>

main()
{
	float alan, cevre, yaricap;
	int pi_say=3.14;
	
	printf("Yaricapi Giriniz : ");
	scanf("%f", &yaricap);
	
	alan=pi_say*yaricap;
	cevre=2*pi_say*yaricap;
	
	printf("Alanimiz : %f", alan);
	printf("\nCevremiz : %f", cevre);
}