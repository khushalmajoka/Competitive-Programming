#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int i = 1;

    while(i > 0){
        if((i*(i+1))/2 >= n){
            cout << i;
            break;
        }
        i++;
    }

    return 0;
}