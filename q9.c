#include<stdio.h>

int main(){
    int score[10];
    int i, got = 0;
    
    printf("Enter 10 scores: \n");
    for(i=0; i<10;i++){
        scanf("%d", &score[i]);
    }

    for(i=0;i<10;i++){
        if(score[i]==99){
            printf("The first occurence of point 99 is at position: %d\n", i+1);
            got = 1;
            break;
        }
    }

    if(!got){
        printf("Score 99, not found in the array\n");
    }
    return 0;
}