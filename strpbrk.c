/* strbrk fonksiyonu, ikinci argumanindaki stringte yer alan herhangi bir karakterin, ilk argumanindaki stringte ilk konumunu arar.
Eger ikinci argumandaki karakter bulunursa, strbrk ilk argumandaki karakteri gosteren bir gosterici dondurur.Aksi takdirde,
strbrk fonksiyonu NULL dondurur. Program, string2 icindeki herhangi bir karakterin string1 icindeki ilk konumunu belirlemektedir. */

#include <stdio.h>
#include <string.h>
int main()
{
	const char *string1 = "Bu bir testtir";
	const char *string2 = "dikkat";
	
	printf( "\"%s\", %s, '%c' %s\n\"%s\" %s",
	string2 , "stringindeki karakterlerden",
	*strpbrk( string1, string2 ),
	" karakteri", string1, "de gorunen ilk karakterdir." );
	
	
	return 0;
}
