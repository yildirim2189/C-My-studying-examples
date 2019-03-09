/* Recursion ile Secmeli Siralama // M. Yildirim Bayrakci // */
#include <stdio.h>
#define SIZE 20	 /*Dizilerin boyutu*/
#define SIRALA 0	
void secmeliSirala(int array[],int,int);

int main()
{
	printf("Recursion ile dizi siralama ornegi. Dizinin en kucuk elemani dizinin en basina yerlestirilir.\n");
	printf("Kalan alt dizi icin ayni islem tekrarlanir..\n\n");
	int dizi1[SIZE]={15,7,40,-5,856,12,65,-23,122,545,1023,-1232,-4,0,-7,29,-29,92,-92,7};	/* 20 elemanli 2 dizi tanimlandi.*/
	int dizi2[SIZE]={2,-19283,0,545,12,-63,-4,-1,8,9,-23,29,31,99,-167,89,25,0,172,2923};
	int j;
	printf("Orijinal dizi 1:\n"); 
	for(j=0;j<SIZE;j++)
	printf("%d  ",dizi1[j]);
	secmeliSirala(dizi1,SIZE,SIRALA);	/* Her dizinin once orjinali, sonra siralanmis hali yazdirildi.								*/
	printf("\nSiralanmis dizi 1:\n");	/* Siralama islemini yapan fonksiyon "secmeliSirala"          						 		*/
	for(j=0;j<SIZE;j++)					/* (dizi adi, dizi boyutu, dizinin hangi elemanindan itibaren siralamaya baslanacagi 0-18)	*/
	printf("%d  ",dizi1[j]);			/* seklinde 3 arguman almaktadir. 															*/
	
	printf("\n\n\n\nOrijinal dizi 2:\n");
	for(j=0;j<SIZE;j++)
	printf("%d  ",dizi2[j]);
	secmeliSirala(dizi2,SIZE,SIRALA);
	printf("\nSiralanmis dizi 2:\n");
	for(j=0;j<SIZE;j++)
	printf("%d  ",dizi2[j]);
	
	
	return 0;
}


void secmeliSirala(int array[],int boyut,int b)
{
	int i,min ; /* i=dizi elemanlari icin sayac,  min = minimum olan dizi elemani icin gecici degisken */
	
	if(b==boyut-1)		/*siralamaya baslanacak olan elemanin yerini ifade eden b boyut-1 e ulasirsa zaten tek sayi kalmistir.*/
	return;				/* bu yuzden fonksiyondan cikilir. */
	else
	for(i=b;i<boyut;i++) // en kucuk elemani bulup yerlestirme. sadece  1 tur ifade eder.
	{
		if(array[i]<array[b])
		{ 
		min = array[i];
		array[i] = array[b];
		array[b]= min;
		}
	}					/* end of for . Bir yerlestirme tamamlandi. */
	b++;				/* siradaki elemana gecmek icin argumani 1 artir */
	secmeliSirala(array,boyut,b);	/* yinelemenin yapýldýðý kýsým. her yinelemede b parametresi 1 fazla olarak cagirilir.*/
}

	
	
	

