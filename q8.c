#include<stdio.h>

int main(){
    int terms, num1 = 0, num2 = 1, next;

    printf("Enter no. of terms = ");
    scanf("%d", &terms);

    printf("Fibonacci series: ");

    for(int i=1; i<=terms;i++){
        printf("%d", num1);
        next = num1 + num2;
        num1 = num2;
        num2 = next;
    }
    return 0;
}