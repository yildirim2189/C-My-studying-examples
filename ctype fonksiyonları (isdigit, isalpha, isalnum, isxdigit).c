//ctype.h = isdigit, isalpha, isalnum, ve isxdigit fonksiyonları
#include <stdio.h>
#include <ctype.h>

int main()	
{	// isdigit() = rakamsa dogru bir deger, degilse 0 dondurur.
	printf("%s\n%s\n%s\n\n","isdigit icin : ",
	isdigit('8')?"8 bir rakamdir.":"8 bir rakam degildir.",
	isdigit('#')?"# bir rakamdir.":"# bir rakam degildir.");
	
	// isalpha() = harf ise dogru bir deger, degilse 0 dondurur.
	printf("%s\n%s\n%s\n%s\n%s\n\n","isalpha icin : ",
	isalpha('A')?"A bir harftir.":"A bir harf degildir.",
	isalpha('b')?"b bir harftir.":"b bir harf degildir.",
	isalpha('&')?"& bir harftir.":"& bir harf degildir.",
	isalpha('4')?"4 bir harftir.":"4 bir harf degildir.");
	
	// isalnum() = harf ya da rakam ise dogru bir deger, degilse 0 dondurur.
	printf("%s\n%s\n%s\n%s\n\n","isalnum icin:",
	isalnum('A')?"A bir harf ya da rakamdir.":"A bir harf ya da rakam degildir.",	
	isalnum('8')?"8 bir harf ya da rakamdir.":"8 bir harf ya da rakam degildir.",
	isalnum('#')?"# bir harf ya da rakamdir.":"# bir harf ya da rakam degildir.");
	
	// isxdigit() = 16 lik sistemde bir rakam karakteri ise dogru bir deger, degilse 0 dondurur.
	printf("%s\n%s\n%s\n%s\n%s\n%s\n\n","isxdigit icin : ",
	isxdigit('F')?"F heksadesimal bir rakamdir.":"F heksadesimal bir rakam degildir.",
	isxdigit('J')?"J heksadesimal bir rakamdir.":"J heksadesimal bir rakam degildir.",
	isxdigit('7')?"7 heksadesimal bir rakamdir.":"7 heksadesimal bir rakam degildir.",
	isxdigit('$')?"$ heksadesimal bir rakamdir.":"$ heksadesimal bir rakam degildir.",
	isxdigit('f')?"f heksadesimal bir rakamdir.":"f heksadesimal bir rakam degildir.");
	
	return 0;
}
