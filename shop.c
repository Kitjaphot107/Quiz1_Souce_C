#include<stdio.h>

void main(){

    system("cls");

    int num1, num2, num3, num4, choose_option;

    do{
        printf("Choose Your Option\n");
        printf("1. Coffee 35 bath\n2. Rice 150 bath\n3. Tea 135 bath\n4. milk\n5.Coke\n6. Exit\n");
        scanf("%d",&choose_option);

        if(choose_option == 6)
                break;
        
        switch (choose_option)
        {
        case 1:
            printf("Enter item of menu: "); scanf("%d",&num1);
            printf("Enter of Quantity: "); scanf("%d",&num2);
            printf("Total price",num1, num2, num1*num2);
            break;
        case 2:
            printf("Enter item of menu: "); scanf("%d",&num1);
            printf("Enter of Quantity: "); scanf("%d",&num2);
            printf("Sum of %d - %d = %d\n",num1, num2, num1-num2);
            break;
        case 3:
            printf("Enter item of menu: "); scanf("%d",&num1);
            printf("Enter of Quantity: "); scanf("%d",&num2);
            printf("Sum of %d x %d = %d\n",num1, num2, num1*num2);
            break;
        case 4:
            printf("Enter item of menu: "); scanf("%d",&num1);
            printf("Enter of Quantity: "); scanf("%d",&num2);
            
            if(num2 == 0) 
                printf("Not Calculate\n");
            else
                printf("Sum of %d / %d = %d\n",num1, num2, num1/num2);
            break;
        case 5:
            break;
        
        default:
            printf("Invalid Choose Option\n");
            break;
        }

    }while(choose_option != 6);
    

}