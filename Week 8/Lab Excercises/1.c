// Create a structure named Date having day, month and year as its elements. Store the current date. Now add 15 days to the current date and display the “Same month” if the addition of days is within the month, Otherwise display “Next month”.

//  Input Format:

// Line contains date in dd mm yyyy format

#include <stdio.h>
struct Date{
    int date;
    int month;
    int year;
}cd;
int main(){
    scanf("%d %d %d",&cd.date,&cd.month,&cd.year);
    if((cd.date+15)>30){
        printf("Next month");
    }
    else{
        printf("Same month");
    }
}
