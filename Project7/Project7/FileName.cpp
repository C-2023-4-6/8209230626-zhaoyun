#include <iostream>
using namespace std;
char achar,bchar;
int a;
int main() {
	cout << "������һ��Сд��Ӣ����ĸ��" << endl;
	cin >> achar;
	a = achar;
	if (a < 123 && a > 96) {
		bchar = a - 32;
		cout <<"���Ĵ�д��ʽ��:"<< bchar << endl;
		return 0;
	}
	else {
		bchar = a + 1;
		cout << "������Ĳ���Сд��ĸ��\n����ַ��ĺ���ַ���ASCII����:" << static_cast<int>(bchar) << endl;
		return 0;
	}
	return 0;
}