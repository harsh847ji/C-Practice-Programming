#include <stdio.h>

int arrsum(int arr[3][3],int arr2[3][3]){
    // int arr3[3][3];
    for(int i = 0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]=arr[i][j]+arr2[i][j];
        }
        
    }
    return arr[3][3];
}
int main()
{
    int arr3[3][3];
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d\t",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    int arr2[3][3]={
        {3,2,1},
        {6,5,4},
        {9,8,7}
    };
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d\t",arr2[i][j]);
    //     }
    //     printf("\n");
    // }
    // arr3[3][3]=arrsum(arr,arr2);
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d\t",arr3[i][j]);
    //     }
    //     printf("\n");
    // }

    for(int i = 0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]=arr[i][j]+arr2[i][j];
        }
        
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}