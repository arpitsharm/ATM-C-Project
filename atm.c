#include <stdio.h>

int main()
{
    int pin, tf, choice, lv=0;
    int amount = 100;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter pin number :- ");
        scanf("%d", &pin);

        if (pin == 1234)
        {
            printf("Access\n");
            tf = 1;
            break;
        }

        else{
            printf("Wrong\n");
        }
    }

    while (tf == 1)
    {
        printf("\nATM\n\n");
        if (lv == 1)
        {
            printf("Loan is InComplete\n");
        }
        
        printf("Loan is InComplete\n");
        printf("1.Check Balance\n2.Withdrawn\n3.Deposit\n4.Transfer\n5.Loan\n6.Exit\nEnter Your Choice :- \n");
        scanf("%d", &choice);

        if (choice == 1){
            printf("Balance: %d", amount);
        }

        else if (choice == 2){
            int amount_less;

            printf("Enter amount to withdrawn :- ");
            scanf("%d", &amount_less);

            if (amount_less < amount){
                int amount_greater;
                amount_greater = amount - amount_less;
                amount = amount_greater;

                printf("Total Less Amount :- %d\n", amount_less);
                printf("Total amount : %d\n", amount);
            }

            else{
                printf("Wrong Command\n");
            }
        }

            else if (choice == 3){
                int amount_inc;

                printf("Enter amount to deposit :- ");
                scanf("%d", &amount_inc);

                int amount_greater1;
                amount_greater1 = amount + amount_inc;
                amount = amount_greater1;

                printf("Total Increase Amount :- %d\n", amount_inc);
                printf("Total amount : %d\n", amount);
            }

            else if(choice == 4){
                int amount_less2;

                printf("Enter amount to Transfer :- ");
                scanf("%d", &amount_less2);

                if (amount_less2 < amount){
                    int amount_greater;
                    amount_greater = amount - amount_less2;
                    amount = amount_greater;

                    printf("Total Transfer Amount :- %d\n", amount_less2);
                    printf("Total amount : %d\n", amount);
                }

                else{
                    printf("Wrong Command\n");
                }
            }

            else if(choice == 5){
                int choice2, amounts;
                printf("1.Loan Take\n2.Loan Dena\nEnter Choice :- ");
                scanf("%d", &choice2);
                if (choice2 == 1){
                    printf("Enter Amount :- ");
                    scanf("%d", &amounts);
                    int amount_loan;
                    amount_loan = amount + amounts;
                    amount = amount_loan;
                    lv = 1;
                }

                if (choice2 == 2){
                    printf("Enter Amount :- ");
                    scanf("%d", &amounts);
                    int amount_loan;
                    amount_loan = amount - amounts;
                    amount = amount_loan;
                    lv = 0;
                }
            }

            else if(choice == 6){
                tf = 0;
                break;
            }

            else{
                printf("Incorrect Choice");
            }

            }


        

    
    
    
    return 0;
}
