#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ;
// int main(){
//     int arr[]={5,6,8,1,2};
//     int largest=0;
//     for (int i=0;i<5;i++){
//     if(arr[i]>largest){
//         largest=arr[i];
//     }
//     }
//     cout<<"largest no " <<largest<<endl;
//     int second_largest=0;
//         for (int i=0;i<4;i++){
//         if (arr[i]>second_largest && arr[i]<largest){
//             second_largest=arr[i];
//         }
//         }
//         cout << "second largest no "<<second_largest;
//     }

// alternate approach --------
// int main (){
//     int largest_1=0;
//     int second_largest_1=0;
//     int arr[]={8,6,8,1,2};
//     for (int i=0;i<5;i++){
//         if (arr[i]>largest_1){
//         second_largest_1 =largest_1;
//         largest_1=arr[i];
       
  
//     }
//     else if (arr[i]>second_largest_1 && arr[i]<largest_1){
//         second_largest_1=arr[i];
//     }
    
// }
//    cout<<"seoncd_largest "<<second_largest_1;
//   }

//remove duplicates -------------

// int main() {
//     int arr[] = {6,7,8,2,3,3,3,3,6,6,7,8};

//     int i = 0;

//     for (int j = 1; j < 12; j++) {
//         if (arr[i] != arr[j]) {
//             i++;
//             arr[i] = arr[j];
//         }
//     }

//     for(int k=0; k<=i; k++){
//         cout << arr[k] << " ";
//     }
// }

//// traversing of an array 

// int main (){
//     int arr[]={1,2,3,3,4,5,5,6};
//     int n=8;
//     int key;
//     cout<<"enter key for rotation";
//     cin>>key;
//     key = key % n;
    
//     int i ;
//     int temp[8];
//     for ( i = 0; i < n; i++){
//         temp[i] = arr[i];
//     }
//     for ( i = key; i < n; i++){
//         arr[i-key] = temp[i];
//     }

//     for ( i =n-key ; i<n ; i++ ){
//         arr[i]=temp[i-(n-key)];
//     }

//     for (i=0;i<n;i++){
//         cout << arr[i];
//     }

// }

///// missing value - i have been not studied bit manuplation till so i'm going with best optimal solution without using bit manupulation ----------

// int main (){
//     int arr[] = {1, 2, 3, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     int expected = (n + 1) * (n + 2) / 2;
//     int missing = expected - sum;
//     cout << "Missing value: " << missing << endl;
//     return 0;
// }


// maximum count of consecutive one -----------

// int main (){
//           int arr[] = {1,1,0,1,1,1,1,0,1,1,1};
//           int j ;
//           int count = 0 ;
//           int max_count = 0 ;
//           for (j=0;j<11;j++){
//              if (arr[j]==1){
//                count++;
//                max_count=max(max_count,count);

//              }
//              else{
//                 count=0;
//              }
//           }
//           cout<<"maximum consecutive one's "<<max_count;
// }

// which element apperas one's else two -- this can be done by xor as well as and that will b most optimal solution but here we are doing with unordered map the difference is this that it will take space complexity with o(n) and xor will take o(1) elsewhere time complexity will be same of o(nlogn).

// int main(){
//     int arr [] = {1,1,2,3,3,4,4};
//     unordered_map<int,int>m;
//     for (int i =0 ; i<7 ; i++){
//         m[arr[i]]++;
//     }

//     for (auto &p : m) {
//         if (p.second == 1) {
//             cout << p.first;
//             break;
//         }
//     }

// }

// maximum sub array
// again