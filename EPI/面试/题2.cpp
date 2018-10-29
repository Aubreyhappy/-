#include<stdio.h>
int main()
{
	int array[]={1,2,3,4,5,6,7,8,9,10,11,};
	int max=array[0];
	int i;
	for(i=1;i<11;i++)
	{if(array[i]>max)
	max=array[i];
	}
	printf("最大值为%d",max);
 } 
