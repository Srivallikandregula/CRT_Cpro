#include<stdio.h>
int main(){
    int opt;
    float dep,wit,bal=1000;
    printf("Option-1:Check Balance \n");
    printf("Option-2:Deposit money \n");
    printf("Option-3:Withdraw money \n");
    printf("Option-4: Exit \n");
    printf("Select option: ");
    scanf("%d",&opt);
    while(opt!=4){
    switch(opt){
        case 1:
        printf("Balance: %f\n",bal);
        printf("Option-1:Check Balance \n");
        printf("Option-2:Deposit money \n");
        printf("Option-3:Withdraw money \n");
        printf("Option-4: Exit \n");
        printf("Select option: ");
        scanf("%d",&opt);
        break;
        case 2:
        printf("Enter amount to deposit: ");
        scanf("%f",&dep);
        bal=bal+dep;
        printf("\nTotal amount: %f\n",bal);
        printf("Option-1:Check Balance \n");
        printf("Option-2:Deposit money \n");
        printf("Option-3:Withdraw money \n");
        printf("Option-4: Exit \n");
        printf("Select option: ");
        scanf("%d",&opt);
        break;
        case 3:
        printf("\n Enter amount to withdraw: ");
        scanf("%f",&wit);
        if(bal<wit){
            printf("Insufficient balance");
        }
        else{
        bal=bal-wit;
        printf("\nTotal amount: %f\n",bal);
        printf("Option-1:Check Balance \n");
        printf("Option-2:Deposit money \n");
        printf("Option-3:Withdraw money \n");
        printf("Option-4: Exit \n");
        printf("Select option: ");
        scanf("%d",&opt);
        }
        break;
        case 4:
        printf("------ Thank You! ------");
        break;
        default:
        printf("Invalid choice ");
        break;
        }
    }

    return 0;
}