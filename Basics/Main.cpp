#include <iostream>
using namespace std;

int Multiply(int a, int b);
void MultiplyAndLog(int a, int b);
int main()
{
	//Variables
	/*unsigned int variable = 8; // unsigned-> doubles the data storage capacity of int
	cout << variable << endl;

	variable = 20;
	cout << variable << endl;

	char a = 'A';
	cout << a << endl;

	char b = 65;
	cout << b << endl;

	// float -> 4 byte; double -> 8 byte
	float f = 5.5f; // floats are by default considered as double, so to make it float add 'f'
	cout << f << endl;
	double d = 5.5;
	cout << d << endl;

	cout << sizeof(int) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;*/

	int result = Multiply(4, 5);
	cout << result << endl;

	MultiplyAndLog(6, 8);
	MultiplyAndLog(7, 9);
	MultiplyAndLog(4, 2);
}