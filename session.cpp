// #include <iostream>
// #include <string>
// using namespace std;

// class string{
//     char mystring[100];

//     public:
//     auto get(){
//         return mystring;
//     }
//     int length(){
//         int count{0};
//         for (size_t i = 0; i != '\0'; i++)
//         {
//             count++;
//         }
//         return count;        
//     }
//     char begin(){
//         return mystring[0];
//     }
//     char end(){

//     }

// };

// class my_string{
//     char *s;
//     char *s = new char[1];
//     s[0] = "\0";

//     public:
//     void  get(char*arr){
//         s = arr;
//         cout <<  s;
//     }
//     void set(char *new_s){
//         s = new_s;
//     }
//     int length(char *str){
//         int count{0};
//         for (unsigned i = 0; i != ; i++)
//         {
//             count++;
//         }
//         return count;
//     }
// };


// int main(){
//     my_string s;
//     char* arr;
//     int size = s.length(arr);
//     for (size_t i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
    

//     s.get(arr);
//     // s.set(arr);

//     // int size = s.length(arr);
//     // cout << size;
    
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// struct node{
    
//     node*left;
//     node*right;
//     int data;
//     node(int data){
//         this->data = data;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// node * build_bt (node * root){
//     int data;
//     cout << "Enter the data: ";
//     cin >> data;

//     root = new node(data);

//     if (data == -1)
//     {
//         return NULL;
//     }
//     cout << "enter the data to be printed in the left side of the " << data << ": "<< "\n";
//     root->left = build_bt(root->left);

    
//     cout << "enter the data to be printed in the left side of the " << data  << ": " << "\n";
//     root->right = build_bt(root->right);
//     return root;
// }

// void p_o(node *root)
// {
//     if (root == nullptr)
//     {
//         return; 
//     }
//     cout  << root->data;
//     p_o(root->left);
//     p_o(root->right);
// }

// int height_bt(node *root){
//     if (root == NULL)
//     {
//         return 0;
//     }
//     return 1 + max(height_bt(root->left), height_bt(root->right));
// }

// bool perfect_bt(node * root){
    

// }




// int main(){

//     node *root = NULL;
//     root = build_bt(root);
//     p_o(root);
//     cout << "\nHeight of a b_T: " << height_bt(root);
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int n;  cin >> n;

//     for (size_t i = 0; i < n; i++)
//     {
//         int temp{1};
//         for (size_t j = 0; j < n-i ; j++)
//         {
//             cout << temp++;
//         }
//         for (size_t star = 0; star < 2*i; star++)
//         {
//             cout << "*";
//         }

//         for (size_t rev = n-i; rev >= 1; --rev)
//         {
//             cout << rev;
//         }
        
//         cout << "\n";
        
//     }
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector <int> ans; // store the output

//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());

//         int i{0}, j{0}; // i for n1 & j for n2
//         int l1 = nums1.size(), l2 = nums2.size();
//         while(i < l1 && j < l2){
//             while(i > 0 && i < l1 && nums1[i] == nums1[i-1]){
//                 i++;
//             }
//             while(j > 0 && j < l2 && nums2[j] == nums2[j-1]){
//                 j++;
//             }
//             if(nums1[i] == nums2[j]){
//                 ans.push_back(nums1[i]);
//                 i++;    
//                 j++;
//             }
//             else if(nums1[i] < nums2[j]){
//                 i++;
//             }
//             else if(nums1[i] > nums2[j]){
//                 j++;
//             }
//         }-
//         return ans;
//     }
// };

// #include <iostream>
// #include <bits./stdc++.h>
// #include <random>
// #include <vector>
// using namespace std;

// void print_pattern(vector<vector<string>>arr,int n)
// {
//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
        
//     }
// }

// int main(){
//     int n;  cin >> n;

//     string a = {'!','#','*'};

//     vector < vector <string>> arr;
//     for(size_t i = 0; i < n; i++)
//     {
//         vector <string> temp;  
//         for (size_t j{0}; j < n; ++j)
//         {
//             string result = " ";
//             result = result + a[rand() % 3];
            
//             temp.push_back(result);
//         }
//         arr.push_back(temp);
//     }

//     print_pattern(arr,n);


// }

// 81 89 9 11 14 76 54 22

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Main function for heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
