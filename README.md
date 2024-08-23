sofia@sofifi:~/Desktop/Entrega1/tarea1$ make t-grupo6-personasfecha-hay-imprimir
Compilando src/grupo.cpp 
Compilando y enlazando principal 
1,37c1,20
< 1>El grupo ha sido creado de forma exitosa.
< 2>3>Persona creada de forma exitosa.
< 4>Se ha agregado la persona al grupo de forma exitosa.
< 5>6>Persona creada de forma exitosa.
< 7>Se ha agregado la persona al grupo de forma exitosa.
< 8>9>Persona creada de forma exitosa.
< 10>Se ha agregado la persona al grupo de forma exitosa.
< 11>12>Persona creada de forma exitosa.
< 13>Se ha agregado la persona al grupo de forma exitosa.
< 14>15>Persona creada de forma exitosa.
< 16>Se ha agregado la persona al grupo de forma exitosa.
< 17>18>Persona creada de forma exitosa.
< 19>Se ha agregado la persona al grupo de forma exitosa.
< 20>Se encontraron personas en la fecha determinada.
< 21>Se encontraron personas en la fecha determinada.
< 22>Se encontraron personas en la fecha determinada.
< 23>No se encontraron personas en la fecha determinada.
< 24>Persona Persona2 Apellido2
< Cedula: 2222222
< Fecha de nacimiento: 1/1/2001
< Persona Persona1 Apellido1
< Cedula: 1111111
< Fecha de nacimiento: 1/1/2001
< 25>Persona Persona4 Apellido4
< Cedula: 4444444
< Fecha de nacimiento: 1/1/2002
< Persona Persona3 Apellido3
< Cedula: 3333333
< Fecha de nacimiento: 1/1/2002
< 26>Persona Persona6 Apellido6
< Cedula: 6666666
< Fecha de nacimiento: 1/1/2003
< Persona Persona5 Apellido5
< Cedula: 5555555
< Fecha de nacimiento: 1/1/2003
< 27>28>Se ha borrado el grupo en forma exitosa.
< 29>Fin.
---
> ==28478== Invalid read of size 8
> ==28478==    at 0x10A9AD: OrdenarGrupo(rep_grupo*&) (grupo.cpp:23)
> ==28478==    by 0x10AA6B: agregarAGrupo(rep_grupo*&, rep_persona*) (grupo.cpp:39)
> ==28478==    by 0x109FEC: main_agregarAGrupo(rep_grupo*&, rep_persona*&) (principal.cpp:316)
> ==28478==    by 0x109674: main (principal.cpp:151)
> ==28478==  Address 0x804e260f8 is not stack'd, malloc'd or (recently) free'd
> ==28478== 
> ==28478== 
> ==28478== Process terminating with default action of signal 11 (SIGSEGV)
> ==28478==  Access not within mapped region at address 0x804E260F8
> ==28478==    at 0x10A9AD: OrdenarGrupo(rep_grupo*&) (grupo.cpp:23)
> ==28478==    by 0x10AA6B: agregarAGrupo(rep_grupo*&, rep_persona*) (grupo.cpp:39)
> ==28478==    by 0x109FEC: main_agregarAGrupo(rep_grupo*&, rep_persona*&) (principal.cpp:316)
> ==28478==    by 0x109674: main (principal.cpp:151)
> ==28478==  If you believe this happened as a result of a stack
> ==28478==  overflow in your program's main thread (unlikely but
> ==28478==  possible), you can try to increase the size of the
> ==28478==  main thread stack using the --main-stacksize= flag.
> ==28478==  The main thread stack size used in this run was 8388608.
> timeout: the monitored command dumped core
sofia@sofifi:~/Desktop/Entrega1/tarea1$ make testing
timeout 4 valgrind -q --leak-check=full ./principal < test/fecha1-crear-imprimir-liberar.in > test/salidas/fecha1-crear-imprimir-liberar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/fecha2-aumentar.in > test/salidas/fecha2-aumentar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/fecha3-comparar.in > test/salidas/fecha3-comparar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/fecha4-combinado.in > test/salidas/fecha4-combinado.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona1-crear-imprimirnombre-liberar.in > test/salidas/persona1-crear-imprimirnombre-liberar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona2-imprimirci.in > test/salidas/persona2-imprimirci.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona3-imprimirfecha.in > test/salidas/persona3-imprimirfecha.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona4-imprimirpersona.in > test/salidas/persona4-imprimirpersona.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona5-esmasjovenpersona.in > test/salidas/persona5-esmasjovenpersona.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona6-esmasviejapersona.in > test/salidas/persona6-esmasviejapersona.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo1-crear-liberar.in > test/salidas/grupo1-crear-liberar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo2-agregar-imprimir.in > test/salidas/grupo2-agregar-imprimir.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo3-agregarvarios-imprimir.in > test/salidas/grupo3-agregarvarios-imprimir.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo4-buscar.in > test/salidas/grupo4-buscar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo5-remover.in > test/salidas/grupo5-remover.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo6-personasfecha-hay-imprimir.in > test/salidas/grupo6-personasfecha-hay-imprimir.sal 2>&1
make: [Makefile:116: test/salidas/grupo6-personasfecha-hay-imprimir.sal] Error 139 (ignored)
---- ERROR en caso test/salidas/grupo6-personasfecha-hay-imprimir.diff ----
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo7-combinado.in > test/salidas/grupo7-combinado.sal 2>&1
make: [Makefile:116: test/salidas/grupo7-combinado.sal] Error 139 (ignored)
---- ERROR en caso test/salidas/grupo7-combinado.diff ----
-- CASOS CON ERRORES --
grupo6-personasfecha-hay-imprimir
grupo7-combinado
-- RESULTADO DE CADA CASO --
11111111111111100
sofia@sofifi:~/Desktop/Entrega1/tarea1$ 






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
    if (grupo->tope >= MAX_PERSONAS){
        return;
        }
        int i = grupo->tope-1;
        while(i >= 0 && compararTFechas(fechaNacimientoTPersona(grupo->personas[i]), fechaNacimientoTPersona(persona))> 0){
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


// Función para verificar si un elemento de tipo TPersona existe en un grupo
// Recibe un grupo y la cédula de la persona y regresa un booleano indicando su existencia
bool estaEnGrupo(TGrupo grupo, int cedula){
    bool esta = false;
    for (nat i = 0; i < grupo->tope; i++){
        if (cedulaTPersona(grupo->personas[i]) == cedula){
        esta = true;
        }
    }
	return esta;
}

// Esta función remueve la persona con ci "cedula" del grupo "grupo"
void removerDeGrupo(TGrupo &grupo, int cedula){
    if (!estaEnGrupo(grupo,cedula)){
        return;
        }
        
        nat indice = grupo->tope;
        for (nat i = 0; i < grupo-> tope; i++){
            if (cedulaTPersona(grupo->personas[i]) == cedula){
               indice = i;
            }
        }
        if (indice < grupo->tope){
        liberarTPersona(grupo->personas[indice]);
        for (nat i =indice; i < grupo->tope - 1; i++){
            grupo->personas[i]= grupo->personas[i+1];
        }
        }
        
        grupo->tope--;
     
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
            break;
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
    for (nat i=0; i < grupo->tope; i++){
        if (compararTFechas(fechaNacimientoTPersona(grupo->personas[i]),fecha) == 0){
               imprimirTPersona(grupo->personas[i]);
        }
    }
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
    if (persona != NULL){
        liberarTFecha(persona->nacimiento);
    delete persona;
    persona = NULL;
}
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
	if (compararTFechas(persona1->nacimiento,persona2->nacimiento) >0){
        masJoven = true;
    }
	return masJoven;
}

ake t-grupo6-personasfecha-hay-imprimir
18,21c18
< 24>Persona Persona2 Apellido2
< Cedula: 2222222
< Fecha de nacimiento: 1/1/2001
< Persona Persona1 Apellido1
---
> 24>Persona Persona1 Apellido1
24,27c21,24
< 25>Persona Persona4 Apellido4
< Cedula: 4444444
< Fecha de nacimiento: 1/1/2002
< Persona Persona3 Apellido3
---
> Persona Persona2 Apellido2
> Cedula: 2222222
> Fecha de nacimiento: 1/1/2001
> 25>Persona Persona3 Apellido3
30,33c27,30
< 26>Persona Persona6 Apellido6
< Cedula: 6666666
< Fecha de nacimiento: 1/1/2003
< Persona Persona5 Apellido5
---
> Persona Persona4 Apellido4
> Cedula: 4444444
> Fecha de nacimiento: 1/1/2002
> 26>Persona Persona5 Apellido5
34a32,34
> Fecha de nacimiento: 1/1/2003
> Persona Persona6 Apellido6
> Cedula: 6666666
sofia@sofifi:~/Desktop/Entrega1/tarea1$ make testing
timeout 4 valgrind -q --leak-check=full ./principal < test/fecha1-crear-imprimir-liberar.in > test/salidas/fecha1-crear-imprimir-liberar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/fecha2-aumentar.in > test/salidas/fecha2-aumentar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/fecha3-comparar.in > test/salidas/fecha3-comparar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/fecha4-combinado.in > test/salidas/fecha4-combinado.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona1-crear-imprimirnombre-liberar.in > test/salidas/persona1-crear-imprimirnombre-liberar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona2-imprimirci.in > test/salidas/persona2-imprimirci.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona3-imprimirfecha.in > test/salidas/persona3-imprimirfecha.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona4-imprimirpersona.in > test/salidas/persona4-imprimirpersona.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona5-esmasjovenpersona.in > test/salidas/persona5-esmasjovenpersona.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/persona6-esmasviejapersona.in > test/salidas/persona6-esmasviejapersona.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo1-crear-liberar.in > test/salidas/grupo1-crear-liberar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo2-agregar-imprimir.in > test/salidas/grupo2-agregar-imprimir.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo3-agregarvarios-imprimir.in > test/salidas/grupo3-agregarvarios-imprimir.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo4-buscar.in > test/salidas/grupo4-buscar.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo5-remover.in > test/salidas/grupo5-remover.sal 2>&1
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo6-personasfecha-hay-imprimir.in > test/salidas/grupo6-personasfecha-hay-imprimir.sal 2>&1
---- ERROR en caso test/salidas/grupo6-personasfecha-hay-imprimir.diff ----
timeout 4 valgrind -q --leak-check=full ./principal < test/grupo7-combinado.in > test/salidas/grupo7-combinado.sal 2>&1
---- ERROR en caso test/salidas/grupo7-combinado.diff ----
-- CASOS CON ERRORES --
grupo6-personasfecha-hay-imprimir
grupo7-combinado
-- RESULTADO DE CADA CASO --
11111111111111100
