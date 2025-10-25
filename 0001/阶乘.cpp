// n!【c++基础】
// 输入一个数n，输出n的阶乘。
/*
 输入格式
   输入一个整数n，n<=20。
 输出格式
   输出n！
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long ans = 1;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		ans *= i;
	cout << ans;
}
