/* Dinamik Yigin (Stack) Program */
/* Bir yigin, bagli listelerin kisitlanmis bir cesididir.Yeni dugumler yigina yalnizca en ustten eklenir ve dugumler yiginin yalnizca en ustunden cikartilabilir.
Bu sebepten,yiginlar son giren ilk cikar(LIFO Last in-First out) veri yapilari olarak adlandirilir. Bir yigin, yiginin en ustteki elemanini gosteren bir gosterici
sayesinde kullanilir. Yiginin en sonundaki bag elemani NULL yapilarak, bu elemanin yiginin sonu oldugu belirtilir. Bir yiginla ilgili islemlerde kullanilan temel
fonksiyonlar, push ve pop fonksiyonlaridir.push fonksiyonu, yeni bir dugum yaratir ve yiginin ustune yerlestirir. pop fonksiyonu, yiginin ustundeki dugumu cikartir,
cikartilan bu dugum icin tahsis edilmis olan hafizayi serbest birakir ve cikartilmis degeri dondurur. */

#include <stdio.h>
#include <stdlib.h>

struct stackNode {			/* Self-referential structure - Kendine donuslu yapi */
	int data;
	struct stackNode *nextPtr;									/* Stack = Yigin, Node = Dugum, Ptr = Pointer */
};

typedef struct stackNode StackNode;
typedef StackNode * StackNodePtr;

/* Prototypes */
void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

int main()
{
	StackNodePtr stackPtr = NULL; /* Yiginin en ustunu gosterir*/
	int choice;	/* Kullanici secimi */
	int value;	/* Kullanicinin girdigi deger */
	
	instructions(); /* menuyu goster */
	printf("? ");
	scanf("%d",&choice);
	
	while(choice!=3)	/* Secim = 3(Cikis) degilken;  */
	{
		switch(choice)
		{
			case 1:	/* Yigina deger ekle */
				printf("Bir tamsayi giriniz : ");
				scanf("%d",&value);
				push(&stackPtr,value);
				printStack(stackPtr);
				break;
		
			case 2: /* Yigindan deger cikar */
				/* eger yigin bos degil ise */
				if(!isEmpty(stackPtr))
				{
					printf("Cikarilan deger = %d.\n",pop(&stackPtr));
				}
				printStack(stackPtr);
				break;
		
			default:
				printf("Gecersiz secim!\n\n");
				instructions();
				break;
		} /*switch sonu */
		printf("? ");
		scanf("%d",&choice);
	} /*while sonu */
	printf("Programin calismasi bitti.\n");
	return 0;
} /* main sonu */

void instructions(void)
{
	printf("Seciminizi giriniz: \n"
	"1 - Yigina bir deger ekleyin \n"
	"2 - Yigindan bir deger cikartin \n"
	"3 - Programi sonlandir \n");
}

void push(StackNodePtr *topPtr, int info)
{
	StackNodePtr newPtr; /* Yeni dugume pointer */
	
	newPtr = malloc(sizeof(StackNode)); /* Yeni dugum icin alan ayir ve yeni dugumun pointerina ata */
	
	/* Yer var ise yiginin ustune dugum ekle */
	if( newPtr != NULL )
	{ 	
		newPtr->data = info;
		newPtr->nextPtr = *topPtr;
		*topPtr = newPtr;
	}
	else
	printf("%d yigina eklenemedi. Yeterli hafiza yok.\n",info);
}

int pop(StackNodePtr *topPtr)
{
	StackNodePtr tempPtr; /* Gecici dugum pointer i */
	int popValue; /* dugumdeki deger */
	
	tempPtr = *topPtr;
	popValue = (*topPtr)->data;
	*topPtr = (*topPtr)->nextPtr;
	free(tempPtr);
	return popValue;
}

void printStack( StackNodePtr currentPtr)
{
	/* Eger stack bos ise */
	if(currentPtr == NULL)
	printf("Yigin bos durumda.\n\n");
	else
	{
		printf("Yigin :\n");
		
		/* Yiginin sonu deil iken */
		while(currentPtr != NULL)
		{
			printf("%d --> ",currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}
		printf("NULL\n\n");
	}
}

/* Yigin bos ise 1, degilse 0 dondur */
int isEmpty(StackNodePtr topPtr)
{
	return topPtr == NULL;
}


























































