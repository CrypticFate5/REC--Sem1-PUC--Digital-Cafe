// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order. You read an array of n numbers. You need to arrange the elements in ascending order and print the result. The sorting should be done using bubble sort.

 

// Input Format: The first line reads the number of elements in the array. The second line reads the array elements one by one.

 

// Output Format: The output should be a sorted list.



// For example:

// Input	Result
// 6
// 3 4 8 7 1 2
// 1 2 3 4 7 8


#include <stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(p+j)>*(p+j+1)){
                t=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
