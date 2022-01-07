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

        vector<int> arr(n, 0);
        int mx = INT_MIN;
        int count = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mx = max(mx, arr[i]);
            if(arr[i] > 0){
                count++;
            }
        }

        cout << count+ceil(log2(mx)) << endl;
    }

    return 0;
}