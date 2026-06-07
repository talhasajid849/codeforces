#include<iostream>
using namespace std;

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long a,b;
        cin >> a >> b ;
        long long sum = abs(a - b);

        cout << (sum + 9 ) / 10 << "\n";
    }
    return 0;
}