// algorithm.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "character1.h"
using namespace std;
//设置小数点后n个数
void setPointNum(int n) {
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(n);
}


//3-1计算得分
int score(char *result) {
	int sum = 0;
	int sub = 1;
	for (size_t i = 0; i < strlen(result); i++)
	{
		if (result[i] == 'O') {
			sum += sub;
			sub++;
		}
		else {
			sub = 1;
		}
	}
	return sum;
}

//3-2分子量
void molarMass(char * molar) {

}

void digitCount(int n) {
	string result;
	unordered_map<int, int> intMap = {
		{ 0,0 },{ 1,0 },{ 2,0 },{ 3,0 },
		{ 4,0 },{ 5,0 },{ 6,0 },{ 7,0 },
		{ 8,0 },{ 9,0 }
	};
	for (int i = 1; i <= n; i++) {
		result.append(to_string(i));
	}
	for each (char var in result)
	{
		switch (var) {
		case '0':
			intMap[0] += 1;
			break;
		case '1':
			intMap[1] += 1;
			break;
		case '2':
			intMap[2] += 1;
			break;
		case '3':
			intMap[3] += 1;
			break;
		case '4':
			intMap[4] += 1;
			break;
		case '5':
			intMap[5] += 1;
			break;
		case '6':
			intMap[6] += 1;
			break;
		case '7':
			intMap[7] += 1;
			break;
		case '8':
			intMap[8] += 1;
			break;
		case '9':
			intMap[9] += 1;
			break;
		}
	}

	for (int i = 0; i<9; i++)
	{
		cout << intMap[i] << endl;
	}


}

bool checkPeriodic(string subStr, string mainStr) {
	if (mainStr.length() % subStr.length() == 0) {
		for (int i = 0; i < mainStr.length(); i++)
		{
			int length = subStr.length();
			int sub = i % length;
			if (subStr[sub] != mainStr[i]) {
				return false;
			}
		}
		return true;
	}
	return false;
}

//3-4周期串
void periodic(string str) {

	int temp = 1;
	string sub = str.substr(0,temp);

	while (!checkPeriodic(sub, str) && temp<=str.length() / 2) {
		sub = str.substr(0,++temp);
	}
	if (temp <= str.length() / 2) {
           cout <<temp << endl;
	}
	else {
		cout << "wrong";
	}
	
}
void showPuzzle(char p[5][5]) {
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			cout << p[i][j] << " ";
		}
		cout << endl;
	}

}
//3-5迷宫
void puzzle() {
	char puzzle[5][5] = {
		{'T','R','G','S','J'},
		{ 'X','D','O','K','I' },
		{ 'M',' ','V','L','N' },
		{ 'W','P','A','B','E' },
		{ 'U','Q','H','C','F' }
	};
	int x = 0;
	int y = 0;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (puzzle[i][j] == ' ') {
				x = i;
				y = j;
			}
		}
	}
	cout << x << y<<endl;
	showPuzzle(puzzle);
	char command;
	cin >> command;
	while (command != '0') {
		if (command == 'A' && x-1>=0) {
			swap(puzzle[x][y],puzzle[x --][y]);
		}
		else if (command == 'B'&&x + 1<5) {
			swap(puzzle[x][y], puzzle[x ++][y]);
		}
		else if (command == 'L'&&y - 1>=0) {
			swap(puzzle[x][y], puzzle[x][y--]);
		}
		else if (command == 'R'&&y + 1<5) {
			swap(puzzle[x][y], puzzle[x][y ++]);
		}
		showPuzzle(puzzle);
		cin >> command;
	}
}

//3-9子序列
void allInAll(string s,string t) {
	assert(s.length() < t.length());
	size_t j = 0;
	int count = 0;
	for (size_t i = 0; i < s.length(); i++)
	{
		for (; j < t.length(); j++)
		{
			if (s[i] == t[j]) {
				count++;
				break;
			}
		}
	}
	if (count == s.length()) {
		cout << "found" << endl;
	}
	else {
		cout << "not found" << endl;
	}

}

int main()
{
	allInAll("dc","abcde");
	 
	return 0;
}



