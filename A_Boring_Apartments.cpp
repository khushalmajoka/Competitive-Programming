#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        int x = n % 10;
        int count = 0;

        while(n > 0){
            count++;
            n /= 10;
        }

        cout << (count*(count+1))/2 + (x-1)*10 << endl;
    }

    return 0;
}