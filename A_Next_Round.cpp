#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int arr[n];
    int ans = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x = arr[k-1];

    for(int i = 0; i < n; i++){
        if(arr[i] >= x && arr[i] > 0){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}