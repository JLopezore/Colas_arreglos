#include <stdio.h>
#include "colas.h"
Cola crearCola(){
    Cola nueva;
    nueva.final = -1;
    nueva.frente = -1;
    return nueva;
}
int cola_llena(Cola cola){
    if((cola.final+1) % MAX == cola.frente){
        return 1;
    } else {
        return 0;
    }
}

int cola_vacia(Cola cola){
    if(cola.frente == cola.final){
        return 1;
    } else {
        return 0;
    }
}

int insertar(int num, apCola cola){
    if(cola_llena(*cola) != 1){
        cola->contenido[cola->final - 1] = num;
        cola->final ++;
        if(cola->frente == -1 )
            cola->frente ++;
        return 1;
    } else {
        return 0;
    }
}

int atender (apCola cola){
    if(cola_vacia(*cola)!=1){
        cola->frente++;
        return cola->frente;
    } else {
        return 0;
    }
}
