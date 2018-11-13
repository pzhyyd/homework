#include<stdio.h>
#include<stdlib.h>
void main()
{char x;
int a=0,b=0,c=0,d=0;
  for(;(x=getchar())!='\n';)
{if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
    a++;
else if(x>='0'&&x<='9')
    b++;
else if(x==32)
   c++;
else
   d++;
 }
 printf("%d\n%d\n%d\n%d\n",a,b,c,d);
 system("pause");
}