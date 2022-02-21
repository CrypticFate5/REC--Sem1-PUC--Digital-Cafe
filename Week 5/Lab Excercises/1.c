// Coders here is a simple task for you, you have given an array of size N and an integer M.

 

// Your task is to calculate the difference between maximum sum and minimum sum of N-M elements of the given array.

 

// Constraints:

 

// 1<=t<=10

// 1<=n<=1000

// 1<=a[i]<=1000

 

// Input:

 

// First line contains an integer T denoting the number of testcases.

// First line of every testcase contains two integer N and M.

// Next line contains N space separated integers denoting the elements of array

 

// Output:

 

// For every test case print your answer in new line

 

// SAMPLE INPUT

 

// 1

// 5 1

// 1 2 3 4 5

 

// SAMPLE OUTPUT

 

// 4

 

// Explanation

 

// M is 1 and N is 5 so you have to calculate maximum and minimum sum using (5-1 =) 4 elements.

// Maximum sum using the 4 elements would be (2+3+4+5=)14.

// Minimum sum using the 4 elements would be (1+2+3+4=)10.

// Difference will be 14-10=4.

#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int ansarr[t];
    for(int i=0;i<t;i++){
        int m,n,d,temp;
        scanf("%d %d",&n,&m);
        int arr[n];
        d=n-m;
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        int *p=&arr[0];
        for(int j=0;j<n;j++){
            for(int k=0;k<n-j-1;k++){
                if(*(p+k)>*(p+k+1)){
                    temp=*(p+k);
                    *(p+k)=*(p+k+1);
                    *(p+k+1)=temp;
                }
            }
        }
        // for(int j=0;j<n;j++){
        //     printf("%d ",arr[j]);
        // }
        int summin=0,summax=0;
        for(int j=0;j<d;j++){
            summin+=arr[j];
        }
        for(int j=n-1;j>n-d-1;j--){
            summax+=arr[j];
        }
        int ans=summax-summin;
        // printf("%d",ans);
        ansarr[i]=ans;
    }
    for(int i=0;i<t;i++){
        printf("%d\n",ansarr[i]);
    }
}
