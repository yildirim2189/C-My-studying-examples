// Binary (ikili) arama programi
#include <stdio.h>
#define BOYUT 15
int ikiliAra(const int[],int,int,int);
void baslikYazdir(void);
void satirYazdir(const int[],int,int,int);

int main()
{
	int a[BOYUT],i,anahtar,sonuc;
	
	for(i=0;i<BOYUT;i++) // dizi degerleri atandi. 0 dan 28 e 2'ser artan dizi.
	a[i]=2*i;
	
	printf("0 ile 28 arasinda bir tamsayi giriniz: ");
	scanf("%d",&anahtar); //anahtar = aranacak sayi girisi istendi.
	
	baslikYazdir(); //baslik yazdirildi.
	sonuc= ikiliAra(a,anahtar,0,BOYUT-1);
	
	if(sonuc!= -1)
	printf("\nAranan eleman \"%d\", dizi elemani \"%d\" icinde bulundu.\n",anahtar,sonuc);
	else
	printf("\nAranan eleman \"%d\", dizi icinde bulunamadi.",anahtar);
	
	return 0;
}
int ikiliAra(const int b[],int aramaDegeri,int enAlt,int enUst)
{
	int orta;
	
	while(enAlt<=enUst)
	{
		orta = (enAlt+enUst)/2; //Dizinin ortasi bulunuyor.
		satirYazdir(b,enAlt,orta,enUst);
		
		if(aramaDegeri==b[orta]) //orta deger aranan degerse sonucu dondur.
		return orta;
		else if(aramaDegeri<b[orta]) // aranan, orta degerden kucukse
		enUst = orta-1;              // sinir daraltilir. orta-1 ust sinir olur.
		else				// aranan, orta degerden buyukse
		enAlt = orta+1; 	// sinir daraltilir. orta+1 alt sinir olur.
	} // end of while. aramayi yapan kisim burasiydi.
	//fonksiyondan while icindeki return ile cikilmamissa,
	//deger bulunamamistir ve bu kisima ulasilir.
	return -1; //deger bulunamadi -1 durumu	
}	// fonksiyon sonu.

void baslikYazdir(void)
{
	int i;
	printf("\n  Belirtecler:\n\n");
	for (i=0;i<BOYUT;i++)
	printf("%3d ",i); //indisler yazdiriliyor. baslik amaciyla.
	printf("\n");
	for(i=1;i<=5*BOYUT;i++)
	printf("-"); //basligi ayirmak icin - cekiliyor.
	printf("\n");
}

// Dizinin islem yapilan kismini gosteren satiri yazdiran fonskiyon
void satirYazdir(const int b[],int enAlt,int orta,int enUst)
{
	int i;
	for (i=0;i<BOYUT;i++)
	if(i<enAlt||i>enUst) // sinirlar icinde degilse bosluk yazdir.
	printf("  ");	
	else if(i==orta)
	printf("%3d*",b[i]); // ortanca sayilara * koy.
	else
	printf("%3d ",b[i]); //ortanca olmayan sinirlar icindeki sayilari yazdir.
	printf("\n");
}








