#include <iostream>
using namespace std;
const double pi = 3.14;
int main(){
	double r, h,V;
	cout << "������Բ׶�׵İ뾶:" << endl;
	cin >> r;
	cout << "׶��:" << endl;
	cin >> h;
	V = pi * r * r * h / 3;
	cout << "Բ׶�������:" << V;
	return 0;
}