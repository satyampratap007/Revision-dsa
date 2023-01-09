// #include <iostream>
// using namespace std;
// Iterative soln. of binary search
// int b_search(int *arr, int size, int target){
//     int l = 0, h = size - 1;
//     while (l <= h)
//     {
//         int mid = l + (h- l)/2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid] < target)
//         {
//             l = mid + 1;
//         }
//         else{
//             h = mid - 1;
//         }
//     }
//     return -1;
// }

// Recursive solution of bianry search

// int b_search(int *arr, int low , int high, int target){
//     if(low > high){
//         return -1;
//     }
//     int mid = low + (high - low)/2;
//     if (arr[mid] == target)
//     {
//         return mid;
//     }
//     else if (arr[mid] < target)
//     {
//         return b_search(arr, mid+1, high, target);
//     }
//     else
//     {
//         return b_search(arr, low, mid-1, target);
//     }
// }

// int main(){
//     int n, target;  cin >> n >> target;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
    
//     // int pos = b_search(arr, n, target);
//     int pos = b_search(arr, 0, n-1, target);
//     cout << pos << "\n";
//     return 0;
// }

// Some basic recursion i/o program

// Question - 1
// #include <iostream>
// using namespace std;

// void fun(int num){
//     if (num == 0)
//     {
//         return;
//     }
//     cout << num << "\n";
//     fun(num - 1);
//     cout << num << "\n";
// }

// Question - 2
// #include <iostream>
// using namespace std;
// void fun(int num){
//     if(num == 0){
//         return;
//     }
//     fun(num - 1);
//     cout << num << endl;
//     fun(num - 1);
// }

// int main(){
//     fun(3);
//     return 0;
// }

// // Question - 3 - to find the log of a given number
// #include <iostream>
// using namespace std;

// int fun(int num){
//     if(num == 1){
//         return 0;
//     }
//     else{
//         return 1 + fun(num/2);
//     }
// }

// int main(){
//     cout << fun(16);
//     return 0;
// }

// Question - 4 - to find the binary equivalent to given n
// #include <iostream>
// using namespace std;

// void fun(int num){
//     if (num == 0)
//     {
//         return;
//     }
//     fun(num/2);
//     cout << num%2 << " ";
// }

// int main(){
//     int n;  cin >> n;
//     fun(n);
// }

// print in reverse order till n
// #include <iostream>
// using namespace std;

// void print_reverse(int n){
//     if(n == 0){
//         return;
//     }
//     cout << n << "\n";
//     print_reverse(n-1);
// }

// int main(){
//     int n;  cin >> n;
//     print_reverse(n);
// }

// Print from 1 to n
// #include <iostream>
// using namespace std;

// void print_reverse(int n){
//     if(n == 0){
//         return;
//     }
//     print_reverse(n-1);
//     cout << n << "\n";
// }

// int main(){
//     int n;  cin >> n;
//     print_reverse(n);
// }

// Print the factorial of a given num
// #include <iostream>
// using namespace std;
// plain recursive call
// int factorial(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// using tail recursion

//  int factorial(int n, int k){
//     if(n == 0 || n == 1){
//         return k;
//     }
//     // k = n*k;
//     return factorial(n-1,n*k);
// }

// int main(){
//     int n;  cin >> n;
//     // cout << factorial(n);
//     cout << factorial(n, 1);

// }

// Print nth fibonacci number
// #include <iostream>
// using namespace std;

// int fibonacci(int n){
//     // if(n == 0){
//     //     return 0;
//     // }
//     // if(n == 1 || n == 2){
//     //     return 1;
//     // }
//     // or
//     if (n <= 1)
//     {
//         return n;
//     }
    
//    return fibonacci(n-1) + fibonacci(n-2);
// }

// int main(){
//     int n;  cin >> n;
//     cout << fibonacci(n);
//     return 0;
// }

// Sum of first n natural number using recursion
// #include <iostream>
// using namespace std;
// Parametric recursion
// int sum(int n, int k){
//     if(n == 0){
//         return k;
//     }
//     return sum(n-1,k+n);
// }

// Functional recursion

// int sum(int num){
//     if(num == 0){
//         return 0;
//     }
//     return num + sum(num-1);
// }


