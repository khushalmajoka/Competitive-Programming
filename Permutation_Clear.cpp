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
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        unordered_map<int, bool> mp;
        for(int i = 0; i < n; i++){
            mp[arr[i]] = true;
        }
        int k;
        cin >> k;
        for(int i = 0; i < k; i++){
            int x;
            cin >> x;
            mp[x] = false;
        }
        for(auto it: arr){
            if(mp[it]) cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}