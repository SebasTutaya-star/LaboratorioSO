#include <stdio.h>

struct Proceso {
    int pid;
    char nombre[20];
    int prioridad;
};

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
    return 0;
}
