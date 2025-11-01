// 空心的字母金字塔
// 输入一个大写的英文字母，输出一个空心的字母金字塔。
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	int n;
	cin >> c;
	n = c - 'A' + 1;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			for (int j = 1; j <= 39; j++) cout << " ";
			cout << 'A' << endl;
		}
		else
		{
			for (int j = 1; j <= 40 - i; j++) cout << " ";
			c = 'A' + i - 1;
			cout << c;
			for (int j = 1; j <= 2 * i - 3; j++)
				if (i < n) cout << " ";
				else cout << c;
			cout << c << endl;
		}
	}
}
