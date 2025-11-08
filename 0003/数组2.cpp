#include <bits/stdc++.h>
using namespace std;
int a[101], n, k, sum = 0;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	cin >> k;
	cout << sum << endl << a[k];
}
