
#include <stdio.h>
int main(){	
	int choixmenu;

	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");	
	printf("Votre choix\n");
	scanf("%d", &choixmenu);

	
	switch(choixmenu){

	case 1:
	printf("Tu as commander un Royal Cheese\n");
	break;

	case 2:
        printf("Tu as commander un Mc Deluxe\n");
        break;

	case 3:
        printf("Tu as commander un Mc Bacon\n");
        break;

	case 4:
        printf("Tu as commander un Big Mac\n");
        break;
	
	}
	
	int oui = choixmenu > 2 ? 6 : 10;
printf("Ma variable oui valeur: %d \n", oui);
	
	return 0;	







}












