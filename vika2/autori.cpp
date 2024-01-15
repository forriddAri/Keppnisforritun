#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input,output = "";
    cin >> input;
    
    cout << input.substr(0,1);

    for (int i = 1; i < input.length(); i++){
      if (isupper(input[i])){

        output += input[i];

      }
    }
    cout << output;

    return 0;
}
