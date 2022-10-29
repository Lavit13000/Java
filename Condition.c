#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the first number -:");
    scanf("%d",&a);
    printf("\nEnter the second number -:");
    scanf("%d",&b);

    if(a==b){
        printf("%d and %d is equal",a,b);
    }
    else{
        printf("%d and %d is not equal",a,b);
    }
    return 0;
}