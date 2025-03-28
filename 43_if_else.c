// wap to check student is pass or fail if 3 subject marks are given.
#include <stdio.h>
void main()
{
    int hindi, eng, math;
    float per;
    printf("enter marks of three subject : ");
    scanf("%d%d%d", &hindi, &eng, &math);
    per = ((hindi + eng + math) / 300.0) * 100;
    if (per > 33 && hindi > 33 && eng > 33 && math > 33)
    {
        printf("student pass\n");
        printf("student per = %.2f", per);
    }
    else
    {
        printf("student fail ");
    }
}