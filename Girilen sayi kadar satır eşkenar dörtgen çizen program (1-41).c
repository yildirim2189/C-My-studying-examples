#include <stdio.h>
int main()			
{								// Girilen satir sayisina gore eskenar dortgen cizen program. Yildirim Bayrakci.
	int x;
	printf("Bu program 1-41 araliginda girilen tek  sayi kadar satir olacak sekilde eskenar dortgen cizer.\n");
	while(1)
	{
	printf("1-41 araliginda tek bir tamsayi giriniz:\n");
	
	scanf("%d",&x);
	if( x%2!=0 && x>=1 && x<=41 )
	break;
	printf("Girdiginiz tamsayi 1-41 araliginda veya tek degildir. Tekrar deneyiniz.\n");
	}
	
	int a=0,z=0;
	int k, i, b;
	int o;
	o=(x+1)/2+1; /*orta satirdan bir sonraki satiri hesaplar */
	
	for(k=1;k<=x;k++)		/*1 den girilen sayiya kadar satirlari yazdiran en dis dongu */
	{	
		
		if (k<o)       /* orta satir bitmediyse bosluk ve yildiz dongulerinin kontrol degiskenlerini artir */
		{
			a++;		 
			z+=2;		
		}
		else		/* orta satir bitirildiyse bosluk ve yildiz dongulerinin kontrol degiskenlerini azalt .*/
		{
			a--;		
			z-=2;		// end of if-else.
		}
		
		for(i=30;i>a;i--)			/*bosluk dongusu. 30 sayisi degistirilebilir soldan bosluk birakilmasi icin 30 yazilmistir. */
		{							/*orta satira ulasildiginda bile en az 1 bosluk birakmasi icin a ile arasinda belli bir fark olmasi gerekir */
			printf(" ");
		}
		

		for(b=1;b<z;b++)			//yildiz dongusu. 1 den z ye kadar yildiz yazdir.
		{
			printf("*");
		}
		
		
		printf("\n");		// her satir bitimi yeni satira gec.

	}	//end of loop "for".

	return 0;
}	// end of main.

