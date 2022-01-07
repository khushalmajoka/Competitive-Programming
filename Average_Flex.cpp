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

        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int count = 0;

        for(int i = 0; i < n; i++){
            int l = upper_bound(arr.begin(), arr.end(), arr[i])-arr.begin();
            int r = n-l;
            if(l > r){
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}