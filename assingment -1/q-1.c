#include<stdio.h>
#include<string.h>

int main(){

  char number[20];
  int flag = 0;
  int point = 0;

  printf("Enter a number: ");
  scanf("%s", number);

  int i=0;

  while(number[i++] != '\0'){
    if(!flag && number[i] == '.'){
      flag = 1;
    }
    else if(flag && (number[i]<'0' && number[i]>'9')){
      point = 0;
    }
    else if(flag && (number[i]>='0' && number[i]<='9')){
      point = 1;
    }
  }

  if(point){
    printf("Then number %s is a valid floating point.\n",number);
  }
  else{
    printf("The number %s is not a valid floating point.\n",number);
  }

  return 0;

}
