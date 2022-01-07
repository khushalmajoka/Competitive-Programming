#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int mx = INT_MIN;
        int mn = INT_MAX;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mx = max(mx, arr[i]);
            mn = min(mn, arr[i]);
        }

        cout << mx-mn << endl;
    }

    return 0;
}