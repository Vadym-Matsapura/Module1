#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float x;
	cout << "Input x = ";
	cin >> x;
	float y;
	cout << "Input y = ";
	cin >> y;
	long I, u, d;
	u = 2.33*log(sqrt(1.0+pow(cos(y),2)));
	d = exp(y)*pow(sin(x),2);
	I = u/d;
	cout << "I = " << I << endl;
	return 0;
}
