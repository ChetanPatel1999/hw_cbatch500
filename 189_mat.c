// wap to display transpose of matrix.
#include <stdio.h>
void setMat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("enter matrix element pos[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}
void dispMat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void transpose(int r, int c, int mat[r][c])
{
    int i, j;
    printf("transpose of matrix : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
}
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r);
    printf("enter column for matrix : ");
    scanf("%d", &c);
    int mat1[r][c];
    printf("enter matrix element : \n");
    setMat(r, c, mat1);
    printf("display matrix element : \n");
    dispMat(r, c, mat1);
    transpose(r, c, mat1);
}