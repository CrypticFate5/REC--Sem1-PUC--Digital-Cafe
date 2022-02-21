// Problem Statement

// Read two integers from STDIN and print the result:

// The first line contains the first integer number read from user.
// The second line contains the second integer input read from user
// The third line and fourth line prints the result of two interchanged values
// Input Format:  The first line contains the first integer number, num1. The second line contains the second integer number, num2.

// Output Format:  Print the result as explained above.





// For example:

// Input

// Result

// 10

// 20

// 20

// 10

#include <stdio.h>
int main(){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("%d\n",n2);
    printf("%d\n",n1);
    return 0;
}
