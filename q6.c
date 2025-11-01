#include <stdio.h>
#include <math.h>

int main() {
    int choice, dec = 0, base = 1, rem;
    long long bin = 0, temp;

    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter binary: ");
        scanf("%lld", &bin);
        temp = bin;
        while (temp > 0) {
            rem = temp % 10;
            dec += rem * base;
            temp /= 10;
            base *= 2;
        }
        printf("Decimal: %d\n", dec);
    } 
    else if (choice == 2) {
        printf("Enter decimal: ");
        scanf("%d", &dec);
        base = 1;
        while (dec > 0) {
            rem = dec % 2;
            bin += rem * base;
            dec /= 2;
            base *= 10;
        }
        printf("Binary: %lld\n", bin);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}

