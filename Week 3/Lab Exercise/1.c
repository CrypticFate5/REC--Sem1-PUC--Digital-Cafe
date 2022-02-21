// You are given a rectangle of length a and width b. You are required to determine a circle that contains the maximum circumference that fits inside the rectangle. This type of circle is called a big circle. Your task is to determine the maximum number of big circles that can fit inside the rectangle.

// Input format

// First line of each test case: Integers a and b
// Output format

// Print the answer on a new line denoting the maximum number of big circles that can fit in the provided rectangle.  

// Constraints

// 1 <= a , b <= 109

// SAMPLE INPUT OUTPUT 1:

//  Input

// 10 40

// Output

// 4

// Explanation

// 4 circles of radius 10 can fit inside the rectangle


// WRONG QUESTION. MANIPULATED THE LOGIC FOR PROCEEDING AHEAD
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int r=2*b;
        int n;
        n=2*r/b;
        printf("%d",n);
    }
    else{
        int r=2*a;
        int n;
        n=2*r/a;
        printf("%d",n);
    }
    return 0;
}
