#include<stdio.h>

int main(){
    int n, i;

    printf("Enter the size of array: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("\nPeak elements are: ");
    for(i=0;i<n;i++){

        if(i == 0 && arr[i] >= arr[i+1]){
            printf("%d ", arr[i]);
        }

        else if(i==n-1 && arr[i]>=arr[i-1]){
            printf("%d ", arr[i]);
        }

        else if(arr[i]>=arr[n-1] && arr[i]>=arr[i+1]){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}