#include <stdio.h>

int main()
{
    int i,j, a[3][3];
    printf("Enter values for 3*3 Array:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered Values are: \n\n");
    for (i=0; i<3; i++){
        for (j=0;j<3; j++){
            printf("%d\t", a[i][j]);
    }
    printf("\n");



    }
    return 0;
}
