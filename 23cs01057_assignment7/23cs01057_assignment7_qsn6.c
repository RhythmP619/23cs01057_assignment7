#include <stdio.h>
#include <string.h>

int main(){
    char s[100], subs[100];

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    if (s[strlen(s) - 1] == '\n') {
        s[strlen(s) - 1] = '\0';
    }

    printf("Enter the substring to be searched: ");
    fgets(subs, sizeof(subs), stdin);

    if (subs[strlen(subs) - 1] == '\n') {
        subs[strlen(subs) - 1] = '\0';
    }

    int ns = strlen(s);
    int nsub = strlen(subs);

    for (int i = 0; i < ns; i++){
        if (strncmp(s + i, subs, nsub) == 0){
            printf("The substring exists in the string.\n");
            return 0;
        }
    }
    printf("The substring does not exist in the string.\n");

    
}