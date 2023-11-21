#include <iostream>
using namespace std;
double x, y;
int main() {
	cout << "输入x,范围为大于0小于10：" << endl;
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
		cout << "你输入的数字超出范围了！" << endl;

	}
	return 0;
}