// 无比顺利【c++基础】
// 中国人非常喜欢6这个数字，因为大家总爱说66大顺啊。数学狂人叶某人喜欢把什么都数字化，于是她把顺利这个词也定义了数量级，6代表1级顺利，66代表2级顺利，666代表3级顺利，以此类推。你看，数学狂人的世界总是让人无法理解。今天，叶某人决定将数学进行到底，现在她设前n级顺利的和是sn。
/*
输入格式
输入一个数n，n不会超过10。
输出格式
输出Sn的值
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long cur = 0, ans = 0;
	for (int i = 1; i <= n; i++)
	{
		cur = cur * 10 + 6;
		ans += cur;
	}
	cout << ans;
}
