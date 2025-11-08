#include <bits/stdc++.h>
using namespace std;
int n, m, a[101][101], b[101][101], ans;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> b[i][j];
            if (a[i][j] == b[i][j]) ans++;
        }
    }
    cout << ans;
}