/* memchr fonksiyonu, bir byte'in (unsigned char olarak temsil edilir) bir nesnenin belli sayidaki byte'i icindeki ilk konumunu arar. 
Eger byte bulunursa, nesne icindeki byte'i gosteren bir gosterici, byte bulunamazsa NULL gosterici dondurulur. Program, "Bu bir stringtir"
stringi icinde 'r'Åbyte'ini (karakterini) arar. */
#include <stdio.h>
#include <string.h>

int main()
{
	const char *s = "Bu bir stringtir";
	
	printf( "%s\'%c\'%s\"%s\"\n",
	"s' in ", 'r',
	" karakterinden sonra kalani ", memchr( s, 'r', 16 ) );
	
	
	return 0;
}
