#include<stdio.h>
#include<stdlib.h>
void main()
{
        int a[5]={8,6,5,4,1};
        int i=0,b;
        for (i=0;i<5/2;i++)
        {
                b = a[4-i];
                a[4-i] = a[i];
                a[i] = b;
        }
        for (i=0;i<5;i++)
           printf("%d\n", a[i]);
  system("pause");
}