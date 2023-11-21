#include <iostream>
using namespace std;
char achar,bchar;
int a;
int main() {
	cout << "请输入一个小写的英文字母：" << endl;
	cin >> achar;
	a = achar;
	if (a < 123 && a > 96) {
		bchar = a - 32;
		cout <<"它的大写形式是:"<< bchar << endl;
		return 0;
	}
	else {
		bchar = a + 1;
		cout << "你输入的不是小写字母！\n这个字符的后继字符的ASCII码是:" << static_cast<int>(bchar) << endl;
		return 0;
	}
	return 0;
}