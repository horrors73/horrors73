#include<stdio.h>
#include <string.h>
#include <stdlib.h>
void login_page();
void data_entry();
int main()
{
    login_page();



    return 0;
}
void data_entry(){

    for( ; ; ){
    float item_quantity[200];
    char *item_code[300];
    float total_price[200];
    float unit_price[300];
    int i;
    int option;
    int b;
    float amount_given;
        float change;
        int j= 0;
        float total = 0;
    for(i = 0;i < 20;i++){


        printf("\t\t…...................................\n"
               "\t\tDKUT POS SYSTEM\n"
               "\t\t…...................................\n"
               "\t\t1.ADD ITEM\n"
               "\t\t2.MAKE PAYMENT\n"
               "\t\t3.DISPLAY RECEIPT\n"
               "\n"
               "\t\tChoose an option\n");


        
    scanf("%d", &option);
        if(option == 1){

            while(j < 100){
                printf("\tTO RETURN TO MAIN MENU\nEnter N as your itemcode\n\n");
                char determina[] = "n";
                printf("\t\tEnter item code: \a");
                scanf("%s", &item_code[j]);
                if(strcasecmp(&item_code[j], determina)==0){
                    item_quantity[j] = 0;
                    unit_price[j] = 0;
                    j++;

                    break;
                }
                else{
                printf("\t\tEnter the item quantity:\a ");
                scanf("%f", &item_quantity[j]);
                printf("\t\tEnter the item  unit price:\a ");
                scanf("%f", &unit_price[j]);
                total_price[j] = item_quantity[j] * unit_price[j];
                j++;
                }}

    }
     else if(option == 2){


        printf("\t\titemcode  \t  item quantity   \t  unit price  \t  total price\n");
        j--;
        for(b = 0;b < j;b++){
        printf("\t\t%s \t %.2f  \t%.2f \t  %.2f\n", &item_code[b], item_quantity[b], unit_price[b], total_price[b]);
        total = total + total_price[b];


    }
        for( ; ;){
            printf("\t\tTotal.......................................:%.2f\n", total);

            printf("\t\tAmount given by the customer ...............: ");
            scanf("%f", &amount_given);
            if(amount_given < total){
                printf("\t\tAMOUNT GIVEN IS NOT ENOUGH\nENTER THE AMOUNT AGAIN\n\a");
                continue;
            }
            else if (amount_given >= total){
                change = amount_given - total;
                printf("\t\tcustomer balance is ...................: %.2f\n", change);
                    printf("\n\n\n\n\\n");

                break;
            }

            else{
                printf("Thats in accurate typing\nTry again\n");
                continue;
            }

            }
        break;
    }


     else if(option == 3){
        if(total=0){
                break;
            }
            else{
            printf("Here is your receipt\n");
            printf("\t\t\t\t\t\t\titemcode  \t  item quantity   \t  unit price  \t  total price\n");

            for(b = 0;b <=i;b++){

                printf("\t\t\t\t\t\t %s \t %.2f kg \t%.2f \t  %.2f\n", &item_code[b], item_quantity[b], unit_price[b], total_price[b]);
                total = total + total_price[b];
                printf("\t\t\t\tTotal.......................................:%.2f\n", total);
                printf("\t\t\t\tAmount given by the customer ...............: %.2f\n", amount_given);
                printf("\t\t\t\tcustomer balance is ...................: %.2f\n", change);
                printf("\n\n\n\n\\n\n\n");

        }
            break;
    }}

    else {
        break;
    }

    }
    }
    return ;
}
/*The login page*/

void login_page()
{
    char passcode[] = "Admin123";
    char password[100];
    int trials;



    //0 means true  while 1 means False or Not True
    for(trials = 2; trials > -1; trials--)
    {
        printf("input the password:\n\a");
        scanf(" %s", password);
        printf("\n");
        if(strcmp(passcode, password) == 0)
        {//if password is correct it runs the function data_entry
            printf("Welcome \n");
            data_entry();
            break;
        }
        else
        {
            if(trials <= 0)
            {
                printf("Locked Out of the system!!!!\n\a");
                break;
            }
            printf("Almost\nTrials left %d\n", trials);
            continue;
        }
    }

    return;

}



