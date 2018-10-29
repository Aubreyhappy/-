#include <stdio.h>
#include <string.h>
int main()
{
int i,j,k;
int n;
printf("输入A占几行:");
scanf("%d",&n);
for(i = 0; i < n; i++)
{
for(j = 0;j< n-i-1;j++)
printf(" ");
if(i == n/2)
{
for(k = 0; k < 2*i+1;k++)
printf("*");
}
else
{
for(k = 0; k < 2*i+1; k++ )
{
if(k == 0 || k == 2*i)
printf("*");
else
printf(" ");
}
}
printf("\n");
}
}
