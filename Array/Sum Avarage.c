#include <stdio.h>
int main(){
    int i,j,mark[10], limit;
    printf("Enter the Limit: ");
    scanf("%d", &limit);
    printf("Input Array Values: \n");
    for (i=0; i<limit; i++){
        scanf("%d", &mark[i]);
    }
    int sumEven, sumOdd, countEven, oddaverage, evenaverage, totalaverage, countOdd;

    for(i=0; i<limit; i++){
        if(i%2==0){
            sumEven += mark[i];
            // sumEven =  sumEven + mark[i];
            countEven++;
        }
        else{
            sumOdd += mark[i];
            countOdd++;
        }
    }
    oddaverage = sumOdd/countOdd;
    evenaverage = sumEven/countEven;
    totalaverage = (sumOdd+sumEven) / (countOdd+countEven);
    printf("\nCount Even: %d \nCount Odd: %d \n", countEven, countOdd);
    printf("Sum of Odd Numbers: %d\n",sumOdd);
    printf("Sum of Even Numbers: %d\n",sumEven);
    printf("Average of Odd Numbers: %d\n",oddaverage);
    printf("Average of Even Numbers: %d\n",evenaverage);
    printf("Average of Total Numbers: %d\n",totalaverage);
    return 0;
}