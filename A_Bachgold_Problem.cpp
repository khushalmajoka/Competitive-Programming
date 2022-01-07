#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n % 2 == 0){
        int x = n/2;
        cout << x << endl;
        for(int i = 0; i < x; i++){
            cout << 2 << " ";
        }
    }else{
        n -= 3;
        int x = n/2;
        cout << x+1 << endl;
        for(int i = 0; i < x; i++){
            cout << 2 << " ";
        }
        cout << 3;
    }

    return 0;
}