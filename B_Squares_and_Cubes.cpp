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
        int count = 0;

        count += sqrt(n);
        count += cbrt(n);

        for(int i = 1; pow(pow(i, 2), 3) <= n; i++){
            count--;
        }
        cout << count << endl;
    }

    return 0;
}