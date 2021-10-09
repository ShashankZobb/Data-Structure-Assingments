#include<stdio.h>
#include<stdlib.h>

int main(){

  int n;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  int r, c;
  printf("Enter no. of rows and columns of matrix: ");
  scanf("%d %d", &r, &c);

  if(r*c != n){
    printf("2D matrix can't be formed");
  }
  else{
    int k=0;
    int arr2[r][c];
    for (int i = 0; i < r; i++){
      for (int j = 0; j < c; j++){
        arr2[i][j] = arr[k++];
      }
    }

    for (int i = 0; i < r; i++){
      for (int j = 0; j < c; j++){
        printf("%d ",arr2[i][j]);
      }
      printf("\n");
    }

  }

  return 0;

}
