#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[101], b[101];
        for(int i =1; i<=n; i++) cin >> a[i];
        for(int i =1; i<=n; i++) cin >> b[i];

        int allSum = 0;

         for(int i =1; i<=n; i++){
            int profit=0;
            if(i < n){
                profit = a[i] - b[i+1];
            }else {
                profit = a[i];
            }

            if(profit > 0) allSum += profit;
         }

         cout << allSum << "\n";
        
    }
    return 0;
}