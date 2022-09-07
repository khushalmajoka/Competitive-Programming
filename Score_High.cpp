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

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << max(a, max(b, max(c, d))) << endl;
    }

    return 0;
}