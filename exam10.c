#include<stdio.h>

main()

{
	int j,i,count=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j>=1;j--)
		{
			printf("%d",count);
			count++;
		}
		printf("\n");
	}
}