#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n >= 0){
        cout << n;
    }else{
        int x = n;
        int lr = x % 10;
        int last = x / 10;
        int last2 = (last / 10)*10+lr;
        cout << max(last, last2);
    }

    return 0;
}