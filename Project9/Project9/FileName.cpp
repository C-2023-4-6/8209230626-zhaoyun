#include <iostream>
using namespace std;
int main() {
	double a, b, c,C;
	cout << "请输入三角形的三条边：" << endl;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && c + a > b) {
		C = a + b + c;
		if (a == b || a == c || b == c) {
			cout << "这是一个等腰三角形\n它的周长为" << C << endl;
		}
		else {
			cout << "这不是一个等腰三角形\n它的周长为" << C << endl;
		}
		return 0;
	}
	else {
		cout << "这不是一个三角形！" << endl;
		return 0;
	}
	return 0;
}