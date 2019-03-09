// ctype.h = isspace, iscntrl, ispunct, isprint ve isgraph fonksiyonlari
#include <stdio.h>
#include <ctype.h>

int main()
{
	// isspace bosluk karakteri ise dogru bir deger, degilse 0 dondurur.
	// Space karakterleri = yenisatir('\n'), bosluk(' '), form besleme('\f'), satirbasi('\r'), yataytab('\t'), duseytab('\v'). 
	printf( "%s\n%s%s\n%s%s\n%s\n\n",
	"isspace icin :",
	"Yenisatir (\\n)",isspace('\n')?" bosluk karakteridir.":"bosluk karakteri degildir.",
	"Tab karakteri (\\t)",isspace('\t')?" bosluk karakteridir.":"bosluk karakteri degildir.",
	isspace('%')?"% bosluk karakteridir.":"% bosluk karakteri degildir.");
	
	// iscntrl kontol karakteri ise dogru bir deger, degilse 0 dondurur.
	printf( "%s\n%s%s\n%s\n\n", "iscntrl icin :",
	"Yenisatir (\\n)", iscntrl( '\n' ) ? " kontrol karakterdir. " : " kontrol karakteri degildir.",
	iscntrl('$') ? "$ kontrol karakterdir. " : "$ kontrol karakteri degildir. ");
	
	// ispunct bosluk, rakam ya da harften baska bir yazdirma karakteri ise dogru bir deger, degilse 0 dondurur.
	printf( "%s\n%s\n%s\n%s\n\n", "ispunct icin :",
	ispunct( ';' ) ? "; noktalama isaretidir. " : "; noktalama isareti degildir. ",
	ispunct( 'Y' ) ? "Y noktalama isaretidir. " : "Y noktalama isareti degildir. ",
	ispunct( '#' ) ? "# noktalama isaretidir. " : "# noktalama isareti degildir. ");
	
	// isprint bosluk(' ') karakteri de dahil olmak uzere, bir yazdirma karakteri ise dogru bir deger, degilse 0 dondurur.
	printf( "%s\n%s\n%s%s\n\n", "isprint icin :",
	isprint( '$' ) ? "$ yazi karakterdir. " : " $ yazi karakteri degildir. ",
	"Alarm (\\a)", isprint( '\a' ) ? " yazi karakterdir. " : " yazi karakteri degildir." );

	// isgraph bosluk(' ') karakteri haricinde bir yazdirma karakteri ise dogru bir deger, degilse 0 dondurur.
	printf( "%s\n%s\n%s%s\n", "isgraph icin :",
	isgraph( 'Q' ) ? "Q bosluktan farkli bir yazi karakteridir." : "Q bosluktan farkli bir yazi karakteri degildir.",
	"Bosluk", isgraph( ' ' ) ? " bosluktan farkli bir yazi karakteridir. " : " bosluktan farkli bir yazi karakteri degildir." );
	
	return 0;
}
