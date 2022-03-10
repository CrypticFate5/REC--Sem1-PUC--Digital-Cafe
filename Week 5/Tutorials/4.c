// You are given a two-dimensional 3*3 array starting from A [0][0]. You should add the alternate elements of the array and print its sum. It should print two different numbers the first being sum of A 0 0, A 0 2, A 1 1, A 2 0, A 2 2 and A 0 1, A 1 0, A 1 2, A 2 1.



// Input Format



// First and only line contains the value of array separated by single space.



// vk

 

// Output Format



// First line should print sum of A 0 0, A 0 2, A 1 1, A 2 0, A 2 2

// Second line should print sum of A 0 1, A 1 0, A 1 2, A 2 1



// SAMPLE INPUT 



// 1 2 3 4 5 6 7 8 9



// SAMPLE OUTPUT 



// 25

// 20



#include <stdio.h>
int main(){
    int arr[3][3];
    int tsum=0,esum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
            tsum+=arr[i][j];
        }
    }
    int c=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(c%2==0){
                esum+=arr[i][j];
            }
            c++;
        }
    }
    printf("%d\n%d",esum,tsum-esum);
}
