#include <stdio.h> 

int main(){
    int matrixA[2][2]; 
    int matrixB[2][2]; 
    int product[2][2]; 

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &matrixA[i][j]); 
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &matrixB[i][j]); 
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
        printf("%d %d\n", product[i][0], product[i][1]);

    return 0;
}