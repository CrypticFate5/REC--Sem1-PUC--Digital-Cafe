// Write a program to check whether the given character is a vowel, a consonant or not a

// letter.(nested if )

// Sample Input and Output:

// Input :

//  E

// Output:

// vowel


#include <stdio.h>
int main(){
    char x;
    scanf("%s",&x);
    if(((x>=65) && (x<=90)) || ((x>=97) && (x<=122))){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
            printf("vowel");
        }
        else{
            printf("consonant");
        }
    }
    else{
        printf("not a letter");
    }
}
