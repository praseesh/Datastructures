#include <stdio.h>
int oddEven();
int main()
{
    int a[10], limit;
    printf("Enter array limit :  ");
    scanf("%d",&limit);
    
    printf("Enter values:  ");
    for (int i=0; i<limit; i++){
        scanf("%d",&a[i]);
    }
    oddEven(a,limit);

    return 0;
}
int oddEven(int arr[], int size){
    int b[10], c[10],nb=0, nc=0;
    for (int i=0; i<size; i++){
        if (arr[i]%2 == 0 && arr[i]!=0){
            b[nb++] = arr[i];
    }
    
        else if(arr[i]%2==1 && arr[i]!=0){
            c[nc++] = arr[i];
    }
}
    printf("Even Numbers: ");
  for (int i=0; i<nb;i++ ){
      printf(" %d,  ", b[i]);
  }
  printf("\n");
    printf("Odd Numbers: ");
    for (int i=0; i<nc;i++ ){
      printf(" %d,  ", c[i]);
  }
}
