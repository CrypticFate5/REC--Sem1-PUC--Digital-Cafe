// Bajan Lal distributes C chocolates to school N students every Friday. The C chocolates are distributed among N students equally and the remaining chocolates R are given back to Bajan Lal.

 

// As an example if C=100 and N=40, each student receives 2 chocolates and the balance 100-40*2 = 20 is given back.

 

// If C=205 and N=20, then each student receives 10 chocolates and the balance 205-20*10 = 5 is given back.

 

// Help the school to calculate the chocolates to be given back when C and N are passed as input.

 

// Input Format:

// The first line denotes C
// The second line denotes N

 

// Output Format:

// The first line denotes R - the number of chocolates to be given back.

 

// Example Input/Output:

// Input:

// 300
// 45

 

// Output:

// 30

#include <stdio.h>
int main(){
    int c,n,r;
    scanf("%d",&c);
    scanf("%d",&n);
    r=c%n;
    printf("%d",r);
    return 0;
}
