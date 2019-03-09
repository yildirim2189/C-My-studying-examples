/* Bir liste olusturmak ve yonetmek *** Bagli liste *** */
#include <stdio.h>
#include <stdlib.h>

struct listDugum{  /* kendine donuslu yapi */
	char veri; /* her listDugum bir karakter icerir */
	struct listDugum *nextPtr; /* sonraki dugume pointer */
};

typedef struct listDugum ListDugum;
typedef ListDugum * ListDugumPtr;

/* Prototipler */
void ekle(ListDugumPtr *,char);
char sil(ListDugumPtr *,char);
int bosMu(ListDugumPtr sPtr);
void listYazdir(ListDugumPtr currentPtr);
void menu(void);

int main(void)
{
	char *a = __TIME__;
	printf("Saat = %s\n",a);
	a = __DATE__;
	printf("Tarih = %s\n",a);
	ListDugumPtr startPtr = NULL; /* Baslangicta dugum yok. */
	int secim;		/* Kullanici secimi */
	char item;		/* Kullanicinin girdigi karakter */
	
	menu();			/* Menuyu goster */
	printf("? ");
	scanf("%d",&secim);
	
	while(secim!=3)	/* Kullanici 3 secmedigi surece dongu */
	{
		switch(secim)
		{
			case 1:
				printf("Bir karakter giriniz : ");
				scanf("\n%c",&item);
				ekle(&startPtr,item);		/* listeye bir eleman ekle */
				listYazdir(startPtr);
				break;
			case 2:	/* listeden bir eleman sil */
				if(!bosMu(startPtr))	/* eger liste bos degilse */
				{
					printf("Silinecek karakteri giriniz: ");
					scanf("\n%c",&item);
					
					if(sil(&startPtr,item))	/* karakter bulunduysa sil */
					{
						printf("%c silindi.\n",item);
						listYazdir(startPtr);
					}
					else
					{
						printf("%c bulunamadi.\n",item);
					}
				}
				else
					printf("Liste bos.\n\n");
				break;
			default:
				printf("Gecersiz secim.\n\n");
				menu();
				break;
		}
		printf("? ");
		scanf("%d",&secim);
	}
	
	printf("Program sonlandi.\n");
	return 0;
}

void menu(void)		/* menuyu yazdir */
{
	printf("Seciminizi girin:\n"
	"  1 - Listeye eleman ekle \n"
	"  2 - Listeden eleman sil \n"
	"  3 - Cikis\n");
}

void ekle(ListDugumPtr *sPtr,char value)
{
	ListDugumPtr newPtr;			/* Yeni dugume pointer */
	ListDugumPtr previousPtr;	/* Onceki dugume pointer */
	ListDugumPtr currentPtr;	/* Su andaki dugume pointer */
	
	newPtr = malloc(sizeof(ListDugum)); /* dugum yarat */
	if(newPtr != NULL)	/* Eger bos alan varsa */
	{
		newPtr->veri = value; /* dugume bir deger ekle */
		newPtr->nextPtr = NULL;
	
		previousPtr = NULL;
		currentPtr = *sPtr;
		/* Listedeki dogru yeri bulmak icin dongu */
		while(currentPtr != NULL && value > currentPtr->veri)
		{
			previousPtr = currentPtr; 
			currentPtr = currentPtr->nextPtr; /* sonraki dugum */
		}
		/* listenin basina yeni dugum ekle */
		if(previousPtr == NULL)
		{
			newPtr->nextPtr = *sPtr;
			*sPtr = newPtr;
		}
		else /* previousPtr ile currentPtr arasina dugum ekle */
		{
			previousPtr->nextPtr = newPtr;
			newPtr->nextPtr = currentPtr;	
		}
	}
	else
	printf("%c eklenemedi. Yeterli hafiza yok.\n",value);	
}

char sil(ListDugumPtr *sPtr,char value)
{
	ListDugumPtr previousPtr;	/* Onceki dugume pointer */
	ListDugumPtr currentPtr;	/* Su andaki dugume pointer */
	ListDugumPtr tempPtr;			/* Gecici dugum pointer */
	
	/* ilk dugumu sil */
	if(value == (*sPtr)->veri)
	{
		tempPtr = *sPtr;  /* silinecek dugumu tut */
		*sPtr = (*sPtr)->nextPtr; /*dugumu coz */
		free(tempPtr); /* cozulen dugumu serbest birak */
		return value;
	}
	else
	{
		previousPtr = *sPtr;
		currentPtr = (*sPtr)->nextPtr;
		
		/* listedeki dogru yeri bulmak icin dongu */
		while(currentPtr != NULL && currentPtr->veri != value)
		{
			previousPtr = currentPtr;		/* git... */
			currentPtr = currentPtr->nextPtr; /* ...bir sonraki dugume.*/
		}
		 /* currentPtr deki dugumu sil */
		if(currentPtr != NULL)
		{
			tempPtr = currentPtr;
			previousPtr->nextPtr = currentPtr->nextPtr;
			free(tempPtr);
			return value;
		}
	}
	return '\0';
}

/* Liste bossa 1, degilse 0 dondur */
int bosMu(ListDugumPtr sPtr)
{
	return sPtr == NULL;
}

void listYazdir(ListDugumPtr currentPtr)
{
	/*Eger liste bossa */
	if(currentPtr == NULL)
	{
		printf("Liste bos.\n\n");
	}
	else
	{
		printf("Liste : \n");
		/* liste sonu degil iken while*/
		while(currentPtr!=NULL)
		{
			printf("%c -->",currentPtr->veri);
			currentPtr = currentPtr->nextPtr;
		}
		printf("NULL\n\n");
	}
}




