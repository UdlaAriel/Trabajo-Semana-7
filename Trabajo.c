#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;

    printf("Ingrese el número de x de la matriz: ");
    scanf("%d", &x);
    printf("Ingrese el número de y de la matriz: ");
    scanf("%d", &y);

    // Crear la matriz
    int matriz[x][y];

    // Inicializar la matriz con ceros
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            matriz[i][j] = 0;
        }
    }

    // Establecer la diagonal principal en 1
    for (int i = 0; i < x; i++) {
        matriz[i][i] = 1;
    }

    // Imprimir la matriz
    printf("Matriz resultante:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}