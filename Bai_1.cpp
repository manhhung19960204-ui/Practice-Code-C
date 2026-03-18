#include<iostream>

using namespace std;

void Tang_gia_tri(int* n) {
	*n = *n + 1;
}

int ChangeValueWithPointer() {
	int n = 10 ;
	Tang_gia_tri(&n);
	cout << n << "--" ;
}

int Pointer() {
	//Basic
	int n = 10;
	int* ptr = &n;
	cout << n ;
	*ptr = 20 ;
	cout << n ;

}

int OddEven() {
	int n ;
    cin >> n ;
    if(n%2 == 0) {
      cout << n <<" is an even number";
    } else{
      cout << n <<" is an odd number";
    }
}

int InputName() {
	string Name , Address;
	cin >> Name;
	cin >> Address;
	cout << "Name: " << Name << endl;
	cout << "Address: " << Address;
	
	int age ;
    string name;
    cin >> age >> name;
    cout << "In 15 years, age of " << age  << "will be" << name ;
	return 0;
}

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
    //cout << bai10();
    //cout << AllDataType();
    //cout << InputName() ;
    //cout << OddEven();
    cout << ChangeValueWithPointer();
}

