// Write a program that asks a user for their birth year encoded as two digits (like "62") and for the current year, also encoded as two digits (like "99"). The program is to correctly write out the users age in years.

// Input Format:

// Input consists of 2 integers. The first integer corresponds to the last 2 digits of the birth year. The second integer corresponds to the last 2 digits of the current year.

// Output Format: 

// Refer sample input and output for further formatting specifications. 
// For example:

// Input	Result
// 62
// 99
// 37
// 62
// 00
// 38


#include <stdio.h>
#include <stdlib.h>
int main(){
    int doy,cy,age;
    scanf("%d",&doy);
    scanf("%d",&cy);
    if(cy>doy){
        age=cy-doy;
    }
    else{
        age=cy-doy +100;
    }
    printf("%d",age);
    return 0;
}
