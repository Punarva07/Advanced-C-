#include<iostream>
using namespace std;

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a,b);
	cout << result << endl;
}
/*int main()
{
	int result = Multiply(4, 5);
	cout << result << endl;

	MultiplyAndLog(6,8);
	MultiplyAndLog(7,9);
	MultiplyAndLog(4,2);
}*/