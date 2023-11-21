#include <iostream>
#include <iomanip>
using namespace std;
double F, C;
int main() {
    cout << "请输入华氏摄氏度:℉=" << endl;
	cin >> F;
	C = 5.0 / 9.0 * (F - 32);
	cout << "对应的摄氏度是:℃="  << C << endl;
	return 0;
}