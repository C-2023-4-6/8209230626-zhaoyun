#include <iostream>
using namespace std;
int main() {
	double a, b, c,C;
	cout << "�����������ε������ߣ�" << endl;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && c + a > b) {
		C = a + b + c;
		if (a == b || a == c || b == c) {
			cout << "����һ������������\n�����ܳ�Ϊ" << C << endl;
		}
		else {
			cout << "�ⲻ��һ������������\n�����ܳ�Ϊ" << C << endl;
		}
		return 0;
	}
	else {
		cout << "�ⲻ��һ�������Σ�" << endl;
		return 0;
	}
	return 0;
}