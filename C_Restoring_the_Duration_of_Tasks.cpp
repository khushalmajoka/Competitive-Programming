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

        int t = 0;

        for(int i = 0; i < n; i++){
            if(a[i] >= t){
                cout << b[i]-a[i] << " ";
                t = b[i];
            }else{
                cout << b[i]-t << " ";
                t = b[i];
            }
        }

        cout << endl;
    }

    return 0;
}