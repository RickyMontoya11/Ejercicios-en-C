
#include<stdio.h>

int main(){
	
	int n1,n2,  suma = 0, resta = 0, multiplicasion = 0, divicion = 0; 
	printf("Digite el primer numero: ");
	scanf("%i",&n1);
	printf("Digita el segundo numero: ");
	scanf("%i",&n2);
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicasion = n1 * n2;
	divicion = n1 / n2;
	
	printf("\nla suma es: %i", suma);
	printf("\nla resta es: %i", resta);
	printf("\nla multiplicasion es: %i", multiplicasion);
	printf("\nla divicion es: %i", divicion);
	
	return 0;
}
