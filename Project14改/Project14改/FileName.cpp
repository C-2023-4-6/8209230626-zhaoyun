#include<iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "������һ������" << endl;
	double a;
	cin >> a;
	double m = a, n;
	if (a > 0) {
		do {
			n = m;
			m = 0.5 * (n + a / n);
		} while (fabs(m - n) >= 1e-5);
		cout << "�������ƽ����ԼΪ��" << m << endl;
	}
	else if (a < 0) {
		n = -a;
		do {
			n = m;
			m = 0.5 * (n + ( - a) / n);
		} while (fabs(m - n) >= 1e-5);
		cout << "�������ƽ����ԼΪ��" << fabs(m) << 'i' << endl;
	}
}
