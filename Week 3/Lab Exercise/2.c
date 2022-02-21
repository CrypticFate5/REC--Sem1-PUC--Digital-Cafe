// Alice was again playing around with numbers. But this time she has learnt to program in computer (all thanks to your help). Bob in the meanwhile comes to her home and challenges here to add fractions(Explained in the example). Alice being a newbie needs your help in completing the solution to this problem. Will you help her to write the program ?

// Input Format

// One of String : a/b+c/d  where a,b,c,d - integers

// Output Format

// Solution integer.                                 i.e., ad + bc / bd

// Sample input:

// 2/4+4/8

// Sample output:

// 32/32

#include <stdio.h>
int main(){
    int a,b,c,d,num,den;
    scanf("%d/%d+%d/%d",&a,&b,&c,&d);
    num=a*d + b*c;
    den=b*d;
    printf("%d/%d",num,den);
    return 0;
}
