#include <bits/stdc++.h>
using namespace std;
int kk, n, f[10001];
int main()
{
	cin >> kk;
	for (int k = 1; k <= kk; k++)
	{
		int num = 0;
		for (int i = 1; i <= 10000; i++) f[i] = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			int x;
			cin >> x;
			f[x]++;
			if (f[x] > num) num = f[x];
		}
		if (num <= (n+1) /2) cout << "Y" << endl;
		else cout << "N" << endl;
	}
 } 