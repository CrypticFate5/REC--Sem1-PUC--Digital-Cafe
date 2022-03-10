// Write a C Program to find sum of given n numbers and return the same

// Input: integer n 

// n elements in the array

// Output: Integer which indicates sum of n numbers

// Sample Test case1

// Input: 5

// 1 34 5 7 4

// Output : 51


#include <stdio.h>
int s(int n,int arr[]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",s(n,arr));
    return 0;
}
