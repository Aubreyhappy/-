#include <stdio.h>
#define MAX 10
int main()
{
	int a[MAX];
	for(int i = 0;i < MAX;i++)
	scanf("%d",&a[i]);
	//Ñ¡ÔñÅÅÐòÖ÷Ëã·¨ 
	for(int i = 0;i < MAX - 1;i++)
	{
		for(int j = 1 + i;j < MAX;j++)
		{
			if(a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i = 0;i < MAX;i++)
	printf("%d ",a[i]);
	return 0;
}
