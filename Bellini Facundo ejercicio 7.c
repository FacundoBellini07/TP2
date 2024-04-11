//Realizar un programa que ingrese 5 palabras y devuelta la cadena mas
//larga entre ellas
#include <stdio.h>
#include <string.h>

int main() {
    char palabras[5][100];
    char subcadena[100]; 
    int i, j, k;
    int longitudmaxima = 0;
    int longitud;

    printf("Ingresa cinco palabras:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", palabras[i]);
    }

    strcpy(subcadena, palabras[0]);
    longitud = strlen(subcadena);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < longitud; j++) {
            for (k = 0; palabras[i][k] != '\0' && subcadena[k] != '\0' && palabras[i][k] == subcadena[k]; k++);
            if (k > longitudmaxima) {
                longitudmaxima = k;
                strncpy(subcadena, palabras[i] + j, longitudmaxima);
            }
        }
        longitud = longitudmaxima;
        longitudmaxima = 0;
    }

    printf("La subcadena comun mas larga es: %s\n", subcadena);

    return 0;
}





