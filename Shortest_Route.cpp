#include <bits/stdc++.h>
using namespace std;

void ans(){
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }

    map<int, int> mp;

    for(int i = 0; i < n; i++){
        if(i == 0 || a[i] != 0){
            mp[i] = 0;
        }else{
            mp[i] = INT_MAX;
        }
    }

    int dai = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            dai = i;
        }
        if(dai != -1 && a[i] == 0){
            mp[i] = min(mp[i], i-dai);
        }
    }

    int bai = -1;
    for(int i = n-1; i >= 0; i--){
        if(a[i] == 2){
            bai = i;
        }
        if(bai != -1 && a[i] == 0){
            mp[i] = min(mp[i], bai-i);
        }
    }

    for(int i = 0; i < m; i++){
        int w = b[i]-1;
        if(mp[w] != INT_MAX){
            cout << mp[w] << " ";
        }else{
            cout << -1 << " ";
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;

    while(t--){
        ans();
        cout << endl;
    }

    return 0;
}