// int main(){
//     int n;  cin >> n;
//     // cout << sum(n,0);
//     cout << sum(n);
//     return 0;
// }

// General Question

// #include <iostream>
// using namespace std;

// void print(int n){
//     if(n < 0){
//         return;
//     }
//     if(n == 0){
//         cout << n << " ";
//         return;
//     }
//     print(--n);
//     cout << n << " ";
// }

// int main() {
//     int num = 3;
//     print(num);
// }

// Check if array is sorted

// #include <iostream>
// using namespace std;

// bool is_sorted(int *arr, int size)
// {
//     // base case
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     return is_sorted(arr + 1, size - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     if (is_sorted(arr, n)){
//         cout << "Yes! array is sorted" << "\n";
//     }
//     else{
//         cout << "No! array is not sorted" << "\n";
//     }
//     return 0;
// 

// All indices of an element present in the array
// i/p -  9 8 10 8 8 
// o/p - 1 3 4
// Constraints - 1 <= n <= 10^3

// #include <iostream>
// using namespace std;

// int i{0}, curr_index = 0; // i -> index of output array
// int all_index(int *input, int size, int target, int *output){    
//     if (size == 0)
//     {
//         return -1;
//     }
//     if(*input == target){
//         output[i++] = curr_index;
//     }
//     curr_index++;
//     all_index(input+1, size - 1, target, output);
//     return i;
// }

// int main()
// {

//     int size, x;
//     cin >> size >> x;
//     int *input = new int[size];
//     for (size_t i = 0; i < size; i++)
//     {
//         cin >> input[i];
//     }
//     int *output = new int[size];
//     int out_size = all_index(input, size, x, output);
//     for (size_t i = 0; i < out_size; i++)
//     {
//         cout << output[i] << " ";
//     }
//     delete [] input;
//     delete [] output;
//     // return 0;
// }

// Pallindrome check using recursion

// #include <iostream>
// #include <cstring>
// using namespace std;

// bool check_pallindrome(string &str1, int size){
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }
//     if (str1[0] != str1[size-1])
//     { 
//         return false;
//     }
//     return check_pallindrome(&str1[0]+1, size-2); 
// }


// int main(){
//     string str1;    cin >> str1;
//     int size = str1.length();

//     if(check_pallindrome(str1,size)){
//         cout << "Yeah it is Pallindrome! " << endl;
//     }
//     else{
//         cout << "No it is not pallindrome! " << endl;
//     }
//     return 0;
// }

// Sum of digit using recursion

// #include <iostream>
// using namespace std;

// int sum(int n)
// {
//     if(n < 9){
//         return n;
//     }
//     return n%10 + sum(n/10);
// }

// int main()
// {
//     int n;  cin >> n;
//     cout << sum(n);
//     return 0;
// }

// Reverse a stirng

// #include <iostream>
// using namespace std;

// void reverse(string &str, int i, int j)
// {
//     if (i > j)
//     {
//         return;
//     }
    
//     // cout << str << " is reversed\n";
//     swap(str[i], str[j]);
//     reverse(str, i+1, j-1);
// }

// int main()
// {
//     string str;
//     cin >> str;

//     reverse(str, 0, str.length()-1);
//     cout << "\n" << str;
//     return 0;
// }

// Rope cutting Problem
// #include  <iostream>
// #include <cmath>
// using namespace std;

// int max_ropes(int n, int a, int b, int c)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n < 0)
//     {
//         return -1;
//     }
//     int ans = max(max_ropes(n - a, a, b, c),
//                   max(max_ropes(n - b, a, b, c),
//                       max_ropes(n - c, a, b, c)));
//     if (ans == -1)
//     {
//         return -1;
//     }
//     return ans + 1 ;
        
// }

// int main()
// {
//     int n, a, b, c;
//     cin >> n >> a >> b >> c;
//     int ans = max_ropes(n, a, b, c);
//     cout << ans << endl;
//     return 0;
// }

// Subset problems
#include <iostream>
#include <string>
using namespace std;

// void helper(string &str, int l){
//     cout << l;
// }

int main(){
    int n = 123;
    string s = to_string(n);

    string t = s.begin();
    cout << t;


    // helper(s,s.begin()); 


  
}