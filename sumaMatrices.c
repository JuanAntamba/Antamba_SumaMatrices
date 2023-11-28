#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int filas, columnas;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    srand(time(NULL));

    int matrizA[filas][columnas];
    int matrizB[filas][columnas];
    int matrizC[filas][columnas];

    printf("Matriz A:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizA[i][j] = rand() % 100 + 1;
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
