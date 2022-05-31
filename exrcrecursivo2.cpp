#include <stdio.h>
#include <stdlib.h>
int main(){
	
int x,
	n,
	potencia,
	contador;
	
	
	printf("\nCalculodo da potencia:\n");
	printf("\nDigite um numero inteiro:");
	scanf("%d", &x);
	printf("Digite um numero inteiro positivo:");
	scanf("%d", &n);
	
	potencia = 1;
	contador = 0;
	
	while (contador != n ){
		
			potencia = potencia * x;
			contador = contador + 1;
			
}
	printf("\n O valor de %d elevado a %d: %d\n", x, n, potencia);
	return 0;		
}
