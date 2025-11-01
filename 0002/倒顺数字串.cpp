// 倒顺数字串
// 输入正整数n,输出它的倒顺数字串。如：n=6时，输出：1 2 3 4 5 6 5 4 3 2 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cout << i << " ";
	for (int i = n-1; i >= 1; i--)
		cout << i << " ";
} 
