#include <iostream>
using namespace std;

int main() {
    int low = 1;
    int high = 1000;
    string svar;

    
    while(true){
        
        int gisk = low+(high-low)/2;
        cout << gisk << endl;
        
        cin >>  svar;

         if (svar == "correct" ) { // búið
            return 0;
        } else if (svar == "higher") {
            low = gisk + 1; // leit í hægri helming
        } else {
            high = gisk; // leit í vinstri helming
        }
       
    }
    return 0;
}

