// Suzie came over to Monk's place today with a box of Monk's favorite cookies! But Monk has to play a game with her in order to win the cookies. Suzie takes out 10 balls from her bag, each ball having an integer on it between 0 to 9. She places all these balls in a box and closes it. The game starts by Monk choosing 2 integers from 0 to 100. It is called as Monk's chosen integers. Post this, Suzie draws 1 ball from the box randomly and notes the integer on it. The rule is simple, Monk wins if monk’s chosen numbers are divisible by the number drawn by suzie. Print “Monk Wins” if monk wins otherwise print “Suzie Wins”

 

// Input:


// The first line consists of   2 integer a and b. 

// The Second Line consists of 1 integer x.

 

// Output:


// if a and b are divisible by x then print “Monk Wins”

// Otherwise “Suzie Wins”

 

// TEST CASE 1:

 

// Input 1:

 

// 78 8

// 7

 

// OUTPUT:

 

// Suzie Wins


#include <stdio.h>
int main(){
    int a,b,x;
    scanf("%d %d",&a,&b);
    scanf("%d",&x);
    if(a%x==0 && b%x==0){
        printf("Monk Wins");
    }
    else{
        printf("Suzie Wins");
    }
}
