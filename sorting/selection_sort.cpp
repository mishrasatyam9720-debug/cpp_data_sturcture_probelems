#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int mini = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[mini])
            {
                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
    }
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}