# include<iostream>
#include <map>
using namespace std;
int main (){
     cout<<"enter size of an array";
    int n;
   
    cin >> n;
    int a[n];
    
    map<int, int> m;
    cout<<"enter element in array";
   for(int i=0 ; i<n ; i++ ){
    cin >>a[i];
    m[a[i]]++;
   }

   int q;
   cout<<"how many no want to cheak";
   cin>>q;
  
     while(q--){
    int number;
    cout<<"enter no for cheaking";
    cin>>number;
    cout<<" corresponding values are ";

      cout<<m[number]<<endl;

   }


}