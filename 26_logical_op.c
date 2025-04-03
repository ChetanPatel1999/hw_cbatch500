// logical operator
#include <stdio.h>
void main()
{
    int ans;
    // ans = 12 > 7 && 89 == 89 && 12 != 9;
    // ans = 12 > 77 || 89 == 9 || 12 != 12;
    // ans = !(12>7);
    ans = !(12 > 7 || 89 == 9 || 12 != 9);
    printf("ans : %d\n", ans);
}