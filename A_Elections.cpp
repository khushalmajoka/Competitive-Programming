#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long int a, b, c;
        cin >> a >> b >> c;

        if(max(b, c)-a+1 < 0){
            cout << 0 << " ";
        }else{
            cout << max(b, c)-a+1 << " ";
        }

        if(max(a, c)-b+1 < 0){
            cout << 0 << " ";
        }else{
            cout << max(a, c)-b+1 << " ";
        }

        if(max(b, a)-c+1 < 0){
            cout << 0 << " ";
        }else{
            cout << max(b, a)-c+1 << " ";
        }
        cout << endl;
    }

    return 0;
}