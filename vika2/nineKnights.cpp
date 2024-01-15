#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string staða;
    cin >> staða;
    bool getDrep = false;



    for (int i = 0; i <= 25; i++)
    {
        if (staða[i] =='k' && (staða[i-3] =='k' || staða[i+3] =='k' || staða[i-7] =='k' || staða[i+7] =='k' || staða[i-9] =='k' || staða[i+9] =='k' || staða[i-11] =='k' || staða[i+11] =='k'))
        {
           getDrep = true;
           break;
           
        }
    }
    
    if (getDrep = false)
    {
        cout << "valid";
    }
    else cout << "invalid";
    
    return 0;
}

