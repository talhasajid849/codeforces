#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a[7];
        int total = 0;
        int maxSum = -1000;

        for(int i =0; i<7; i++){
            cin >> a[i];
            total += a[i];
            maxSum = max(maxSum, a[i]);
        }

        cout << -total + 2*maxSum << "\n";
    }
    return 0;
}