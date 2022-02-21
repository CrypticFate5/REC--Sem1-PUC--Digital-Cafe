//  You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is characterized by its length, width and height. The height of the tunnel 41 feet and the width can be assumed to be infinite. A box can be carried through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.

// Input Format

// The first line contains a single integer n, denoting the number of boxes.

// n lines follow with three integers on each separated by single spaces - lengthi, widthi and heighti which are length, width and height in feet of the i-th box.

// Constraints

// 1 ≤ n ≤ 100

// 1 ≤ lengthi, widthi, heighti ≤ 100

// Output Format

// For every box from the input which has a height lesser than 41 feet, print its volume in a separate line.

// Sample Input 

// 4

// 5 5 5

// 1 2 40

// 10 5 41

// 7 2 42

// Sample Output 

// 125

// 80

// Explanation 

// The first box is really low, only 5 feet tall, so it can pass through the tunnel and its volume is 5

// x 5 x 5 = 125.

// The second box is sufficiently low, its volume is 1 x 2 x 4= = 80.

// The third box is exactly 41 feet tall, so it cannot pass. The same can be said about the fourth box.

#include <stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int vol[n];
    for(int i=0;i<n;i++){
        int l,w,h;
        scanf("%d %d %d",&l,&w,&h);
        if(h<41){
            vol[c]=l*w*h;
            c++;
        }
    }
    for(int i=0;i<c;i++){
        printf("%d\n",vol[i]);
    }
}
