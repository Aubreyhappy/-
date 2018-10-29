#include <stdio.h>
#define MAX 10
int main()
{
	int a[MAX];
	for(int i = 0;i < MAX;i++)
	scanf("%d",&a[i]);
	//²åÈëÅÅÐòÖ÷Ëã·¨
	for(int i = 1;i < MAX;i++)
	{
		for(int j = 0;j < i;j++)
		{
			if(a[i] < a[j])
			{
				int t = a[i];
				for(int m = i;m > j;m--)
				{
					a[m] = a[m - 1];
				}
				a[j] = t;
				break;
			}
		}
	}
	for(int i = 0;i < MAX;i++)
	printf("%d ",a[i]);
	return 0;
}
