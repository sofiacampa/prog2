void agregarAGrupo(TGrupo& grupo, TPersona persona){
    if (grupo->tope < MAX_PERSONAS){
        nat i = grupo->tope-1;
        while(i >= 0 && esMasJoven(grupo->personas[i],persona)){
            grupo->personas[i+1] = grupo->personas[i];
            i--;
        }
        grupo->personas[i+1]= persona;
        grupo->tope++;

    }
}
