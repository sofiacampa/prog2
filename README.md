void OrdenarGrupo(TGrupo& grupo){
    for (nat i=1; i < grupo->tope; i++){
        TPersona a = grupo->personas[i];
        nat j = i -1;

        while (j>= 0 && compararTFechas(fechaNacimientoTPersona(grupo->personas[j]), fechaNacimientoTPersona(a))>0)  {
            grupo->personas[j+1] = grupo->personas[j];
            j--;
        }
        if (j>= 0 && compararTFechas(fechaNacimientoTPersona(grupo->personas[j]), fechaNacimientoTPersona(a))==0){
            j--;
        }
        grupo->personas[j+1]=a;
    }
}
make t-grupo6-personasfecha-hay-imprimir
Compilando src/grupo.cpp 
Compilando y enlazando principal 
0a1,54
> ==30201== Invalid read of size 8
> ==30201==    at 0x10A387: liberarTFecha(rep_fecha*&) (fecha.cpp:18)
> ==30201==    by 0x10A785: liberarTPersona(rep_persona*&) (persona.cpp:36)
> ==30201==    by 0x10AAF0: liberarTGrupo(rep_grupo*&) (grupo.cpp:60)
> ==30201==    by 0x10A07F: main_liberarGrupo(rep_grupo*&) (principal.cpp:328)
> ==30201==    by 0x1096E1: main (principal.cpp:157)
> ==30201==  Address 0x4e267a0 is 208 bytes inside a block of size 216 free'd
> ==30201==    at 0x484A61D: operator delete(void*, unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
> ==30201==    by 0x10A79E: liberarTPersona(rep_persona*&) (persona.cpp:37)
> ==30201==    by 0x10AAF0: liberarTGrupo(rep_grupo*&) (grupo.cpp:60)
> ==30201==    by 0x10A07F: main_liberarGrupo(rep_grupo*&) (principal.cpp:328)
> ==30201==    by 0x1096E1: main (principal.cpp:157)
> ==30201==  Block was alloc'd at
> ==30201==    at 0x4846FA3: operator new(unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
> ==30201==    by 0x10A6A8: crearTPersona(int, char const*, char*, rep_fecha*) (persona.cpp:14)
> ==30201==    by 0x109B4F: main_crearPersona(rep_persona*&, rep_fecha*&) (principal.cpp:244)
> ==30201==    by 0x1094D7: main (principal.cpp:123)
> ==30201== 
> ==30201== Invalid write of size 8
> ==30201==    at 0x10A3A0: liberarTFecha(rep_fecha*&) (fecha.cpp:19)
> ==30201==    by 0x10A785: liberarTPersona(rep_persona*&) (persona.cpp:36)
> ==30201==    by 0x10AAF0: liberarTGrupo(rep_grupo*&) (grupo.cpp:60)
> ==30201==    by 0x10A07F: main_liberarGrupo(rep_grupo*&) (principal.cpp:328)
> ==30201==    by 0x1096E1: main (principal.cpp:157)
> ==30201==  Address 0x4e267a0 is 208 bytes inside a block of size 216 free'd
> ==30201==    at 0x484A61D: operator delete(void*, unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
> ==30201==    by 0x10A79E: liberarTPersona(rep_persona*&) (persona.cpp:37)
> ==30201==    by 0x10AAF0: liberarTGrupo(rep_grupo*&) (grupo.cpp:60)
> ==30201==    by 0x10A07F: main_liberarGrupo(rep_grupo*&) (principal.cpp:328)
> ==30201==    by 0x1096E1: main (principal.cpp:157)
> ==30201==  Block was alloc'd at
> ==30201==    at 0x4846FA3: operator new(unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
> ==30201==    by 0x10A6A8: crearTPersona(int, char const*, char*, rep_fecha*) (persona.cpp:14)
> ==30201==    by 0x109B4F: main_crearPersona(rep_persona*&, rep_fecha*&) (principal.cpp:244)
> ==30201==    by 0x1094D7: main (principal.cpp:123)
> ==30201== 
> ==30201== Invalid free() / delete / delete[] / realloc()
> ==30201==    at 0x484A61D: operator delete(void*, unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
> ==30201==    by 0x10A79E: liberarTPersona(rep_persona*&) (persona.cpp:37)
> ==30201==    by 0x10AAF0: liberarTGrupo(rep_grupo*&) (grupo.cpp:60)
> ==30201==    by 0x10A07F: main_liberarGrupo(rep_grupo*&) (principal.cpp:328)
> ==30201==    by 0x1096E1: main (principal.cpp:157)
> ==30201==  Address 0x4e266d0 is 0 bytes inside a block of size 216 free'd
> ==30201==    at 0x484A61D: operator delete(void*, unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
> ==30201==    by 0x10A79E: liberarTPersona(rep_persona*&) (persona.cpp:37)
> ==30201==    by 0x10AAF0: liberarTGrupo(rep_grupo*&) (grupo.cpp:60)
> ==30201==    by 0x10A07F: main_liberarGrupo(rep_grupo*&) (principal.cpp:328)
> ==30201==    by 0x1096E1: main (principal.cpp:157)
> ==30201==  Block was alloc'd at
> ==30201==    at 0x4846FA3: operator new(unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
> ==30201==    by 0x10A6A8: crearTPersona(int, char const*, char*, rep_fecha*) (persona.cpp:14)
> ==30201==    by 0x109B4F: main_crearPersona(rep_persona*&, rep_fecha*&) (principal.cpp:244)
> ==30201==    by 0x1094D7: main (principal.cpp:123)
> ==30201== 
21,22c75,76
< Persona Persona1 Apellido1
< Cedula: 1111111
---
> Persona Persona2 Apellido2
> Cedula: 2222222
27,28c81,82
< Persona Persona3 Apellido3
< Cedula: 3333333
---
> Persona Persona4 Apellido4
> Cedula: 4444444
33,34c87,88
< Persona Persona5 Apellido5
< Cedula: 5555555
---
> Persona Persona6 Apellido6
> Cedula: 6666666
37a92,97
> ==30201== 684 (648 direct, 36 indirect) bytes in 3 blocks are definitely lost in loss record 2 of 2
> ==30201==    at 0x4846FA3: operator new(unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
> ==30201==    by 0x10A6A8: crearTPersona(int, char const*, char*, rep_fecha*) (persona.cpp:14)
> ==30201==    by 0x109B4F: main_crearPersona(rep_persona*&, rep_fecha*&) (principal.cpp:244)
> ==30201==    by 0x1094D7: main (principal.cpp:123)
> ==30201== 
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
