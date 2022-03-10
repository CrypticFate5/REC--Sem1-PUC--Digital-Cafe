// Many students of your college are taking their lunch in the mess opposite to the college gate as the prices are reasonable and the food is also tasty. Looking at the help rendered by the first year students to the stationary shop keeper, the mess owner also requested the students to help him out by giving the same application developed for the stationary shop-keeper. The mess owner was ready to purchase a second hand computer.

// Students very well knew that the same application may not help the mess owner as his requirements and sales pattern is completely different. Most of the times, students purchased the food parcels in bulk and all of the items were of the same cost. They quickly concluded that the mess owner's job would be easier if they could write a program which asks for the cost of the item and the number of items purchased and prints the total cost of the items purchased.

// Can you help them out in writing this program?

// Input Format: Input consists of 2 integers. The first integer corresponds to the cost of the item and the second integer corresponds to the number of items purchased.

// Output Format: Refer sample input and output for formatting specifications.

// Sample Input-1

// 15

//  7

// Sample Output-1

// 105


#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",a*b);
    return 0;
}
