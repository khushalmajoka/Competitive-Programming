#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << c/a+d/b << endl;
    }

    return 0;
}