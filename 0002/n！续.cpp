// n������c++������
// ��Sn=1!+2!+3!+4!+5!+����+n!ֵ֮������n��һ�����֡�
/*
 �����ʽ
   ����һ������n��n <= 12
 �����ʽ
   ���Sn
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
