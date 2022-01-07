#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int g, c;
        cin >> g >> c;

        cout << (c*c)/(2*g) << endl;
    }

    return 0;
}