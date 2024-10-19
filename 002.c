#include <stdio.h>

int main(){

    // 1- Introduction:

    /*
        en: {
            Matrix Multiplication in C:
                Matrix multiplication involves taking two matrices A and B and producing a new matrix C.
                The number of columns in matrix A must equal the number of rows in matrix B for multiplication to be valid.
    
                For two matrices A of size m x n and B of size n x p, the resulting matrix C will have size m x p.
                Each element of matrix C is calculated as the dot product of the corresponding row from matrix A and the column from matrix B.
    
            Example:
                A = [a11 a12]      B = [b11 b12 b13]
                    [a21 a22]          [b21 b22 b23]
    
                C = [c11 c12 c13]
                    [c21 c22 c23]
    
                Each element of C is calculated as:
                c11 = a11 * b11 + a12 * b21
                c12 = a11 * b12 + a12 * b22
                c13 = a11 * b13 + a12 * b23
                And so on for the rest of the elements.
        }
    
        fr: {
            Multiplication de matrices en C :
                La multiplication de matrices consiste à prendre deux matrices A et B et à produire une nouvelle matrice C.
                Le nombre de colonnes dans la matrice A doit être égal au nombre de lignes dans la matrice B pour que la multiplication soit valide.
    
                Pour deux matrices A de taille m x n et B de taille n x p, la matrice résultante C aura une taille de m x p.
                Chaque élément de la matrice C est calculé comme le produit scalaire de la ligne correspondante de la matrice A et de la colonne de la matrice B.
    
            Exemple :
                A = [a11 a12]      B = [b11 b12 b13]
                    [a21 a22]          [b21 b22 b23]
    
                C = [c11 c12 c13]
                    [c21 c22 c23]
    
                Chaque élément de C est calculé ainsi :
                c11 = a11 * b11 + a12 * b21
                c12 = a11 * b12 + a12 * b22
                c13 = a11 * b13 + a12 * b23
                Et ainsi de suite pour le reste des éléments.
        }
    */
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
