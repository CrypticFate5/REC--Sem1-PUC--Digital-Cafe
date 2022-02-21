// A team from Rotract club had planned to conduct a rally to create awareness among the coimbatore people to donate blood. They conducted the rally successfully. Many of the coimbatore people realized it and came forward to donate their blood to nearby blood bank. The eligibility criteria for donating blood is people should be above 18 and his/ her weight should be above 40. There was a huge crowd and staff in blood bank found it difficult to manage the crowd. So they decided to keep a system and ask the people to enter their age and weight in system. If a person is eligible he / she will be allowed inside.

//  Write a program and feed it to the system to find whether a person is eligible or not.

//  Input Format: 

//  Input consists of two integers which correspond to age and weight of a person respectively. 

//  Output Format: 

//  Display 1 (IF ELIGIBLE)

// Display 0(if not eligible) 


// For example:

// Input	Result
// 19 
// 50 
// 1

#include <stdio.h>
int main(){
    int age,wt;
    scanf("%d",&age);
    scanf("%d",&wt);
    if(age>18 && wt>40){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}
