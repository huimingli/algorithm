#pragma once
#include<iostream>
using namespace std;
namespace characterOne {
	//����С�����n����
	void setPointNum(int n) {
		cout.setf(ios::showpoint);
		cout.setf(ios::fixed);
		cout.precision(n);
	}
	//1-1��ƽ��ֵ�����������λС��
	void average() {
		int a = 0;
		int b = 0;
		int c = 0;
		cin >> a >> b >> c;
		setPointNum(3);
		cout << double(a + b + c) / 3 << endl;
	}

	//1-2���϶�ת�����϶�
	void temperature() {
		double f = 0;
		cin >> f;
		setPointNum(3);
		cout << 5 * (f - 32) / 9 << endl;

	}

	//1-3�Ȳ�����
	void sum(int n) {
		int result = 0;
		while (n > 0) {
			result += n;
			n--;
		}
		cout << result << endl;
	}

	//1-4��������
	void sinAndCos(int n) {
		assert(n < 360 && n >= 0);
		cout << sin(n * 3.14 / 180) << endl;
		cout << cos(n * 3.14 / 180) << endl;
	}

	//1-5����
	void discount(int num) {
		double pay = 95 * num;
		if (pay > 300) {
			pay = pay * 0.85;
		}
		setPointNum(2);
		cout << pay << endl;

	}

	//У��������
	void checkTriangle(int a, int b, int c) {
		assert(a > 0 && b > 0 && c > 0);
		if (a + b <= c || a + c <= b || b + c <= a) {
			cout << "not triangle" << endl;
			return;
		}
		int aa = a * a;
		int bb = b*b;
		int cc = c*c;

		if (aa + bb == cc || aa + cc == bb || bb + cc == aa) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}

	}

	//����ֵϸ��
	void showDetail() {
		cout << "max int:" << INT_MAX << endl;
		cout << "min int:" << INT_MIN << endl;
		 
	}
}
