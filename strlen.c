/* strlen fonksiyonu, arguman olarak bir string alir ve stringteki karakterlerin sayisini dondurur. (sonlandirici NULL karakter 
uzunluga dahil degildir) Program, strlen fonksiyonunu kullanmaktadir.	*/

#include <stdio.h>
#include <string.h>
int main()
{
	const char *string1 = "abcdefghijklmnopqrstuvwxyz";
	const char *string2 = "Ankara";
	const char *string3 = "Yirmi Dort";
	
	printf("%s\"%s\" = %u\n%s\"%s\" = %u\n%s\"%s\" = %u\n",
	"String1'in uzunlugu ", string1,
	strlen(string1),
	"String2'in uzunlugu ", string2,
	strlen(string2),
	"String3'un uzunlugu ", string3,
	strlen(string3));
	
	return 0;
}
