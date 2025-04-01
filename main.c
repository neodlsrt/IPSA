#include <stdio.h>
#include "cours.h"


int main() { 
    int x = 10;
    int y = 20; 
    int resultat = comparaison(x, y);
    
    printf("%d is the greater number between %d and %d\n", resultat,x,y); 

	comtet_for();
	comtet_while();

	int a = 10;
	printf("La valeur de la variable a est %d\n",a);
	printf("L'adresse de la valeur est %p\n",&a);

	int somme = sum(x,y);
	printf("%d + %d = %d\n",x,y,somme);

	//Binary search
	int List[] = {1,5,3,11,9,13,4,2,8};
    int taille = sizeof(List) / sizeof(List[0]);
	for (int i=0; i<taille ; i++) printf("%d \t",List[i]);
	shorting(List, taille);
	for (int i=0; i<taille ; i++) printf("%d \t",List[i]);

	/*
    int element = 9;
    int result = binary_search(element, List, 0, taille - 1);

    if (result != -1)
        printf("Élément trouvé à l'indice %d\n", result);
    else
        printf("Élément non trouvé\n");
	*/
	return 0;
}



