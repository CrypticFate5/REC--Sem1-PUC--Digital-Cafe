// Sam loves chocolates and starts buying them on the 1st day of the year. Each day of the year, x, is numbered from 1 to Y. On days when x is odd, Sam will buy x chocolates; on days when x is even, Sam will not purchase any chocolates.



// Complete the code in the editor so that for each day Ni (where 1 ≤ x ≤ N ≤ Y) in array arr, the number of chocolates Sam purchased (during days 1 through N) is printed on a new line. This is a function-only challenge, so input is handled for you by the locked stub code in the editor.



// Input Format



// The program takes an array of integers as a parameter.



// The locked code in the editor handles reading the following input from stdin, assembling it into an array of integers (arr), and calling calculate(arr).



// The first line of input contains an integer, T (the number of test cases). Each line i of the T subsequent lines describes the ith test case as an integer, Ni (the number of days).



// Constraints



// 1 ≤ T ≤ 2 × 105

// 1 ≤ N ≤ 2 × 106

// 1 ≤ x ≤ N ≤ Y



// Output Format



// For each test case, Ti in arr, your calculate method should print the total number of chocolates Sam purchased by day Ni on a new line.



// Sample Input 0



// 3

// 1

// 2

// 3



// Sample Output 0



// 1

// 1

// 4



 

// Explanation



// Test Case 0: N = 1

// Sam buys 1 chocolate on day 1, giving us a total of 1 chocolate. Thus, we print 1 on a new line.



// Test Case 1: N = 2

// Sam buys 1 chocolate on day 1 and 0 on day 2. This gives us a total of 1 chocolate. Thus, we print 1 on a new line.



// Test Case 2: N = 3

// Sam buys 1 chocolate on day 1, 0 on day 2, and 3 on day 3. This gives us a total of 4 chocolates. Thus, we print 4 on a new line.



#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<t;i++){
        int sum=0;
        for(int j=1;j<=arr[i];j++){
        if(j%2!=0 || j==1){
            sum+=j;
        }
        }
        printf("%d\n",sum);
    }
    return 0;
}
