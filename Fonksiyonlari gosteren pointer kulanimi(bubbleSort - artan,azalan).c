/* Fonksiyonlari gosteren gostericiler kullanan bubbleSort program (artan veya azalan) // Yildirim Bayrakci // */
#include <stdio.h>
#define BOYUT 10
/* Prototipler */
void bubble (int [], const int, int (*)(int,int)); /* (Dizi adi, dizi boyutu, artan veya azalan fonksiyon parametre) */ 
int artan (int,int);
int azalan(int,int);

int main()
{
	int secim,sayac;
	int a[BOYUT] ={12,-54,32,88,0,7,-29,6,15,-9}; /* dizi tanimi */
	printf("Artan siralama icin 1, azalan siralama icin 2 giriniz : ");
	scanf("%d",&secim);							  /* artan veya azalan secimi */
	printf("\nVeriler orijinal sirasinda :\n");
	for(sayac=0;sayac<BOYUT;sayac++)			  /* orijinal diziyi yazdir */
	printf("%d  ",a[sayac]);
	if(secim==1)
	{
		bubble(a,BOYUT,artan);					  /* secim 1 ise artan */
		printf("\nVeriler artan sirada : \n");
	}
	else 
	{
		bubble(a,BOYUT,azalan);					 /* secim 2 ise azalan */
		printf("\nVeriler azalan sirada : \n");
	}
	for(sayac=0;sayac<BOYUT;sayac++)			 /* siralanmis diziyi yazdir */
	printf("%d  ",a[sayac]);
	printf("\n");
	return 0;
}

void bubble(int dizi[],const int boyut,int(*compare)(int,int))	
{
	void swap(int*,int*); /*Prototip*/
	int tur,sayac;
	
	for(tur=1;tur<boyut;tur++)			/* Standart bubbleSort nested for dongusu */
		for(sayac=0;sayac<boyut-1;sayac++)
			if((*compare)(dizi[sayac],dizi[sayac+1]))	/*elemanlari karsilastir. artan sira icin 1. eleman 2. elemandan buyukse 1 degeri dondur */
			swap(&dizi[sayac],&dizi[sayac+1]);			/* ve if icindeki swap ile yer degistirsinler. azalan sira icinse tam tersi.(2>1 ise 1 dondur) */
}

void swap(int *eleman1Ptr,int *eleman2Ptr)	/*call by reference*/
{
	int gecici;					/* eleman1 ile eleman2 nin yerini degistir */
	gecici= *eleman1Ptr;
	*eleman1Ptr=*eleman2Ptr;
	*eleman2Ptr=gecici;
}

int artan(int a,int b)
{
	return a>b;	/* a, b den buyuk ise yer degistirilecek(if(1)), degilse dokunulmayacak(if(0)) */
}

int azalan(int a,int b)
{
	return a<b; /* b, a den buyuk ise yer degistirilecek(if(1)), degilse dokunulmayacak(if(0)) */
}











