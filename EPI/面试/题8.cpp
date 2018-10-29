#include<stdio.h>
int main()
{
double i,a=50,b=0,n,sum=50;
printf("请输入落地次数n：\n");
scanf("%lf",&n);
for(i=1;i<=n;i++)
{
sum=sum+2*b;
a=a/2;
b=a;
}
printf("小球从50m高处落地%.0lf次时，共经过%lf米\n第%.0lf次落地后反弹的高度为%lf米\n",n,sum,n,a);
}
