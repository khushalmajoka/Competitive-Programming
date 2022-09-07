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

        int a[n];
        int b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int max0 = INT_MIN;

        for(int i = 0; i < n; i++){
            if(b[i] == 0){
                max0 = max(max0, a[i]-b[i]);
            }
        }

        int x = -1;
        bool check = false;

        for(int i = 0; i < n; i++){
            if(b[i] != 0){
                if(x == -1){
                    x = a[i]-b[i];
                    if(x < 0){
                        cout << "NO" << endl;
                        check = true;
                        break;
                    }
                }
                if(a[i]-b[i] != x || a[i]-b[i] < max0){
                    cout << "NO" << endl;
                    check = true;
                    break;
                }
            }
        }

        if(check){
            continue;
        }

        cout << "YES" << endl;

    }

    return 0;
}