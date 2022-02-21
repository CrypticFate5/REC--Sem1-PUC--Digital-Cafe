// Write a program to remove special characters and numbers in the input string.

 

// Assume Max length of string is 100. 

// Sample Input and Output:

// He02l;l#oW-@or$l9d99

// HelloWorld

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char st[100];
    scanf("%s",st);
    for(int i=0;i<strlen(st);i++){
        if(isalpha(st[i])!=0){
            printf("%c",st[i]);
        }
    
    }
}
