#include <stdio.h>
int main(){
    
    int i,limit, a[10],sum;
    printf("Enter limit: ");
    scanf("%d",&limit);
    sum = 0;
    for (i=0; i<limit; i++){
        scanf("%d", &a[i]);

    for (i=0; i<limit-1;i++){
        for (j=i+1; j<limit;j++){
            if (a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] =temp;
            }
        }
    }
    printf("Sorted Values In Ascending: ");
    for(i=0; i<limit; i++){
        printf("%d\n", a[i]);
    }
    }
    return 0;
}




#include <stdio.h>
int main(){
    int i,j,temp;
    int a[] = {8, 34, 37, 27, 57};
    int n=5;

    for (i=0; i<5-1; i++){
        for (j=i+1; j<5; j++){
            if (a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Descending order");
    for (i=0; i<5; i++){
        printf("%d\t", a[i]);
    }

    return 0;
}






