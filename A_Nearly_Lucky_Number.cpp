#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll count = 0;

    while(n > 0){
        if(n%10 == 4 || n%10 == 7){
            count++;
        }
        n/=10;
    }

    bool check = false;

    while(count > 0){
        if(count % 10 == 4 || count % 10 == 7){
            check = true;
        }else{
            check = false;
            break;
        }
        count /= 10;
    }

    if(!check){
        cout << "NO";
    }else{
        cout << "YES";
    }

    return 0;
}