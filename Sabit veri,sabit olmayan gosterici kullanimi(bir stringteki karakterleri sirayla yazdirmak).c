/* Sabit bir veri, sabit olmayan bir gosterici kullanimi ornegi. */
/* Bir stringteki karakterleri sirayla yazdirmak */
#include <stdio.h>

void karakterleriYazdir(const char*);

int main()
{
	char string[] = "String karakterlerini yazdiriyoruz.";
	
	printf("String : \n");
	karakterleriYazdir(string);		// dizi isimleri adres gosterdigi icin & kullanilmamistir.
	printf("\n");
	
	return 0;
}

void karakterleriYazdir(const char *sPtr)	//string pointer: Bir karakter sabitini gosteren gostericidir.
{											//Karakterler sPtr kullanilarak degistirilemezler (Read-Only)
	for(  ; *sPtr!='\0'; sPtr++) 	// ilk deger atamasi yok. /0 ile karsilasinca cik. sPtr yani adres uzerinde ilerle.
	printf("%c",*sPtr);
}

/*Yap�lar gibi b�y�k verileri, sabit bir veriyi g�steren g�stericilerle ge�irerek,
 referansa g�re �a��rman�n performans�n� ve de�ere g�re �a��rman�n g�venli�ini kullan�n. */
