#include<stdio.h>
int main()
{ int a[10],i;
  a[0]=1;
  a[1]=1;
  printf("쳲���������ǰʮ�\n");
  for(i=2;i<10;i++)
    a[i]=a[i-1]+a[i-2];
  for(i=0;i<10;i++)
  {
	  printf("%d\t",a[i]);
      if((i+1)%5==0) printf("\n");
  }
}
