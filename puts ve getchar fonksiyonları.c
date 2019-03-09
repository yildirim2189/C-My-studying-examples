/* Program getchar ve puts fonksiyonlarini kullanarak standart giris biriminden alinan karakterleri cumle dizisi icine okuyup,
dizideki karakterleri bir string olarak yazdirmaktadir. getchar fonksiyonu, standart giris biriminden bir karakter alip bu karakterin 
tamsayi degerini dondurur. puts fonksiyonu, arguman olarak bir string (char*) alir ve stringi yazdirip sonra da yeni satira gecer.
Program, kullanici tarafindan satir sonuna konan yeni satir karakteri getchar fonksiyonu tarafindan okununca, karakter okumayi durdurur.
Diziyi bir string olarak kullanabilmek icin, cumle dizisinin sonuna null karakter eklenir. puts fonksiyonu cumle icindeki stringi yazdirir. */

#include <stdio.h>
int main()
{
	char c;
	char cumle [80];
	int i=0;
	
	puts("Metin girisini yapiniz :");
	while((c=getchar())!='\n')	// Klavyeden girilenler, \n girilene kadar c ye atanir. \n girilince donguden cikar. 
	cumle[i++]=c;
	
	
	cumle[i]='\0'; // stringin sonuna null ekle.
	puts("Girilen metin :");
	puts(cumle);
	
	return 0;
}
