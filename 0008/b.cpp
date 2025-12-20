#include <bits/stdc++.h>
using namespace std;
int n, m, a[100001];
bool check(int x) {
	int cur = 0, cnt = 1;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] > x) return false;
		if (cur + a[i] <= x) cur += a[i];
		else {
			cnt++;
			cur = a[i];
		}

	}
	if (cnt <= m) return true;
	else return false;
}
int main()
{
	cin >> n >> m;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	int l = 0, r = sum, ans = -1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (check(mid))
		{
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	cout << ans;
}