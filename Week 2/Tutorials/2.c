// Beautiful Days at the Movies

// Lily likes to play games with integers. She has created a new game where she determines the difference between a number and its reverse. For instance, given the number 12, its reverse is 21. Their difference is 9.Beautiful numbers are defined as numbers where |i – reverse(i)| is  divisible by k. If a day's value is a beautiful number, it is a beautiful day. Print whether the given number is beautiful or not.

// Hint:

// Use the built-in function abs() ,for representing the difference value as positive that is |i-reverse(i)| means difference not subtraction.

// Eg:abs(4-9)=5

// abs() function is  in  the header file stdlib.h


// Input Format

// A single line of two space-separated integers describing the respective values of i, and k.

// (Assume that all input 'i' is a two digit number)

// Constraints:

// 1 <= i, k<= 99

// Output Format:

// Print Yes if the given number is beautiful, otherwise No.


// For example:

// Input	Result
// 20 6
// Yes



#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c,d,e,f;
    scanf("%d %d",&a,&b);
    c=a/10;
    d=a%10;
    e=d*10 + c;
    f=abs(e-a);
    if(f%b==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
