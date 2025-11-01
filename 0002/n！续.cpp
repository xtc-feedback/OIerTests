// n！续【c++基础】
// 求Sn=1!+2!+3!+4!+5!+……+n!之值，其中n是一个数字。
/*
 输入格式
   输入一个整数n，n <= 12
 输出格式
   输出Sn
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		long long c = 1;
		for (int j = 1; j <= i; j++)
		{
			c = c * j;
		}
		sum += c;
	} 
	cout << sum;
} 
