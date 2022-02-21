// Write a C Program to calculates the area and circumference(floating point number with two decimal places) of a Circle given its radius (integer value).  The value of Pi is 3.14.

// Sample Test Cases

// Test Case 1

// Input

// 7

// Output

// Area of a circle = 153.86

// Circumference of a circle = 43.96

#include <stdio.h>
int main(){
    float area,r,cirm;
    scanf("%f",&r);
    area=3.14*r*r;
    cirm=2*3.14*r;
    printf("%.2f\n",area);
    printf("%.2f",cirm);
    return 0;
}
