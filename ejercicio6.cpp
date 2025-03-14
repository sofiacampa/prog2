#include <stdio.h>

void ordenarArreglo(int arr[], int n, int sortedArr[]){
    for (int i = 0; i < n; i++){
        sortedArr[i] = arr[i];
    }


// Selection Sort
for (int i=0; i < n-1; i++){
    int minIndex = i;
    for (int j = i + 1; j < n; j++){
        if (sortedArr[j] < sortedArr[minIndex]){
            minIndex = j;
        }
    }

    if (minIndex != i){
        int temp = sortedArr[i];
        sortedArr[i]=sortedArr[minIndex];
        sortedArr[minIndex] = temp;
    }
 }
}

void imprimirArreglo (int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int n;

    printf("Ingrese el numero de elementos del arregllo: ");
    scanf("%d", &n);

    int arr[n], sortedArr[n];

    printf("Ingrese los elementos del arreglo:\n");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    ordenarArreglo(arr,n,sortedArr);
    printf("Arreglo ordenado:\n");
    imprimirArreglo(sortedArr,n);

    return 0;
}
