#include <iostream>
using namespace std;
const double pi = 3.14;
int main(){
	double r, h,V;
	cout << "请输入圆锥底的半径:" << endl;
	cin >> r;
	cout << "锥高:" << endl;
	cin >> h;
	V = pi * r * r * h / 3;
	cout << "圆锥的体积是:" << V;
	return 0;
}