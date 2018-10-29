#include<stdio.h>
main()
{
	float PI=3.14;
	float r,h,v;
	printf("请输入圆柱体半径\n");
	scanf("%f",&r);
	printf("请输入圆柱体高\n");
	scanf("%f",&h);
	v=PI*r*r*h; 
	printf("圆柱体体积为%f\n",v);
}
