// �ۼ�����c++������
// ����ʵ��һ���ۼ���������n������������ǵĺ͡�
/*
 �����ʽ
 ����������С�

 ��һ�У�����һ������n����ʾ�ܹ���n������

 �ڶ��У�����n��������

 �����ʽ
 ���n�����ĺ͡� 
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
