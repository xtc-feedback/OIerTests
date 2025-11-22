#include <bits/stdc++.h>
using namespace std;
int n, a[1001];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n - 1; i++)
    {
        int k = i;
        for (int j = i; j <= n; j++)
            if (a[k] > a[j]) k = j;
        if (k != i) swap(a[k], a[i]);
    }
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
}