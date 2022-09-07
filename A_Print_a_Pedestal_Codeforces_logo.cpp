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

        int a = n/3, b = n/3, c = n/3;
        c += n-(a+b+c);

        while(b <= a || b <= c){
            b++;
            c--;
            while(a <= c){
                a++;
                c--;
                if(c == 0){
                    c++;
                    a--;
                }
            }
            if(c == 0){
                c++;
                a--;
            }
        }

        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}