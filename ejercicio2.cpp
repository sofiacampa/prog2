/* Escriba un procedimiento que calcule e imprima en pantalla todos los números primos entre dos enteros
positivos A y B cualesquiera.*/

int es_Primo(num){
    if (num <= 1){
        return 0;
    }

    for (int i = 2; i <= n/2, i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

void imprimir_primos (a,b){

    for (int i = a, i <= b, i++){
        printf("Los primos entre %d y %d: \n", a,b);
        if (es_Primo(i)){
            printf("%d\n", i);
        }
    }
}

int main() {
    int a,b;
    printf ("Escriba el primer numero: ");
    scanf (%d,&a);
    printf ("Escriba el segundo numero: ");
    scanf (%d, &b);

    imprimir_primos(a,b);


}