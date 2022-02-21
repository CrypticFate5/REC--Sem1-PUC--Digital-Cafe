// Given a  integer, if the player number is prime return 1 otherwise return the smallest divisor greater than 1. Write a function that takes an integer as input and returns an output. Write main function to read the input and call the function.

// Sample Input : 

// 24

// Sample Output :

// 2

// Explanation :

// 24 is not prime. Its divisors are 1,2,3,4,6,8,12,24.

// The smallest divisor greater than 1 is 2.

#include <stdio.h>
int fun(int n){
    int i,flag;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    
        
    }
    if(flag==1){
        return i;
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fun(n));
    return 0;
    
    
}
