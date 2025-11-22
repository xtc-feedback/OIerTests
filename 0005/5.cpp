/*
    输入一个n行m列的矩阵，接下来进行两种操作：
（1）1 x y，表示将矩阵的第x行和第y行进行交换；

（2）2 x y，表示将矩阵的第x列和第y列进行交换；

输出经过k次操作之后的矩阵。（1<=n,m<=100,k<=100）

输入格式
第一行输入两个整数 n m

第二行到第n+1行，入一个n*m的矩阵

紧接着输入一个数k，表示操作的步数

接下来输入k行，每行包括三个数，表示操作的类型和操作的行号或者列号。

输出格式
输出最后的矩阵。

每个数字后面一个空格
*/
#include <bits/stdc++.h>
using namespace std;
int n, m, a[101][101];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    int kk;
    cin >> kk;
    for (int k = 1; k <= kk; k++)
    {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1)
        {
            for (int j = 1; j <= m; j++)
                swap(a[x][j], a[y][j]);
        }
        else
        {
            for (int i = 1; i <= n; i++)
                swap(a[i][x], a[i][y]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}