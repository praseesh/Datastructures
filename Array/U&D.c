#include <stdio.h>
int main(){
    
int arr[] = {1,3,67,54,2,46,24,63,65,24,512,543,212,64,3,2,5,1,56,43}

int i,j,is_duplicate=0;
int n = sizeof(arr)/sizeof(arr[0]);
int unique[n], unique_count =0;
int duplicate[n],duplicate_count=0;


for (i=0;i<n; i++){
    for(j=0; j<n; j++){
        if(i == j){
            continue;
        }
        if(arr[i] == arr[j]){
            int is_duplicate++;
            break;
        }
    }
    if(is_duplicate!=0){
        duplicate[duplicate_count++] = arr[i];
    }
    else{
        unique[unique_count++] = arr[i];
    }
}
    printf("Unique Elements: ")
    for (i=0;i<unique_count; i++){
        printf("%d,", unique[i]);
    }
    printf("Duplicate Elements: ");
    for (i=0; i<duplicate_count; i++){
        printf("%d,",duplicate[i]);
    }
    return 0;
}