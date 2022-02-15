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

        int i = 0;

        while(i >= 0){
            i++;
            if(i % 3 != 0 && i % 10 != 3){
                n--;
                if(n == 0){
                    break;
                }
            }
        }

        cout << i << endl;
    }

    return 0;
}