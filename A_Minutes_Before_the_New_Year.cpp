#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int h, m;
        cin >> h >> m;

        int ans = 0;
        ans = (60-m)+(60*(24-h-1));

        cout << ans << endl;
    }

    return 0;
}