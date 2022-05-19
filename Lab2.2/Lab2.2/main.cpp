#include "CRealNumber.h"
using namespace std;

int main()
{
	RealNumber a, b;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	cout << endl;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl
		<< endl;

	cout << "a[]: " << a[2] << endl;
	cout << "a(): " << a() << endl;
	return 0;
}