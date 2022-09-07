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
        if(a == b){
            cout << "YES" << endl;
        }else{
            int x = max(a, b);
            int y = min(a, b);
            if(x%y != 0){
                cout << "NO" << endl;
            }else{
                int z = x/y;
                if(ceil(log2(z)) == floor(log2(z))){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}