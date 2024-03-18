#include <stdio.h>
int main(){
    
    int i,limit, a[10], searchkey,flag=0;
    printf("Enter limit: ");
    scanf("%d",&limit);
    for (i=0; i<limit; i++){
        scanf("%d", &a[i]);
    }
    printf("What number you want to be Search: ");
    scanf("%d",&searchkey);
    
    for (i=0; i<limit; i++){
        if (searchkey == a[i]){
            flag=1;
            break; 
        }
    }
    if (flag==1){
        printf("Number found: %d",i+1);
    }
    else{
        printf("Number not found");
    }
return 0;
}