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

/*Yapýlar gibi büyük verileri, sabit bir veriyi gösteren göstericilerle geçirerek,
 referansa göre çaðýrmanýn performansýný ve deðere göre çaðýrmanýn güvenliðini kullanýn. */
