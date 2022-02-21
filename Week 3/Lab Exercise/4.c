// Write a program to determine the type of berth when the seat / berth number in the train is given.

// -

// Input Format: 

// Input consists of a single integer. Assume that the range of input is between 1 and 72.

// Output Format: 

// Output consists of a single string. [Upper or Middle or Lower or Side Lower or Side Upper]


// For example:

// Input	Result
// 9
// Lower Berth
// 72
// Side Upper Berth


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%8==0){
        printf("Side Upper Berth");
    }
    else if(n%8==7){
        printf("Side Lower Berth");
    }
    else if(n%8==3||n%8==6){
        printf("Upper Berth");
    }
    else if(n%8==2 || n%8==5){
        printf("Middle Berth");
    }
    else if(n%8==0 || n%8==1){
        printf("Lower Berth");
    }
    return 0;
}
