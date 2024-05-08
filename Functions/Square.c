#include <stdio.h>

int square(int a) {
int square = a*a;
    return square;
}
int main() {
    int num;
    printf("Enter the Number you want to Square: ");
    scanf("%d", &num);
    int s = square(num);
    printf("%d", s);

    return 0;
}
