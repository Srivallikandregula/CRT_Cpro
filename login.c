// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    int c1=3;
    char p[20];
    char u[100];
    scanf("%s",&u);
    if(strcmp(u,"sri") == 0){
        for(int i=0;i<3;i++){
            scanf("%s",&p);
            if(strcmp(p,"mk") != 0){
                c1=c1-1;
                printf("Incorrect password ");
                printf("%d more times",c1);
            }
            else{
                printf("Logged in successfully!");
            }
        }
    }
    else{
        printf("Username is incorrect\n");
        printf("You are blocked");
    }
    return 0;
}