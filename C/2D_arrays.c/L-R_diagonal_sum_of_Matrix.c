#include<stdio.h>
int main (){

    int arr[3][3], i, j;
    int sum = 0;

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
            if(i==j)
            sum = sum + arr[i][j];
        }
    }
    printf("Sum = %d", sum);
    return 0;
}