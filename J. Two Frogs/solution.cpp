#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        if((a - b) % 2 == 0){
            cout << "YES" << "\n";
        }else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}