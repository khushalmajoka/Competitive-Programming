#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
        cin >> a >> b;

        int ans = a;

        while(a >= b){
            int temp = a/b;
            int temp2 = a%b;
            ans += temp;
            a = temp+temp2;
        }

        cout << ans;

    return 0;
}