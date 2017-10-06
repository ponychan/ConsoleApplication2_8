// ConsoleApplication28.cpp: 定义控制台应用程序的入口点。
//2.8.cpp求一个正整数的所有因子

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "input a positive integer";
	cin >> n;
	cout << "number " << n << " factors";
	for (int k = 1; k <= n; k++) {
		if (n%k == 0)
			cout << k << " ";
	}
	cout << endl;
	return 0;
}

