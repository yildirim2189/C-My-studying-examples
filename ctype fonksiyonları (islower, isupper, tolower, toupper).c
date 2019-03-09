//ctype.h = islower, isupper, tolower, toupper fonksiyonları
#include <stdio.h>
#include <ctype.h>

int main()	
{	
	// islower() = kucuk bir harf ise dogru bir deger, degilse 0 dondurur.
	printf("%s\n%s\n%s\n%s\n%s\n\n","islower icin : ",
	islower('p')?"p kucuk bir harftir.":"p kucuk bir harf degildir.",
	islower('P')?"P kucuk bir harftir.":"P kucuk bir harf degildir.",
	islower('5')?"5 kucuk bir harftir.":"5 kucuk bir harf degildir.",
	islower('!')?"! kucuk bir harftir.":"! kucuk bir harf degildir.");
	
	// isupper() = buyuk bir harf ise dogru bir deger, degilse 0 dondurur.
	printf("%s\n%s\n%s\n%s\n%s\n\n","isupper icin : ",
	isupper('D')?"D buyuk bir harftir.":"D buyuk bir harf degildir.",
	isupper('d')?"d buyuk bir harftir.":"d buyuk bir harf degildir.",
	isupper('8')?"8 buyuk bir harftir.":"8 buyuk bir harf degildir.",
	isupper('$')?"$ buyuk bir harftir.":"$ buyuk bir harf degildir.");
	
	// toupper() = kucuk bir harf ise buyuk harfe cevirir, degilse degistirmez.
	// tolower() = buyuk bir harf ise kucuk harfe cevirir, degilse degistirmez.
	printf("%s%c\n%s%c\n%s%c\n%s%c\n",
	"u'nun buyuk harfi ",toupper('u'),
	"7'nin buyuk harfi ",toupper('7'),
	"$'in buyuk harfi ",toupper('$'),
	"L'nin kucuk harfi ",tolower('L'));
	
	return 0;
}
