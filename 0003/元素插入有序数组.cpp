#include <bits/stdc++.h>
using namespace std;
int n, a[210], k;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        int x, pos = -1;
        cin >> x;
        for (int j = 1; j <= n; j++)
            if (a[j] > x)
            {
                pos = j;
                break;
            }
        if (pos == -1)
        {
            n++;
            a[n] = x;
        }
        else
        {
            for (int j = n; j >= pos; j--)
            {
                a[j + 1] = a[j];
            }
            a[pos] = x;
            n++;  
        }
    }
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
}