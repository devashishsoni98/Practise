// Matrix addition, subtraction & multiplication  
#include <stdio.h>

int main()
{
    int i, j, row, col, op;

    // Take in number of rows and columns for matrices
    printf("Enter the number of rows:\n");
    scanf("%d", &row);
    printf("Enter the number of columns:\n");
    scanf("%d", &col);
    printf("Enter the operation:\n");
    printf("Enter 1 for addition.\nEnter 2 for subtraction.\nEnter 3 for multiplication.\n");
    scanf("%d", &op);

    int arr1[row][col], arr2[row][col], result[row][col];

    switch (op)
    {
    case 1:

        printf("Enter first array elements:\n");
            for (i = 0; i < row; i++)
            {
             for (j = 0; j < col; j++)
             {
                scanf("%d", &arr1[i][j]);
             }
            }

        printf("Enter second array elements:\n");
            for (i = 0; i < row; i++)
            {
             for (j = 0; j < col; j++)
             {
                scanf("%d", &arr2[i][j]);
             }
            }    

        printf("The resulting array is: \n");
            for (i = 0; i < row; i++)
            {
             for (j = 0; j < col; j++)
             {
                result[i][j]=arr1[i][j]+arr2[i][j];
                printf("%d ", result[i][j]);
             }
                printf("\n");
            }
            
        break;

    case 2: 

            printf("Enter first array elements:\n");
            for (i = 0; i < row; i++)
            {
             for (j = 0; j < col; j++)
             {
                scanf("%d", &arr1[i][j]);
             }
            }

        printf("Enter second array elements:\n");
            for (i = 0; i < row; i++)
            {
             for (j = 0; j < col; j++)
             {
                scanf("%d", &arr2[i][j]);
             }
            }    

        printf("The resulting array is: \n");
            for (i = 0; i < row; i++)
            {
             for (j = 0; j < col; j++)
             {
                result[i][j]=arr1[i][j]-arr2[i][j];
                printf("%d ", result[i][j]);
             }
                printf("\n");
            }

        break;    

    case 3: 

            printf("Enter first array elements:\n");
            for (i = 0; i < row; i++)
            {
             for (j = 0; j < col; j++)
             {
                scanf("%d", &arr1[i][j]);
             }
            }

        printf("Enter second array elements:\n");
            for (i = 0; i < row; i++)
            {
             for (j = 0; j < col; j++)
             {
                scanf("%d", &arr2[i][j]);
             }
            }    

        printf("The resulting array is: \n");
            for (i = 0; i < row; i++)
            {
             for (j = 0; j < col; j++)
             {
                result[i][j]=0;
                for (int k = 0; k <row ; k++)
                result[i][j]+=arr1[i][k]*arr2[k][j];
                printf("%d ", result[i][j]);
             }
                printf("\n");
            }

        break;         
    
    default:
        printf("default\n");
        break;
    }

    

    return 0;
}