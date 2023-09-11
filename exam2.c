#include<stdio.h>


main()
{
	 char a;
	 
	 printf("m for monday \n");
	 printf("t for tuesday \n");
	 printf("w for wenesday \n");
	 printf("T for thrusday \n");
	 printf("g for friday \n");
	 printf("s for  seturday \n");
	 printf("S for  sunday \n");
	
	 
	 
	 printf("enter no.=");
	 scanf("%c",&a);
	 
	 switch(a) 
	 {	 		
	 	case 'm' :printf(" monday");
	 			break;
				 		
	 	case 't' :printf(" tuesday");
	 			break;
				 		
	 	case 'w' :printf(" wenesday");
	 			break;
				 		
	 	case 'T' :printf(" thrusday");
	 			break;	
				 	
	 	case 'f':printf(" friday");
	 			break;	
				 	
	 	case 's' :printf(" seturday");
	 			break;	
	 			
	 	case 'S':printf(" sunday");
	 			break;	
				
	 }		
	
}