#include<conio.h>
#include<stdio.h>
int main()
{
int a=0;
printf("请输入学生成绩：(按0退出)\n");
scanf("%d",&a);
while(a!=0)
{
switch(a/10)
{
case 10:
case 9:
printf("A\n");break;
case 8:
printf("B\n");break;
case 7:
printf("C\n");break;
case 6:
printf("D\n");break;
default:
printf("E\n");break;
}
printf("请输入学生成绩：(按0退出)\n");
scanf("%d",&a);
}
}
