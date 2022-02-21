// A triangle can be classiﬁed based on the lengths of its sides as equilateral, isosceles or scalene. All three sides of an equilateral triangle have the same length. An isosceles triangle has two sides that are the same length, and a third side that is a different length. If all of the sides have different lengths then the triangle is scalene.

//  Write a program that reads the lengths of the three sides of a triangle from the user. Then display a message that states the triangle’s type.

//  Hint: Use Ternary Operator


// For example:

// Input	Result
// 10.0
// 10.0
// 10.0
// Equilateral

#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a==b && b==c && c==a){
        printf("Equilateral");
    }
    else if(a==b || b==c || c==a){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
    
}
