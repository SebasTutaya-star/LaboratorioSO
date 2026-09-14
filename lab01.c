#include <stdio.h>

struct Proceso {
    int pid;
    char nombre[20];
    int prioridad;
};

int buscarMayorPrioridad(struct Proceso *procesos, int n) {
    int mejor_idx = 0;
    for (int i = 1; i < n; i++) {
        if ((procesos + i)->prioridad < (procesos + mejor_idx)->prioridad) {
            mejor_idx = i;
        }
    }
    return mejor_idx;
}

int main() {
    struct Proceso procesos[5];
    return 0;
}
