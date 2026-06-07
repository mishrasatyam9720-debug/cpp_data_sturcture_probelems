#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {

      int current=arr[i+1];
      int prev = i;
      while ( prev>=0 && arr[prev]>current){

            arr[prev+1]=arr[prev];
            prev--;

      }  
      arr[prev+1]=current;      
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

    insertion_sort(arr, n);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}