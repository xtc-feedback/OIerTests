// ������2��c++������
/*
��һ�������ƽ���ı��Σ����Σ����μ������߾���ȵ�ƽ���ı��Ρ�

ǰ�������Ѿ�ʵ���˵���ֱ�������ε��������ô���ڣ�����ʵ�����ε����ô��

������ǻ�������εı߳�n��
*/
/*
 �����ʽ
   �������εı߳�n(n<=20)
 �����ʽ
   �����Ӧ�����Ρ�
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n-i; j++) cout << " ";
//        for (int j = 1; j <= i*2-1; j++ ) cout << "*";
//        cout << endl;
//    }
//    for (int i = n-1; i >= 1; i--)
//    {
//        for (int j = 1; j <= n-i; j++) cout << " ";
//        for (int j = 1; j <= i*2-1; j++ ) cout << "*";
//        cout << endl;
//    }
//    return 0;
    
    int n, num1, num2;
    cin >> n;
    num1 = n-1;
    num2 = 1;
    for (int i = 1; i <= n; i++)
    {
		for (int j = 1; j <= num1; j++) cout << " ";
		for (int j = 1; j <= num2; j++) cout << "*";
		num1--;
		num2 += 2;
		cout << endl;
	}
	num1 = 1;
	num2 = n*2-3;
	for (int i = 1; i <= n - 1; i++)
    {
		for (int j = 1; j <= num1; j++) cout << " ";
		for (int j = 1; j <= num2; j++) cout << "*";
		num1++;
		num2 -= 2;
		cout << endl;
	}
}
