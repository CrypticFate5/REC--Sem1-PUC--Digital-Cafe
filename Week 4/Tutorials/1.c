// Problem Statement

// Given an integer n, print its first 10 multiples. Each mutiple n x i (where 1<=i<=10) should be printed on a new line in the form: n x i = result

// Input Format:

// The first line of the input contains an integer n denoting the number whose tables need to be computed

// example  n=3

// Output Format:

// The printout should look like this

// 3 x 1 = 3

// 3 x 2 = 6

// 3 x 3 = 9

// 3 x 4 = 12

// 3 x 5 = 15

// 3 x 6 = 18

// 3 x 7 = 21

// 3 x 8 = 24

// 3 x 9 = 27

// 3 x 10 = 30

// Constraints:

// 2<=n<=20

// Sample Input:

// 2

// Sample Output:

// 2 x 1 = 2

// 2 x 2 = 4

// 2 x 3 = 6

// 2 x 4 = 8

// 2 x 5 = 10

// 2 x 6 = 12

// 2 x 7 = 14

// 2 x 8 = 16

// 2 x 9 = 18

// 2 x 10 = 20


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<11;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
