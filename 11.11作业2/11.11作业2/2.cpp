#include <stdio.h>
#include <stdlib.h>
void main()
{
int i,j,a,n,sum=0,x=0;
printf("请输入a的值");
scanf("%d",&a);
printf("请输入n的值");
scanf("%d",&n);
for(i=1;i<=n;i++)
   {
    x=x*10+a;
    sum=sum+x;
   }
   printf("a+aa+aaa+...+a...a=%d\n",sum);
} 