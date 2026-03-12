#include<stdio.h>
int main (){

    int arr[3][3], i, j;
    int max = arr[0][0];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n Matrix \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(arr[i][j] > max){
            max = arr[i][j];
            }
        }
    }
    printf("Max = %d", max);
    return 0;
}