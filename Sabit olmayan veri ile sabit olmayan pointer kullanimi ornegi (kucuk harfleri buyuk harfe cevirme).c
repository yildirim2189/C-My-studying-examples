/* Sabit olmayan bir veri ile sabit olmayan bir gosterici kullanimi ornegi. Bu en yuksek duzeyde veri erisimi saglar. */
/* Bir stringteki kucuk harfleri buyuk harfe ceviren program */
#include <stdio.h>
#include <ctype.h> // Karakter uzerine islem yapan kutuphane
void buyukHarfeCevir(char*);
// Yildirim Bayrakci
int main()
{
	char string[] = "karakterler ve 32.98$";
	
	printf("Cevrilmeden onceki string : \n%s\n",string);
	buyukHarfeCevir(string);		// dizi isimleri adres gosterdigi icin & kullanilmamistir.
	printf("Cevrildikten sonraki string : \n%s\n",string);
	return 0;
}

void buyukHarfeCevir(char *sPtr)	//string pointer
{
	while(*sPtr!='\0')				// string diziler \0 karakteri ile sonlanir. \0 ile karsilasildiginda donguden cikar.
	{
		if(islower(*sPtr))			// ctype.h // islower() fonksiyonu karakter kucukse 1, degilse 0 dondurur.
		*sPtr = toupper(*sPtr);		// ctype.h // toupper() fonksiyonu karakterleri buyuk karaktere cevirir.

		++sPtr;			// *sPtr degil sPtr kullanildi!!!. ++ ile bir sonraki adrese gecer yani bir sonraki karaktere...
	}
}
