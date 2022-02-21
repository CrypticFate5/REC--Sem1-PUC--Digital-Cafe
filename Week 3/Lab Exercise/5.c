// Write a C program to check whether a number is even or odd using switch case statement?

//  Sample Input and output:

// Test case 1:

// Input:

// 4

// Output:

// The given is even number
// For example:

// Input	Result
// 4
// The given is even number
// 7
// The given is odd number


#include <stdio.h>
int main(){
    int n,r;
    scanf("%d",&n);
    r=n%2;
    switch(r){
        case 0:
            printf("The given is even number");
            break;
        case 1:
            printf("The given is odd number");
            break;
    }
    return 0;
    
}
