#include <iostream>
#include<stdio.h>
using namespace std;
int main() {
	char sen[100];
	int da = 0, xiao = 0, shu = 0, kong = 0, qita = 0;
	cout << "请输入一段不超过100字的字符：" << endl;
	scanf_s("%[^\n]", &sen, sizeof(sen));
	for (int i = 0; i < sizeof(sen); i++) {
		int a = static_cast<int>(sen[i]);
		if (a > 64 && a < 91) {
			da++;
		}
		else if (a > 96 && a < 123) {
			xiao++;
		}
		else if (a > 47 && a < 58) {
			shu++;
		}
		else if (a == 32) {
			kong++;
		}
		else {
			qita++;
		}
	}
	cout << "大写" << da << ',' << "小写" << xiao << ',' << "数字" << shu << ',' << "空格" << kong << ',' << "其他" << qita-100+strlen(sen) << '.' << endl;
	return 0;
}