#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0){
        int D, d, P, Q;
        cin >> D >> d >> P >> Q;

        long long int amount = 0;
        long long int x = D/d;
        long long int y = D%d;

        amount = (((x * ((2 * P) + (x - 1) * Q)) / 2) * d) + (y * (P + (x * Q)));

        cout << amount << endl;
    }

    return 0;
}