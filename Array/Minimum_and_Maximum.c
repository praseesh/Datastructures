#include <stdio.h>
int main(){

    int i,n;
    
    printf("Enter the Array limit: ");
    scanf("%d",&n);
    int a[n];
    printf("Insert Array Values: ");
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int max = a[0];
    int min = a[0];
    for (i=0; i<n; i++){
        if (max<a[i]){
            max = a[i];
        }
    }
    printf("Maximum is: %d\n", max);
    for (i=0; i<n; i++){
        if (min>a[i]){
            min = a[i];
        }
    }
    printf("Minimum is: %d\n", min);
    return 0;
}
