// 爱几何2【c++基础】
/*
有一种特殊的平行四边形：菱形，菱形既四条边均相等的平行四边形。

前面我们已经实现了等腰直角三角形的输出，那么现在，你能实现菱形的输出么。

这里，我们会给出菱形的边长n。
*/
/*
 输入格式
   输入菱形的边长n(n<=20)
 输出格式
   输出对应的菱形。
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
