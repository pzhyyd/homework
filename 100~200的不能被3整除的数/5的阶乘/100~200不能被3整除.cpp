#include<stdio.h>
#include<stdlib.h>
  void main()
{
	int N,j=1;
	for(N=100;N<=200;N++)
	{if(N%3==0)
	    continue;
	else
	  {
		printf("%4d",N);
		if(j%10==0)
			{
				printf("\n");
		    }
		j++;
	  }
	 }
	
	printf("\n");
	system("pause");
}