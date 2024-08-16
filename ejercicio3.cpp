/*Se quiere implementar una función que cuente la cantidad de veces que una letra aparece en una frase.
La frase se representa como un arreglo de caracteres, y dado que se conoce que el largo máximo de
una frase es de 100 caracteres, la frase se implementa como char frase[100]. Usando esta representación
escriba una función Ocurrencias que recibe una frase, un natural llamado largo que representa el número
de caracteres en la frase, y el caracter a buscar (almacenado en la variable letra), y devuelve el número de
ocurrencias del carácter letra en el arreglo frase.*/

int ocurrencias (char arreglo[], int largo, char letra){
    int cant = 0;
    for (int i=0; i < largo; i++){
        if (arreglo[i] == letra){
            cant++;
        }
    } 
    return cant;
}

int main(){
    char frase[100] = "Hola esto es una prueba para saber si funciona";
    char letra = 'e';
    int largo = 46;

    int resultado = ocurrencias (frase, largo, letra);

    printf ("La cantidad de veces que aparece la letra e en la frase es: %d\n", resultado);
    return 0;

}