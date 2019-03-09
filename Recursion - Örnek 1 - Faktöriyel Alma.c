#include <stdio.h>
// Recursion (Yineleme) Ornegi Program 1 - Faktoriyel Hesabi
long faktoriyel(long); // faktoriyel fonksiyonu prototipi // long = "long int" in kisaltmasidir.
int main() 																		
{	// main start
	int i;
	for (i=1 ; i<=12 ; i++)
	{
		printf("%2d! = %ld\n",i,faktoriyel(i));
	}
	return 0;
}	// main end

long faktoriyel(long sayi)			// yineleme fonksiyonu. kendini cagirarak surekli olarak problemi kucuk parcalara boler.
{									// n! = n*(n-1)! esitliginden faydalanmistir.
	if (sayi<=1)					
	return 1;
	else
	return (sayi*faktoriyel(sayi-1));
}

