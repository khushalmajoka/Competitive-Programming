#include <bits/stdc++.h>
using namespace std;

int fetch(int a){
    int mx = INT_MIN;
    while(a > 0){
        int l = a%10;
        mx = max(mx, l);
        a /= 10;
    }
    return mx;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int count = 0;

        while(n > 0){
            int mx = fetch(n);
            n -= mx;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}