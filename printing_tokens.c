#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main(){
    char s[1000];
    gets(s);
    int len = strlen(s);
    int start;
    //printf("%s", s);
    for (int i = 0; i < len; i++){
        if (s[i] != ' '){
            start = i;
            break;
        }
    }

    for (int i = start; i < len; i++){
        if (s[i] != ' '){
            printf("%c", s[i]);
        }else if (s[i] == ' ' && s[i-1] != ' '){
            printf("\n");
        }else {
            continue;
        }
    }

    return 0;
}
