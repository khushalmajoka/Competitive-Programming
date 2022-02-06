#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        cout << max(a+b, max(c+d, e+f)) << endl;
    }

    return 0;
}