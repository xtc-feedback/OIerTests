#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, sum = 0, cur = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int c;
		cin >> c;
		sum += c;
		if (i == 3) cur = c;
	}
	cout << sum << endl << cur;
}
