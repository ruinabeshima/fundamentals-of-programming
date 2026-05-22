#include <stdio.h> 
#include <string.h> 

int main(){
    char s[30]; 
    char g[30]; 

    printf("Enter string: "); 
    scanf("%s", s); 
    printf("Enter substring: "); 
    scanf("%s", g); 

    int found = 0;
    for (int i = 0; i < strlen(s) && !found; i++) {
        int match = 1;
        for (int j = 0; j < strlen(g); j++) {
            if (s[i + j] != g[j]) {
                match = 0;
                break;
            }
        }
        if (match) found = 1;
    }

    if (found)
        printf("%s is a substring of %s\n", g, s);
    else
        printf("%s is not a substring of %s\n", g, s);

    return 0; 
}