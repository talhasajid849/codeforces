#include<iostream>
#include<algorithm>
using namespace std;


int check(int a3, int a1, int a2, int a4, int a5){
    int c = 0;
    if(a1 + a2 == a3) c++;
    if(a2 + a3 == a4) c++;
    if(a3 + a4 == a5) c++;

    return c;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        
        int c1 = check(a1+a2, a1, a2, a4, a5);
        int c2 = check(a4-a2, a1, a2, a4, a5);
        int c3 = check(a5-a4, a1, a2, a4, a5);

            cout << max({c1, c2, c3}) << "\n";
        
    }
    return 0;
}