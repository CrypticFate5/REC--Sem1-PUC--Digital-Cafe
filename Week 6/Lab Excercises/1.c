// Consider a Sequence of the form 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149. Write a function which takes an integer n and prints the nth term of the above sequence. Write appropriate main function to read the input and call the function.

// Sample Input :

// 5

// Sample Output:

// 4

#include <stdio.h>
int seq(int n){
    int s;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else if(n==3){
        return 1;
    }     
    else{
        s=seq(n-1)+seq(n-2)+seq(n-3);
        return s;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",seq(n));
}
