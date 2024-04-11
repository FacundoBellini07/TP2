/*Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es palíndromo (se lee igual de izquierda a derecha que de
derecha a izquierda).*/
#include <stdio.h>
#include <string.h>

int main(){
	char palabra[30];
	char revez[30];
	printf("Ingrese una palabra\n");
	scanf("%s", palabra);
	int i;
	int contador;
	int longitud = strlen(palabra);
	for(i = longitud - 1; i >= 0; i--){
		revez[contador] = palabra[i];
		contador++;
}
	printf("%s", revez);
	for(i = 0; i < longitud; i++){
		if(revez[i] != palabra[i]){
			printf("\nLa palabra no es palindroma\n");
			return 0;
		}
		
	}
	printf("\nLa palabra es palindroma");
}
