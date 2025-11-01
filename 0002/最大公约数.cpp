// 最大公约数【c++基础 数论】
// 给你二个整数，求两数最大的公约数。
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	if (a < b) swap(a, b);
	while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    cout << a;
}
