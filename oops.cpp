#include <iostream>
using namespace std;

typedef struct point // typedef is used to minimize the overehead
                    // of writing long structure name again and again 
{
    int x;
    int y;
}P;  // here p is an alias


int main(){
    // struct point p; // writing struct is optional
    P p;
    // p.x = 10;
    // p.y = 20;

    // Another way of initalizing

    // p = {10,20};  // it must be in same order as of in structure
    
    // Or in designated way
    p = {.x = 10, .y = 20};    
    p = {.x = 20 }; // if we initalize only one data member then we get 0 for others as default
// op - 20 0

    cout << p.x << " " << p.y << "\n";
    return 0;
}
