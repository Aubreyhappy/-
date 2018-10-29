#include <stdio.h>
int main()
{
	int i,j;
	int fac[100];
	scanf("%d",&j);
	fac[0]=1,fac[1]=1;
	for(i=2;i<=j;i=i+1)
		fac[i]= fac[i-1]+fac[i-2]; 
	printf("%d\n",fac[j]);
}




