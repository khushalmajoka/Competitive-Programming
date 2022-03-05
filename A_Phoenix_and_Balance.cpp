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

        int x = n/2-1;
        n = 2;

        while(x--){
            n = (n+1)*2;
        }

        cout << n << endl;

    }

    return 0;
}