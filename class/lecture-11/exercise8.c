#include <stdio.h> 

void change(int *x, int y){
    int t; 
    t = *x; 
    *x = y; 
    y = t;
}

int main(){
    int a = 3, b = 5; 
    change(&a, b); 
    printf("%d %d \n", a, b); 
}