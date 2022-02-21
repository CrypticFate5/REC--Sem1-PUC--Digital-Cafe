// The students in a particular college were given the task to purchase the rope for highlighting the boundary of their football ground. They didn’t know how many feet rope need to be purchased. Could you help these students by writing a C program having preprocessor macros with arguments to compute the circumference of the football ground that will help them in purchasing the rope.

//  Input Format :  The first line contains an integer a that denotes the length of the football ground. The second line contains the integer b that denotes the width.

//  Output Format : The output should print the circumference of the football ground in integer. 

//  Sample Input

// 20

// 40

// Sample Output

// Circumference is 120

#include <stdio.h>
#define circum(a,b) (2*a + 2*b)
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Circumference is %d",circum(a,b));
}
