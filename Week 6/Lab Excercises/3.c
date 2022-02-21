// Determine the factors of the number n and then return the pth factor of the number n sorted in ascending order.  If there is no pth factor return 0.

// Write a function that takes n and p as parameter and it should return the output. Also write a main function to read the input and call the function.

// Input format :

// Two space seperated integers. First one represents n value and the second one represents p value

// Sample Input :

// 20 3

// Sample Output :

// 4

// Explanation: factors of 20 : 1,2,4,5,10,20 and the 3rd factor is 4

#include <stdio.h>
int fact(int n,int p){
    int c=0,flag,i;
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
            if(c==p){
                flag=1;
                break;
                
            }
            
        }
        
    }
    if(flag==1){
        return i;
    }
    else{
        return 0;
    }
}
int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    printf("%d",fact(n,p));
    return 0;
}
