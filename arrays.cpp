// Two dimmensional array

// Ways to create multidimensional array

// 1. Using double pointer

// #include <iostream>
// using namespace std;

// int main(){
//     int m{3}, n{2};

//     int **arr = new int*[m];
//     for (size_t i = 0; i < m; i++)
//     {
//         arr[i] = new int[n];
//     }

//     for (int i = 0; i < m; i++)
//     {
//         for (size_t j=0; j<n; ++j)
//         {
//             arr[i][j] = 10;
//             cout << arr[i][j] <<" ";
//         }
//         cout << "\n";
//     }
// }


// 2. Using array by pointer 

// #include <iostream>
// using namespace std;

// int main(){
//     int m{3}, n{4};

//     int *arr[m];
//     for (size_t i = 0; i < m; i++)
//     {
//         arr[i] = new int[n];
//     }

//     for (int i = 0; i < m; i++)
//     {
//         for (size_t j=0; j<n; ++j)
//         {
//             arr[i][j] = 10;
//             cout << arr[i][j] <<" ";
//         }
//         cout << "\n";
//     }
// }

// 3. Arrays of vectors


// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int m{3}, n{4};

//     vector <int> arr[m];
    
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             arr[i].push_back(10);
//         }
        
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j{0}; j < n ;++j )
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }
    
//     return 0;
// }

// 4. Vecctor of vectors

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int m{3}, n{4};
    
//     vector <vector <int> > arr;
//     for (int i = 0; i < m; i++)
//     {
//         vector <int> v; // this is for individual rows
//         for (int j{0}; j < n;++j)
//         {
//             v.push_back(10);
//         }
//         arr.push_back(v);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j{0}; j < n;++j)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }
    
//     return 0;
// }

// transpose of a matrix

// #include <iostream>
// #include <vector>
// using namespace std;
// void show(vector <vector<int>> arr){
//      // print matrix
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j{0}; j < n;++j)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }
// }

// int main(){
//     int n{};    cin >> n;
//     vector < vector <int>> vec(n, vector<int>(n,0));
//     vector <vector <int>> ans(n,vector<int>(n,0));

//     // Taking elemeents of a vector

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             int temp;   cin >> temp;
//             vec [i][j] = temp;
//         }
//     }

//     show(vec);

//     // Transpose of an array
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             ans [i][j] = vec[j][i];
//         }
//     }
//     cout << "\nTranspose: " << "\n\n";
//     show(ans);
// }

// Transpose of a matrix

// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<vector<int>> arr){
//     for (size_t i = 0; i < arr.size(); i++)
//     {
//         for (size_t j{0}; j < arr.size(); ++j)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }
// }
// int main(){
//     int n;  cin >> n;
//     vector <vector <int>> vec(n,vector<int>(n,0));
//     vector <vector <int>> ans(n,vector<int>(n,0));

//     // read input

//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j{0}; j <n; ++j)
//         {
//             int temp;   cin >> temp;
//             vec[i][j] = temp;
//         }
//     }
//     // print vector
//     print(vec);
//     // Transpose
// cout << "\n\nTranspose: "<< "\n";

// for (size_t i = 0; i < n; i++)
// {
//     for (size_t j{0}; j<n;++j)
//     {
//         ans[i][j] = vec[j][i];
//     }
// }
// print(ans);
// }

// Matrix multiplication

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n;  cin >> n;
//     vector <vector<int>> vec1 (n,vector<int>(n,0));
//     vector <vector<int>> vec2 (n,vector<int>(n,0));
//     vector <vector<int>> res (n,vector<int>(n,0));

//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = 0; j < n; j++)
//         {
//             int temp;   cin >> temp;
//             vec1[i][j] = temp;
//         }
//     }
    
//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = 0; j < n; j++)
//         {
//             int temp;   cin >> temp;
//             vec2[i][j] = temp;
//         }
//     }

//     // multiplication
//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = 0; j < n; j++)
//         {
//             res[i][j] = 0;
//             for (size_t k{0}; k <n; ++k)
//             {
//                 res[i][j] += vec1[i][k] * vec2[k][j];
//             }
//         }
//     }
//     // print required multiplciation

//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j{0}; j<n; ++j)
//         {
//             cout << res[i][j] << " "; 
//         }
//         cout << "\n";
//     }
// }

// #include <iostream>
// using namespace std;

// int ary[10][10], completed[10], n, cost = 0;

// void takeInput()
// {
//     int i,j;

//     cout << "Enter the number of villages: ";
//     cin >> n;

//     cout << "\nEnter the Cost Matrix\n";

//     for (i = 0; i < n; i++)
//     {
//         cout << "\nEnter Elements of Row: " << i + 1 << "\n";

