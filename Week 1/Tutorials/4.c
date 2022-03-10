// Each Sunday, a newspaper agency sells X copies of a certain newspaper for Rs.A per copy. The cost to the agency of each newspaper is Rs.B . The agency pays a fixed cost for storage, delivery and so on of Rs.100 per Sunday. The newspaper agency wants to calculate the profit obtained on Sundays. Can you please help them out by writing a C program to compute the profit given X, A and B.

// Input Format: Input consists of 3 integers: X, A and B. X is the number of copies sold, A is the cost per copy and B is the cost the agency spends per copy.

// Output Format: Refer Sample Input and Output for exact formatting specifications.

// Sample Input

// 1000

// 2

// 1

// Sample Output

// 900


#include <stdio.h>
int main(){
    int x,a,b,prof;
    scanf("%d",&x);
    scanf("%d",&a);
    scanf("%d",&b);
    prof=x*a - x*b - 100;
    printf("%d",prof);
    return 0;
}
