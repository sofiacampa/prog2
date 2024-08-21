#include "../include/fecha.h"

struct rep_fecha {
    nat dia, mes, anio;
};

TFecha crearTFecha(nat dia, nat mes, nat anio) {
    TFecha nuevaFecha = NULL;
    nuevaFecha = new rep_fecha;
    nuevaFecha->dia = dia;
    nuevaFecha->mes = mes;
    nuevaFecha->anio = anio;

    return nuevaFecha;
}

void liberarTFecha(TFecha &fecha) {
    delete fecha;
    fecha = NULL;
}
void imprimirTFecha(TFecha fecha) {
    printf("%d/%d/%d\n",fecha->dia,fecha->mes,fecha->anio);
}

/************ Parte 3.9 ************/
/*Escriba el código a continuación */
/*Recuerde que las funciones auxiliares
  deben declararse antes de ser utilizadas*/

int Bisiesto (nat anio){
    /*Miro que el anio sea divisible entre 4,
    y que si es divisible entre 100 que tambien sea entre 400*/
    return (anio % 4 == 0 && (anio % 100 !=0 || anio % 400 == 0));
}

nat diasMes(nat mes, nat anio){
    nat cant;
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        cant = 31;
    }else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        cant = 30;
    }else if (mes == 2 && Bisiesto(anio)){
        cant = 29;
    } else cant =28;

    return cant;
}

void aumentarTFecha(TFecha &fecha, nat dias) {
    fecha->dia += dias;
    while (fecha->dia > diasMes(fecha->mes, fecha->anio)) {
        fecha->dia -= diasMes(fecha->mes, fecha->anio);
        fecha->mes++;
        if (fecha->mes > 12) {
            fecha->mes = 1;
            fecha->anio++;
            }
            }
}

/****** Fin de parte Parte 3.9 *****/

int compararTFechas(TFecha fecha1, TFecha fecha2) {
    int res = 0;
    if (fecha1->anio > fecha2->anio){
        res = 1;
    }else if (fecha1->anio < fecha2->anio){
        res = -1;
    } else{
        if (fecha1->mes > fecha2->mes){
            res = 1;
            }else if (fecha1-> mes < fecha2->mes){
                res = -1;
                }else{
                    if (fecha1->dia > fecha2->dia){
                        res = 1;
                        }else if (fecha1->dia < fecha2->dia){
                            res = -1;
                        }
                }
    }

    return res;
}

#include "../include/persona.h"

// Define la estructura Persona
struct rep_persona {
    nat cedula;
    char nombre[MAX_NOMBRE];
    char apellido[MAX_APELLIDO];
    TFecha nacimiento;
};

// Función que crea un elemento de tipo TPersona con los valores dados
TPersona crearTPersona(int cedula, const char nombre[MAX_NOMBRE], char apellido[MAX_APELLIDO], TFecha fecha){
    TPersona nuevaPersona = NULL;
    nuevaPersona = new rep_persona;
    nuevaPersona->cedula = cedula;
    strcpy(nuevaPersona->nombre, nombre);
    strcpy(nuevaPersona->apellido, apellido);
    nuevaPersona->nacimiento = fecha;
    return nuevaPersona;
}

// Función que retorna el nombre de la persona
void nombrePersona(TPersona persona, char nombre[MAX_NOMBRE]){
    strcpy(nombre, persona->nombre);
}

// Funcion que retorna el apellido de la persona
void apellidoPersona(TPersona persona, char apellido[MAX_APELLIDO]){
    strcpy(apellido, persona->apellido);
}

// Función que libera la memoria asignada para una persona
// Debe liberar también la memoria de la fecha asociada
void liberarTPersona(TPersona &persona){
    liberarTFecha(persona->nacimiento);
    delete persona;
    persona = NULL;
}

// Función que retorna la cédula de la persona
int cedulaTPersona(TPersona persona){
    int cedula = 0;
	cedula = persona->cedula;
	return cedula;
}

// Función que retorna la fecha de nacimiento de la persona
TFecha fechaNacimientoTPersona(TPersona persona){
    TFecha fecha = NULL;
    fecha = persona->nacimiento;
	return fecha;
}

