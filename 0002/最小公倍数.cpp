#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a, b , c, s;
	cin >> a >> b;
	s = a * b;
	if (a < b) swap(a, b);
	while (b != 0)
	{
		long long r = a % b;
		a = b;
		b = r;
	}
	cout << s/a;
}
