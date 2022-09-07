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
        bool check = false;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            mp[x]++;

            if(mp[x] == 3 && !check){
                cout << x << endl;
                check = true;
            }
        }

        if(!check){
            cout << -1 << endl;
        }
    }

    return 0;
}