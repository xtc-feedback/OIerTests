#include<bits/stdc++.h>
using namespace std;
int n, a[101], k;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        int x;
        cin >> x;
        int tmp = a[x];
        for (int j = x; j <= n - 1; j++)
        {
            a[j] = a[j+1];
        }
        a[n] = tmp;
     }
     for (int i = 1; i <= n; i++) cout << a[i] << " ";
}