#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
  char torre[15]= "torre";
	char rainha[15]= "rainha";
	char bisbo[15]= "bisbo";
	int i = 0;
	int j = 0;
    int l = 1 ;
	int m ;
	
	while (i < 5)
	{
	   printf("%s: cima e direita\n", bisbo);
	 i++;	
	}
	
	do {
       printf("%s: esquerda\n", rainha);
		j++;
	}while(j < 8);
		
	for (int k = 0; k < 5; k++)
	   printf("%s: direita\n", torre);
	
	printf("\n");
	
	while(l-- )
	{
		for(m = 0; m < 2; m++ ){
			printf("cavalo: baixo\n");
		}
	printf("cavalo: esquerda\n");	
	}

    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
