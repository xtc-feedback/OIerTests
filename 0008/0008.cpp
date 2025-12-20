#include <bits/stdc++.h>

using namespace std;

int n, m, a[10001];
bool check(int x) 
{
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		cnt += a[i] / x;
	}
	if (cnt >= m) return 1;
	else return 0;
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int p, q;
		scanf("%d.%d", &p, &q);
		a[i] = 100 * p + q;
	}
	int l = 0, r = 10000000, ans = -1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (check(mid))
		{
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	if (ans == -1) cout << "0.00";
	else printf("%d.%02d", ans / 100, ans % 100);
}