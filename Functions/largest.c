#include <stdio.h>
int large(int arr[], int size){
int i,largest=arr[0];

    for (i=0; i<size; i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("Largest: %d", largest);
}
int main()
{
    int a[] = {5,42,7,32,24};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    large(a, n);
    
    
    return 0;
}
