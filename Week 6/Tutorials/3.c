// Consider a sequence of the form 0,1,1,2,3,5,8,13...

// Write a function which takes as parameter an integer n and prints the nth term of the above sequence. 

// Example Input:

// 5

// Output:

// 3


#include <stdio.h>
int fibo(int n){
    int f;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        f=fibo(n-1)+fibo(n-2);
        return f; 
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}
