# include <stdio.h>
int main() {
    int t1 = 0, t2 = 1, i, num;
    int nt = t1 +t2;
    

printf("Enter the Number: ");
scanf("%d",&num);
printf("%d,%d,", t1,t2);
for (i = 0; i<=num; i++){
    printf("%d,", nt);
    t1 = t2;
    t2 = nt;
    nt = t1 + t2;
}
    return 0;
}