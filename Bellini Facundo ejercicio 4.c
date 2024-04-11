/* Realiza un programa que reemplace todas las apariciones de un carácter
en una cadena de caracteres ingresada por el usuario por otro carácter
también ingresado por el usuario. */

#include <stdio.h>
#include <string.h>
int main(){
	char string[30];
	printf("ingrese una cadena de caracteres\n");
	scanf("%s", string);
	
	char buscar;
	int i;
	char reemplazar;
	
	printf("Ingrese el caracter que quiere reemplazar en la cadena\n");
	scanf(" %c", &buscar);
	printf("Ingrese el caracter por el que lo quiere reemplazar\n");
	scanf(" %c", &reemplazar);
	int largo = strlen(string);
	
	for(i = 0; i < largo ; i++){
	if(string[i] == buscar){
	string[i] = reemplazar;
	
}
	}
	printf("%s", string);
}
