#include <stdio.h>
#include <stdbool.h> 

int main(){

    int n; 
    printf("Enter number of frame sizes for array a: "); 
    scanf("%d", &n); 
    int a[n]; 
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]); 
    }

    int m; 
    printf("Enter number of frame sizes for array b: "); 
    scanf("%d", &m); 
    int b[m]; 
    for (int i = 0; i < m; i++){
        scanf("%d", &b[i]); 
    }

    bool isSubset = true; 
    for (int i = 0; i < m; i++){
        bool found = false; 
        for (int j = 0; j < n; j ++){
            if (b[i] == a[j]){
                found = true; 
                break; 
            }
        }
        if (!found){
            isSubset = false; 
            break; 
        }
    }

    if (isSubset){
        printf("Yes \n"); 
    } else {
        printf("No \n"); 
    }

    return 0; 
}