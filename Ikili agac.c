/* Bagli listeler, yiginlar ve siralar dogrusal veri yapilaridir. Bir agac , dogrusal olmayan, iki boyutlu ve ozel amacli bir veri yapisidir. Agac dugumleri iki ya da daha
fazla bag icerebilir.Bu program ikili agaclari aciklamaktadir. Ikili agaclar, tum dugumleri iki bag iceren (hicbiri , biri ya da ikisi birden NULL olabilir) agaclardir. Kok 
dugum (root node) agactaki ilk dugumdur. Kokteki her bag bir cocugu (child) belirtir. Ilk sol cocuk, sol agacciktaki (subtree) ilk dugumdur ve sag cocuk sag agacciktaki ilk
dugumdur.Bir dugumun cocuklarina kardesler(siblings) denir.Cocuklari olmayan dugume, yaprak dugum(leaf node) denir. Bilgisayar uzmanlari agaclari, kok dugumden asagiya dogru
(dogadaki agaclarin tam tersi) cizerler.
Bu program,ikili arama agaci adi verilen ozel bir ikili agaci incelemektedir. Ikili arama agaci(dugum degerleri digeriyle ayni degere sahip olmayan), herhangi bir sol agacciktaki 
degerlerin, ebeveyn(parent) dugumundeki degerlerden daha kucuk olmasi ve herhangi bir sag agacciktaki degerlerin, ebeveyn dugumundeki degerlerden buyuk olmasi karakteristigine 
sahiptir. Program, 12 degere sahip bir ikili arama agacini gostermektedir. Degerleri temsil eden ikili arama agacinin seklinin, degerlerin agaca yerlestirilme sirasina gore 
degisebilecegine dikkat ediniz.
Program , ikili bir arama agaci yaratmakta ve agacin icinde 3 yoldan ilerlemektedir.Program, rasgele 10 sayi uretmekte ve sayilari agacin icine, birbirinin aynisi olan degerler 
haric, yerlestirmektedir. */
/* Ikili bir agac yarat ve preorder, inorder, postorder seklinde ilerle */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct treeNode{ /* Kendine donuslu yapi - Self referentialstructure */
	int data;
	struct treeNode *leftPtr; /* sol alt agaca pointer */
	struct treeNode *rightPtr; /* sag alt agaca pointer */
};

typedef struct treeNode TreeNode;
typedef TreeNode * TreeNodePtr;

/* Prototypes */
void insertNode( TreeNodePtr *treePtr, int value);
void inOrder (TreeNodePtr treePtr);
void preOrder (TreeNodePtr treePtr);
void postOrder (TreeNodePtr treePtr);

int main()
{
	int i; /* 1' den 10 a saymak icin dongu sayaci */
	int item; /* Rastgele degerleri tutmak icin degisken */
	
	TreeNodePtr rootPtr = NULL; /* Baslangicta agac bos - Kok dugum bos */
	
	srand(time(NULL)); /* rassallik */
	printf("Agaca yerlestirilen degerler :\n");
	
	/* Rastgele degerler uret 0-14 araliginda */
	for(i=1;i<=10;i++)
	{
		item = rand()%15;
		printf("%3d",item);
		insertNode(&rootPtr,item);
	}
	
	printf("\n\nPreorder ilerleme: (Her dugum ziyaret edildiginde islenir)\n");
	preOrder(rootPtr);
	printf("\n\nInorder ilerleme: (Sol alt agac islenene kadar dugumun degeri islenmez)\n");
	inOrder(rootPtr);
	printf("\n\nPostorder ilerleme: (Her dugum cocuklari islenene kadar islenmez) \n ");
	postOrder(rootPtr);
	
	return 0;
}

void insertNode( TreeNodePtr *treePtr, int value)
{
	/* Eger agac bos ise */
	if(*treePtr == NULL)
	{
		*treePtr = malloc(sizeof(TreeNode));
		
		/* Eger hafiza ayrildiysa veriyi isle. */
		if(*treePtr != NULL)
		{
			(*treePtr)->data = value;
			(*treePtr)->leftPtr = NULL;
			(*treePtr)->rightPtr = NULL;
		}
		else
		printf("%d agaca eklenemedi. Yeterli hafiza yok.\n");
	}
	else /* Agac bos degil */
	{
		if (value < (*treePtr)->data) /* Eklenecek veri, suandaki dugumdeki veriden kucuk ise */
		insertNode ( &((*treePtr)->leftPtr),value);
		else if(value > (*treePtr)->data) /* Eklenecek veri, suandaki dugumdeki veriden buyuk ise */
		insertNode ( &((*treePtr)->rightPtr),value);
		else /* kopya verileri ihmal et. */
		printf("copy");
	}
}

void inOrder (TreeNodePtr treePtr)		/* Once sol cocuk islenir, sonra agacin kendisi sonra, sag cocuk islenir. */
{													/* sol dal islenmedikce dugum islenmez. Bu verileri siralayan bir isleme seklidir.(Ikili siralama agaci) */ 
	/* Eger agac bos degil ise ilerle */ 
	if( treePtr != NULL)
	{
		inOrder( treePtr->leftPtr);
		printf("%3d", treePtr->data);
		inOrder (treePtr->rightPtr);
	}
}

void preOrder (TreeNodePtr treePtr)				/* Her dugum ziyaret edilince islenir. once sol sonra sag seklinde ilerler. */
{
	/* Eger agac bos degil ise ilerle */
	if( treePtr != NULL)
	{
		printf("%3d",treePtr->data);
		preOrder(treePtr->leftPtr);
		preOrder(treePtr->rightPtr);
	}
}

void postOrder (TreeNodePtr treePtr)		/* Her agac cocuklari islenene kadar islenmez */
{
	/* Eger agac bos degil ise ilerle */
	if( treePtr != NULL)
	{
		postOrder(treePtr->leftPtr);
		postOrder(treePtr->rightPtr);
		printf("%3d",treePtr->data);
	}
	
	
	
}
