//         for (j = 0; j < n; j++)
//             cin >> ary[i][j];

//         completed[i] = 0;
//     }

//     cout << "\n\nThe cost list is:";

//     for (i = 0; i < n; i++)
//     {
//         cout << "\n";

//         for (j = 0; j < n; j++)
//             cout << "\t" << ary[i][j];
//     }
// }

// int least(int c)
// {
//     int i, nc = 999;
//     int min = 999, kmin;

//     for (i = 0; i < n; i++)
//     {
//         if ((ary[c][i] != 0) && (completed[i] == 0))
//             if (ary[c][i] + ary[i][c] < min)
//             {
//                 min = ary[i][0] + ary[c][i];
//                 kmin = ary[c][i];
//                 nc = i;
//             }
//     }

//     if (min != 999)
//         cost += kmin;

//     return nc;
// }

// void mincost(int city)
// {
//     int i, ncity;

//     completed[city] = 1;

//     cout << city + 1 << "--->";
//     ncity = least(city);

//     if (ncity == 999)
//     {
//         ncity = 0;
//         cout << ncity + 1;
//         cost += ary[city][ncity];

//         return;
//     }

//     mincost(ncity);
// }

// int main()
// {
//     takeInput();

//     cout << "\n\nThe Path is: ";
//     mincost(0); // passing 0 because starting vertex

//     cout << "\n\nMinimum cost is " << cost;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int binary(int n){
//     int base{1};
//     int sum{0};
//         while (n)
//         {
//             int digit = n %10;
//             if ( digit == 0 || digit == 1)
//             {
//                 sum += digit*base;
//                 base *= 2;
//                 n /= 10;
//             }
//             else
//             {
//                 cout << "Enter valid input!" << "\n";
//                 break;
//             }
//         }
//         return sum;
// }

// int main(){
//     int n{};    cin >> n;
//     cout << binary(n);
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int m{5};
//     int n = m;
//     int mask{0};

//     while (n > 0)
//     {
//         mask =  (mask << 1) | 1;
//         cout << mask << " ";
//         n = n >> 1;
//     }
// }


// Reverse array in groups 
// #include <iostream>
// using namespace std;

// void  reverse(int *arr, int size, int k){

//     for (int i = 0; i < size; i += k)
//     {
//         int low = i;
//         int high = min(i+k-1,size-1);
//         while (low < high)
//         {
//             int temp = arr[low];
//             arr[low] = arr[high];
//             arr[high] = temp;
//             low++;
//             high--;
//         }        
//     }
// }

// int main(){
//     int t;  cin >> t;
//     while (t--)
//     {
//         int n;  cin >> n;
//         int k;  cin >> k;
        
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i]; 
//         }
//         reverse(arr, n,k);

//         for (size_t i = 0; i < n; i++)
//         {
//             cout << arr[i];
//         }
        
//     }
//     return 0;
// }

// Count the frequency of students scoring more than 50 marks

// #include <iostream>
// #include <vector>
// using namespace std;

// vector <int> count(int *arr , int size){
//     vector <int> freq (50,0);
//     for (size_t i = 0; i < size; i++)
//     {
//         if (arr[i] > 50)
//         {
//             freq[arr[i]-51]++;            
//         }
//     }
//     return freq;
// }

// int main(){
//     int n_stud;  cin >> n_stud;
//     int *marks = new int[n_stud];
//     for (size_t i = 0; i < n_stud; i++)
//     {
//         cin >> marks[i];
//     }
//     vector <int> ans = count(marks,n_stud);
//     int temp{0};
//     for (auto &&i : ans)
//     {
//         cout << "Number of students scored "<< 51+temp++ << " is: " << i << "\n";
//     }
//     delete [] marks;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int m{3}, n{2};

//     int **arr = new int*[m];
//     for (size_t i = 0; i < m; i++)
//     {
//         arr[i] = new int[n];
//     }

//     for (int i = 0; i < m; i++)
//     {
//         for (size_t j=0; j<n; ++j)
//         {
//             arr[i][j] = 10;
//             cout << arr[i][j] <<" ";
//         }
//         cout << "\n";
//     }
// }


// #include <iostream>
// using namespace std;1
// void binary(int n){
//     if (n == 1)
//     {
//         cout << "1";
//         return;
//     }
//     binary(n/2);
//     cout << n%2;    
// }

// void print_arr(int *arr, int i){
//     if (i > 4)
//     {
//         return;
//     }
//     cout << *(arr+i);
//     print_arr(arr,i+1);
// }

// int main(){
//     int n;
//     cin >> n;
//     binary(n);
//     cout << "\n";
//     int arr[5]= {1,2,3,4,5};
//     print_arr(arr, 0);
// }



