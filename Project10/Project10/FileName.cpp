#include <iostream>
using namespace std;
int a, b;
double c;
int main() {
	char fuhao;
	cout << "Ҫ�����������㣿" << endl;
	cin >> fuhao;
	cout << "����������:" << endl;
	cin >> a >> b;
	if (fuhao != '+' && fuhao != '-' && fuhao != '*' && fuhao != '/' && fuhao != '%') {
		cout << "�����벻����������ѧ�������" << endl;
		return 0;
	}
	else if (fuhao == '+'){
		c = a + b;
		cout << "�����:" << c << endl;
	}
	else if (fuhao == '-') {
		c = a - b;
		cout << "�����:" << c << endl;
	}
	else if (fuhao == '*') {
		c = a * b;
		cout << "�����:" << c << endl;
	}
	else if (fuhao == '/') {
		if (b != 0) {
			c = a / b;
			cout << "�����:" << c << endl;
		}
		else {
			cout << "���������Ե���0��" << endl;
		}
	}
	else if (fuhao == '%') {
		if (b != 0) {
			c = a % b;
			cout << "�����:" << c << endl;
		}
		else {
			cout << "���������Ե���0��" << endl;
		}
	}
	return 0;
}