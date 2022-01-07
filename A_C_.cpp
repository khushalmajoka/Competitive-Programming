#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0){
        int a, b, n;
        cin >> a >> b >> n;

        int count = 0;

        while(a <= n && b <= n){
            int x = max(a, b);
            if(x == a){
                b+=a;
            }else{
                a+=b;
            }
            count++;
        }

        cout << count << endl;
    }

    return 0;
}