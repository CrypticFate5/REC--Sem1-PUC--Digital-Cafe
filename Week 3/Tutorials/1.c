// Arpasland has surrounded by attackers. A truck enters the city. The driver claims the load is food and medicine from Iranians. Ali is one of the soldiers in Arpasland. He doubts about the truck, maybe it's from the siege. He knows that a tag is valid if the sum of every two consecutive digits of it is even. Determine if the tag of the truck is valid or not.

// Input Format:

// The first line contains a string of length 8. The format is "DDXDD-DD", where D stands for a digit (non zero) and X is an uppercase english letter.

// Output Format

// Print "valid" (without quotes) if the tag is valid, print "invalid" otherwise (without quotes).

// Sample Input-1:

// 12X34-56

 

// Sample Output-1:

// invalid


// QUESTION SHOULD HAVE INCLUDED THAT THE LETTER SHOULD HAVE NOT BEEN A VOWEL
#include <stdio.h>
int main(){
    char n[8];
    scanf("%s",n);
    if(n[2]!='A'&& n[2]!='E' && n[2]!='I' && n[2]!='O' && n[2]!='U' && (n[0]+n[1])%2==0 && (n[3]+n[4])%2==0 && (
        n[6]+n[7])%2==0){
        printf("valid");
    }
    else{
        printf("invalid");
    }
    return 0;
}
