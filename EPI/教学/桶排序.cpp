#include <stdio.h>
#define MAX 10
int main()
{
	int a[MAX];
	for(int i = 0;i < MAX;i++)
		scanf("%d",&a[i]);
	//Í°ÅÅÐòÖ÷Ëã·¨
	int b[10] = { 0 };
	for(int i = 0;i < MAX;i++)
	{
		b[a[i]]++;
	} 
	for(int i = 0;i < 10;i++)
	{
		for(int j = 0;j < b[i];j++)
		{
			printf("%d ",i);
		}
	 } 
	return 0;
}
