#include<stdio.h>

main(){
	
	int uv, sum, firstno, lastno;
	
	printf("Enter the number :- ");
	scanf("%d", &uv);
	
	lastno = uv % 10;
	
	while(uv>=10){
		uv/=10;
	}
	
	firstno = uv;
	
	printf("\nFirst digit of number = %d", firstno);
	printf("\nLast digit of number = %d", lastno);
	
	sum = firstno + lastno;
	
	printf("\n\nSum of %d + %d = %d", firstno, lastno, sum);
}
