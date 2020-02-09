#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"
void swap(void);
u8 arr_sort(u8*);
u8 size,*ptr,i,j;
void main(void)
{ 
    u8 l;
	printf("Please enter the number of numbers :");
	scanf("%d",&size);
	ptr = (u8*)malloc(size);
	for (l=0;l<size;l++)
	{
	 printf("Please enter the number %d :",l+1);
	 scanf("%d",&ptr[l]);
	}
    arr_sort(ptr);
   for(l=0;l<size;l++)
  {
	  printf("%d\n",ptr[l]);
  }
}
u8 arr_sort(u8*ptr)
{
	for(i=0;i<=(size-1);i++)
	{
	 for(j=0;j<(size-1-i);j++)
	 {
		 if(ptr[j]>ptr[j+1])
		 {
		  swap();
		 }
		 
	 }
	}
}
void swap(void)
	   {
		 int z;
		 z=ptr[j];
		 ptr[j]=ptr[j+1];
		 ptr[j+1]=z;
	   }