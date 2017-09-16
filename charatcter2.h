#pragma once
#include<iostream>
#include<cassert>
#include<math.h>
#include<vector>
using namespace std;
namespace character2 {
	//设置小数点后n个数
	void setPointNum(int n) {
		cout.setf(ios::showpoint);
		cout.setf(ios::fixed);
		cout.precision(n);
	}
	//2-1水仙花数
	void daffodil() {
		for (int i = 100; i <= 999; i++)
		{
			int unit = i % 10;
			int decade = i / 10 % 10;
			int hundred = i / 100;
			if (pow(unit, 3) + pow(decade, 3) + pow(hundred, 3) == i) {
				cout << i << " " << endl;
			}
		}
	}

	//2-2韩信点兵
	void hanxin(int a, int b, int c) {
		bool hasAnswer = false;
		for (int i = 10; i <= 100; i++) {
			if (i % 3 == a && i % 5 == b&&i % 7 == c) {
				cout << i << endl;
				hasAnswer = true;
				break;
			}
		}
		if (!hasAnswer) {
			cout << "no answer" << endl;
		}
	}

	//2-3倒三角
	void triangle(int n) {
		assert(n > 0 && n <= 20);
		for (int i = 0; i < n; i++)
		{
			int j = i;
			while (j > 0) {
				cout << " ";
				j--;
			}
			int k = 2 * n - 2 * i - 1;
			while (k > 0) {
				cout << "#";
				k--;
			}

			cout << endl;
		}
	}

	//2-4子序列的和
	void subsequence(int n, int m) {
		assert(m > n&&m < 1e6);
		double sum = 0;
		for (double i = n; i <= m; i++) {
			sum += (1 / (i * i));//陷阱，i*i越界
		}
		setPointNum(5);
		cout << sum << endl;

	}
	//2-5分数化小数
	void decimal(int a, int b, int c) {
		assert(a <= 1e6&&b <= 1e6&&c <= 100);
		setPointNum(c);
		cout << a / double(b) << endl;

	}

	//2-6排列
	void permutation() {
		for (int abc = 123; abc <= 329; abc++) {
			int def = abc * 2;
			int ghi = abc * 3;
			vector<int> result;
			result.push_back(abc / 100);
			result.push_back(abc % 10);
			result.push_back(abc / 10 % 10);

			result.push_back(def / 100);
			result.push_back(def % 10);
			result.push_back(def / 10 % 10);

			result.push_back(ghi / 100);
			result.push_back(ghi % 10);
			result.push_back(ghi / 10 % 10);
			int isRight = 0;
			for (int i = 1; i <= 9; i++) {
				for (int sub : result) {
					if (i == sub) {
						isRight++;
						break;
					}
				}
			}

			if (isRight == 9) {
				cout << abc << " " << def << " " << ghi << endl;
			}

		}

	}
}
