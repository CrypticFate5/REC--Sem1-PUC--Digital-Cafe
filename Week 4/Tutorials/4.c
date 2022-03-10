// Problem Statement

// There are two Nordic tribes who do exact opposite of each other in most of the things in their day to day activities. If you give a piece of paper and write a number say 234, tribe A will read it as two hundred and thirty four and tribe B will read it exact opposite 432 ie. four hundred and thirty two. To convey message properly, you can develop a C program to convert the given number such that both tribe people will understand properly.

// Input Format

// The first line contains an integer n

// Output Format

// The output is the reverse of the integer n

// Constraints

// 1<n<1000

// Sample Input

// 234

// Sample Output

// 432


#include <stdio.h>
int main(){
    int n,r,a=0;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        a=a*10 + r;
        n=n/10;
    }
    printf("%d",a);
}
