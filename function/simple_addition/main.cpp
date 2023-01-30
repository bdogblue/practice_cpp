#include <iostream>
using namespace std;

int addition(int num1, int num2)
{
    return num1 + num2;     
}

int getValueFromUser()
{
    cout << "Enter an integer: ";
    int input{};
    cin >> input;

    return input;
}

int main()
{
    int num { getValueFromUser() };
    int added { addition(num, 10) };

    cout << num << " plus 10 is " << added << "\n";

    int x{ getValueFromUser() };

    cout << "+\n";

    int y{ getValueFromUser() };

    cout << " = " << x + y << "\n";
    
    return 0;
}