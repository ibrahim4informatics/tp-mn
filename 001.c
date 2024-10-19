#include <stdio.h>

int main (){
    // 1- introduction:

    /*
        en: {
            matrix declaration in C:
                type (int, float, char, ...etc) identifier (name of the matrix) [lines][columns]
                example above for a matrix named myMatrix of type integers with 4 lines and 3 columns.
        }

         fr: {
            déclaration de matrice en C :
                type (int, float, char, ...etc) identifiant (nom de la matrice) [lignes][colonnes]
                exemple ci-dessus pour une matrice nommée myMatrix de type entier (int) composée de 4 lignes et 3 colonnes.
        }
    */
    int myMatrix [4][3];
    /*-------------------------------------------------------------------------------------------------------------------------------------------------*/
    /*
        en : {

            Inserting a Matrix in C:
                To insert a matrix in C, you typically use nested loops. First, declare the matrix with its type,
                number of rows, and columns. Then, prompt the user to input the elements of the matrix.
                For each element, store the input in the corresponding index of the matrix.

            Example:
            int myMatrix[4][3]; // Declaration of a 4x3 matrix of integers
        }

        fr : {

            Insertion d'une matrice en C :
                Pour insérer une matrice en C, vous utilisez généralement des boucles imbriquées.
                Tout d'abord, déclarez la matrice avec son type, le nombre de lignes et de colonnes.
                Ensuite, demandez à l'utilisateur d'entrer les éléments de la matrice.
                Pour chaque élément, stockez l'entrée dans l'index correspondant de la matrice.

            Exemple :
                int maMatrice[4][3]; // Déclaration d'une matrice de 4 lignes et 3 colonnes d'entiers

        }
    */

    // Example Start:
    int i, j;

    for (i = 0; i< 4; i++){
        for (j=0;j<3;j++){
            printf("Enter the value of A[%d][%d]= ", i+1, j+1); /* j+1 & i+1 is because the counter start from 0 to size - 1 */
            scanf("%d", &myMatrix[i][j]); /* scanf used to read value from user then assign it in the address of variable this is why we use & before matrix identifier */
        }
    }
    // Example Ends
    /*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

    /*
        en: {

            Showing a Matrix in C:
                To display a matrix in C, you can use nested loops to iterate through each element and print them in a structured format.
                This allows for clear visualization of the matrix's contents.

        Example:
            int myMatrix[4][3]; // Declaration of a 4x3 matrix of integers
            Assuming the matrix has already been populated with values
        }

        fr: {
            Affichage d'une matrice en C :
                Pour afficher une matrice en C, vous pouvez utiliser des boucles imbriquées pour itérer à travers chaque élément et les imprimer dans un format structuré.
                Cela permet une visualisation claire du contenu de la matrice.

            Exemple :
                int maMatrice[4][3]; // Déclaration d'une matrice de 4 lignes et 3 colonnes d'entiers

                Supposons que la matrice a déjà été remplie de valeurs
        }

    */

    // Example Start
    // we can use i and j variable declared in line 48 of this file
    for (i = 0; i < 4 ; i++){
        for (j = 0; j<3; j++){
            printf("%d,", myMatrix[i][j]); /* using %d to make the value integer printed using printf | we add , just for seperate each line element value */
        }
        printf("\n"); /* adding line space when every line reach the end */
    }
    // Example Ends

    // Before dive deeper we are using 44 and 3 constantly because we are demonstrating how it work but you can ask user to enter the size of array and use them as variable inside for loopa
    /*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


    /*
        en : {
            Matrix Sum in C:
                The matrix sum is the result of adding two matrices, which must have the same number of rows and columns.
                To perform the addition, each corresponding element with the same indices from the two matrices is summed and
                assigned to a third matrix.

                Example: The sum of matrix A and matrix B is stored in matrix S.
        }

        fr : {
            Somme de matrices en C :
                La somme de matrices est le résultat de l'addition de deux matrices, qui doivent avoir le même nombre de lignes et de colonnes.
                Pour effectuer l'addition, chaque élément correspondant avec les mêmes indices des deux matrices est additionné et
                assigné à une troisième matrice.

                Exemple : La somme de la matrice A et de la matrice B est stockée dans la matrice S.

        }
    */

    // Example Start:
    // 1-Declaration
    int A[100][100], B[100][100],C[100][100],na,ma,nb,mb;
    /*
        Explaining:
        #declared 3 Matrices A B C with max size of 100 lines and 100 columns
        #declare na and ma variables to allow user enter the real size of the matrix A
        #declare nb and mb variables to allow user enter the real size of the matrix B
    */

    printf("Enter the size of Matrix A:");
    printf("\nLines: "); //add \n to make lines in new line
    scanf("%d", &na); // assign the value entered by user to the variable na (number of lines in matrix A)
    printf("Columns: ");
    scanf("%d", &ma); // assign the value entered by user to the variable ma (number of columns in matrix A)
    // check if na or ma out of size of matrix 100 lines and 100 columns
    if(na>100 || ma > 100){
        printf("number of lines or columns is bigger than the size of matrix");
    }

    printf("Enter the size of Matrix B:");
    printf("\nLines: "); //add \n to make lines in new line
    scanf("%d", &nb); // assign the value entered by user to the variable nb (number of lines in matrix B)
    printf("Columns: ");
    scanf("%d", &mb); // assign the value entered by user to the variable mb (number of columns in matrix B)
    // check if nb or mb out of size of matrix 100 lines and 100 columns
    if(na>100 || ma > 100){
        printf("number of lines or columns is bigger than the size of matrix");
        return 1; /* to quit the program with status 1 meaning an error happend*/
    }
    // inserting values in matrix A and B (you can see on the top explained line 21)
    // notice i and j declared on line 48
    for (i=0; i<na;i++){
        for(j=0;j<ma;j++){
            printf("Enter Value A[%d][%d]= ", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for (i=0; i<nb;i++){
        for(j=0;j<mb;j++){
            printf("Enter Value B[%d][%d]= ", i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }

    // check if the size of A and B are the same (condition to make the sum)
    if((na == nb) && (ma == mb)){
        // if true we make the sum
        // in the loop counter we can use ma and na or mb and nb the same
        // we will sum A and B in S => C = A + B
        for(i=0;i<na;i++){
            for(j=0;j<ma;j++){
                C[i][j] = A[i][j]+B[i][j]; // make the value of each element in C the sum of the two element of the same indices
            }
        }
        // finally we need to show the Matrix as Result (you can see in details in line 59)
        for (i = 0; i < na ; i++){
            for (j = 0; j<ma; j++){
                printf("%d,", C[i][j]);
            }
        printf("\n");
    }
    }
    else {
        printf("we can't sum this two matrices.");
    }
    // The same for subtraction replace + with - in loop  => C[i][j] = A[i][j] - B[i][j]
    // Example Ends
    /*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

    /*
    en: {
        Matrix Trace in C:
            The trace of a square matrix is the sum of the elements on the main diagonal (from the top left to the bottom right).
            This operation can only be performed on square matrices (matrices with an equal number of rows and columns).

        Example:
            For a 3x3 matrix A:
            A = [a11 a12 a13]
                [a21 a22 a23]
                [a31 a32 a33]

            The trace of A is: trace(A) = a11 + a22 + a33
    }

    fr: {
        Trace d'une matrice en C :
            La trace d'une matrice carrée est la somme des éléments sur la diagonale principale (de l'angle supérieur gauche à l'angle inférieur droit).
            Cette opération ne peut être effectuée que sur des matrices carrées (matrices avec un nombre égal de lignes et de colonnes).

        Exemple :
            Pour une matrice 3x3 A :
            A = [a11 a12 a13]
                [a21 a22 a23]
                [a31 a32 a33]

            La trace de A est : trace(A) = a11 + a22 + a33
    }
*/

    // Example Start

    // decalration
    int trace; // variable holds the trace value
    // we will use A in this example
    // 1- asking user again to enter the size of A
    printf("Enter the size of Matrix A:");
    printf("\nLines: "); //add \n to make lines in new line
    scanf("%d", &na); // assign the value entered by user to the variable na (number of lines in matrix A)
    printf("Columns: ");
    scanf("%d", &ma); // assign the value entered by user to the variable ma (number of columns in matrix A)
    // check if na or ma out of size of matrix 100 lines and 100 columns
    if(na>100 || ma > 100){
        printf("number of lines or columns is bigger than the size of matrix");
    }

    // inserting values in A
     for (i=0; i<na;i++){
        for(j=0;j<ma;j++){
            printf("Enter Value A[%d][%d]= ", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    // check the condition to calculate trace value (condition is lines = columns -> na = ma)
    if(ma == na){

            // we calculate the main diagonal sum it means the sum of a11 + a22 + a22 + ... + ann -> means we have just one counter -> one loop
            // i< na it means we need to loop on every line in A because in every line we have one element from the main diagonal
            // initialize trace with 0 so we can sum the main diagonal elements make sure it outside the loop otherwise it will be 0 on every loop
            trace = 0;
            for(i = 0; i < na; i++){
                trace += A[i][i];
            }

            // last thing we print trace to see results
            printf("%d", trace);

    }
    else {
        printf("we can't calculate trace of A ");
    }
    return 0;
}
