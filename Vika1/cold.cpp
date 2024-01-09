#include <iostream>

using namespace std;

int main(){

int hitiY1 = 0;
int n;
cin >> n;
int tolur[n];

for (int i = 0; i < n; ++i){
    cin >> tolur[i];
    if (tolur[i] < 0){
        hitiY1++;
    }
}

cout << hitiY1 <<endl;
return 0;
}