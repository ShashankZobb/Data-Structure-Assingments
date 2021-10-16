#include<stdio.h>

int main()
{
    while(1)
    {
        int choice;
        printf("Select a choice: \n 1.Addition \n 2.Multiplication \n 3.Exit \n");
        printf("Enter a choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            long long int num1,num2;
            printf("Enter two decimal no.s: ");
            scanf("%lld %lld", &num1,&num2);
            long long int sum=num1+num2;
            printf("Sum is: %lld \n",sum);
        }
        else if(choice==2)
        {
            long long int num1,num2;
            printf("Enter two decimal no.s: ");
            scanf("%lld %lld",&num1,&num2);
            printf("Product is: %lld \n",num1*num2);
        }
        else
        {
            printf("Exited.");
            break;
        }
    }
    return 0;
}
