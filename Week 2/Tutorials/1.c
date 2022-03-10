// Anbu and Babu are two friends. Goofy was one of the Anbu's enemy. He was jealous of Anbu because Anbu was liked by everyone. One-day Anbu and Babu went on to a trip. Goofy planned to kidnap Babu. He kidnapped Babu and kept her in one of the hot balloons tied up to a height. There were 50 hot balloons numbered from one. Each balloon will fly to a certain height. Only the numbers having 3 and 7 as its factors can fly upto the height of the Babu's balloon. Anbu was confused and he didn't know which numbered balloon can fly to Babu.

//  So write a program to help the Anbu in finding the balloon. 

//  Input format: 

//  Inputs consists of a single integer which corresponds to number printed on the balloon. Assume that the input value is between 1 and 5000.

// Output Format: 

//  1 (will reach) or 0(will not reach)


// For example:

// Input	Result
// 42
// 1


#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=5000)
    printf("%d",(n%3==0)&&(n%7==0));
    return 0;
}
