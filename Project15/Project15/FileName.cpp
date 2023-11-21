#include <iostream>
using namespace std;
int sum(int apple,int day) {
	if (apple > 50) {
		return apple;
	}
	else {
		return apple + sum(apple*2, day + 1);
	}
}
int main() {
	int tian=1;
	for (int a = 2; a < 50;a*=2) {
		tian++;
	}
	float averge=sum(2,0)/tian;
	cout <<sum(2,0)<<'\n'<< averge << endl;

}