#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	printf("My guessing game from 1 to 50\n");

	printf("--> Give me a Number : ");
	int given_number = -1;
	srand(time(NULL));	
	int number_to_find = rand()%50;
	

	while (given_number != number_to_find){	
			
		scanf("%d",&given_number); 

		if (number_to_find > given_number ){
			printf("Higher\n");	
		}
		if (number_to_find < given_number ){
			printf("Lower\n");		
		}	
		
	}	

	printf("you found the number\n");

}



