// Mr. X's birthday is in next month. This time he is planning to invite N of his friends. He wants to distribute some chocolates to all of his friends after party. He went to a shop to buy a packet of chocolates. At chocolate shop, 4 packets are there with different number of chocolates. He wants to buy such a packet which contains number of chocolates, which can be distributed equally among all of his friends. Help Mr. X to buy such a packet.

//  Input Given: N-No of friends

// P1,P2,P3 AND P4-No of chocolates

//  OUTPUT:

//  "1" if he can buy that packet and "0" if he can't buy that packet.


// For example:

// Input	Result
// 5
// 25
// 12
// 10
// 9
// 1 0 1 0


#include <stdio.h>
int main(){
    int n,a,b,c,d;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    (a%n==0)?(printf("%d ",1)):(printf("%d ",0));
    (b%n==0)?(printf("%d ",1)):(printf("%d ",0));
    (c%n==0)?(printf("%d ",1)):(printf("%d ",0));
    (d%n==0)?(printf("%d ",1)):(printf("%d ",0));
    return 0;
}
