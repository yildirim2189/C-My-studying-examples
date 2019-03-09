/* strcspn fonksiyonu, ilk argumani olan stringin icinde, ikinci argumani olan stringin icindeki karakterlerden olusmayan ilk kismi bulur
ve bu kismin uzunlugunu dondurur. */

#include <stdio.h>
#include <string.h>
int main()
{
	const char *string1 = "Deger 3.14159";
	const char *string2 = "1234567890";
	
	printf("%s%s\n%s%s\n\n%s\n%s%u",
	"string1 = ",string1,"string2 = ",string2,
	"string1'den string2'nin karakterleri",
	"cikarildiginda string1'in uzunlugu = ",
	strcspn(string1,string2));
		
	return 0;
}
