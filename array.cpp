#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
#include <algorithm>
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
// //     int temp[8];
// //     for ( i = 0; i < n; i++){
// //         temp[i] = arr[i];
// //     }
// //     for ( i = key; i < n; i++){
// //         arr[i-key] = temp[i];
// //     }

// //     for ( i =n-key ; i<n ; i++ ){
// //         arr[i]=temp[i-(n-key)];
// //     }

// //     for (i=0;i<n;i++){
// //         cout << arr[i];
// //     }

// // }

// ///// missing value - i have been not studied bit manuplation till so i'm going with best optimal solution without using bit manupulation ----------

// // int main (){
// //     int arr[] = {1, 2, 3, 5};
// //     int n = sizeof(arr) / sizeof(arr[0]);
// //     int sum = 0;
// //     for (int i = 0; i < n; i++) {
// //         sum += arr[i];
// //     }
// //     int expected = (n + 1) * (n + 2) / 2;
// //     int missing = expected - sum;
// //     cout << "Missing value: " << missing << endl;
// //     return 0;
// // }


// // maximum count of consecutive one -----------

// // int main (){
// //           int arr[] = {1,1,0,1,1,1,1,0,1,1,1};
// //           int j ;
// //           int count = 0 ;
// //           int max_count = 0 ;
// //           for (j=0;j<11;j++){
// // //              if (arr[j]==1){
// // //                count++;
// // //                max_count=max(max_count,count);

// // //              }
// // //              else{
// // //                 count=0;
// // //              }
// // //           }
// // //           cout<<"maximum consecutive one's "<<max_count;
// // // }

// // // which element apperas one's else two -- this can be done by xor as well as and that will b most optimal solution but here we are doing with unordered map the difference is this that it will take space complexity with o(n) and xor will take o(1) elsewhere time complexity will be same of o(nlogn).

// // // int main(){
// // //     int arr [] = {1,1,2,3,3,4,4};
// // //     unordered_map<int,int>m;
// // //     for (int i =0 ; i<7 ; i++){
// // //         m[arr[i]]++;
// // //     }

// // //     for (auto &p : m) {
// // //         if (p.second == 1) {
// // //             cout << p.first;
// // //             break;
// // //         }
// // //     }

// // // }

// // // maximum sub array-brute approach consisting of time complaexity o(n2)-------
// // // int main(){
// // //     int arr[]={9,4,0,20,3,10,5};
// // //     int k =33;
// // //     int count=0;
    
// // //     for (int i =0;i<7;i++){
// // //         int sum=0;
// // //         for (int j =i;j<7;j++){
// // //             sum=sum+arr[j];
// // //             if (sum==k){
// // //                 count++;
// // //             }
// // //         }

// // //     }
// // //     cout<< " total no of arrays "<< count;
// // // } 

// // // optimal approach consisting of time complexity of o(n)------

// // int main (){
// //     int arr[]={9,4,0,20,3,10,5};
// //     int k=33;
// //     vector<int>nums;
// //     int sum=0;
// //     unordered_map<int,int>m;
// //     for (int i=0 ; i<7;i++){
// //         sum=sum + arr[i];
// //         nums.push_back(sum);
// //         m[sum]++;

// //     }


// //     int count=0;

// //     for ( int i =0; i<7 ; i++){
// //         if (nums[i]==k){
// //             count ++;
// //         }
// //         int val = nums[i]-k;
// //         if (m.find(val)!=m.end()){
// //             count=count+m[val];
// //         }
// //     }
// //    cout <<" count of subarray consiting of highest subarray "<<count;
    
// // }

// // max subarray lenght --------
// int main() {

//     vector<int> nums = {1, -1, 5, -2, 3};
//     int k = 3;

//     unordered_map<int,int> m;

//     int sum = 0;
//     int maxLen = 0;

//     m[0] = -1;

//     for(int i = 0; i < nums.size(); i++) {

//         sum += nums[i];

//         int val = sum - k;

//         if(m.find(val) != m.end()) {
//             maxLen = max(maxLen, i - m[val]);
//         }

//         if(m.find(sum) == m.end()) {
//             m[sum] = i;
//         }
//     }

//     cout << "Maximum Length = " << maxLen;

//     return 0;
// }
// code for two sum ----------
// int main(){

//     vector<int> nums = {8, 6, 7, 9, 4};
//     int target = 17;
//     unordered_map<int, int> m;

//     for (int i = 0; i < nums.size(); i++) {
//         int complement = target - nums[i];

//         if (m.find(complement) != m.end()) {
//             cout << "Indices: " << m[complement] << ", " << i << endl;
//             break;
//         }

//         m[nums[i]] = i;
//     }

//     return 0;
// }

// maximum subarray -------
// brute force approach 
// int main (){
//     int arr[]={-8,9,5,6,-4,6,9};
//     int max_sum=0;
//     for (int i=0 ; i<7 ; i++){
//     int cs =0 ;
//     for(int j=i ; j<7 ; j++){
//            cs=cs+arr[j];
//            max_sum=max(max_sum,cs);
//         }
//     }
//     cout<<"max_array contains as maxium sum "<<max_sum;
// }

// optimal solution of max_subarray sum ---- contains o(n) time complexity -----
int main (){
    int arr[]={-8,9,5,6,-4,6,9};
    int max_sum=INT_MIN;
    int cs =0 ;
    for (int i=0 ; i<7 ; i++){
        cs=cs+arr[i];
        max_sum=max(max_sum,cs);
        if ( cs<0){
            cs=0;
        }
    }
    cout<<"max_subarray_sum "<<max_sum;
}