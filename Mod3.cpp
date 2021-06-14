#include <iostream>
using namespace std;

void print_array(int array[], int l){
	cout << "Your array:" << endl;
	for (int i = 0; i < l; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void even_nums_and_sum(int array[], int l){
	int en=0, sum=0;
	for (int i = 0; i < l; i++) {
		if ((array[i] > 0) && (array[i]%2 == 0)){
			en++;
			sum += array[i];
		}
	}
	cout << "The number of even numbers: " << en << endl;
	cout << "The sum of even numbers: " << sum << endl;
}

int main(){
	int l = 14;
	int array[l];
	for (int i = 0; i < l; i++){
		int el;
		cout << "Input element " << i+1 << " : ";
		cin >> el;
		array[i] = el;
	}
	print_array(array, l);
	even_nums_and_sum(array, l);
	return 0;
}
