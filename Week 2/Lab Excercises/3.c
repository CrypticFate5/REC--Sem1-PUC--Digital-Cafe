// Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your task is to determine which cat will reach the mouse first, assuming the mouse doesn't move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.

// You are given 1 query in the form of x, y, and  z representing the respective positions for cats  A and B, and for mouse C. Write the program to print appropriate answer, which will be printed on a new line.

// ·         If cat  A catches the mouse first, print Cat A.

// ·         If cat   B catches the mouse first, print Cat B.

// ·         If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.

// Input format:

//             Three space-separated integers describing the respective values of  x (cat A's location),  y(cat B's location), and  z(mouse C's location).

// Constraints:

//             1 <= x,y,z <= 100

// Output Format:

//             Return Cat A if cat A catches the mouse first, Cat B if cat B catches the mouse first, or Mouse C if the mouse escapes.


// For example:

// Input	Result
// 1 2 3
// Cat B

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=1 && a<=100 && b>=1 && b<=100 && c>=1 && c<=100){
        if(abs(c-b) < abs(c-a)){
            printf("Cat B");
        }
        else if(abs(c-b) > abs(c-a)){
            printf("Cat A");
        }
        else{
            printf("Mouse C");
        }
    }
    return 0;
}
