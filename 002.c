#include <stdio.h>

int main(){
    // declaration phase
    int A[100][100], B[100][100],C[100][100], n1,m1,n2,m2;
    // inserting in matrix A
    printf("Enter Values (line - column) For Matrix A\n lines:");
    scanf("%d",&n1);
    printf("\ncolumns:");
    scanf("%d",&m1);
    for(int i =0; i < n1; i++){
        for(int j = 0; j< m1; j++){
            printf("Enter the value of A(%d,%d)",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }
    // inserting in matrix B
    printf("Enter Values (line - column) For Matrix B\n lines:");
    scanf("%d",&n2);
    printf("\ncolumns:");
    scanf("%d",&m2);
    for(int i =0; i < n2; i++){
        for(int j = 0; j< m2; j++){
            printf("Enter the value of B(%d,%d)",i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }
    // check condtion to do matrix multiplication A(n1,m1) and B(n2,m2) -> m1=n2 and C(n1,m2)
    if(m1 == n2){
        printf("We can do Matrix Multiplication A x B Result Matrix C(%d,%d)\n", n1,m2);
        // first loop to loop on every C matrix line
        for (int i = 0; i< n1; i++){
            // second loop for looping on every C matrix column 
            for(int j = 0; j<m2; j++){
                    // initializing C[i][j] by 0 to sum the k line of A with k column of B
                    C[i][j] = 0;
                // k is representing the number of lines of the A matrix and the number column of matrix B
                    for (int k = 0; k < n2 ; k++){
                        C[i][j] += A[i][k] * B[k][j];
                    }
            }
        }
        // shwoing the result of the C matrix
        for (int i = 0; i < n1; i++){
            for (int j =0; j<m2;j++){
                printf ("%d,", C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
