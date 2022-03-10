// In London, every year during dasara there will be a very grand doll show. People try to invent new dolls of different varieties. The best sold doll's creator will be awarded with cash prize. So people broke their head to create dolls innovatively. Knowing this competition, Mr.Lokpaul tried to create a doll which sings only when an even number is pressed and the number should be not be zero and greater than 100.

//  So write a program to help Mr. Lokpaul to win.


// Input Format: 

// Input Consists of Single Integer which Corresponds to Number pressed by the user to the doll.

// Output Format: 

//  Display whether the doll will Sing or not. Output consists of the string "Doll will sing" or "Invalid number".


// For example:

// Input	Result
// 56
// Doll will sing



#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%2==0 && x!=0 && x<=100){
        printf("Doll will sing");
    }
    else{
        printf("Invalid number");
    }
return 0;
    
}
