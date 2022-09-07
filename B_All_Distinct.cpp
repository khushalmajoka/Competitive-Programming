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

        unordered_map<int, int> mp;
        int total = 0;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            total++;
            mp[x]++;
        }

        int count = 0;

        for(auto x: mp){
            count += x.second-1;
        }
        
        if(count%2 != 0){
            cout << total-count-1 << endl;
        }else{
            cout << total-count << endl;
        }
    }

    return 0;
}