// Función que imprime la información de la persona en el siguiente formato:
// Persona <nombre> <apellido>
// Cédula: <cedula>
// Fecha de nacimiento: <fecha>
void imprimirTPersona(TPersona persona){
    printf("Persona %s %s\n", persona->nombre, persona ->apellido);
    printf("Cedula: %d\n", persona->cedula);
    printf("Fecha de nacimiento: ");
    imprimirTFecha(persona->nacimiento);
}

// Función que retorna true si persona1 es mas joven que persona2 y false en caso contrario
bool esMasJoven(TPersona persona1, TPersona persona2){
    bool masJoven = false;
	if (compararTFechas(persona1->nacimiento,persona2->nacimiento) == 1){
        masJoven = true;
    }
	return masJoven;
}
#include "../include/grupo.h"

struct rep_grupo {
    TPersona personas[MAX_PERSONAS];
    nat tope;
};

TGrupo crearTGrupo(){
    TGrupo grupo = NULL;
    grupo = new rep_grupo;
    grupo->tope =0; 
    return grupo;
}

// Función para agregar una persona a un grupo
// Recibe un elemento de tipo TGrupo y un elemento de tipo TPersona y lo agrega al grupo en orden por fecha de nacimiento (de menor a mayor)
// Si dos personas tienen la misma fecha de nacimiento, deben ordenarse por orden de ingreso al grupo, de más nuevo a más antiguo
// Si la cantidad de personas en el grupo es igual a MAX_PERSONAS, la función no tiene efecto
void agregarAGrupo(TGrupo& grupo, TPersona persona){
    if (grupo->tope < MAX_PERSONAS){
        return;
        }
        nat i = grupo->tope-1;
        while(i >= 0 && esMasJoven(grupo->personas[i],persona)){
            grupo->personas[i+1] = grupo->personas[i];
            i--;
        }
        grupo->personas[i+1]= persona;
        grupo->tope++;
}

// Función para imprimir todas las personas de un grupo
// Recibe un elemento de tipo TGrupo e imprime sus personas en orden cronológico
// El formato en el que se debe imprimir el grupo es utilizando de forma secuencial la función imprimirTPersona
// Si el grupo está vacío no imprime nada
void imprimirTGrupo(TGrupo grupo){
    if (grupo->tope != 0){
        for (nat i=0; i < grupo->tope; i++){
            imprimirTPersona(grupo->personas[i]);
        }
    }
}

// Función para liberar un grupo
// Recibe una referencia a un elemento de tipo TGrupo y libera su memoria
// Libera además la memoria de cada una de las personas en el grupo
void liberarTGrupo(TGrupo& grupo){
    for(nat i = 0; i < grupo->tope; i++){
        liberarTPersona(grupo->personas[i]);
    }
    delete grupo;
    grupo = NULL;
}

bool estaEnGrupo(TGrupo grupo, int cedula){
    bool esta = false;
    for (nat i = 0; i == grupo->tope -1; i++){
        if (cedulaTPersona(grupo->personas[i]) == cedula);
        esta = true;
    }
	return esta;
}

// Función para verificar si hay, al menos, una persona en el grupo que tenga la fecha de nacimiento "fecha"
// Debe implementarse utilizando búsqueda binaria
bool hayPersonasFecha(TGrupo grupo, TFecha fecha){
    bool hay = false;
    int inicio = 0;
    int fin = grupo->tope -1;
    while (inicio <= fin){
        int medio = inicio + (fin - inicio)/2;
        int comp = compararTFechas(fechaNacimientoTPersona(grupo->personas[medio]),fecha);
        if (comp == 0){
            hay = true;
        } else if (comp< 0){
            inicio = medio +1;
        }else {
            fin = medio -1;
        }
    }
    return hay;
}

// Imprime en pantalla las personas del grupo que tengan la fecha de nacimiento "fecha" 
void imprimirPersonasFecha(TGrupo grupo, TFecha fecha){
    if (hayPersonasFecha(grupo, fecha)){
        for (nat i=0; i < grupo->tope; i++){
            if (compararTFechas(fechaNacimientoTPersona(grupo->personas[i]),fecha) == 0){
               imprimirTPersona(grupo->personas[i]);
            }
        }
    }
}
