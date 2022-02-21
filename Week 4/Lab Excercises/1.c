// Problem Statement

// The Fibonacci sequence is a series of numbers where a number is found by adding up the two numbers before it.

// The first two numbers in the Fibonacci sequence are 0 and 1, and each subsequent number is the sum of the previous two.

// Input Format: The first line of the input contains an integer n denoting the number of elements to be printed in the series.

// Output Format: The output is a series of integers as defined above.

// Constraint:1 <= n <= 100

// Sample Input

// 7

// Sample Output

// 0 1 1 2 3 5 8

#include <stdio.h>
int main(){
    int n,a=0,b=1,c;
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(int i=2;i<n;i++){
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}
