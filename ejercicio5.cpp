#include <stdio.h>
#include <stdlib.h>

typedef struct rep_punto {
    int coordX , coordY ;
    } Punto ;
    
    
typedef struct rep_colPuntos {
    int capacidad ;
    int cantidad ;
    Punto * arregloPuntos ;
    } ColPuntos ;

    void insertarPunto(ColPuntos& colPtos, Punto pto){
    if (colPtos.cantidad < colPtos.capacidad){
        colPtos.arregloPuntos[colPtos.cantidad] = pto;
        colPtos.cantidad++;
    }
}

int Valor(const ColPuntos& colPtos){
    int menorX = colPtos.arregloPuntos[0].coordX;
    for (int i=1; i < colPtos.cantidad; i++){
        if (colPtos.arregloPuntos[i].coordX < menorX){
            menorX = colPtos.arregloPuntos[i].coordX;
        }
    }
    return menorX;
}

Punto PtoMedio(Punto p1, Punto p2){
    Punto medio;
    medio.coordX = (p1.coordX + p2.coordX) / 2;
    medio.coordY = (p1.coordY + p2.coordY) /2;
    return medio;
}

// Función para imprimir la colección de puntos
void imprimirColPuntos(const ColPuntos& colPtos) {
    printf("Colección de Puntos:\n");
    for (int i = 0; i < colPtos.cantidad; i++) {
        printf("(%d, %d)\n", colPtos.arregloPuntos[i].coordX, colPtos.arregloPuntos[i].coordY);
    }
}

int main() {
    int capacidad = 5;
    ColPuntos colPtos;
    colPtos.capacidad = capacidad;
    colPtos.cantidad = 0;
    colPtos.arregloPuntos = (Punto*)malloc(capacidad * sizeof(Punto));

    // Prueba de inserción de puntos
    insertarPunto(colPtos, {3, 2});
    insertarPunto(colPtos, {1, 4});
    insertarPunto(colPtos, {5, 6});
    insertarPunto(colPtos, {0, 8});
    insertarPunto(colPtos, {7, 1});
    
    printf("Después de insertar puntos:\n");
    imprimirColPuntos(colPtos);

    // Prueba de menor coordenada X
    int menorX = Valor(colPtos);
    printf("Menor coordenada x: %d\n", menorX);

    // Prueba de punto medio
    Punto p1 = {2, 4}, p2 = {6, 8};
    Punto medio = PtoMedio(p1, p2);
    printf("Punto medio entre (%d, %d) y (%d, %d): (%d, %d)\n",
           p1.coordX, p1.coordY, p2.coordX, p2.coordY, medio.coordX, medio.coordY);

    // Liberamos la memoria
    free(colPtos.arregloPuntos);

    return 0;
}