// Write a C program to find the roots of given quadratic equation.

// The Quadratic equation is of the form ax2+bx+c = 0.

// Input Format: Input consists of 3 integer corresponding to a, b and c respectively.

// Output Format: Print the roots for the equation formed by the given values of a, b, c.


// For example:

// Input	Result
// 1
// 5
// 6
// -2.0
// -3.0


#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,x,y,d;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    d=b*b - 4*a*c;
    x=(-b+pow(d,0.5))/2*a;
    y=(-b-pow(d,0.5))/2*a;
    printf("%.1f\n",x);
    printf("%.1f",y);
    return 0;
}
