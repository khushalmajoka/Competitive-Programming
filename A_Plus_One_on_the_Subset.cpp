#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];
        int mx = INT_MIN, mn = INT_MAX;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mx = max(mx, arr[i]);
            mn = min(mn, arr[i]);
        }

        cout << mx-mn << endl;
    }

    return 0;
}