#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        double n, k;
        cin >> n >> k;

        cout << ceil(n/k) << endl;
    }

    return 0;
}