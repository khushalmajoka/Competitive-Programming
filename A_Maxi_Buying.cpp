#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x = n*1.08;

    if(x < 206){
        cout << "Yay!";
    }else if(x == 206){
        cout << "so-so";
    }else{
        cout << ":(";
    }

    return 0;
}