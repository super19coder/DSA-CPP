#include <iostream>
using namespace std;

void insertion(int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}

int search(int arr[10], int key1)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == key1)
        {
            cout << "elemnet is at " << i << endl;
            return 0;
        }
    }
    cout << "element not found" << endl;
    return 0;
}

int main()
{

    int key;
    int arr[10];

    insertion(arr);

    cin >> key;
    search(arr, key);

    return 0;
}