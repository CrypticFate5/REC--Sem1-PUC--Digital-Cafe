// Write a program to count total number of uppercase and lowercase characters from the accepted string.
// For example, if the user gives the input as:

// REC Thandalam
// then the program should print the result as:

// 4
// 8


#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char st[1000];
    // scanf("%s",st);
    scanf("%[^\n]",st);
    int up=0,low=0;
    for(int i=0;i<strlen(st);i++){
        if(st[i]>='A'&&st[i]<='Z'){
            up++;
        }
        else if(st[i]>='a'&&st[i]<='z'){
            low++;
        }

    }
    printf("%d\n",up);
    printf("%d",low);
}
