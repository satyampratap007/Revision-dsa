// #include <iostream>
// using namespace std;
// int main(){
//     int t;  cin >> t;
//     while (t--)
//     {
//         int X;  cin >> X;
//         if (X >= 1 && X <= 4)
//         {
//             cout << "Yes" << "\n";
//         }
//         else
//         {
//             cout << "No" << "\n";
//         }   
//     }
    
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int t;  cin >> t;
//     while (t--)
//     {
//         int X; cin >> X;
//         if (X%3 == 0)
//         {
//             cout << "Normal" << "\n";
//         }
//         else if(X%3 == 1){
//             cout << "huge" << "\n";
//         }
//         else{
//             cout << "Small" << "\n";
//         }
                 
//     }
    
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int t;  cin >> t;
//     while (t--)
//     {
//         int x,y,z;
//         cin >> x >> y >> z;

//         if (y/x >= z)
//         {
//             cout << '0' << "\n"; 
//         }
//         else
//         {
//             cout << z - (y/x) << "\n";
//         }
                 
//     }
    
// }

#include <iostream>
using namespace std;
int main(){
    int t;  cin >> t;
    while (t--)
    {

        int N;  cin >> N;
        int arr[N];
        for (int i = 0; i < N ; i++)
        {
            cin >> arr[N];
        }
        int count{0};
        for (int i = 0; i < N-1; i++)
        {
            for (int j= i+1; j < N; ++j)
            {
                if (arr[i]+arr[j] >= arr[i]*arr[j])
                {
                    ++count;
                }
            }
        }
        cout << count << "\n";
        
        
        
    }
    
}