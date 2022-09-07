#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        int nos = n/6 + (n%6 != 0 ? 1 : 0);

        cout << nos*x << endl; 
    }

    return 0;
}