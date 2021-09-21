#include <stdio.h>

int main(){
    int arr1[5000];
    int arr2[5000];
    arr1[0] = 0, arr1[1] = -1, arr2[0] = 1, arr2[1] = -1;
    int n, size = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 0){
        printf("0\n");
    }
    else if(n == 1){
        printf("1\n");
    }
    else{
        for(int i=2;i<=n;i++){
            int t1 = 0, num1 = 0, num2 = 0;
            size = 0;
            while (arr1[t1] != -1 && arr2[t1] != -1){
                num2 = arr1[t1]+arr2[t1]+num2;
                num1 = num2 % 10;
                num2 = num2/10;
                arr1[t1] = arr2[t1];
                arr2[t1] = num1;
                t1++;
                size++;
            }
            while (arr2[t1] != -1){
                num2 = arr2[t1]+num2;
                num1 = num2%10;
                num2 = num2/10;
                arr1[t1] = arr2[t1];
                arr2[t1] = num1;
                t1++;
                size++;
            }
            arr1[t1] = -1;
            if(num2 == 0){
                arr2[t1] = -1;
            }
            else{
                arr2[t1] = num2;
                arr2[t1+1] = -1;
                size++;
            }
        }
        for(int i = size-1;i>=0;i--){
            printf("%d", arr2[i]);
        }
        printf("\n");

    }
    return 0;
}
