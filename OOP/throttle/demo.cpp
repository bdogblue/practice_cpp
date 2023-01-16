#include <iostream>
#include <cstdlib>
#include "throttle.h"

using namespace std;
using main_bdog_2A::throttle;

const int DEMO_SIZE = 5;

int main()
{
    throttle sample(DEMO_SIZE);
    int user_input;

    cout << "I have a throttle with " << DEMO_SIZE << " positions." << endl;
    cout << "Where would you like to set the throttle?" << endl;
    cout << "Please type a number from 0 to " << DEMO_SIZE << ": ";
    cin >> user_input;
    sample.shift(user_input);

    while (sample.is_on())
    {
        cout << "The flow is now " << sample.flow() << endl;
        sample.shift(-1);
    }
    cout << "The flow is now off" << endl;
    return 0;
    
}