#include <stdio.h>
int main(){
    
    int i,j,list[10],duplicates[10], limit, count=0;
    printf("Enter limit: ");
    scanf("%d", &limit);
    printf("Enter numbers: \n");
    for (i=0; i<limit; i++){
        scanf("%d", &list[i]);
    }
    
    for (i=0; i<limit-1; i++){
        for (j=i+1; j<limit; j++){
            if (list[i] == list[j]){
                printf("Duplicate: %d, ",list[j]);
            }
        }
    }
return 0;
}