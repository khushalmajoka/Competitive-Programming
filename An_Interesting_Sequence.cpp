#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a;
        cin >> a;
        int b = 0;

        while(a % 2 == 0){
            a /= 2;
            b += 1;
        }

        cout << b << endl;
    }

    return 0;
}