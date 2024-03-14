#include <stdio.h>
#include <string.h>

void swap(char *x, char *y){
    char temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(char *s, int start, int end){
    if (start >= end){
        return;
    }
    swap(&s[start], &s[end]);
    reverse(s, start + 1, end - 1);
}

int main(){
    char s[100];
    printf("Input: ");
    fgets(s, sizeof(s), stdin);

    if (s[strlen(s) - 1] == '\n') {
        s[strlen(s) - 1] = '\0';
    }

    int n = strlen(s);

    printf("Output: ");

    reverse(s, 0, n - 1);

    for (int i = 0; i < n; i++){
        printf("%c", s[i]);
    }
    printf("\n");
    
}