#include <stdio.h>
int main(){
    

int i,rev_array;
int values[] = {3,5,6,65,8,22,52,53,63,65,23,66,66,24,};
int n = sizeof(values) / sizeof(values[0]);
for (i=0; i<n; i++){
   printf("%d,",values[i]);
}
printf("\n");

for (i=n-1; i>0; i--){
    printf("%d,",values[i]);
}
return 0;
}

