#include <stdio.h>





int main(){
	char operation;
	int nombre1;
	int nombre2;
	int resultat;

	printf("Choisi ton operation :\n");
	scanf("%c",&operation);
	printf("Vous avez choisie l operation :  %c\n",operation);	
	printf("Choisie un premier nombre : \n");
	scanf("%d",&nombre1);	
	printf("Choisie un deuximeme nombre : \n");
	scanf("%d",&nombre2);	


	switch(operation){

	case '*':
		resultat = nombre1 * nombre2;
		break;
	case '/':
		if (nombre2 == 0){
			printf("Operation impossible");
			break;
		}
		else{	

			resultat = nombre1 * nombre2;
			break;
		}
	case '+':
		resultat = nombre1 + nombre2;
		break;

	case '-':
		resultat = nombre1 - nombre2;
		break;





	}	

	if (nombre2 != 0){
	printf("%d %c %d = %d \n",nombre1, operation , nombre2 , resultat);	
	}
	return 0;
}
