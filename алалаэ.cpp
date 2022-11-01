#include <iostream>
using namespace std;
int main() {
	/*const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr [i];
	}
	//
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	//
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) k++;
	}
	cout << ">0" << k << endl;*/
	//1
	int mas[10];
	for (int i = 1; i < 10; i++) {
		cin >> mas[i];
	}
	for (int i = 9; i >= 0; i = i - 1) {
		cout << " " << ' ';
	}
}