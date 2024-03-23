#include <stdio.h>

int fibonacci(int a) {
    if (a == 1 || a == 2) {
        return 1;
    } else {
        return (fibonacci(a - 1) + fibonacci(a - 2));
    }
}
int main() {
    int num, s;
    printf("Enter the Number: ");
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        printf("%d, ", fibonacci(i));
    }
    return 0;
}
