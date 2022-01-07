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

        int arr[n];
        int mx = INT_MIN;
        int mn = INT_MAX;
        int j = 0;
        int k = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] > mx){
                mx = arr[i];
                j = i;
            }
            if(arr[i] < mn){
                mn = arr[i];
                k = i;
            }
        }

        int x = min(j+1, n-j)+min(k+1, n-k);

        cout << min(max(j+1, k+1), min(n-min(j, k), x)) << endl;
        
    }

    return 0;
}