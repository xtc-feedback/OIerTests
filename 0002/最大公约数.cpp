// ���Լ����c++���� ���ۡ�
// ����������������������Ĺ�Լ����
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	if (a < b) swap(a, b);
	while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    cout << a;
}
