#include <stdio.h>

int main()
{
    int th, fh, oh;
    int menu, num, value, total, addto;
    int coka, cokazero, pepsi, pepsizero;
    int more, inffi;

    printf("Put the money(1000, 500, 100 won only)\n");

    printf("The number of 1000 won : ");
    scanf(" %d", &th);

    printf("The number of 500 won : ");
    scanf(" %d", &fh);

    printf("The number of 100 won : ");
    scanf(" %d", &oh);

    printf("\n");
    printf("  1000 won : %d\n", th);
    printf("   500 won : %d\n", fh);
    printf("   100 won : %d\n", oh);
    printf("------------------------\n");
    printf(" Input amount : %d won\n", 1000*th + 500*fh + 100*oh);
    total = 0;
    value = 1000*th + 500*fh + 100*oh;

    loop:
    {
        printf("\n");
        printf("                  MENU                  \n");
        printf("----------------------------------------\n");
        printf("1 - cokacola(300ml) : 1200 won\n");
        printf("2 - cokacola zero(300ml) : 1250 won\n");
        printf("3 - pepsi(350ml) : 1350 won\n");
        printf("4 - pepsi zero lime(350ml) : 1400 won\n");
        printf("\n");

        printf("Choose the menu : ");
        scanf(" %d", &menu);

        choose:
        {
            switch (menu)
            {
                case 1:
                    printf("Enter the number : ");
                    scanf(" %d", &coka);
                    total = total + 1200*coka;
                    printf("Total amount : %d\n", total);
                    break;

                case 2:
                    printf("Enter the number : ");
                    scanf(" %d", &cokazero);
                    total = total + 1250*cokazero;
                    printf("Total amount : %d\n", total);
                    break;
    
                case 3:
                    printf("Enter the number : ");
                    scanf(" %d", &pepsi);
                    total = total + 1350*pepsi;
                    printf("Total amount : %d\n", total);
                    break;
    
                case 4:
                    printf("Enter the number : ");
                    scanf(" %d", &pepsizero);
                    total = total + 1400*pepsizero;
                    printf("Total amount : %d\n", total);
                    break;
    
                default:
                    printf("Error : Menu does not exist\n");
                    goto choose;
            }
        }
    
        add:
        {   
            printf("\n");
            printf("Do you need more? (1 : yes / 2 : no) : ");
            scanf(" %d", &more);

            if (more == 1)
            {
                printf("\n");
                printf("Return to menu selection window\n");
                goto loop;
            }
            else if (more == 2)
            {
                printf("\n");
                printf("Switch to the calculation screen\n");
            }
            else
            {
                printf("\n");
                printf("Error : choose number 1 or 2\n");
                goto add;
            }
        }
    }
    inff:
    {
        if (value >= total)
        {
            printf("\n");
            printf("Purchase has been completed\n");
            printf("THANK YOU FOR USING\n");
            printf("change : %d won\n", value-total);
        }
        else
        {
            printf("\n");
            printf("Insufficient amount : %d won\n", total-value);
            printf("Would you like to pay? (1 : yes / 2 : no) : ");
            scanf(" %d", &inffi);

            if (inffi == 1)
            {
                printf("\n");
                printf("Enter payment amount : ");
                scanf(" %d", &addto);
                value = value + addto;
                goto inff;
            }
            else if (inffi == 2)
            {
                printf("\n");
                printf("Payment terminated\n");
                printf("THANK YOU FOR USING\n");
                printf("change : %d won\n", value);
            }
            else
            {
                printf("\n");
                printf("Error : choose number 1 or 2\n");
                goto inff;
            }
        }
    }
    return 0;
}