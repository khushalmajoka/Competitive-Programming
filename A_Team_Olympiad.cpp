#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> o;
    vector<int> t;
    vector<int> th;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x == 1){
            o.push_back(i+1);
        }else if(x == 2){
            t.push_back(i+1);
        }else{
            th.push_back(i+1);
        }
    }

    int ans = min(o.size(), min(t.size(), th.size()));
    cout << ans << endl;

    for(int i = 0; i < ans; i++){
        cout << o[i] << " " << t[i] << " " << th[i] << endl;
    }

    return 0;
}