#include <stdio.h> 

int main(){
    int i = 5; 
    int j = 10; 
    int *pi = &i; 
    int *pj = &j; 

    printf("i = %d, j = %d \n", i, j); 

    int temp = *pi; 
    *pi = *pj; 
    *pj = temp; 

    printf("i = %d, j = %d \n", i, j); 
}