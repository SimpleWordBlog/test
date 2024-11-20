#include <stdio.h>

/*
 有m层阶梯，每次可选1,2,3走，有多少种走法
 1.分治：可以分为三个子问题，这三个问题互斥【求和】;即：f(m) = f(m-1) + f(m-2) + f(m-3)，退出条件f（1）=1，f（2）=2,f（3）=4
*/
int f(int m)
{
    if (m == 1)
    {
        return 1;
    }
    else if (m == 2)
    {
        return 2;
    }
    else if (m == 3)
    {
        return 4;
    }
    return f(m - 1) + f(m - 2) + f(m - 3);
}
int main()
{
    int m = 4;
    printf("%d", f(m));
    return 0;
}