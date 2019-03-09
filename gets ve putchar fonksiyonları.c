// gets ve putchar kullanma 
/* Bu program, gets ve putchar fonksiyonlarini kullanarak standart giris biriminden bir metnin bir satirini okuyup daha sonra metindeki
karakterleri yineleme kullanarak ters bir sirada yazdirmaktadir. gets standart giris biriminden yeni satir ya da dosya sonu belirteciyle
karsilasana kadar aldigi karakterleri argumanina (char tipinde bir dizi) okur. Okuma sona erdiginde dizinin sonuna \0 karakteri eklenir.
putchar fonksiyonu argumani olan karakteri yazdirir. */
#include <stdio.h>

int main()
{
	char cumle[80];
	void reverse(const char * const);
	
	printf("Metnin girisini yapiniz :\n");
	gets(cumle);
	printf("\nGirdiginiz metnin tersten yazildiginda :\n");
	reverse(cumle);
	
	return 0;
}
void reverse(const char * const sPtr)
{
	if(sPtr[0]=='\0')
	return;
	else
	{
		reverse(&sPtr[1]);
		putchar(sPtr[0]);
	}
}


