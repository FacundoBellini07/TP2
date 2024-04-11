#include <stdio.h>
#include <string.h>
#define longitud 30
int main (){
	char str[longitud];
	char vocales[11] = "AEIOUaeiou";
	int vocal = 0;
	printf("Ingrese una cadena de caracteres\n");
	scanf("%s", str);
	int largo = strlen(str);
	int i, j;
	for(i = 0; i < largo; i++){
		for(j = 0; j < 11; j++){
			if (str[i] == vocales[j]){
				vocal++;
	 	}
		}
	}
	printf("La cadena tiene %d vocales", vocal);
}
