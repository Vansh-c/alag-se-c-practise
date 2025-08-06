// matrix subtraction using struct . 


#include <stdio.h> 
#include <stdlib.h>

typedef struct{
    int row ; 
    int col ; 
    int **a ;    // pointer to an array of int pointers ( i.e 2D array )
} matrix ; 

matrix create_matrix(int r , int c){
    matrix mat ; 
    mat.row = r ; 
    mat.col = c ; 


    mat.a = (int**)malloc(r*sizeof(int *)) ;  // reserving r space for pointer . 

    for(int i = 0 ; i<r ; i++){
        mat.a[i] = (int *)malloc(c*sizeof(int)) ; 
    }

    return mat ; 

    
}


void free_matrix(matrix *mat){
   for(int i = 0 ;i<(*mat).row ; i++){
      free(mat->a[i]) ; 
   }

   free(mat->a) ;
}





int main()
{
    matrix m = create_matrix(2,2) ;

    for(int i = 0 ; i<m.row; i++){
        for(int j = 0 ; j<m.col ; j++){
            scanf("%d" , &m.a[i][j]) ;
        }
    }

    printf("\n") ; 
    printf("the matrix entered is \n") ; 

    for(int i = 0 ; i<m.row; i++){
        for(int j = 0 ; j<m.col ; j++){
            printf("%d " , m.a[i][j]) ;
        }
        printf("\n");
    }

    free_matrix(&m) ;


    return 0;
}