

#include <iostream>
using namespace std;


int main()
{
    int n, height;
    cin >> n >> height;
    int k;
    int sumaccumulator = 0;
    for(int i = 0; i < n; i++){
        cin >> k;
        if(k > height){
            sumaccumulator += 2;
        }
        else{
            sumaccumulator += 1;
        }
    }
    cout << sumaccumulator << endl;
}