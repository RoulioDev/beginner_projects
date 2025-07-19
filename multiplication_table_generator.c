#include <stdio.h>


void main(){
		
	printf("My table generator program\n");

	int number;

	printf("Give me the number you want to be multiplied -> ");	

	scanf("%d",&number);

 	for (int i = 0; i<10 ; i++){
		printf("%d x %d = %d\n",number,i,i*number);
	}		

}
