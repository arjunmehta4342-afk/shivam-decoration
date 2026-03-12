#include <stdio.h>
int main() {

    int arr[3][3], i, j;
    int min;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    min = arr[0][0];

    printf("\nMatrix:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 3; i++){
        if(arr[i][i] < min){
            min = arr[i][i];
        }
    }

    printf("\n Min diagonal element = %d", min);

    return 0;
}