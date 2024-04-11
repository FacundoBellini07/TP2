/* Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es un anagrama de otra cadena también ingresada por el
usuario. Un anagrama es una palabra o frase formada por las mismas
letras de otra palabra o frase, pero en un orden diferente, como por
ejemplo &quot;roma&quot; y &quot;amor&quot;. */

#include <stdio.h>
#include <string.h>
int main(){
	
	char palabra1[50];
	char palabra2[50];
	int contador;
	printf("Ingrese 2 palabras\n");
	printf("palabra 1: ");
	scanf("%s", palabra1);
	printf("\npalabra 2: ");
	scanf("%s", palabra2);
	int largo1 = strlen(palabra1);
	int largo2 = strlen(palabra2); 
	int i;
	int j;
	if(largo1 != largo2){
		printf("No es un anagrama\n");
		return 0;
	}	
	for(i = 0; i < largo1; i++){
		for(j = 0; j < largo1; j++){
			if(palabra1[i] == palabra2[j]){
				contador++;
				break;
			}
		}
	}
	if(contador == largo1){
		printf("Es un anagrama\n");
	}
	else{
		printf("No es un anagrama\n");
	}
}
