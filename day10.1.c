#include<stdio.h>

int main (){
	
	int a , b , c ;
	
	printf("1. Prepaid\n");
	printf("2. Postpaid\n\n");
	
	printf("Enter the number of your choice : ");
	scanf("%d",&a);
	
	switch(a){
		
		case 1:
			
			printf("\n\n1. 599 RS/-  1 year validity and 2GB/Day + 200SMS/Day\n");
			printf("2. 1099 RS/-  2.5 year validity and 4GB/Day + 300SMS/Day\n\n");
			
			printf("Enter your selection : ");
			scanf("%d",&b);
				switch(b){
					
					case 1:
						printf("\nYour Rcharge of RS 599/- is Done! \nEnjoy your Data Pack.\n\n");
						break;
					case 2:
						printf("\nYour Rcharge of RS 1099/- is Done! \nEnjoy your Data Pack.\n\n");
						break;
					default :
			
			            printf("Invalid Input!!!");		
			
				}
			break;
		case 2:
			
			printf("\n\n1. 30Days For 399 RS/- 1.5GB/Day + 100SMS/Day\n");
			printf("2. 365Days For 1599 RS/- 2GB/Day + 100SMS/Day\n\n");
			
			printf("Enter your selection : ");
			scanf("%d",&c);
				switch(c){
					
					case 1:
						printf("\nUse all the amenities first and pay your bill in the end of Every Month!\nEnjoy Your Postpaid Pack.");
						break;
					case 2:
						printf("\nUse all the amenities first and pay your bill in the end of Every Year!\nEnjoy Your Postpaid Pack.");
						break;
					default :
			
			            printf("Invalid Input!!!");		
				}
			break;
		default :
			
			printf("Invalid Input!!!");		
		
	}
	
	return 0;
	
}
