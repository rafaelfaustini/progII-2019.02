/*                *** 7 ***
Escreva um pequeno programa que l� do teclado uma string e imprimir quantos
caracteres dessa string s�o d�gitos.
Por exemplo: ENTRADA: "Niter�i, 06 de mar�o de 2004"
EXIBIR: A frase "Niter�i, 06 de mar�o de 2004" tem 6 d�gitos */
void pegaFrase();
void totalDigitos();
#include <string.h>
#include <stdio.h> 
char frase[80];
int digitos, tam, cont = 0;

int main(){
	
	pegaFrase();
	totalDigitos();
	
	return 0;
}

void pegaFrase(){
	printf ("Insira a frase a ser analisada: ");
	gets (frase);
	tam = strlen(frase);
}

void totalDigitos(){
	int i;
	for (i = 0; i < tam; i++){
		  if (frase[i] >= 48 && frase[i] <= 57) cont++;
	}
	if(cont == 0) printf ("Na frase \"%s\" nao foram encontrados quaisquer digitos", frase);
	else printf ("Na frase \"%s\" foram encontrado %d digitos", frase, cont);
}
