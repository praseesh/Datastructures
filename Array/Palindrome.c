#include <stdio.h>

int main()
{
    int i, number, limit, a[10], flag=0;
    printf("Enter the Size of the Array:\t");
    scanf("%d", &limit);
    printf("Enter a number into an Array to Check Palindrome or Not:\t");
    for (i=0; i<limit; i++){
        scanf("%d", &a[i]);
    }
    for (i=0; i<limit/2; i++){
        if (a[i] != a[limit-i-1]){
            flag=1;
            break;
        }
    }
    
    if (flag == 1) {
        printf("Entered array ");
    } else {
        printf("Entered array ");
    }
    
    printf("%d", a[0]);
    for (i = 1; i < limit; i++) {
        printf("%d", a[i]);
    }

    if (flag == 1) {
        printf(" is not a palindrome\n");
    } else {
        printf(" is a palindrome\n");
    }
    return 0;
}
