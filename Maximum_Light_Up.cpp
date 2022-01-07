#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long int p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;

        long long int anaar, chakri;
        anaar = (a*x)+b;
        chakri = (a*y)+c;
        
        cout << max(p/anaar, p/chakri) << endl;
    }

    return 0;
}