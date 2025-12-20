#include <bits/stdc++.h>
using namespace std;
double s, a, b;
double check(double x)
{
	double t1 = x / b + (s - x) / a;
	double t2 = x / b * (1 + (b - a) / (b + a));
	double t3 = t2 + (s - a * t2) / b;
	if (t1 <= t3) return true;
	else return false;
}
int main()
{
	cin >> s >> a >> b;
	double l = 0, r = s, ans;
	while (l + 1e-9 <= r)
	{
		double mid = (l + r) / 2;
		if (check(mid))
		{
			ans = mid;
			r = mid;
		}
		else l = mid;
	}
	printf("%.6lf", ans / b + (s - ans) / a);
}