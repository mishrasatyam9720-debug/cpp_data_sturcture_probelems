#include<iostream>
#include<vector>
using namespace std;

void merge (int arr[],int st,int mid,int end){
    vector<int>v1;
    int i=st;
    int j=mid+1;
    while(i<=mid && j <=end){
        if (arr[i]<arr[j]){
            v1.push_back(arr[i]);
            i++;
        }

        else  {
            v1.push_back(arr[j]);
            j++;
        }}

        while (i<=mid){
            v1.push_back(arr[i]);
            i++;

        }
        while(j<=end){
            v1.push_back(arr[j]);
            j++;}



            for(i=0;i<v1.size();i++){
                arr[st+i]=v1[i];
            }
        

    
}
void merge_sort(int arr[],int st,int end){
if(st<end){
    int mid=st+(end-st)/2;
    merge_sort(arr,st,mid);
    merge_sort(arr,mid+1,end);

    merge(arr,st,mid,end);


}
    
}

int main(){
    int n;
    cout<<"enter size of an array for sorting";
    cin>>n;
    int arr[n];
    for ( int i=0;i<n;i++){
    cout<<"enter element of array";
    cin>>arr[i];
    
   
    }
     merge_sort(arr,0,n-1);

     for(int i=0 ; i<n-1;i++){
        cout<<arr[i]<<endl;
     }

    
}