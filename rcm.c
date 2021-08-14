#include <stdio.h>

int main(){
    int i, k,j,colm, row,sum = 0, add = 0;
    
    printf("Give the number of rows and columns (remember rows and columns need to be same: ");
    scanf("%d %d", &row, &colm);

if (row == colm){

    int a[row][colm];
    int b[row][colm];
    int c[row][colm];
    for ( i = 0; i < row; i++)
    {
        for ( k = 0; k < colm; k++)
        {
            printf("Give the first matrix: ");
            scanf("%d", &a[i][k]);
        }
        
    }
    for ( i = 0; i < row; i++)
    {
        for ( k = 0; k < colm; k++)
        {
            printf("Give the second matrix: ");
            scanf("%d", &b[i][k]);
        }
        
    }
    
    for ( j = 0; j < row; j++)
    {
        
        for ( i = 0; i < row; i++)
        {
            
            for ( k = 0; k < colm; k++)
            {
                sum = a[j][k] * b[k][i];
                add = add + sum; 
                
            }
            c[j][i] = add;

            
            add = 0;
            sum = 0;
        }
        
    }
    for ( i = 0; i < row; i++)
    {
        for ( k = 0; k < colm; k++)
        {
            printf("%d ", c[i][k]);
        }
        printf("\n");    
    }
}
else
{
    printf("Error!! (Rows and columns need to be same)");
}
    
    return 0;
}
