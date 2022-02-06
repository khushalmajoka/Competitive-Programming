#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, a;
        cin >> n >> a;
        if(n == 1){
            if(a % 2 == 0){
                cout << "Even" << endl;
            }else{
                cout << "Odd" << endl;
            }
        }else{
            if(a%2 != 0){
                if(n%2 == 0){
                    cout << "Odd" << endl;
                }else{
                    cout << "Even" << endl;
                }
            }else{
                cout << "Impossible" << endl;
            }
        }
    }

    return 0;
}