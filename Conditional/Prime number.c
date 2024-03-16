# include <stdio.h>
int main() {
    int i,num,flag=0;
    printf("enter a number");
    scanf("%d",&num);
    if (num==0 || num==1){
        printf("Enter a valid number");
    }
    for (i=2; i<=num/2; i++){
        if(num%i == 0){
            flag = 1;
        }
    }
    if(flag==0){
        printf("%d Prime Number",num);
    }else{
        printf("%d Not Prime Number",num);
    }
    return 0;
}
