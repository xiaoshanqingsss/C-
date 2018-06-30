
#include <stdio.h>
#include <stdlib.h>
void mcopy(char array1[],char array2[],int m)
{
    int i,j;
    for(i=m-1,j=0;array2[j]!=0;i++,j++)
        array1[i]=array2[j];
    array1[i]=0;
 
 
}
int main()
{
   char array1[20],array2[10];
   int m;
   printf("Give array1:");
   gets(array1);
   printf("Give array2:");
   gets(array2);
   printf("Give m:");
   scanf("%d",&m);
   mcopy(array1,array2,m);
   printf("After changed:");
   puts(array1);
   return 0;
}

