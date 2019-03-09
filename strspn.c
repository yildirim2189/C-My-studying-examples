/* strspn fonksiyonu, ilk argumanindaki stringin icinde yalnizca ikinci argumani olan stringin icindeki karakterlerden
 olusan ilk kismi bulur ve bu kismin uzunlugunu dondurur.	*/
#include <stdio.h>
#include <string.h>

int main()
{
	const char *string1 = "pi sayisi 3.14159 is paiy";
	const char *string2 = "is paiy";
	
	printf( "%s%s\n%s%s\n\n%s\n%s%u\n",
	"string1 = ", string1, "string2 = ", string2,
	"icerdigi string2 karakterleri bakimindan ",
	"string1'in uzunlugu = ",
	strspn( string1, string2 ) );
	return 0;
}
