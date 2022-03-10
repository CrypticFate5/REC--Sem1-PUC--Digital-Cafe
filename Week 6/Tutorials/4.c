// Sharadhavidhyala wants to test their children ability of identifying correct spelling of a word from a group of jumbled words. To jumble the words they want to find out how many ways a word can be rearranged. For example if they want to rearrange a word “whats” where the letters are unique, the number of ways can be found by finding 5!. It the word is “hello” where letter ‘l’ alone is repeated twice, the number of ways a word can be rearranged can be found out by 5!/2!(no of letters!/number of repeated letter count!). If the word is “little” where two letters ‘l’ and ‘t’ are repeated twice, then number of ways to arrange letters is 6!/(2!*2!). Write a recursive function to find factorial.

// Input: String to rearrange

// Output: Integer denoting Number of ways a letter can be jumbled.

// Sample Test case 1

// Input: document

// Output: 40320


#include <stdio.h>
#include <string.h>
int fact(int n){
    int f=n;
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
        f=f*fact(n-1);
        return f;
    }
}
int main(){
    char st[100];
    scanf("%s",st);
    int n=strlen(st);
    int num=fact(n);
    int deno=1;
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=i+1;j<n;j++){
            if(st[i]==st[j]){
                c+=1;
            }
        }
        deno*=fact(c);
    }
    int ans= num/deno;
    printf("%d",ans);
    return 0;
}
