#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int freq[26] = {0};
    char s[100];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; i < strlen(s); i++){
        freq[tolower(s[i]) - 'a']++;
    }
    printf("Enter a character: ");
    char c; scanf(" %c", &c);
    
    printf("The frequency of %c is %d\n", c, freq[tolower(c) - 'a']);
    
}