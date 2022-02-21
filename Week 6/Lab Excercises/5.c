// Given an set of numbers and the key value to be searched, return 1 if thr element is found otherwise return 0.

// Write a function which take an integer n, set of n elements and an key to be searched. Write a main function to read the input and call the function.

// Input Format :

// n value

// n elements

// Key value to be searched

// Sample input:

// 5

// 10 20 30 40 50

// 40

// Sample Output

// 1

#include <stdio.h>
int fun(int n,int *arr,int k){
    int flag;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            flag=1;
            break;
        }

    }
    if(flag==1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    printf("%d",fun(n,arr,k));
}
