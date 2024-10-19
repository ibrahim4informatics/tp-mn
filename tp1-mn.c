#include <stdio.h>

int main(){
    int A[100][100], B[100][100],C[100][100], n1,m1,n2,m2;
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
    if(m1 == n2){
        printf("We can do Matrix Multiplication A x B Result Matrix C(%d,%d)\n", n1,m2);
        for (int i = 0; i< n1; i++){
            for(int j = 0; j<m2; j++){
                    C[i][j] = 0;
                    for (int k = 0; k < n2 ; k++){
                        C[i][j] += A[i][k] * B[k][j];
                    }
            }
        }
        for (int i = 0; i < n1; i++){
            for (int j =0; j<m2;j++){
                printf ("%d,", C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
