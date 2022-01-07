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

        int gcd = arr[0];

        for(int i = 1; i < n; i++){
            gcd = __gcd(gcd, arr[i]);
        }

        int count = 0;

        while(gcd % 2 == 0){
            count++;
            gcd /= 2;
        }

        cout << count << endl;
    }

    return 0;
}