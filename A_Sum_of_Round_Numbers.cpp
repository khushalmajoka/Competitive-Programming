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

        int t = n;
        int count = 0;
        while(t > 0){
            int last = t % 10;
            if(last != 0){
                count++;
            }
            t/=10;
        }

        cout << count << endl;

        int i = 1;
        while(n > 0){
            int last = n % 10;
            if(last*i != 0)
                cout << last*i << " ";
            i*=10;
            n/=10;
        }
        cout << endl;
    }

    return 0;
}