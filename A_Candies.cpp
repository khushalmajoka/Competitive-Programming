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

        int i = 3;
        int j = 2;

        while(n % i != 0){
            j *= 2;
            i += j;
        }

        cout << n/i << endl;

    }

    return 0;
}