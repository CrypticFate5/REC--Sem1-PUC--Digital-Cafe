// Harry wants to find Voldemort's potion making book but he is confused about how to get it.

// The book has a special ISBN(International Standard Book Number) which is  unique numeric book identifier only for Voldemort's book printed on it. The ISBN is based upon a 10-digit code. The ISBN is valid if:

// 1xdigit1 + 2xdigit2 + 3xdigit3 + 4xdigit4 + 5xdigit5 + 6xdigit6 + 7xdigit7 + 8xdigit8 + 9xdigit9 + 10xdigit10 is divisible by 11.

// Help Harry to find the book!

// Input:

//  Input the ISBN code as a 10-digit integer.

// Output:

// If the ISBN is not a 10-digit integer, output the message “Illegal ISBN” and terminate the program.

// If the number is 10-digit, extract the digits of the number and compute the sum as explained in the explanation.

// If the sum is divisible by 11, output the message, “Legal ISBN”. If the sum is not divisible by 11, output the message, “Illegal ISBN”.

// Sample Input -1:

// 1401601499
 

// Sample output-1:

// Legal ISBN
 
// Sample Input -2:

// 9500230608

// Sample output-2:

// Illegal ISBN


#include <stdio.h>
int main(){
    int n,a,i=10,sum=0,c=0;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        sum+=a*i;
        --i;
        n=n/10;
        c+=1;
    }
    if(c==10){
        if(sum%11==0){
            printf("Legal ISBN");
        }
        else{
            printf("Illeagal ISBN");
        }
    }
    else{
        printf("Illegal ISBN");
    }
}
