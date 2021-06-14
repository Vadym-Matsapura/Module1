#include <iostream>
using namespace std;

int main(){
	float x;
	cout << "Input price = ";
	cin >> x;
	float s;
	if ((x > 400) && (x < 600)){
		s = 0.05;
	}
	else if ((x > 600) && (x < 1000)){
		s = 0.1;
	}
	x *= 1-s;
	cout << "Final price: " << x << endl;
	return 0;
}
