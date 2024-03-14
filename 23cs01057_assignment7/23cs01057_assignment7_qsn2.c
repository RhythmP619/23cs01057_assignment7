#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("Input: ");
    scanf("%s", s);

    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            printf("%c", s[i]);
        }
    }
    printf("\n");
    
}