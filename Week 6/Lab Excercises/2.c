// Consider the following sequence 

// 1st term : 1

// 2nd term : 121

// 3rd term : 1213121

// 4th term : 121312141213121

// And so on. 

// Write a recursive function that takes an integer n and prints the nth term of this sequence. Write main function to read the input and call the function.

// Sample Input :

// 2

// Sample Output :

// 121

#include <stdio.h>
void seq(int n){
    if(n!=0){
        seq(n-1);
        printf("%d",n);
        seq(n-1);
    }
    else{
        return ;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    seq(n);
    return 0;
}
