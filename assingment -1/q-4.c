#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selection_sort(long long int a[], long long int n){

  for(long long int i = 0; i < n - 1; i++){

    for(long long int j = i + 1; j < n; j++){

      if(a[j]<a[i]){

        long long int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
      }
    }
  }
}

void bubble_sort(long long int a[], long long int n){

  for(long long int j=1;j<n;j++){

    for(long long int i = 0; i < n-j; i++){

      if(a[i] > a[i+1]){

        long long int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
      }
    }
  }
}

int main(){
  long long int n;
  printf("Enter the no. of elements: ");
  scanf("%lld",&n);
  int n1;
  printf("Enter 1 to make already sorted array or enter 2 for random generated array: ");
  scanf("%d", &n1);
  long long int arr[n];
  if (n1 == 2){
  for (long long int i = 0; i < n; i++) {
        long long int x = rand() % n + 1;
        arr[i] = x;
  }
  }
  else {
  for(long long int i = 0; i < n; i++){
        arr[i] = i+1;
  }
  }

  clock_t selection_sort_start, selection_sort_end, bubble_sort_start, bubble_sort_end;

  long long int selection_sort_time, bubble_sort_time;

  selection_sort_start = clock();

  selection_sort(arr, n);

  selection_sort_end = clock();

  selection_sort_time = selection_sort_end - selection_sort_start;

  printf("The time taken for selection sort: %f\n", (double) selection_sort_time/ (double) CLOCKS_PER_SEC);

  bubble_sort_start = clock();

  bubble_sort(arr, n);

  bubble_sort_end = clock();

  bubble_sort_time = bubble_sort_end - bubble_sort_start;

  printf("The time taken for bubble sort: %f\n", (double) bubble_sort_time/ (double) CLOCKS_PER_SEC);
  return 0;
}
