#include <stdio.h>

/*
num[i][j]
边缘元素；num[i][0]=1,num[i][i]=1
中间元素1<=j<i时；num[i][j]=num[i-1][j-1]+num[i-1][j]
每行0和i-1都为1,1~i2都是
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
  1 5 10 10 5 1
*/
int main()
{
    int num[6][6] = {0};
    // 边缘元素
    for (int i = 0; i < 6; i++)
    {
        num[i][0] = 1;
        num[i][i] = 1;
        // 计算中间元素
        for (int j = 1; j < i; j++)
        {
            // 上一层左右两侧元素和
            num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
        }
    }

    // 遍历数组中非0元素
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (num[i][j] != 0)
            {
                printf("%d ", num[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}