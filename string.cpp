// #include <iostream>
// using namespace std;

// int main(){
//     string str;
//     str = "Ram";
//     cout << str << "\n";
    
// }

// String operations


// #include <iostream>
// using namespace std;

// int main(){
//     string str = "gfg";
//     cout << str.length() << "\n";

//     str = str + "xyz";
//     cout << str << "\n";
//     cout << str.substr(1,3) << "\n";
//     cout << str.find("fg ") << "\n";
// }

// #include <iostream>
// using namespace std;

// int main(){
//     string str = "gfg";
//     cout << str.length() << "\n";

//     str = str + "xyz";
//     cout << str << "\n";
//     cout << str.substr(1,3) << "\n";
//     cout << str.find("fg ") << "\n";
// }

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    for (auto i = str.begin(); i != str.end(); i++)
    {
        cout << *i << " ";
    }    
}