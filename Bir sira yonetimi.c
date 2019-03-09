/* Bir sira-kuyruk yonetimi programi */

#include <stdio.h>
#include <stdlib.h>

/* Self-referential structure = Kendine donuslu yapi */
struct queueNode{
	char data;
	struct queueNode *nextPtr;  /* sira dugumu gosterici */
};

typedef struct queueNode QueueNode;
typedef QueueNode * QueueNodePtr;

/* Prototypes */
void printQueue (QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue (QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue (QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value);
void instructions(void);

int main()
{
	QueueNodePtr headPtr = NULL; /* Kuyrugun basi ve sonunu gosteren pointerlara null atandi */
	QueueNodePtr tailPtr = NULL;
	
	int choice;
	char item;
	
	instructions();
	printf("? ");
	scanf("%d",&choice);
	
	while(choice!=3)
	{
		switch(choice)
		{
			case 1:
				printf("Bir karakter giriniz : ");
				scanf("\n%c",&item);
				enqueue(&headPtr,&tailPtr,item);
				printQueue(headPtr);
				break;
				
			case 2:
				if(!isEmpty(headPtr))
				{
					item = dequeue (&headPtr,&tailPtr);
					printf("%c siradan cikarildi. \n",item);
				}
				printQueue(headPtr);
				break;
			
			default:
				printf("Gecersiz secim. \n\n");
				instructions();
				break;
		}
		printf("? ");
		scanf("%d",&choice);
	}
	printf("Program sonlandirildi. \n\n");
	return 0;
}

void instructions(void)
{
	printf("Seciminizi giriniz : \n"
	"1 - Siraya eleman ekle\n"
	"2 - Siradan elemen cikar\n"
	"3 - Cikis\n");
}

void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value)
{
	QueueNodePtr newPtr; /* Yeni dugume pointer */
	
	newPtr = malloc (sizeof(QueueNode)); 	/* newPtr icin QueueNode buyuklugunde bir hafiza ayirildi */
	
	if( newPtr!= NULL) /* Hafiza var ise */
	{
		newPtr->data = value;
		newPtr->nextPtr = NULL;
		
		if( isEmpty(*headPtr)) /* sira bos ise siranin basina dugum ekle */
		*headPtr = newPtr;
		else 
		(*tailPtr)->nextPtr = newPtr;
		
		*tailPtr = newPtr;
	}
	else
	printf("%c siraya eklenemedi. Yeterli hafiza yok.\n",value);
}

char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
	char value; /* dugumdeki deger */
	QueueNodePtr tempPtr; /* Hafizayi serbest birakmak icin kullanilacak gecici pointer */
	
	value = (*headPtr)->data;
	tempPtr = *headPtr;
	*headPtr = (*headPtr)->nextPtr;
	
	if(*headPtr == NULL) /* Eger sira bos ise */
	*tailPtr = NULL;
	
	free(tempPtr);
	return value;
}

int isEmpty(QueueNodePtr headPtr)
{
	return headPtr == NULL;
}

void printQueue(QueueNodePtr currentPtr)
{
	if(currentPtr == NULL)
	printf("Sira bos durumda.\n");
	else
	{
		printf("Sira :\n");
		
		/*siranin sonu degil iken */
		while (currentPtr!=NULL)
		{
			printf("%c --> ",currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}
		printf("NULL\n\n");
	}
}















































