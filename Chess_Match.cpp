#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        if(n % 2 == 0){
            cout << (180+n)*2-(a+b) << endl;
        }else{
            cout << ((180+(n-1))*2)+2-(a+b) << endl;
        }
    }

    return 0;
}