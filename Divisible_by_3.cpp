#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        int count = 0;

        while(a % 3 != 0 && b % 3 != 0){
            int mx = max(a, b);
            int diff = abs(a-b);
            if(mx == a){
                a = diff;
                count++;
            }else{
                b = diff;
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}