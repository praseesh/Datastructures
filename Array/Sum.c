#include <stdio.h>
int main(){
    
    int i,limit, a[10],sum;
    printf("Enter limit: ");
    scanf("%d",&limit);
    sum = 0;
    for (i=0; i<limit; i++){
        scanf("%d", &a[i]);

    }
    for (i=0; i<limit; i++){
        sum = sum + a[i];

    }
    printf("Sum of Entered values are: %d\n", sum);
    
    return 0;
}