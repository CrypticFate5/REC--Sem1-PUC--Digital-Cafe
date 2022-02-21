// Problem Statement

// Perfect number is a positive number which sum of all positive divisors excluding that number is equal to that number. For example, 6 is perfect number since divisor of 6 are 1, 2 and 3.  Sum of its divisor is 1 + 2+ 3 = 6). Develop a C program to check whether a number is perfect number or not.

// Sample Test Case

// Input

// 6

// Output

// YES

#include <stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(s==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
