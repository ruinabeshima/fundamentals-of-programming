#include <stdio.h> 

int main(){
    int height; 
    int width; 

    printf("Enter height H: "); 
    scanf("%d", &height); 

    printf("Enter width W: " ); 
    scanf("%d", &width); 

    int input_matrix[height][width]; 
    int output_matrix[width][height]; 

    for (int i = 0; i < height; i ++){
        for (int j = 0; j < width; j ++){
            scanf("%d", &input_matrix[i][j]); 
        }
    }

    for (int i = 0; i < height; i ++){
        for (int j = 0; j < width; j ++){
            output_matrix[j][i] = input_matrix[i][j];
        } 
    }

    for (int i = 0; i < width; i ++){
        for (int j = 0; j < height; j ++){
            printf("%d ", output_matrix[i][j]);
        }
        printf("\n"); 
    }

    return 0; 
}