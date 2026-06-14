#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, m, l, r;
        cin >> n >> m >> l >> r;

        long long left = max(l, -m);
        long long right = left + m;

        cout << left << " " << right << "\n";
    }
    return 0;
}