#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T-- > 0){
        int x,a,b;
        cin >> x >> a >> b;
        int ans = (((100-x)*b)+a)*10;
        cout << ans << endl;
    }
    return 0;
}