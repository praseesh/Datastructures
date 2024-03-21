#include <stdio.h>
int main(){
int values[] = {3,5,6,65,8,22,52,53,63,65,23,66,66,24,};
    int i, j, unique;
    size = sizeof(values)/values[0];
    for (i=0; i<size-1; i++){
        for (j=i+1; j<size; j++){
            if (values[i]==values[j]){
                count++;
                printf("duplicate values: %d", values[i]);
            }
            else{
                printf("Unique:%d,",value[i]);
            }
        }
    }
    return 0;
}