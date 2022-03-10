// During the Physical Education hour, PT sir has decided to conduct some team games. He wants to split the students in the class into equal sized teams. In some cases, there may be some students who are left out from teams and he wanted to use the left out students to assist him in conducting the team games.

// For instance, if there are 50 students in the class and if the class has to be divided into 7 equal sized teams, 7 students will be there in each team and 1 student will be left out.PT sir asks your help to automate this team splitting task. Can you please help him out?

// Input Format: Input consists of 2 integers. The first integer corresponds to the number of students in the class and the second integer corresponds to the number of teams.


// Output Format: Refer sample input and output for formatting specifications.

// Sample Input-1

// 60

// 8

// Sample Output-1

// 7 

// 4


#include <stdio.h>
int main(){
    int a,b,t,s;
    scanf("%d",&a);
    scanf("%d",&b);
    t=a/b;
    s=a%b;
    printf("%d\n",t);
    printf("%d",s);
    return 0;
}
