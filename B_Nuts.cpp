#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x > 10){
            ans += x-10;
        }
    }

    cout << ans;

    return 0;
}