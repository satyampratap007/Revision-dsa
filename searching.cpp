// Binary search
// #include <iostream>
// #include <vector>
// using namespace std;

// iterative soln.

// int b_search_iterative(vector <int> arr, int t){
//     int low = 0, high = arr.size()-1;
//     while(low <= high){
//         int mid = low + (high-low)/2;
        
//         if (arr[mid] == t)
//         {
//             return mid;
//         }
//         else if (arr[mid] > t)
//         {
//             high = mid - 1;
//         }
//         else{
//             low  = mid + 1;
//         }
//     }
//     return -1;  // if not found
// }

// Recursive solution

// int b_search_recursive(vector<int> arr, int t, int low, int high)
// {
//     if (low > high)
//     {
//         return -1;
//     }

//         int mid = low + (high - low) / 2;
//         if (arr[mid] == t)
//         {
//             return mid;
//         }
//         else if (arr[mid] < t)
//         {
//             return b_search_recursive(arr, t, mid + 1, high);
//         }
//         else
//         {
//             return b_search_recursive(arr, t, low, mid - 1);
//         }
// }

// int main()
// {
//     int target;
//     cin >> target;
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (size_t i = 0; i < n; i++)
//     {
//         int temp;
//         cin >> temp;
//         arr.push_back(temp);
//     }
//     // cout << b_search_iterative(arr, target);
//     cout << b_search_recursive(arr,target,0,n-1);
//     return 0;
// }

//  Find the ocurence of the given key

// #include <iostream>
// using namespace std;

// Using BInasry search 

// int first_occurence(int *arr, int size, int key){
//     int low = 0, high = size-1;
//     int temp{-1};
//     while (low <= high)
//     {
//         int mid = low + (high-low)/2;
//         if (arr[mid] == key)
//         {
//             temp = mid;
//             break;                        
//         }
//         else if (arr[mid] < key)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     } 
//     for (int i = temp ; i >= 0; i--)
//     {
//        if (arr[i] != arr[i-1])
//        {
//            return i;
//        }
//     }
//     return temp;
// }

// More optimization

// int first_occurence(int *arr, int size, int k){
//     int low {0}, high{size-1};

//     while (low <= high)
//     {
//         int mid = low + (high-low)/2;

//         if (arr[mid] < k)
//         {
//             low = mid + 1;
//         }
//         else if (arr[mid] > k)
//         {
//             high = mid - 1;
//         }
//         else{
//             if (arr[mid] != arr[mid - 1] || mid == 0)
//             {
//                 return mid;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

// for last occurence

// int last_occurence(int *arr, int size, int k)
// {
//     // K -> target
//     int low{0}, high = size - 1;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] < k)
//         {
//             low = mid + 1;
//         }
//         else if (arr[mid] > k)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             if (arr[mid] != arr[mid + 1] || mid == size - 1)
//             {
//                 return mid;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int k,n;  cin >> k >>  n;
//     int *arr = new int[n];
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // cout << first_occurence(arr, n , k);
//     cout << last_occurence(arr, n, k);
//     delete [] arr;
// }

// Count 1's in a binary sorted array

// #include <iostream>
// using namespace std;

// int count1(int *arr, int n){
//     int l{0}, h{n-1};
//     while (l <= h)
//     {
//         int mid = l + (h-l)/2;
//         if (arr[mid] == 0)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             if (arr[mid] == 0 || arr[mid] != arr[mid -1])
//             {
//                 return n - mid;
//             }
//             else
//             {
//                 h = mid - 1; 
//             }
//         }
//     }
//     return 0;
// }

// int main(){
//     int n;  cin >> n;
//     int arr[n];
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << count1(arr,n);
    
// }

// Count 0's in a binary sorted array
// Array is sorted decreasingly
// #include <iostream>
// using namespace std;

// int count0(int *arr, int n){
//     int l{0}, h{n-1};
//     while (l <= h)
//     {
//         int mid = l + (h-l)/2;
//         if (arr[mid] == 1)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             if (arr[mid] == 0 || arr[mid] != arr[mid -1])
//             {
//                 return n - mid;
//             }
//             else
//             {
//                 h = mid - 1; 
//             }
//         }
//     }
//     return 0;
// }

