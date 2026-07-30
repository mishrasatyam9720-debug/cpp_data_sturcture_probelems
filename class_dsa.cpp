// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // int cheak ( int a ){
// // //     int sum = 0 ;
// // //     while ( a >0){
// // //       sum = sum + a%10 ;
// // //       a=a/10 ;
// // //     }
// // //     return sum %2 == 0 ;
// // // }

// // // int main (){
// // //     int n1 , n2 , count =0 ;
// // //     cin >> n1 >> n2 ;
// // //     for ( int i = n1 ; i<n2 ; i++){
// // //         if ( i % 3 ==0){
// // //             if ( cheak(i) == true ){
// // //                 count = count + 1;
// // //             }
// // //         }
// // //     }
// // //     cout << count  ;
// // // }


// // #include <bits/stdc++.h>
// // using namespace std;

// // // int main() {
// // //     int n, k, sum = 0;
// // //     cin >> n >> k;

// // //     int n1 = n * k;

// // //     while (n1 > 0) {
// // //         sum += n1 % 10;
// // //         n1 /= 10;
// // //     }

// // //     int resultant = sum * k;
// // //     int resultant_sum = 0;

// // //     while (resultant >=10) {
// // //         resultant_sum += resultant % 10;
// // //         resultant /= 10;
// // //     }

// // //     cout << resultant_sum;

// // //     return 0;
// // // }

// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // bool check_even(int a){
// // //     int sum = 0;
// // //     while(a > 0){
// // //         sum += a % 10;
// // //         a /= 10;
// // //     }
// // //     return sum % 2 == 0;
// // // }

// // // int main(){

// // //     int n1, n2;
// // //     cin >> n1 >> n2;

// // //     int total_count = 0;

// // //     for(int i=n1;i<=n2;i++){

// // //         int count = 0;

// // //         for(int j=2;j<=i;j++){
// // //             if(i % j == 0)
// // //                 count++;
// // //         }

// // //         if(count == 1){
// // //             if(check_even(i))
// // //                 total_count++;
// // //         }
// // //     }

// // //     cout << total_count;
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // // bool check_armstrong(int n){
// // //     int temp = n;
// // //     int digits = 0;

// // //     while(temp){
// // //         digits++;
// // //         temp /= 10;
// // //     }

// // //     temp = n;
// // //     int sum = 0;

// // //     while(temp){
// // //         int digit_1 = temp % 10;
// // //         sum += pow(digit_1, digits);     
// // //         temp /= 10;
// // //     }

// // //     return sum == n;
// // // }

// // // int main(){
// // //     int n1, n2;
// // //     cin >> n1 >> n2;

// // //     bool found = false;

// // //     for(int i = n1; i <= n2; i++){
// // //         if(check_armstrong(i)){               
// // //             cout << i << endl;
// // //             found = true;
// // //         }
// // //     }

// // //     if(!found)
// // //         cout << -1;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // bool check_jumping(int n)
// // {
// //     if (n < 10)
// //         return true;

// //     while (n >= 10)
// //     {
// //         int digit1 = n % 10;
// //         int digit2 = (n / 10) % 10;

// //         if (abs(digit1 - digit2) != 1)
// //             return false;

// //         n /= 10;
// //     }

// //     return true;
// // }

// // int main()
// // {
// //     int n;
// //     cin >> n;

// //     for (int i = 0; i <= n; i++)
// //     {
// //         if (check_jumping(i))
// //             cout << i << " ";
// //     }

// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;

// bool check_prime(int n) {
//     if (n <= 1) return false;
//     for (int j = 2; j * j <= n; j++) {
//         if (n % j == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int count = 1, n;
//     cin >> n;
//     vector<int> v;
//     int i = 2;
//     int idx = 0 ;
//     while (count <= n) {
//         if(count%3==0){cout<<v[idx]*v[idx + 1]<<" ";
//             idx += 2;
//             count++ ;
//         }
//         else if (check_prime(i)) {
//             v.push_back(i);
//             count++;
//             cout << i << " ";
//         }
//         i++;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main (){
    int n1, n2;
    cin >> n1 >> n2;
    
    vector<int> v1(n1);
    vector<int> v2(n2);
    
    for (int i = 0; i < n1; i++){
        cin >> v1[i];
    }
    for (int i = 0; i < n2; i++){
        cin >> v2[i];
    }
    
    vector<int> v3;
    int low = 0;
    int high = 0;
    
    while(low < n1 && high < n2){
        if(v1[low] < v2[high]){
            v3.push_back(v1[low]);
            low++;
        }
        else{
            v3.push_back(v2[high]);
            high++;
        }
    }
    
    while(low < n1){
        v3.push_back(v1[low]);
        low++;
    }
    
    while(high < n2){
        v3.push_back(v2[high]);
        high++;
    }
    
    int low1 = 0 ;
    high = v3.size();
    int mid = low1 + (high - low1) / 2 ;
    
    if (mid + 1 < v3.size()) {
        cout << v3[mid] + v3[mid+1];
    } else {
        cout << v3[mid];
    }
    
    return 0;
}