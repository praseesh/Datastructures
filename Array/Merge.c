#include <stdio.h>
int main(){
    int i,j,temp;
    int a[] = {8, 34, 37, 27, 57};
    int b[] = {1,3,4,6,89,43,3,5};
    int na=5, nb=8;
    int nc = na + nb;
    int c[nc];
    for (i=0; i<na; i++){
        c[i] = a[i];
    } 
    for (i=0; i<nb; i++){
        c[na+1] = a[i];
    }

    printf("Merged Array: ");
    for (i=0; i<nc; i++){
        printf("%d",c[i]);
    }
    return 0;
}

