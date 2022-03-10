// Problem Statement

// A prime is a natural number greater than that has no positive divisors other than and itself. Given a number n, determine and print whether it’s prime number or not.

// Input Format

// The first line contains an integer  n, that is to be tested for primality.

// Constraints

// 1<=n<=1000

// Output Format

// Print whether integer is an Prime or Not prime.

// Sample Input 1

// 12
// Sample Output 1
// Not prime
// Sample Input 2
// 5
// Sample Output 2
// Prime



#include <stdio.h>
#include <math.h>
int main(){
    int n,flag;
    scanf("%d",&n);
    for(int i=2;i<=pow(n,0.5);i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
}
