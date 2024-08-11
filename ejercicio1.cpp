int PromClase(int cal1, int cal2, int cal3, int cal4, int cal5) {
    int calificaciones[5] = {cal1,cal2,cal3,cal4,cal5};
    int suma = cal1 + cal2 + cal3 + cal4 + cal5;


    //encontrar calificacion mas baja 

    int min = calificaciones[0];

    for (int i = 1; i<5; i++){
        if (calificaciones[i] < min) {
            min = calificaciones[i];
        }
    }

    // restar la calificacion mas baja
    suma = suma - min;


    return suma / 4;

}

int main() {
    int cal1, cal2, cal3, cal4, cal5;

    printf("Ingresar las 5 calificaciones obtenidas:\n");
    scanf("%d,%d,%d,%d,%d", &cal1,&cal2,&cal3,&cal4,&cal5);


    int promedio = PromClase(cal1, cal2, cal3, cal4, cal5);

    printf("El promedio es:%d\n",promedio);
}

