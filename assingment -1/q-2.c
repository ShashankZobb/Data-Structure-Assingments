#include<stdio.h>

int main(){

  char email[500];
  printf("Enter the email id: ");
  scanf("%s",email);

  int flag = 0, counterat = 0, indexofat = -1, indexdot = -1;

  int i=0;

  while(email[i]!='\0'){
    if((email[i] >= 'A' && email[i] <= 'Z')
        || (email[i]>='a' && email[i]<='z')
        || (email[i]>='0' && email[i]<='9')
        || (email[i]=='.' || email[i]=='-'  || email[i]=='_' || email[i]=='@')
        && (i!=0 && email[i+1]!='\0')){
      flag = 1;
    }
    else{
      flag = 0;
      break;
    }
    if(email[i]=='@'){
      counterat++;
      indexofat = i;
    }
    if(email[i]=='.'){
      indexdot = i;
    }
    i++;
  }

  if(flag && (indexdot - indexofat)>3 && counterat==1){
    printf("The email is valid\n");
  }
  else{
    printf("The email is not valid\n");
  }

  return 0;

}
