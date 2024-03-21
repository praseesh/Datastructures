#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 5, 6, 1, 2};
    int unq[10];
    int dup[10]; 
    int unq_count = 0;
    int dup_count = 0;
    int i, j;
    
    for (i = 0; i < 10; i++) {
      
        int is_duplicate = 0;
        
        for (j = 0; j < 10; j++) {
            if (j==i){
                continue;
            }
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        
        if (is_duplicate!=0) {
            dup[dup_count++] = arr[i];
        } else {
            unq[unq_count++] = arr[i];
        }
    }
    
    printf("Unique elements: ");
    for (i = 0; i < unq_count; i++) {
        printf("%d ", unq[i]);
    }
    printf("\n");
    
    printf("Duplicate elements: ");
    for (i = 0; i < dup_count; i++) {
        printf("%d ", dup[i]);
    }
    printf("\n");
    
    return 0;
}
