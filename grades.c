#include<stdio.h>
#include<stdlib.h>
int main(){
    int marks,grade;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    grade=abs(marks/10);
    switch(grade){
        case 10:
        printf("Excellent");
        break;
        case 9:
        printf("Very good");
        break;
        case 8:
        printf("Good");
        break;
        case 7:
        printf("Average");
        break;
        case 6:
        printf("Poor");
        break;
        default:
        printf("You are failed!");
        break;
    }
    return 0;
}