#include<stdio.h>
#include<string.h>



int main(){

  while(1){
    int choice;

    printf("choice an option : \n1. Addition \n2. Multiplication \n3. Exit\n");


    scanf("%d",&choice);
    if(choice == 1){
      char unary_1[100], unary_2[100],temprorary[100];
      printf("Enter two unary numbers: ");
      scanf("%s %s", unary_1, unary_2);
      strcpy(temprorary,unary_2);
      strcat(unary_2, unary_1);
        printf("The sum of  %s and %s is : %s\n",unary_1, temprorary, unary_2);
    }
    else if(choice == 2){
      char unary_1[100], unary_2[100];
      printf("Enter two unary numbers: ");
      scanf("%s %s", unary_1, unary_2);
       printf("The product of %s and %s  is: ",unary_1,unary_2);
        for(int i=0; i<strlen(unary_1);i++){
          printf("%s", unary_2);}
        printf("\n");


    }
    else {
      printf("BYE.");
      break;
    }
  }

  return 0;
}
