#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	cout << "������һ������" << endl;
	double a;
	cin >> a;
	double m=a,n;
	do {
		n = m;
		m = 0.5 * (n + a / n);
	} while (fabs(m - n) >= 1e-5);
	cout <<"�������ƽ����ԼΪ��"<< m << endl;
}
