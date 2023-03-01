#include<stdio.h>

int main (){
	
	int a ;
	
	printf("Type the Number of one Month to get the full name of that Month : ");
	scanf("%d",&a);
	
	switch(a){
		
		case 1:						
			printf("\nJANUARY");
			break;
			 
		case 2:
			printf("\nFEBRUARY");
			break;
			
		case 3:
			printf("\nMARCH");
			break;
			
		case 4:
			printf("\nAPRIL");
			break;
			
		case 5:
			printf("\nMAY");
			break;
			
		case 6:
			printf("\nJUNE");
			break;
			
		case 7:
			printf("\nJULY");
			break;
			
		case 8:
			printf("\nAUGUST");
			break;
			
		case 9:
			printf("\nSEPTEMBER");
			break;
			
		case 10:
			printf("\nOCTOBER");
			break;
			
		case 11:
			printf("\nNOVEMBER");
			break;
			
		case 12:
			printf("\nDECEMBER");
			break;
		
		default:
			printf("\n\nOops!!!\nEnter the proper Number of Month to find it's full Name...");											
		
	}
	
	return 0 ;
}
