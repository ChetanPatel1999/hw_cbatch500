// wap to multiply two matrix.
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
void multiplyMatrix(int r1, int c1, int r2, int c2, int mat1[r1][c1], int mat2[r2][c2], int ansmat[r1][c2])
{
    int i, j, sum, k;
    for (i = 0; i < r1; i++) // 1
    {
        for (j = 0; j < c2; j++) // 0
        {
            sum = 0;
            for (k = 0; k < c1; k++) // 2
            {
                sum = sum + (mat1[i][k] * mat2[k][j]); // 26
            }
            ansmat[i][j] = sum;
        }
    }
}
void main()
{
    int r1, c1;
    printf("enter row for matrix : ");
    scanf("%d", &r1);
    printf("enter column for matrix : ");
    scanf("%d", &c1);
    int mat1[r1][c1];
    printf("enter matrix element : \n");
    setMat(r1, c1, mat1);
    int r2, c2;
    printf("enter row for matrix : ");
    scanf("%d", &r2);
    printf("enter column for matrix : ");
    scanf("%d", &c2);

    int mat2[r2][c2];
    printf("enter matrix element : \n");
    setMat(r2, c2, mat2);
    printf("display matrix element : \n");
    dispMat(r1, c1, mat1);
    printf("display matrix element : \n");
    dispMat(r2, c2, mat2);
    if (c1 == r2)
    {
        int ansMat[r2][c1];
        multiplyMatrix(r1, c1, r2, c2, mat1, mat2,ansMat);
        printf("multiply of  matrix :\n");
        dispMat(r1, c2, ansMat);
    }
    else
    {
        printf("you cant into matrix becase frist mat coulm not match with second mat row");
    }
}