// Mars Spell Bee is the largest self-motivated spelling competition held for school children. The children from different schools who are participating in the competition will be given a registration code.  The registration is on a first come first serve basis to a maximum of N entries.

// The competition is conducted in two different galleries of the venue.  Just for the ease of their management, the Event organizers have announced to divide the children into two groups, to attend the competition in the two chosen galleries. By that note, all those children who have their registration code as an even number will be put in one gallery and those with odd number will be in another gallery.

// Help the organizers to find count of number of even registration codes and odd registration codes from the total N.

// Note: The registration code need not be unique as each child will have a unique school code.

// Input Format:

// The first line of input consists of a single integer N denoting the number of registration codes issued for the competition.

// The second line of input consists of N space separated integers, denoting the registration codes of each child.

// Output Format:

// Output a single with the count of even numbers and odd numbers from N, separated by a single space.

// Refer sample input and output for formatting specifications.

// Sample Input 1:

// 3

// 1 4 10

// Sample Output 1:

// 2 1

// Sample Input 2:

// 5

// 2 6 23 12 11

// Sample Output 2:

// 3 2

#include <stdio.h>
int main(){
    int n,e=0,o=0;
    scanf("%d",&n);
    int arr[n];
    // scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e+=1;
        }
        else{
            o+=1;
        }
    }
    printf("%d %d",e,o);
}
