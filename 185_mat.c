// wap to display left digonal element of matrix.
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
void dispLeftDigonal(int r, int c, int mat[r][c])
{
    int i, j;
    if (r == c)
    {
        printf("left digonal of matrix : ");
        for (i = 0; i < r; i++) // 2
        {
            printf("%d ", mat[i][i]);
        }
    }
    else
    {
        printf("your matrix is not square matrix");
    }
}
void dispLeftDigonal1(int r, int c, int mat[r][c])
{
    int i, j;
    if (r == c)
    {
        int sum=0;
        printf("left digonal of matrix : \n");
        for (i = 0; i < r; i++) // 2
        {
            for (j = 0; j < c; j++) // 0
            {
              if(i==j)
              {
                printf("%d ", mat[i][j]);
                sum=sum+mat[i][j];
              }
              else
              {
                printf("0 ");
              }
            }
            printf("\n");
        }
        printf("left digonal sum : %d",sum);
    }
    else
    {
        printf("your matrix is not square matrix");
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
    dispLeftDigonal1(r, c, mat1);
}