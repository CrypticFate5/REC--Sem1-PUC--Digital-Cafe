// Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.

// Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result!

// Hint:

// Use round() function to round of a number to its nearest integer.round() function is a build in function present in math.h

// Eg:round(4.4)=4



// Input Format

// There are  lines of numeric input:
// The first line has a double,  (the cost of the meal before tax and tip).
// The second line has an integer,  (the percentage of  being added as tip).
// The third line has an integer,  (the percentage of  being added as tax).

// Output Format

// Print the total meal cost, where  is the rounded integer result of the entire bill ( with added tax and tip).


// For example:

// Input	Result
// 12.00
// 20
// 8
// 15

#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,tip,tax;
    int total;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    tip=a*b/100;
    tax=a*c/100;
    total=round(a+tip+tax);
    printf("%d",total);
    return 0;
    
}
