/* strerror fonksiyonu, bir hata sayisi alir ve bir hata mesaji stringi yazdirir. Stringi gosteren bir gosterici dondurulur.
Program, strerror fonksiyonunu kullanmaktadir.
strerror tarafindan olusturulan hata mesaji sisteme baglidir. */

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n",strerror(3));
	
	
	return 0;
}
