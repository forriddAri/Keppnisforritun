#include <iostream>
#include <string>
using namespace std;

int main()
{
  
    string a;
    cin >> a;
    string fþrir = a.substr(0,3);


    if (fþrir == "555")
    {
        cout << 1 << endl;
    }
    else
        cout << 0 <<endl;
    
    return 0;
}