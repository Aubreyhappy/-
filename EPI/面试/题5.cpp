#include <stdio.h>
int main ()
{
int year;
printf("请输入年份：");
scanf("%d",&year);
if((year%4==0)&&(year%100!=0)||(year%400==0))
printf("此年是闰年\n");
else
printf("此年不是闰年\n");
}
