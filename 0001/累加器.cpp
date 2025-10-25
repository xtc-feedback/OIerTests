// 累加器【c++基础】
// 请你实现一个累加器。输入n个数，输出他们的和。
/*
 输入格式
 输入包括两行。

 第一行：包括一个整数n，表示总共有n个数。

 第二行：包含n个整数。

 输出格式
 输出n个数的和。 
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i = 1, sum = 0, x;
	cin >> n;
	while (i <= n)
	{
		cin >> x;
		sum += x;
		i++;
	}
	cout << sum;
}
