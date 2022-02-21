// The x,y co-ordinates of the end points of a line are provided as the input. The program must print the co-ordinates of the mid-point of the line.

 

// Input Format:

// The first line denotes the x co-ordinate of point 1.
// The second line denotes the y co-ordinate of point 1.
// The third line denotes the x co-ordinate of point 2.
// The fourth line denotes the y co-ordinate of point 2.

 

// Output Format:

// The first line denotes the x co-ordinate of the mid-point rounded upto 1 decimal place.
// The second line denotes the y co-ordinate of the mid-point rounded upto 1 decimal place.

 

// Example Input/Output:

// Input:

// 10
// 2
// 20
// 5

 

// Output:

// 15.0
// 3.5


#include <stdio.h>
int main(){
    float x1,y1,x2,y2;
    float m1,m2;
    scanf("%f",&x1);
    scanf("%f",&y1);
    scanf("%f",&x2);
    scanf("%f",&y2);
    m1=(x1+x2)/2;
    m2=(y1+y2)/2;
    printf("%.1f\n",m1);
    printf("%.1f",m2);
}
