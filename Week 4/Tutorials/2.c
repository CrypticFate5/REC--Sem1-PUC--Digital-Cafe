// The factorial of the integer n, written n!, is defined as:

// n!=n x (n - 1) x (n - 2) x ... x 3 x 2 x 1

// Calculate and print the factorial of a given integer.

// Note: Factorials of n>20 can't be stored even in a 64-bit long long variable.  

// Input Format:

// Input consists of a single integer n

// Constraints:

// 1<=n<=20

// Output Format:

// Print the factorial of n.

// Sample Input

// 4

// Sample Output

// 24

// Explanation:

// 4!=4 x 3 x 2 x 1 = 24


// TRIED THIS BUT HIDDEN CODE DOESN'T WORK.
#include <stdio.h>
int main(){
    int n,fact=1;
    scanf("%d",&n);
    if(n>=1 && n<=20){
    for(int i=1 ;i<=n;i++){
        fact=fact*i;
    }
    }
    else if(n==0){
        printf("%d",1);
    }
    // else{
    //     printf("Error");
    // }
    printf("%d",fact);
    return 0;
}
