#include <stdio.h>
#include <math.h>  
int main() {
    int num, newnum, rem, n = 0;
    double result = 0.0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);
   newnum = num;

    while (newnum != 0) {
        newnum /= 10;
        n++;
    }
   newnum=num;
    while (newnum != 0) {
        rem= newnum % 10;
        result += pow(rem, n);
        newnum /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;}














