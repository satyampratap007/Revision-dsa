// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main(){
//     unordered_set<int>s;
//     s.insert(10);
//     s.insert(15);
//     s.insert(20);
//     s.insert(30);

//     for (unordered_set <int>::iterator  i = s.begin(); i != s.end(); i++)
//     {
//         cout << *i << " ";
//     }
//     // or
//     for (auto x : s)
//     {
//         cout << x << " ";
//     }
//     cout << "\n" << s.size() << "\n";
//     // s.clear();
//     cout << s.size();

//     // find 20
//     if (s.find(20) == s.end())
//     {
//         cout << "NF" << "\n";
//     }
//     else
//     {
//         cout << "F" ;
//     }
    
//     if (s.count(20) == 1)
//     {
//         cout << "\nF";
//     }
//     else
//     {
//         cout<< "NF";
//     }

//     s.erase(20);

//      if (s.count(20) == 1)
//     {
//         cout << "\nF";
//     }
//     else
//     {
//         cout<< "NF";
//     }
//     cout << "\n" << s.size();
    
// }

// Print unique elements in an array

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// // Random order

// // void print_unique(int *arr, int size){
// //     unordered_set <int> s;
// //     for (size_t i = 0; i < size ; i++)
// //     {
// //         s.insert(arr[i]);        
// //     }
// //     for(auto it:s){
// //         cout << it << " ";
// //     }    
// // }

// // Same order

// void print_unique(int *arr, int size){
//     unordered_set <int> s;
//     for (size_t i = 0; i < size ; i++)
//     {
//         if(s.find(arr[i])== s.end())
//         {
//             cout << arr[i] << " ";
//             s.insert(arr[i]);
//         }        
//     }

// }


// int main(){
//     int n;
//     cin >> n;
    
//     int * arr = new int [n];
//     for(size_t i {0}; i < n; ++i){
//       cin >> arr[i];
//     }
//     print_unique(arr, n);
    
    
    
//     delete [] arr;
//     return 0;
// }

// Print repeating elements of an array

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// Brute force - O(n^2)

// void print_repeating(int *arr, int n)
// {
//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = 0; j < i; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cout << arr[i] << " ";
//                 break;
//             }
//         }
//     }
// }

// Efficient - O(n)
// void print_repeating(int *arr, int size)
// {
//     unordered_set <int> s;
//     for (size_t i = 0; i < size; i++)
//     {
//         if (s.find(arr[i]) == s.end())
//         {
//             s.insert(arr[i]);
//         }
//         else
//         {
//             cout << arr[i] << " ";
//         }
//     }
    
// }

// int main(){
//     int n;
//     cin >> n;
    
//     int * arr = new int [n];
//     for(size_t i {0}; i < n; ++i){
//       cin >> arr[i];
//     }
//     print_repeating(arr, n);
    
//     delete [] arr;
//     return 0;
// }

// Maximize Distinct Items in a Set

// #include <iostream>
// #include <unordered_set>
// using namespace std;


// Time - O(n)


// int maximum_distinct_in_a_subaarray(int *arr, int size, int k)
// {
//     unordered_set <int> temp;
//     for (size_t i = 0; i < size; i++)
//     {
//         temp.insert(arr[i]);
//     }

//     int count = temp.size();

//     if (count >= size/k)
//     {
//         return size/k;
//     }
//     return count;
// }


// int main(){
//     int n;
//     cin >> n;
//     int k;  cin >> k;
    
//     int * arr = new int [n];
//     for(size_t i {0}; i < n; ++i){
//       cin >> arr[i];
//     }
    
//     cout << maximum_distinct_in_a_subaarray(arr, n, k);

//     delete [] arr;
//     return 0;
    
// }

// UNORDERED MAP 
/*
Usecase:

-> Use to store key,value pairs
-> USe hashing
-> No order of keys

*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <string, int> um;
    um["saty"] = 20;
    um["ram"] = 30;
    um["ram"] = 45;
    // um.insert({"srish",15});
    for (auto &&i : um)
    {
        cout << i.first << " " << i.second << "\n";
    }
    cout << um["saty"] << "\n";

    cout << "\n";
    cout << "\n\n";
    // Find key
    if (um.find("sty") == um.end())
        cout << "Not Found" << "\n";
    else 
        cout << "Found" << "\n";
    
    // Search for values of key

    // unordered_map  <string, int>:: iterator  it = um.find("sat");
    // if (it != um.end())
    // {
    //     cout << it->second;
    // }
    // else{
    //     cout << "Not found";
    // }
    // or
    auto it = um.find("saty");
    if (it != um.end())
    {
        cout << it->second;
    } 

    // Count function

    if (um.count("saty") > 0)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found" << "\n";
    }

    // Size function

    cout << "\n" << um.size() << "\n";

    // Erase Function
    um.erase("saty");
    um.erase(um.end());
    int i{0};

}


// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main(){
//     int arr[10] = {1, 1, 2, 2, 3, 3, 4, 5, 6, 7};    
//     int c{0};
//         unordered_map <int,int> um;
//         for(int i{0}; i < 10; ++i){
//             um[arr[i]]++;
//         }
//         for(int i{0}; i < 10; ++i){
//             int data = arr[i];
//             if(um.count(data) ==1){
//                 c++;
//             }
//         }
//         // for (auto &&i : um)
//         // {
//         //     cout << i.first << " " << i.second;
//         //     cout << "\n";
//         // }
        
//         cout << c;
// }




