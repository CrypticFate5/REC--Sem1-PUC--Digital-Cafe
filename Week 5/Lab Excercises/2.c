// Write a program which converts the uppercase characters of a given string into lowercase characters.

// At the time of execution, the program should print the message on the console as:

// ReC
// then the program should print the result as:

// rec


#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char st[1000];
    scanf("%s",st);
    for(int i=0;i<strlen(st);i++){
        if(islower(st[i])==0){
            printf("%c",tolower(st[i]));
        }
        else{
            printf("%c",st[i]);
        }
    }

    return 0;
}
