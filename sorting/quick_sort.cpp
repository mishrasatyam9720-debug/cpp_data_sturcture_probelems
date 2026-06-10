#include<iostream>
#include<vector>
using namespace std ;
int  partition(int arr[] , int st ,int end ){
    int idx=st - 1;
    int pviot_elem=arr[end];
    for ( int j=st;j<end;j++){
        if (arr[j]<pviot_elem){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }

          idx++;
          swap(arr[idx], arr[end]);

    return idx;
}

 void quick_sort (int arr[],int st,int end){
    if (st <=end){int pviot_elem=partition(arr,st,end);
    quick_sort(arr,st,pviot_elem-1);
    quick_sort(arr,pviot_elem+1,end);
    }
}

int main() {
   int n;
   cout<<"enter size of array";
   cin>>n;
   int arr[n];
   cout<<"enter element of array ";
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }

    quick_sort(arr, 0, n - 1);
    cout <<"sorted array ";
    for (int i = 0; i < n; i++) {

        cout << arr[i] << endl;
    }

    return 0;
}
