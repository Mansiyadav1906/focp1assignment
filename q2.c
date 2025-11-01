#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 && num2 == 0) {
        printf("HCF not detemined as both number are zero.\n");
        return 0;
    }

    while (num2 != 0) {
        num3 = num2;
        num2 = num1 % num2;
        num1 = num3;
    }

    printf("HCF = %d\n", num1);

    return 0;
}