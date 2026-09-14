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
    int n = 5;
    printf("=== Registro de Procesos (Total: %d) ===\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nProceso %d:\n", i + 1);
        printf("PID: ");
        scanf("%d", &procesos[i].pid);
        printf("Nombre: ");
        scanf("%19s", procesos[i].nombre);
        printf("Prioridad (1-5): ");
        scanf("%d", &procesos[i].prioridad);
    }
    int idx = buscarMayorPrioridad(procesos, n);
    printf("\nProceso de mayor prioridad:\n");
    printf("PID: %d\n", procesos[idx].pid);
    printf("Nombre: %s\n", procesos[idx].nombre);
    printf("Prioridad: %d\n", procesos[idx].prioridad);
    return 0;
}
