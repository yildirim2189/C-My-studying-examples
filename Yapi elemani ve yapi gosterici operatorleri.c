
#include <stdio.h>


struct kart{
	char *taraf;
	char *takim;
};


int main()
{
	struct kart a;			/* struct kart degiskeni */
	struct kart *aPtr;	/* struct kart pointer'i */
	
	a.taraf = "As";		/* Yapi elemani operatoru(.) kullanilarak a yapisinin elemanlarina as ve maca degerleri atandi. */
	a.takim = "Maca";
	
	aPtr = &a;				/* aPtr, a yapisinin adresine atandi.*/
	
	printf( "%s %s\n%s %s\n%s %s\n",
	a.takim, a.taraf, 					/* Degisken ismi(a) ve yapi operatoru(.) kullanarak erisim */
	aPtr->takim,aPtr->taraf,			/*	Yapi gosterici operatoru(->) ve aPtr gosterici kullanarak erisim */
	(*aPtr).takim,(*aPtr).taraf);		/*	Gosterdigi nesneye erisilmis (aPtr) gostericisi ile yapi operatoru kullanmak. */
	
	return 0;
}
