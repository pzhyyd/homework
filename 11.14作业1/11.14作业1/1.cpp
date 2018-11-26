#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[10];
	int i,j,t;
	printf("ÇëÊäÈë10¸öÊı×Ö:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(j=0;j<9;j++)
		for(i=0;i<9-j;i++)
			if (a[i]>a[i+1])
			{t=a[i];a[i]=a[i+1];a[i+1]=t;}
		printf("the sorted numbers:\n");
    for(i=9;i>=0;i--)
		printf("%4d",a[i]);
	printf("\n");
}