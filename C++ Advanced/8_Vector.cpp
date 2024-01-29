#include <iostream>
#include <vector>
using namespace std;
// taking user input to create a vector
int main()
{
    vector<int> numbers;

    int size;
    cout<< "Enter size of vector: ";
    cin >> size;
    cout<<endl;
    cout<<"Enter Vector Elements: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        numbers.push_back(element);
    }

    cout<<"The Vector is: "<<endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
  
}


