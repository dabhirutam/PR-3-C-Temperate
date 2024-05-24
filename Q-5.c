
#include<stdio.h>

main(){
	
	int uv, factorial=1, i;
	
	printf("Enter the number :- ");
	scanf("%d", &uv);
	
	 for(i=1; i<=uv; i++){  
	    
      factorial*=i;    
      
  	 }    
	
	printf("\nFactorial of %d is = %d", uv, factorial);
}
