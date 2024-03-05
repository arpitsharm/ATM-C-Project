#include <stdio.h>

int main()
{
    int pin, tf, choice;
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
        printf("1.Check Balance\n2.Withdrawn\n3.Deposit\n4.Exit\nEnter Your Choice :- \n");
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
                tf = 0;
                break;
            }

            else{
                printf("Incorrect Choice");
            }

            }


        

    
    
    
    return 0;
}