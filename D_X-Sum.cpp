#include <bits/stdc++.h>
using namespace std;

int arr[201][201];

int power(int i, int j, int n, int m){
    int ans = arr[i][j];
    int k = i;
    int l = j;

    ++k;
    ++l;
    while(k < n && l < m && k >= 0 && l >= 0){
        ans += arr[k][l];
        ++k;
        ++l;
    }

    k = i;
    l = j;
    --k;
    ++l;
    while(k < n && l < m && k >= 0 && l >= 0){
        ans += arr[k][l];
        --k;
        ++l;
    }

    k = i;
    l = j;
    ++k;
    --l;
    while(k < n && l < m && k >= 0 && l >= 0){
        ans += arr[k][l];
        ++k;
        --l;
    }

    k = i;
    l = j;
    --k;
    --l;
    while(k < n && l < m && k >= 0 && l >= 0){
        ans += arr[k][l];
        --k;
        --l;
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
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }

        int ans = INT_MIN;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ans = max(ans, power(i, j, n, m));
            }
        }

        cout << ans << endl;
    }

    return 0;
}