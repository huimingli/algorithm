// algorithm.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
 
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(3);
	cout << double(a + b + c) / 3 << endl;
    return 0;
}

