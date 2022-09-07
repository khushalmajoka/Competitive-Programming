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
        vector<int> arr(n, 0);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        string s;
        cin >> s;

        int ans = INT_MAX;

        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                ans = min(ans, arr[i]);
            }
        }

        cout << ans << endl;
    } 

    return 0;
}