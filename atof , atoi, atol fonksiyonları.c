// stdlib.h = double atof() , int atoi(), long atol() fonksiyonu.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	/* atof fonksiyonu, argumanini ( ondalikli bir sayiyi temsil eden bir stringi) double degere donusturur. Fonksiyon, double degeri dondurur. 
	Eger donusturulen deger temsil edilemezse (ornegin, stringin ilk karakteri rakam degilse), atof fonksiyonunun davranisi belirsizdir.*/
	double d;
	d = atof("99.0");
	printf("%s%.3f\n%s%.3f\n",
	"\"99\" stringi double tipine donusturuldu => ",d,
	"Donusturulen sayinin 2 ye bolumu ",d/2.0);
	
	
	/* atoi fonksiyonu, argumanini ( bir tamsayiyi temsil eden rakamlar stringi) int degere donusturur. Fonksiyon, int degeri dondurur. 
	Eger donusturulen deger temsil edilemezse (ornegin, stringin ilk karakteri rakam degilse), atof fonksiyonunun davranisi belirsizdir.*/
	int i;
	i = atoi("2593");
	printf( "\n\n\n\n%s%d\n%s%d\n",
	"\"2593\" stringi int tipine donusturuldu => ", i,
	"Donusturulen sayi eksi 593 = ", i - 593 );
	
	
	/* atol fonksiyonu , argumanini (long tamsayi temsil eden rakamlar stringini) long degere donusturur. Fonksiyon, long degeri dondurur.
	Eger donusturulen deger temsil edilemezse, atol fonksiyonunun davranisi belirsizdir. Eger int ve long'un ikisi de 4 byte icinde depolanmissa,
	atoi fonksiyonu ve atol fonksiyonu es olarak calisacaktir.*/
	long l;
	l = atol("1000000");
	printf( "\n\n\n\n%s%ld\n%s%ld\n",
	"\"1000000\" stringi long int tipine cevrildi => ", l, 
	"Cevrilen degerin 2' ye bolumu: ", l / 2 );
	
	return 0;
}
