// Vijay is an employee in a departmental store where his manager wants to test his Mathematics skills so he gives him a task to find the sum of given times (in minutes) and he also expect the times in hours. Help him out by giving him a program to find the same.

// Input Format:  The first line contains the first integer, a. The second line contains the second integer, b.

// Output Format: Print the line as described above.

// Sample Input

//  40

// 21

// Sample Output

// The time is 1 hour 1 minutes.

#include <stdio.h>
int main(){
    int t1,t2,hr,min;
    scanf("%d",&t1);
    scanf("%d",&t2);
    hr=(t1+t2)/60;
    min=(t1+t2)%60;
    printf("The time is %d hour %d minutes.",hr,min);
    return 0;
}
