#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int m = 0;
    int c = 0;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;

        if(x > y){
            m++;
        }else if(x < y){
            c++;
        }
    }

    if(m == c){
        cout << "Friendship is magic!^^";
    }else if(m < c){
        cout << "Chris";
    }else{
        cout << "Mishka";
    }

    return 0;
}