#include <stdio.h>
#include <ctype.h>

// Función para calcular la longitud de la cadena
int longitud(char *frase) {
    int len = 0;
    while (frase[len] != '\0') {
        len++;
    }
    return len;
}

// Función que verifica si una frase es un palíndromo
int EsPalindrome( char *frase) {
    int inicio = 0;
    int fin = longitud(frase) - 1;

    while (inicio < fin) {
        if (toupper(frase[inicio]) != toupper(frase[fin])) {
            return 0;  // No es un palíndromo
        }

        inicio++;
        fin--;
    }

    return 1;  // Es un palíndromo
}

int main() {
    printf("Ingrese una frase: ");
char *frase = new char;
scanf("%[^\n]s",frase)
    
    if (EsPalindrome(frase)) {
        printf("La frase es un palíndromo.\n");
    } else {
        printf("La frase no es un palíndromo.\n");
    }

    return 0;
}
