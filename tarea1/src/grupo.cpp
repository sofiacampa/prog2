#include "../include/grupo.h"

struct rep_grupo {
    /************ Parte 5.1 ************/
    /*Escriba el código a continuación */

    /****** Fin de parte Parte 5.1 *****/
};


TGrupo crearTGrupo(){
    TGrupo grupo = NULL;
    /************ Parte 5.2 ************/
    /*Escriba el código a continuación */

    /****** Fin de parte Parte 5.2 *****/
    return grupo;
}

// Función para agregar una persona a un grupo
// Recibe un elemento de tipo TGrupo y un elemento de tipo TPersona y lo agrega al grupo en orden por fecha de nacimiento (de menor a mayor)
// Si dos personas tienen la misma fecha de nacimiento, deben ordenarse por orden de ingreso al grupo, de más nuevo a más antiguo
// Si la cantidad de personas en el grupo es igual a MAX_PERSONAS, la función no tiene efecto
void agregarAGrupo(TGrupo& grupo, TPersona persona){
    /************ Parte 5.2 ************/
    /*Escriba el código a continuación */

    /****** Fin de parte Parte 5.2 *****/
}

// Función para imprimir todas las personas de un grupo
// Recibe un elemento de tipo TGrupo e imprime sus personas en orden cronológico
// El formato en el que se debe imprimir el grupo es utilizando de forma secuencial la función imprimirTPersona
// Si el grupo está vacío no imprime nada
void imprimirTGrupo(TGrupo grupo){
    /************ Parte 5.2 ************/
    /*Escriba el código a continuación */

    /****** Fin de parte Parte 5.2 *****/
}

// Función para liberar un grupo
// Recibe una referencia a un elemento de tipo TGrupo y libera su memoria
// Libera además la memoria de cada una de las personas en el grupo
void liberarTGrupo(TGrupo& grupo){
   /************ Parte 5.2 ************/
    /*Escriba el código a continuación */

    /****** Fin de parte Parte 5.2 *****/
}

// Función para verificar si un elemento de tipo TPersona existe en un grupo
// Recibe un grupo y la cédula de la persona y regresa un booleano indicando su existencia
bool estaEnGrupo(TGrupo grupo, int cedula){
    bool esta = false;
	/************ Parte 5.3 ************/
    /*Escriba el código a continuación */

    /****** Fin de parte Parte 5.3 *****/
	return esta;
}

// Esta función remueve la persona con ci "cedula" del grupo "grupo"
void removerDeGrupo(TGrupo &grupo, int cedula){
    /************ Parte 5.4 ************/
    /*Escriba el código a continuación */

    /****** Fin de parte Parte 5.4 *****/   
}

// Función para verificar si hay, al menos, una persona en el grupo que tenga la fecha de nacimiento "fecha"
// Debe implementarse utilizando búsqueda binaria
bool hayPersonasFecha(TGrupo grupo, TFecha fecha){
    bool hay = false;
    /************ Parte 5.5 ************/
    /*Escriba el código a continuación */

    /****** Fin de parte Parte 5.5 *****/ 
    return hay;
}

src/grupo.cpp: In function ‘void agregarAGrupo(rep_grupo*&, TPersona)’:
src/grupo.cpp:22:72: error: cannot convert ‘rep_persona**’ to ‘TPersona’ {aka ‘rep_persona*’}
   22 | le(i >= 0 && compararTFechas(fechaNacimientoTPersona(grupo->personas), fechaNacimientoTPersona(persona)) > 0){
      |                                                      ~~~~~~~^~~~~~~~
      |                                                             |
      |                                                             rep_persona**

In file included from src/../include/grupo.h:12,
                 from src/grupo.cpp:1:
src/../include/persona.h:40:41: note:   initializing argument 1 of ‘rep_fecha* fechaNacimientoTPersona(TPersona)’
   40 | TFecha fechaNacimientoTPersona(TPersona persona);
      |                                ~~~~~~~~~^~~~~~~

	      void agregarAGrupo(TGrupo& grupo, TPersona persona){
    if (grupo->tope < MAX_PERSONAS){
        nat i = grupo->tope-1;
        while(i >= 0 && compararTFechas(fechaNacimientoTPersona(grupo->personas), fechaNacimientoTPersona(persona)) > 0){
            grupo->personas[i+1] = grupo->personas[i];
            i--;
        }
        grupo->personas[i+1]= persona;
        grupo->tope++;

    }
}
