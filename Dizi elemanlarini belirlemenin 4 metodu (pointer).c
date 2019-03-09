/* Dizi elemanlarini belirlemenin 4 metodu ------- Yildirim BAYRAKCI */
#include <stdio.h>

int main()
{
	int array[]= {10,20,30,40};
	int *arrayPtr = array; /*  pointer  diziyi gostersin */
	int i,offset;
	printf("array = {10,20,30,40} dizisi asagidaki metodlarla yazilmistir:\n");
	printf("arrayPtr array adresini gosteren bir pointer'dir.\n\n");
	for(i=0;i<4;i++)
	printf("array[%d] = %d\n",i,array[i]);
	printf("\nGosterici/Offset yontemi (Gosterici dizinin ismidir.)\n");
	for(offset=0;offset<4;offset++)
	printf("*(array + %d) = %d\n",offset,*(array+offset));
	printf("\nGosterici belirtec yontemi\n");
	for(i=0;i<4;i++)
	printf("arrayPtr[%d] = %d\n",i,arrayPtr[i]);
	printf("\nGosterici/Offset yontemi\n");
	for(offset=0;offset<4;offset++)
	printf("*(arrayPtr + %d) = %d\n",offset,*(arrayPtr+offset));
	
	
	return 0;
}

