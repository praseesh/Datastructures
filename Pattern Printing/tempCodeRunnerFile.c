#include <stdio.h>

int main() {
  int i,j,k,row;
  printf("Enter rows:\t");
  scanf("%d",&row);
  for (i=row; i>=1; i--){
    for (j=1; j<=i*2; j++){
      printf("X ");
    }
    printf("\n");
    for (k=1;k<=1; k++){
      printf("X\n");
    }
  }
    return 0;
}