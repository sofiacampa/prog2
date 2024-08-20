sofia@sofifi:~/Desktop/Entrega1/tarea1$ make t-grupo2-agregar-imprimir
Compilando src/grupo.cpp 
Compilando y enlazando principal 
4,7c4
< 5>Persona John Doe
< Cedula: 1234567
< Fecha de nacimiento: 22/3/2024
< 6>Se ha borrado el grupo en forma exitosa.
---
> 5>6>Se ha borrado el grupo en forma exitosa.
8a6,11
> ==10656== 228 (216 direct, 12 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 2
> ==10656==    at 0x4846FA3: operator new(unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
> ==10656==    by 0x10A6A8: crearTPersona(int, char const*, char*, rep_fecha*) (persona.cpp:14)
> ==10656==    by 0x109B4F: main_crearPersona(rep_persona*&, rep_fecha*&) (principal.cpp:244)
> ==10656==    by 0x1094D7: main (principal.cpp:123)
> ==10656== 
sofia@sofifi:~
