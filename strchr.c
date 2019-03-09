/* strchr fonksiyonu, bir karakterin bir string icindeki ilk konumunu arar. Eger karakter bulunursa, strchr string icindeki karakteri gosteren 
bir gosterici dondurur. Aksi takdirde strchr NULL dondurur. Program, strchr kullanarak "Bu bir testtir" stringi icinde 'u' ve 'z'
karakterlerini aramaktadir. */

#include <stdio.h>
#include <string.h>
int main()
{
	const char *string = "Bu bir testtir";
	char character1 = 'u';
	char character2 = 'z';
	
	if(strchr(string,character1)!=NULL)
	printf( "\'%c\' bu stringte bulundu: \"%s\".\n",
	character1, string );
	else
	printf( "\'%c\' bu stringte bulunamadı: \"%s\".\n",
	character1, string );
	
	if(strchr(string,character2)!=NULL)
	printf( "\'%c\' bu stringte bulundu: \"%s\".\n",
	character2, string );
	else
	printf( "\'%c\' bu stringte bulunamadi: \"%s\".\n",
	character2, string );
	
	
	
	return 0;
}
