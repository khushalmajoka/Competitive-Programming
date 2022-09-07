#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long a, b, x, y;
        cin >> a >> b >> x >> y;

        long long p = (min(a, b)*y) + ((max(a, b)-min(a, b))*x);
        long long q = (a+b)*x;

        cout << min(p, q) << endl;
    }

    return 0;
}