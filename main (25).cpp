

#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    int antoncounter = 0, danikcounter = 0;
    char data;
    for(int i = 0; i < n; i++){
        cin >> data;
        if(data == 'A'){
            antoncounter += 1;
        }
        else{
            danikcounter += 1;
        }
    }
    if(antoncounter == danikcounter){
        cout << "Friendship";
    } else if(antoncounter > danikcounter){
        cout << "Anton";
    }
    else{
        cout << "Danik";
    }
}