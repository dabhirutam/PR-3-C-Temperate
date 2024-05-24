#include<stdio.h>

main(){
	
	int digit,cn;
	
	printf("Enter the number :- ");
	scanf("%d", &digit);
	
	for(digit; digit!=0; cn++){
		digit/=10;
	}
	
	printf("\nThe number of digits = %d", cn);
}
