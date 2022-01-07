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
        if(n % 2 == 0){
            for(int i = 1; i < n; i+=2){
                cout << i+1 << " " << i << " ";
            }
        }else{
            for(int i = 1; i < n-2; i+=2){
                cout << i+1 << " " << i << " ";
            }
            cout << n-1 << " " << n << " " << n-2;
        }
        cout << endl;
    }

    return 0;
}