// int main(){
//     int n;  cin >> n;
//     int arr[n];
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << count0(arr,n);
    
// }

// Square root of x
// Naive approach - theta(root x)
// #include <iostream>
// using namespace std;

// int MySqrt(int x){
//     int i{1};
//     while(i*i <= x){
//         i++;
//     }
//     return i -1;
// }

// Optimized way - O(log x)
// int MySqrt(int x){
//     int low = 1, high{x-1}, ans{0};
//     while (low  <= high)
//     {
//         long long mid = low + (high - low)/2;
//         if (mid * mid <= x)
//         {
//             ans = mid;
//             low = mid +1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     return ans;

// }

// int main(){
//     int x;  cin >> x;

//     cout << MySqrt(x);
//     return 0;
// }


// Search in an infinite sorted array
// #include <iostream>
// using namespace std;


// int search_element(int arr[], int low , int high, int key){
//     while (low <= high)
//     {
//         int mid = low + (high - low) /2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] < key)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
// int find_pos(int *arr, int key){
//     int low = 0, high = 1;
//     int val = arr[0];
//     while (val < key)
//     {
//             low = high;
//             high = 2 * high;
//             val = arr[high];
//     }
    
//     return search_element(arr, low,high,key) ;
// }

// int find_pos(int *arr, int key){
//     if (arr[0] == key)
//     {
//         return 0;
//     }
//     int temp = 1; // basically high positon
//     while (arr[temp] < key)
//     {
//         if (arr[temp] == key)
//         {
//             return temp;
//         }
//         temp = temp * 2;
//     }
//     return search_element(arr, temp/2+1, temp-1,key);  
// }

// int main(){
//     int n, key;  cin >> n >> key;

//     int arr[n];
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     signed int ans = find_pos(arr, key);
//     if (ans == -1)
//     {
//         cout << "Key not found";
//     }
//     else
//     {
//         cout << ans;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// void findCommon(int ar1[], int ar2[], int ar3[], int n1,int n2, int n3)
// {
//     int i = 0, j = 0, k = 0;
//     while (i < n1 && j < n2 && k < n3) {
//         if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
//             cout << ar1[i]<<" ";
//             i++;
//             j++;
//             k++;
//         }
//         else if (ar1[i] < ar2[j])
//             i++;
//         else if (ar2[j] < ar3[k])
//             j++;
//         else
//             k++;
//     }
// }

// int main()
// {
//     int ar1[] = {10, 50, 60, 70, 80, 90};
//     int ar2[] = {5, 10, 20, 60, 80};
//     int ar3[] = {4, 15, 20, 30, 70, 80, 120};
//     int n1 = sizeof(ar1)/sizeof(ar1[0]);
//     int n2 = sizeof(ar2)/sizeof(ar2[0]);
//     int n3 = sizeof(ar3)/sizeof(ar3[0]);
 
//     cout << "Common Elements are ";
//     findCommon(ar1, ar2, ar3, n1, n2, n3);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int countZeroes(int arr[], int n) {
//     int low= 0, high = n-1;
//     while(low <= high){
//         int mid = low + (high - low)/2;
//         if(arr[mid] == 1){
//             low = mid + 1;
//         }
//         else{
//             if(mid == 0 || arr[mid] != arr[mid-1]){
//                 return n - mid;
//             }
//             else{
//                 high = mid - 1;
//             }
//         }
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << countZeroes(arr, n);
//     return 0;
// }


#include <iostream>
using namespace std;
int get_median(int *arr1, int *arr2, int s1, int s2);

int main(){
    int s1, s2; cin >> s1 >> s2; // size of bith the input array
    int arr1[s1], arr2[s2];
    for (size_t i{0}; i < s1; i++)
    {
        cin >> arr1[i];
    }
    for (size_t i = 0; i < s2; i++)
    {
        cin >> arr2[i];
    }
    cout << get_median(arr1,arr2,s1,s2);    
}

int get_median(int *arr1, int *arr2, int s1, int s2){
    
}
  