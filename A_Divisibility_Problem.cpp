#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0){
        int a, b;
        cin >> a >> b;

        if(a <= b){
            cout << b-a << endl;;
        }else{
            if(a % b == 0){
                cout << 0 << endl;
            }else{
                int x = a/b;
                cout << b*(x+1)-a << endl;
            }
        }
    }

    return 0;
}