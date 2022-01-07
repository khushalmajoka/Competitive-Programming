#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x = 0;
    int max = INT_MIN;

    for(int i = 0; i < n; i++){

        int y, z;
        cin >> y >> z;

        x -= y;
        x += z;

        if(x > max){
            max = x;
        }
    }

    cout << max;
    return 0;
}