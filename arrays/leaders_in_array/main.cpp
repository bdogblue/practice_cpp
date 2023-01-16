#include <iostream>
using namespace std;

void checkLeaders(int arr[], int size);
void printLeaders(int arr[], int size);

int main()
{
    int myNums[6] = {1, 2, 3, 4, 5, 2};

    checkLeaders(myNums, 6);

    return 0;
}

void checkLeaders(int arr[], int size)
{
    bool lead = true;
    
    for(int i = 0; i < size; i++)
    {
        lead = true;
        
        if((i+1) >= size)
        {
            cout << arr[i] << " ";
        }
        else
        {
            for(int j = i+1; j < size; j++)
            {
                if(arr[i] < arr[j])
                {
                    lead = false;
                }
            }

            if(lead == true)
            {
                cout << arr[i] << ", ";
            }
        }
    }
}

/* function exsample on the website */
void printLeaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i+1; j < size; j++)
        {
            if (arr[i] <=arr[j])
                break;
        }
        if (j == size) // the loop didn't break
            cout << arr[i] << " ";
    }
}