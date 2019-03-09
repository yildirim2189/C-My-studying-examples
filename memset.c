/* memset fonksiyonu, ikinci argumanindaki byte'in degerini ilk argumaniyla gosterilen nesnenin belli sayidaki byte'ina kopyalar. Program,
memset kullanarak string1'in ilk 7 byte'ina 'b'Å kopyalamaktadir. */

#include <stdio.h>
#include <string.h>
int main()
{
	char string1[15] = "BBBBBBBBBBBBBB";
	
	printf( "string1 = %s\n", string1 );
	printf( "memset'ten sonra string1 = %s\n",
	memset( string1, 'b', 7 ) );
	
	return 0;
}
