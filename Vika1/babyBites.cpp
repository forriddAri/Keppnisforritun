#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;

    string strengur;
    bool makesSense = true;
    int rod;

    //skoða hvort tölu séu í réttri röð
    for (int i = 1; i <= n; i++){
        cin >> strengur;

        if (strengur != "mumble"){
            rod= atoi(strengur.c_str());
            if (rod != i)
            {
                cout << "er " << i << " = " << rod << " "; 
                makesSense = false;
                break;
            }
            
        }
    }

    if (makesSense){
        cout << "makes sense" << endl;
    }
    else
        cout << "something is fishy" << endl;

    return 0;
}
