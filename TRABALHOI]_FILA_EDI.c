#include <stdio.h>

#include <string.h> 

#define MAX 15


int main() {

	int lista[MAX] = {NULL}, posicao=0, cheio=0, escolha;
		
	int aux, prox, i;
    
	do{

	    printf("\n<========================>\n 1) Incluir elemento\n<========================>\n 2) Excluir elemento\n<========================>\n 3) Acessar posicao\n<========================>\n 4) Quantidade de elementos\n<========================>\n 5)Exibir lista \n<========================>\n 6) fechar\n");	
		scanf("%d", &escolha);

	    switch (escolha){
		    case 1:
	                
		        printf("Qual posicao de 0 a 14 deseja incluir um novo elemento\n");
				scanf("%d", &posicao);

				if (posicao > 14 && posicao < 0){
					printf("posicao invalida");getchar();
					break;
				}
				
	
		 
		        if(lista[posicao] == NULL){
					printf("Informe o valor\n");
				
					scanf("%d", &lista[cheio]);
					cheio++;
			

				}

			
				else if(lista[posicao] != NULL){
					printf("Posicao ocupada os elementos serão movidos\n");
					printf("\nInforme o novo valor: ");
						scanf("%d", &aux);
				//
					for(i = posicao; i <= cheio+1; i++){
						
						prox = lista[i];
						lista[i] = aux;
						aux = prox;
					}
					cheio++;
				}
				//
	                    
	    	break;
	    	
	    	case 2:
	    		printf("Informe a posicao que deseja excluir um elemento\n");
				scanf("%d", &posicao);
			
				if(posicao >= cheio){
					printf("Posicao vazia! \n");
				} else {
					for(i = posicao; i <= cheio+1; i++){
						
						prox = lista[i+1];
						lista[i] = prox;
					}
					cheio--;
				}
			
	    	break;
	    	
	    	case 3:
				printf("Informe a posicao que deseja acessar\n");
				scanf("%d", &posicao);
				printf("\n\tPosicao: %d \n\tElemento: %d", posicao, lista[posicao]);
			break;
			
			case 4:
				printf("\n\tQuantidade de elementos ocupados: %d", cheio);
			break;
			
		    case 5:
		    	printf("%d", lista[cheio]);
		        printf("lista:\n");
		        printf("\n\t Posicao\t");
		        for(i=0; i < MAX; i++){
					printf("\t%d", i);
					printf("|");
				}
				printf("\n\t Elemento\t");
		        for(i=0; i < MAX; i++){
					if(i > cheio-1){
						printf("\tx");
					} else {
						printf("\t%d", lista[i]);
					}
					if(i<10){
						printf("|");
					} else{printf("|");}
				}
		    break;
	    
		    default:
				printf("\nEscolha invalida");
			break;
		}
	}while(escolha != 6);
}
