/* memcmp fonksiyonu, ilk argumanindaki belli sayida karakteri ikinci argumaniyla karsilastirir. Fonksiyon, ilk arguman ikinci argumandan buyukse 
0Å'dan buyuk bir deger, ilk arguman ikinci argumana esitse 0 ve ilk arguman ikinci argumandan kucukse 0Åedan kucuk bir deger dondurur. */

#include <stdio.h>
#include <string.h>
int main()
{
	
	char s1[] = "ABCDEFG";
	char s2[] = "ABCDXYZ";
	
	printf( "%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
	"s1 = ", s1, "s2 = ", s2,
	"memcmp( s1, s2, 4 ) = ", memcmp( s1, s2, 4 ),
	"memcmp( s1, s2, 7 ) = ", memcmp( s1, s2, 7 ),
	"memcmp( s2, s1, 7 ) = ", memcmp( s2, s1, 7 ) );
	
	return 0;
}
