#include <stdio.h>
#include <math.h>
int main()
{
	int n,res=1,t=2;
	scanf("%d",&n);
	for(;n!=0;n=n>>1)
	{
		if(n&1)
			res*=t;
		t=t*t;
	}
printf("%d\n",res);
}
