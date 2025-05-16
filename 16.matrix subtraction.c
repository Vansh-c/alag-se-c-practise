#include <stdio.h>

int main()
{

    
    int matA[20][20] , matB[20][20] , matC[20][20];
    int row, col,i,j;
    printf("enter rows and cols \n");
    scanf("%d",&row);
    scanf("%d",&col);

    printf("enter  matrix A \n");
    for( i = 0 ; i<row ; i++){
        for( j = 0 ; j<col ; j++){
            scanf("%d",&matA[i][j]);
        }
    }

    printf("enter matrix b \n");

    for(i = 0 ; i<row ; i++){
        for(j = 0 ; j<col ; j++){
            scanf("%d" , &matB[i][j]);
        }
    }
    printf("\n");

    for(i = 0 ; i<row ; i++){
        for(j = 0 ; j<col ; j++){
            matC[i][j] = matA[i][j] - matB[i][j];
            printf("%d ",matC[i][j]);
        }
        printf("\n");
    }
    return 0;
}