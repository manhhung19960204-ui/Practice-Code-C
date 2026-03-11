#include<iostream>

using namespace std;

int AllDataType() {
	int x = 10;
	string y = "Hung";
	char z = 'K';
	double d = 3.1555;
	unsigned int u= 1000;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "d = " << d << endl;
	cout << "y = " << x ;


}

int bai10() {
	cout << "2468 + 1234 = " << 2468 + 1234 << endl;
    cout << "2468 - 1234 = " << 2468 - 1234 << endl;
	cout << "2468 * 1234 = " << 2468 * 1234 << endl;
	cout << "2468 / 1234 = " << 2468 / 1234;

	return 0;
}

int main() {
    cout << bai10();
    cout << AllDataType();
	return 0;
}
