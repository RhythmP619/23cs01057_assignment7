#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    int n = strlen(s);
    int start = 0, end = n - 1;
    int flag = 1;
    while(start < end){
        if (s[start] != s[end]){
            flag = 0;
            break;
        }  
        start++, end--;
    }

    if (flag){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
}