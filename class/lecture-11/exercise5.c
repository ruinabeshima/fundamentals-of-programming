#include <stdio.h> 


int increment(int *a){
    int b = *a; 
    *a = b + 1; 
    return b; 
}

int main(){
    int i = 3; 
    printf("%d \n", increment(&i)); 
    printf("%d \n", i); 

    while(increment(&i) < 10){
        printf("%d \n", i); 
    }
    printf("i = %d \n", i); 

    return 0; 
}
