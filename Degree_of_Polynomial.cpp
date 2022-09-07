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
        int ans = 0;

        while(n--){

            int x;
            cin >> x;

            if(x != 0){
                ans = count;
            }

            count++;
        }

        cout << ans << endl;
    }

    return 0;
}