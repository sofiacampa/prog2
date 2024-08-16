#include <ctype.h>
#include <stdio.h>

int ocurrencias (char* frase, char letra){
    
    int cant=0;
    char cletra=(torupper(letra));
    for (int i=0, frase[i]!= "\0"; i++){
    if (toupper(frase[i])= cletra){
    cant ++;
    }
    }
    return cant;
}

int main(){
    char *frase = new(char[100]);
    printf("Escriba la frase: ");
    scanf("%[^\n]s", frase);
    char letra;
    printf("Escriba la letra a buscar: %c\n", letra);
    int cant = ocurrencias(frase,letra);
    delete[] frase;
    return 0;
}