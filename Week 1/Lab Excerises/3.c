// An auditor wants to inform his bill amount to his client. But he decided that the bill amount should not be sent as a correct figure. So he planned a way to send his amount as cipher text. To send as cipher text he decided to add two to each of the digit and insert character # in between each digit and send it to the client so that no one can understand the amount he sent. For example, if the amount is 13500.75, he will add two to each digit and inserts # between each digit and will send the message as 3#5#7#2#2#9#7. Write a program for the client to retrieve the actual amount from the input he received form the auditor.

 

// Input Format: 

 

// Input consists of a string in the format a b c d e f g where a,b,c,d,e,f,g are integers. 

 

// Output Format: 

 

// Display actual amount (a float value with two precision) 

 

// Sample input and output 1: 

 

// Input

 

// 3#5#7#2#2#9#7

 

// Output

// 13500.75

#include <stdio.h>
#include <string.h>
int main(){
    int a,b,c,d,e,f,g;
    scanf("%d#%d#%d#%d#%d#%d#%d",&a,&b,&c,&d,&e,&f,&g);
    printf("%d%d%d%d%d.%d%d",a-2,b-2,c-2,d-2,e-2,f-2,g-2);
    return 0;
}
