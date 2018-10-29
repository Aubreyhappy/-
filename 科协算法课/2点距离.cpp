#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,d,x,y;
	while(scanf("%f%f%f%f",&a,&b,&c,&d)!=EOF)
	{
			y=(a-c)*(a-c)+(b-d)*(b-d);
			x=sqrt(y);
				printf("%.2f\n",x);
 	}
 
} 
