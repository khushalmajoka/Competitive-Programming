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

        int c1 = 0, c2 = 0;

        c2 = round((double)n/3);
        c1 = n-(c2*2);

        cout << c1 << " " << c2 << endl;
    }

    return 0;
}