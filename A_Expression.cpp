#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int mx = 0;

    mx = max(mx, a + b + c);
    mx = max(mx, a + b * c);
    mx = max(mx, a * b + c);
    mx = max(mx, a * b * c);
    mx = max(mx, (a + b) * c);
    mx = max(mx, a * (b + c));

    cout << mx;

    return 0;
}