#include <stdio.h>
#include "colas.h"

int main(){
    int num, vali, resp;
    char opc;
    Cola cola = crearCola();
    apCola dir = &cola;
    printf("Insertar \n");
    do{
        printf("Num: ");
        scanf("%d", &num);
        vali = insertar(num, dir);
        if(vali != 0){
            printf("Exitoso.\n");
        } else {
            printf("No se insesrto.\nCola llena.\n");
        }
        printf("Otro? S/N ");
        scanf("\n%c", &opc);
    }while(opc!='n' && opc != 'N');
    do{
        printf("Atender? S/N ");
        scanf("\n%c", &opc);
        if(opc == 's' || opc == 'S'){
            resp = atender(dir);
        if (resp != 0){
            printf("Num: %d\n", resp);
            } else {
            printf("Pila Vacia.\n");
        }
        }
        
    }while(opc != 'n' && opc!='N');
    return 0;
}
