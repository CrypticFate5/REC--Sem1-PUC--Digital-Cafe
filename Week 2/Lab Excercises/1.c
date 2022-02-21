// Three numbers form a Pythagorean triple if the sum of squares of two numbers is equal to the square of the third.

//   For example, 3, 4 and5 form a Pythagorean triple, since 3*3 + 4*4 = 25 = 5*5

//  You are given three integers, a, b, and c. They should be given in increasing order. If they form a Pythagorean triple, then print 1, otherwise, print 0.


// For example:

// Input	Result
// 5
// 12
// 13
// 1

#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a*a + b*b == c*c){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}
