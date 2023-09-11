#include<stdio.h>

main()
{
		
	int unit,amt,charge,totel;
	 	
	printf("enter totel unit");
	scanf("%d",&unit);
			
		if(unit<=50)
		{
			amt=unit*1/2;
		}		
		else if(unit<=150)
		{
			amt=((unit-50)*0.75)+25;
		}
			amt=((unit-150)*1.20)+100;
		
			
		else 
		{
			amt=((unit-250)*1.50)+220;
		}
			charge = amt*0.20;
			totel = amt+charge;
			printf("totel bill =%d",totel);	
}
