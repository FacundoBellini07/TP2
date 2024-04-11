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

    for (j = 0; j < longitud; j++) {
        for (i = 1; i < 5; i++) {
            for (k = 0; palabras[i][k] != '\0' && subcadena[j + k] != '\0' && palabras[i][k] == subcadena[j + k]; k++);
            if (k < longitudmaxima) {
                longitudmaxima = k;
                break;
            }
        }
        if (k > longitudmaxima) {
            longitudmaxima = k;
            strncpy(subcadena, palabras[0] + j, longitudmaxima);
            subcadena[longitudmaxima] = '\0';
        }
    }
    printf("La subcadena comun mas larga es: %s\n", subcadena);

    return 0;
}





