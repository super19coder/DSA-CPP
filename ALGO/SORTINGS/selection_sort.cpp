// slection sort in cpp
#include <iostream>
using namespace std;
// function which gets size and arr as parameters
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i], k;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                min = arr[j];
                k = j;
            }
        }
        swap(arr[i], arr[k]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    return 0;
}