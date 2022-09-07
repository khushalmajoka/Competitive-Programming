#include <bits/stdc++.h>
using namespace std;

int powerOfString(string s, string t){
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        ans += abs(s[i]-t[i]);
    }
    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<string> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int ans = INT_MAX;

        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                ans = min(ans, powerOfString(arr[i], arr[j]));
            }
        }

        cout << ans << endl;
    }

    return 0;
}