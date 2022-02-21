// Write a C program to print the Record of the Student Merit wise (Highest scorer appears at the top).

// Here a structure variable is defined which contains student rollno, name and score.

#include <stdio.h>
struct record{
    int roll;
    char name[100];
    int score;
};
int main(){
struct record s1[60],temp;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %s %d",&s1[i].roll,s1[i].name,&s1[i].score);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(s1[j].score<s1[j+1].score){
                temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
        }
    }
    }
    for(int i=0;i<n;i++){
        printf("%d %s %d\n",s1[i].roll,s1[i].name,s1[i].score);
    }
}
