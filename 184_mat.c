// wap to display sum of two matrix.
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
void matSum(int r, int c, int mat1[r][c], int mat2[r][c], int matsum[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r);
    printf("enter column for matrix : ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], matsum[r][c];
    int i, j;
    printf("enter matrix1 element : \n");
    setMat(r, c, mat1);
    printf("enter matrix2 element : \n");
    setMat(r, c, mat2);
    printf("matrix1 element are : \n");
    dispMat(r, c, mat1);
    printf("matrix2 element are : \n");
    dispMat(r, c, mat2);
    matSum(r, c, mat1, mat2, matsum);
    printf("matrixsum element are : \n");
    dispMat(r, c, matsum);
}