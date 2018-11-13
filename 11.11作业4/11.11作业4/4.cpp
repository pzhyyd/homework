#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,a,b,c,count=0;
    printf("水仙花数有\n");
for (i=100;i<=999;i++)
    { 
      a=i/100;  
      b=(i-a*100)/10;   
      c=i%10;  
     if(a*a*a+b*b*b+c*c*c==i)
      {
       printf("%5d\t\n",i);
       count++; 
      }
     }
system("pause");
}