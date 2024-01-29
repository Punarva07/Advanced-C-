#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> numbers = {2, 4, 3, 6, 1, 9};

  int evenTotal = 0;
  int oddTotal = 1;
  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers[i] % 2 == 0)
    {
      evenTotal = evenTotal + numbers[i];
    }
    else if (numbers[i] % 2 != 0)
    {
      oddTotal = oddTotal * numbers[i];
    }
  }

  cout << "Sum of even numbers is " << evenTotal << endl;
  cout << "Product of odd numbers is " << oddTotal << endl;
}




