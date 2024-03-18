#include <stdio.h>
int main(){
    
    int i,limit, a[10];
    printf("Enter limit: ");
    scanf("%d",&limit);
    printf("Enter the values: ");

    for (i=0; i<limit; i++){
        scanf("%d",&a[i]);
    }
    printf("Entered Array values: \n");
    for (i=0; i<limit;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}