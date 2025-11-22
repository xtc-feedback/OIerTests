#include <bits/stdc++.h>
using namespace std;
int n, a[1001], b[1001];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = i;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
            }
    }
    for (int i = 1; i <= n; i++) cout << b[i] << " ";
    double cur = 0, sum = 0;
    for (int i = 2; i <= n; i++)
    {
        cur += a[i - 1];
        sum += cur;
    }
    cout << endl << fixed << setprecision(2) << (sum / n);
}