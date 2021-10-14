#include<stdio.h>


long long binaryproduct(long long binary1, long long binary2)
{
    int i = 0, remainder = 0, sum[20];
    long long binaryprod = 0;

    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];
    return binaryprod;
}

int main(){

  while(1){
    int choice;
    printf("Select an option: \n1. Addition \n2. Multiplication \n3. Exit\n");
    printf("Enter a choice: ");
    scanf("%d",&choice);
    if(choice == 1){
      long long num1, num2;
      printf("Enter first binary numbers: ");
      scanf("%lld", &num1);
      printf("Enter secind binary numbers: ");
      scanf("%lld", &num2);

      int i = 0, remainder = 0, sum[20];

      while (num1 != 0 || num2 != 0){
        sum[i++] =(num1 % 10 + num2 % 10 + remainder) % 2;
        remainder =(num1 % 10 + num2 % 10 + remainder) / 2;
        num1 = num1 / 10;
        num2 = num2 / 10;
      }
      if (remainder != 0)
        sum[i++] = remainder;
      --i;
      printf("The sum is: ");
      while (i >= 0)
        printf("%d", sum[i--]);
      printf("\n");
    }
    else if(choice == 2){
      long long num1, num2, multiply = 0;
      printf("Enter first binary numbers: ");
      scanf("%lld", &num1);
      printf("Enter secind binary numbers: ");
      scanf("%lld", &num2);
      int digit, factor = 1;

      while (num2 != 0){
        digit =  num2 % 10;
        if (digit == 1){
          num1 = num1 * factor;
          multiply = binaryproduct(num1, multiply);
        }
        else
          num1 = num1 * factor;
        num2 = num2 / 10;
        factor = 10;
      }
      printf("The product is: %lld\n", multiply);
    }
    else {
      printf("Bye.");
      break;
    }
  }

  return 0;
}
