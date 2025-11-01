// 完数【c++基础】
/* 一个数如果恰好等于它的因子之和，这个数就称为“完数”。

例如，6的因子为1、2、3，而6=1+2+3，因此6是“完数”。编程序找出N之内(包括N)的所有完数。
*/
/* 
 输入格式
   输入一个数n，n小于1000。
 输出格式
  输出小于等于n的所有完数，每个完数占一行。 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0) sum += j; 
		}
		if (sum == i) cout << i << endl;
	}
} 
