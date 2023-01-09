#include <iostream>
using namespace std;


// int main(){
//     int n;  cin >> n;
//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = 0; j < n-1; j++)
//         {
//             cout << "*" ;
//         }
//         cout << "\n"; 
//     }
// }

// *
// **
// ***        
// ****       
// *****      
// ******     
// *******    
// ********   
// *********  
// ********** 
// int main(){
//     int n;  cin >> n;
//     for (size_t i = 1; i <= n; i++)
//     {
//         for (size_t j = 0; j <i ; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }


// int main(){
//     int n;  cin >> n;
//     for (size_t i = 1; i <= n; i++)
//     {
//         int temp{1};
//         for (size_t j = 0; j <i ; j++)
//         {
//             cout << temp++;
//         }
//         cout << "\n";
//     }
// }


// 1
// 22
// 333        
// 4444       
// 55555 

// int main(){
//     int temp{1};
//     int n;  cin >> n;
//     for (size_t i = 1; i <= n; i++)
//     {
//         for (size_t j = 0; j <i ; j++)
//         {
//             cout << temp;
//         }
//         temp++;
//         cout << "\n";
//     }
// }

// *****
// ****       
// ***        
// **
// *

// int main(){
//     int n;  cin >> n;
//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = i; j <n ; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }

// 12345
// 1234       
// 123        
// 12
// 1

// int main(){
//     int n;  cin >> n;
//     for (size_t i = 0; i < n; i++)
//     {
//         int temp{1};
//         for (size_t j = i; j <n ; j++)
//         {
//             cout << temp++ ;
//         }
        
//         cout << "\n";
//     }
// }

//     *
//    ***
//   *****
//  *******
// *********

// int main(){
//     size_t n; cin >> n;
//     int temp{1};
//     for (size_t i = 0; i < n; i++)
//     {

//         for (size_t j{i}; j < n-1 ; ++j )
//         {
//             cout  << " ";
//         }

//         for (size_t k{1} ;k < 2*temp; ++k)
//         {
//             cout << "*";
//         }
//         temp++;        
//         cout << "\n";  
//     }
// }


// *********
//  *******
//   *****
//    ***
//     *

// int main(){
//     size_t  n;
//     cin >> n;

//     size_t temp{n};
//     for (size_t i = 0; i < n ;i++)
//     {
//         for (size_t j{0}; j < i ;++j)
//         {
//             cout<< " ";
//         }
//         for (size_t k{2*temp-1}; k >0 ; --k)
//         {
//             cout << "*";
//         }
//         temp--;
//         cout << "\n";  
//     }
// }

// *********
//  *******
//   *****
//    ***
//     *
//     *
//    ***
//   *****
//  *******
// *********

// int main(){
//     size_t  n;
//     cin >> n;

//     size_t temp{n};
//     for (size_t i = 0; i < n ;i++)
//     {
//         for (size_t j{0}; j < i ;++j)
//         {
//             cout<< " ";
//         }
//         for (size_t k{2*temp-1}; k >0 ; --k)
//         {
//             cout << "*";

//         }
//       
//   temp--;
//         cout << "\n";  
//     }
//     int t{1};
//     for (size_t i = 0; i < n; i++)
//     {

//         for (size_t j{i}; j < n-1 ; ++j )
//         {
//             cout  << " ";
//         }

//         for (size_t k{1} ;k < 2*t; ++k)
//         {
//             cout << "*";
//         }
//         t++;        
//         cout << "\n";  
//     }
// }


// int main(){
//     size_t n;  cin >> n;

//     for (size_t i = 1; i <= n; i++)
//     {
//         for (size_t j{0}; j < i; ++j)
//         {
//             cout << "*";
//         }
//         cout << "\n";
        
//     }
//     size_t temp {n};
//     for (size_t i = 1; i < n; i++)
//     {
//         for (size_t k{temp}; k > 1; --k )
//         {
//             cout << "*";
//         }
//         temp--;
//         cout << "\n";
//     }
//     return 0;
// }

int main(){
    int n;   cin >> n;

    for (size_t i= 1; i < n; i++)
    {
        for (size_t j{1}; j <i; ++j)
        {
            if (1%2 != 0)
            {
                if (j%2 != 0)
                {
                    
                }
                
            }
            
        }
        
    }
    
}