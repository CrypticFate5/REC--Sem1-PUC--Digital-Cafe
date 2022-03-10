// Perfect number is a number which is equal to sum of its divisor. For eg, divisors of 6 are 1,2 and 3. The sum of these divisors is 6. So 6 is called as a perfect number. Write a program to find the number of perfect numbers if two numbers are given as input. For example if 1 and 8 are given 6 is a perfect number, so the output will be 1. Similarly the perfect numbers between 1 and 50 are 6 and 28, so the output will be 2

// Input :  two integers to set limit to find perfect number

// Output : Number of perfect numbers within the limit

// Sample Test case 1

// Input

// 1

// 20

// Output

// 1

// Sample Test case 2

// Input

// 1

// 50

// Output

// 2


#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        int sum=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            c++;
        }
        
    }
    
    printf("%d",c);
    return 0;
}
