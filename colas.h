#define MAX 5

typedef struct estrucutura_colas {
    int contenido[MAX];
    int final;
    int frente;
} Cola;

typedef Cola* apCola;

Cola crearCola();
int cola_llena(Cola);
int cola_vacia(Cola);
int insertar(int, apCola);
int atender(apCola);









