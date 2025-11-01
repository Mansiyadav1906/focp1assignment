#include <stdio.h>

int main() {
    int marks[10];
    int i, count = 0;

    printf("Enter marks of 10 students:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Students who scored 99 are at positions: ");
    for(i = 0; i < 10; i++) {
        if(marks[i] == 99) {
            printf("%d ", i + 1);
            count++;
        }
    }

    if(count > 0) {
        printf("\nTotal number of students who scored 99 is %d\n", count);
    } else {
        printf("\nNo student scored 99!\n");
    }

    return 0;
}