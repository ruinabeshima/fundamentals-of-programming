#include <stdio.h> 

int main(){
    int count; 
    printf("Enter number of frame sizes: "); 
    scanf("%d", &count); 

    int frames[count]; 
    for (int i = 0; i < count; i++){
        scanf("%d", &frames[i]); 
    }

    for (int j = count - 1; j >= 0; j--){
        printf("%d ", frames[j]); 
    }
    printf("\n"); 

    return 0; 
}

