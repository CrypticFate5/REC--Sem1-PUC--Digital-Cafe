// All of you know better how to reverse a given number! Reversed number is a number written by reversing the order of digits. The first digit becomes last and vice versa.

// For example, if the no is 1234 , the reverse of it will be 4321. Take care of the leading zeros (e.g. 5200 gives 25). It means reversed number never has any trailing zeros.

// You have to find the sum of reverse of two given number and print  it.

// Input 

// The first line contains the two input numbers

// Output 

// For both given input numbers find reverse of it individually and then sum the reversed number. 

// Sample input:

// 23 45

// Sample output:

// 86

// Explanation

// Let num1=23 and num2=45. The reverse of num1 is 32 and num2 reverse is 54. Sum the reversed numbers 32+54=86 and print it.

#include <stdio.h>
int main(){
    int a,b,c,d,rev1=0,rev2=0;
    scanf("%d %d",&a,&b);
    while(a!=0){
        c=a%10;
        rev1=rev1*10 + c;
        a=a/10;
    }
    while(b!=0){
        d=b%10;
        rev2=rev2*10 + d;
        b=b/10;
    }
    printf("%d",rev1+rev2);
}
