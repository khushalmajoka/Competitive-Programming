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
        vector<vector<int>> arr(2, vector<int>(n));
        for(int i = 0; i < 2; i++){
            string s;
            cin >> s;
            for(int j = 0; j < n; j++){
                if(s[j] == 'R') arr[i][j] = 0;
                else arr[i][j] = 1;
            }
        }

        bool flag = false;
        for(int j = 0; j < n; j++){
            if(arr[0][j] != arr[1][j]){
                cout << "NO" << endl;
                flag = true;
                break;
            }        
        }
        if(!flag) cout << "YES" << endl;
    }

    return 0;
}