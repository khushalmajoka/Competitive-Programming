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

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        if(n%2 != 0){
            cout << -1 << endl;
        }else{
            int count = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] == 1){
                    count++;
                }
            }
            int ans = abs(count-n/2);
            cout << ans << endl;
        }
    }

    return 0;
}