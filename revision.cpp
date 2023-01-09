// Maxmimum rope cutting problem
// #include <iostream>
// #include <cmath>
// using namespace std;

// int max_cut(int n, int a, int b, int c){
//     // base case
//     if (n == 0){
//         return 0;
//     }
//     if(n < 0){
//         return -1;
//     }
//     int count_of_max_cut = max(max_cut(n - a, a, b, c),
//                                (max(max_cut(n - b, a, b, c), max_cut(n - c, a, b, c))));
//     if (count_of_max_cut < 0)
//     {
//         return -1;
//     }
//     return count_of_max_cut + 1;
// }

// int main(){
//     int n, a, b, c;
//     cin >> n >> a >> b >> c;
//     cout << max_cut(n,a,b,c);
//     return 0;
// }
// Square root of a number

// { Driver Code Starts
// #include<iostream>
// #include <cmath>
// using namespace std;
// class Solution{
//   public:
//     long long int floorSqrt(long long int x) 
//     {
//         if (x == 1) // edge case
//         {
//             return 1;
//         }
        
//         long long low{0}, high= x/2, ans {1};
//         while (low <= high)
//         {
//             long long mid  = low + (high - low)/2;
//             long long temp = mid * mid;
//             if (temp < x)
//             {
//                 ans = mid;
//                 low = mid + 1;
//             }
//             else if(temp > x){
//                 high = mid - 1;
//             }
//             else{
//                 return mid;
//             }
//         }
//         return ans;
//     }
// };

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		long long n;
// 		cin>>n;
// 		Solution obj;
// 		cout << obj.floorSqrt(n) << endl;
// 	}
//     return 0;   
// }

// Rotate an array by d elements

// #include <iostream>
// using namespace std;

// void reverse(int *arr, int size, int low , int high){
    
//     while (low < high)
//     {
//         int temp = arr[high];
//         arr[high] = arr[low];
//         arr[low] = temp;
//         low++;
//         high--;
//     }   
// }

// void rotation(int *arr, int size , int d)
// {
//     int temp = d%size;
//     reverse(arr,size, 0, temp-1);
//     reverse(arr,size,temp,size-1 );
//     reverse(arr,size,0, size+-1);    
    
// }
// int main(){
//     int n;  cin >> n;  // size of an array
//     int d;  cin >> d;  // by d 
//     int *arr = new int [n];
//     for (size_t i = 0; i < n; i++)
//     {
//         cin  >> arr[i];
//     }
//     rotation(arr,n,d);
//     for (size_t i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
//     delete [] arr;

// }


// Reverse an array by d elements

// #include <iostream>
// using namespace std;

// void reverse(int *arr, int size, int low , int high){
//     while(low < high){
//         int temp = arr[low];
//         arr[low] = arr[high];
//         arr[high] = temp;
//         low ++;
//         high--;
//     }
// }

// void reverse_by_d_elements(int *arr, int size, int  pos){
//     int temp = pos% size;
//     reverse(arr, size,0, temp-1);
//     reverse(arr,size,temp,size-1);
//     reverse(arr, size, 0, size -1);
// }

// int main(){
//     int n;  cin >> n;
//     int d;  cin >> d;

//     int *arr = new int [n];
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     reverse_by_d_elements(arr, n, d);
//     for (size_t i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;

// }


// #include <iostream>
// #include <cstdlib>
// #include <vector>
// #include <ctime>
// using namespace std;
// vector <int> random_generator(int n, vector <int> temp){
//     int random_numbers {};
//     const int count {n};
//     int max {6};
//     int min {1};

//     srand(time(nullptr));
//     for(size_t i {1}; i<=count; ++i){
//         random_numbers = rand() % max + min;
//         temp.push_back(random_numbers);
//     }
//     cout<<"\n";
//     return temp;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector <int>temp;
    
//     temp = random_generator(n);
//     for (size_t i = 0; i < 5; i++)
//     {
//         cout << temp.at(i) << "\n";
//     }

//     int p1, p2;
//     vector <int> dice1;
//     vector <int> dice2;

//     vector <int> s1; // store the score 
//     vector <int> s2; 
    
    
// }

// Find the kth largest element 
// #include <bits/stdc++.h>
// using namespace std;

// int kthLargest(int arr[], int n, int k)
// {
// 	sort(arr, arr + n);
// 	return arr[ n-k];
// }

// int main()
// {
// 	int arr[] = { 12, 3, 5, 7, 19 };
// 	int n = sizeof(arr) / sizeof(arr[0]), k;
// 	cin>>k;
// 	if(k>n){
// 		k=k-n;
// 	}
// 	cout << "K'th largest element is "
// 		<< kthLargest(arr, n, k);
// 	return 0;
// }





/* Index - i
if its children if any are 
Childredn ->  2i+1 and 2i+2
-> it's parent if any is found at index floor  -> ((i-1)/2)

*/


// Stack implementation using array

// #include <iostream>
// using namespace std;

// struct  my_stack
// {
//     int size;  // size of the stack
//     int *arr;  // reference to the array
//     int top;  // peek 

//     my_stack(int size){
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }
//     void push(int data){
//         // corner case
//         if (top >= size-1)
//         {
//             cout << "Overflow" << endl;
//             return;
//         }
//         top++;
//         arr[top] = data;
//     }

//     int pop(){
//         if (top < 0)
//         {
//             cout << "Underflow " << endl;
//             return INT16_MIN;
//         }
//         int res = arr[top];
//         top--;
//         return res;
//     }

//     int size(){
//         return top+1;
//     }

//     int peek(){
//         if (top == -1)
//         {
//             return INT16_MAX;
//         }
        
//         return arr[top];
//     }

//     bool is_empty(){
//         return (top == -1);
//     }
// };

// #include <iostream>
// using namespace std;

// int find_one(int *arr, int size){
//     int res = 0;
//     for (size_t i = 0; i < size; i++)
//     {
//         res ^= arr[i];
//     }
//     return res;
    
// }

// int main(){
//     int size;   cin >> size;
//     int * arr = new int [size];

//     for (size_t i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << find_one(arr, size);
//     delete [] arr;
//     return 0;
// }


// Move zero to end

#include <iostream>
using namespace std;

int main(){
    int n;  cin >> n;
    int * arr = new int[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
}



