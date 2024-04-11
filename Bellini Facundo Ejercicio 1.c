//Pedir al usuario que ingrese su nombre y luego imprimirlo en pantalla.
#include <string.h>
#include <stdio.h>
int main (){
	char nombre[20];
	printf("Ingrese su nombre\n");
	scanf("%s", nombre);
	printf("Su nombre es %s\n", nombre);
}
