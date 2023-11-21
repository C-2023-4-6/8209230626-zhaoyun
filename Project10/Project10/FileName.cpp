#include <iostream>
using namespace std;
int a, b;
double c;
int main() {
	char fuhao;
	cout << "要进行哪种运算？" << endl;
	cin >> fuhao;
	cout << "请输入数字:" << endl;
	cin >> a >> b;
	if (fuhao != '+' && fuhao != '-' && fuhao != '*' && fuhao != '/' && fuhao != '%') {
		cout << "你输入不是正常的数学运算符！" << endl;
		return 0;
	}
	else if (fuhao == '+'){
		c = a + b;
		cout << "结果是:" << c << endl;
	}
	else if (fuhao == '-') {
		c = a - b;
		cout << "结果是:" << c << endl;
	}
	else if (fuhao == '*') {
		c = a * b;
		cout << "结果是:" << c << endl;
	}
	else if (fuhao == '/') {
		if (b != 0) {
			c = a / b;
			cout << "结果是:" << c << endl;
		}
		else {
			cout << "除数不可以等于0！" << endl;
		}
	}
	else if (fuhao == '%') {
		if (b != 0) {
			c = a % b;
			cout << "结果是:" << c << endl;
		}
		else {
			cout << "除数不可以等于0！" << endl;
		}
	}
	return 0;
}