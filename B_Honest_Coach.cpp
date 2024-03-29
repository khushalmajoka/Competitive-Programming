#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int mn = INT_MAX;

        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                mn = min(mn, abs(arr[i]-arr[j]));
            }
        }

        cout << mn << endl;
    }

    return 0;
}