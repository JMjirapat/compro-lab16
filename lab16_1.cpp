#include <iostream>
using namespace std;

int main(){
	int a = 5;
	string b = "A";
	string &c = b;
	int *x = &a;
	string *y = &b;
	int **z = &x;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << "\n";
	cout << &a << " " << &b << " " << &c << " " << &x << " " << &y << " " << &z << "\n";
	c = 'F';
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << "\n";
	*y = 'W';
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << "\n";
	*x = 6;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << "\n";
	**z = 7;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << "\n";
	return 0;
}
