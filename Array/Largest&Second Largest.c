#include <stdio.h>
int main(){
int i, largest = 0, second_largest = 0;
int values[] = {3,5,6,65,8,22,52,53,63,65,23,66,66,24,};
int n = sizeof(values) / sizeof(values[1]);
for (i=0;i<n-1; i++){
    if (values[i] > largest){
        second_largest = largest;
        largest = values[i];
    }
    else if ( values[i] > second_largest && largest != values[i]){
        second_largest = values[i];
    }
}
printf("Largest Number :  %d\n", largest);
printf("Second Largest Number :  %d", second_largest);
return 0;
}