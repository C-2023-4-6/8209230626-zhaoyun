#include <iostream>
using namespace std;
double x, y;
int main() {
	cout << "����x,��ΧΪ����0С��10��" << endl;
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - (2.0* x);
		cout << "y=" << y << endl;
	}
	else if (x >= 1 && x < 5) {
		y = 2.0 / (4.0 * x) + 1;
		cout << "y=" << y << endl;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
		cout << "y=" << y << endl;
	}
	else {
		cout << "����������ֳ�����Χ�ˣ�" << endl;

	}
	return 0;
}