#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n;
    cin >> n;

    double sum = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum += x;
    }

    cout << fixed << setprecision(12) << sum/n;

    return 0;
}