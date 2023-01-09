// #include <iostream>
// using namespace std;

// //  Using left shift operator
// int main(){
//     int n, k;   cin >> n >> k;

//     if(n & (n << k-1)){
//         cout << "yes" << "\n";
//     }
//     else
//     {
//         cout << "NO" << "\n";
//     }
//     return 0;
// }


// Power of two

// #include <iostream>
// using namespace std;

// Naive Approach
// bool is_power(int n){
//     if (n == 0)
//     {
//         return false;
//     }
    
//     while (n != 1)
//     {
//         if (n%2 != 0)
//         {
//             return false;
//         }
//         n /= 2;
//     }
//     return true;
    
// }

// Using bitwise 

// bool is_power(int n){
//     // Edge case
//     if (n == 0)
//         return false;
//     while (n != 1)
//     {
//         if (n & 1)
//         {
//             return false;
//         }
//         n = n >> 1;   
//     }
//     return true;    
// }
// bool is_power(int n){
//     return n > 0 && n & (n-1) == 0;
    // Or
    // return n > 0 && not(n & (n-1));

// }
// int main(){
//     int n;  cin >> n;
//     if (is_power(n))
//     {
//         cout << "Yes" << "\n";
//     }
//     else
//     {
//         cout << "No" << "\n";
//     }
//     return 0;
// }

// Count set bits

// #include <iostream>
// using namespace std;


// int main(){
    // int n;  cin >> n;

//Naive approach 
    // int res{0};
    // while (n)
    // {
    //     int d = n%2;
    //     if (d)
    //     {
    //         res++;
    //     }
    //     n /= 2; 
    // }
    // cout << res << "\n";

    // Using Bitwise operator

    // while (n)
    // {
    //     res += (n&1);
    //     n >>= 1; 
    // }
    // cout <<  res << "\n";
    // return 0;

    // Using Brian Kerningams Algo

    // int res{0};
    // while (n > 0)
    // {
    //     n = n & (n-1);
    //     res++;
    // }
    // cout << res;    
// }

// Exceptionally one

// #include <iostream>
// using namespace std;

// Naive Approach

// int get_odd_occurence(int *arr, int size){
//     size_t i = 0;
//     for (; i < size; i++)
//     {
//         int count{0};
//         for (size_t j = 0; j < size; j++)
//         {
//             if (arr[j] == arr[i])
//             {
//                 count++;
//             }
//         }
//         if (count %2 != 0)
//         {
//             return arr[i];
//         }
//     }
//     return arr[i];
// }
// Better approach - O(N)
// int get_odd_occurence(int *arr, int size){
//     int res{0};
//     for (size_t i = 0; i < size; i++)
//     {
//         res ^= arr[i];
//     }
//     return res;

// }

// int main(){
//     int n;  cin >> n;

//     int arr[n];
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << get_odd_occurence(arr,n);
//     return 0;    
// }

// Find the missing number in an array


// #include <iostream>
// using namespace std;

// int missing_number(int *arr, int size){
//     int res{1}, temp{0};
//     for (size_t i = 0; i < size; i++)
//     {
//         temp = res ^arr[i];
//         res++;
        
//     }
//     return temp;
// }

// int main(){
//     int n;  cin >> n;
//     int arr[n];
//     for (size_t i = 0; i < n-1; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << missing_number(arr, n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int MissingNumber(int *array, int n) {
//     int temp{1}, res = n;
//     for(int i{0}; i < n-1;++i){
//         res = res ^ temp ^ array[i] ;
//         temp++;
//     }
//     return res;
// }

// int main(){
//     int n;  cin >> n;

//     int arr[n];
//     for (size_t i = 0; i < n-1; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << MissingNumber(arr, n) << "\n";  
//     return 0;  
// }

// Two numbers with odd occurence

// #include <iostream>
// #include <vector>
// #include <iomanip>
// using namespace std;
// Naive approach - O(N^2)
// vector <int> odd_occur(int arr[], int n){
//     int count{0};
//     vector <int> temp;
//     for (size_t i = 0; i < n; i++)
//     {
//         count = 0;
//        for (size_t j = 0; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                count++;
//            }
//        }
//        if (count & 1)
//        {
//            temp.push_back(arr[i]);
//        }
       
//     }
//     return temp;
// }

// Optimized using XOR operator - Time = O(N) && space = O(1)

// vector <int> odd_occur(int *arr, int n){
//     int xorr{0},res1{0}, res2{0};
    
//     for (size_t i = 0; i < n; i++)
//     {
//         xorr = xorr ^ arr[i];
//     }
//     // int r_set_bit = xorr & (~(xorr-1)); // rightmost set bit
//     // int r_set_bit = xorr ^ (xorr & (xorr-1));
//     // or
//     int r_set_bit = xorr & -xorr;

//     for (size_t i = 0; i < n; i++)
//     {
//         if ((arr[i] & r_set_bit)!= 0)
//         {
//             res1 ^= arr[i];
//         }
//         else
//         {
//             res2 ^= arr[i];
//         }
//     }
    
//     vector <int> temp;
//     temp.push_back(res1);
//     temp.push_back(res2);
//     return temp;
// }

// int main(){
//     int n;  cin >> n;
//     int arr[n];
//     for (int i{0}; i < n; ++i)
//     {
//         cin >> arr[i];
//     }
//     vector <int> ans = odd_occur(arr, n);
//     for(auto i:ans){
//         cout << i << " ";
//     }
//     cout << "\n";
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a = -6;
//     cout << (a&1 )<< "\n";
//     cout << (a);
//     if(a&1){
//         cout<< "odd";
//     }
//     else
//     {
//         cout << "even";
//     }
// }


//  Implement function which converts a string to an integer

#include <iostream>
using namespace std;


void stringincrement(string str) {
    int i{0};
    while (str[i] != "\0")
    {
        char data = str[i];
        str[i++] = ++data; 
    }
}

int main(){
   string c;
   stringincrement(c);
   cout << c;
   
    return 0;
}