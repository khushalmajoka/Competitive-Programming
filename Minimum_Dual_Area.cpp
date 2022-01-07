#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void solve(){
    ll n;
    cin >> n;

    vector<pair<ll, ll>> x;
    vector<pair<ll, ll>> y;

    multiset<ll> X;
    multiset<ll> Y;

    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        x.push_back({a, b});
        y.push_back({b, a});
        X.insert(a);
        Y.insert(b);
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    ll h1 = 0;
    ll h2 = 0;
    ll h1Max = 0;
    ll h1Min = LONG_LONG_MAX;
    ll area = LONG_LONG_MAX;

    for (ll i = 0; i < n - 1; i++){

        h1Max = max(h1Max, x[i].second);
        h1Min = min(h1Min, x[i].second);
        h1 = h1Max - h1Min;
        auto it = Y.find(x[i].second);
        Y.erase(it);
        h2 = *Y.rbegin() - *Y.begin();
        ll newArea = ((x[i].first - x[0].first) * h1) + ((x[n - 1].first - x[i + 1].first) * h2);
        area = min(area, newArea);
    }

    ll w1 = 0;
    ll w2 = 0;
    ll w1Max = 0;
    ll w1Min = LONG_LONG_MAX;

    for (ll i = 0; i < n - 1; ++i)
    {
        w1Max = max(w1Max, y[i].second);
        w1Min = min(w1Min, y[i].second);
        w1 = w1Max - w1Min;
        auto it = X.find(y[i].second);
        X.erase(it);
        w2 = *X.rbegin() - *X.begin();
        ll newArea = ((y[i].first - y[0].first) * w1) + ((y[n - 1].first - y[i + 1].first) * w2);
        area = min(area, newArea);
    }

    if(area == LONG_LONG_MAX){
        area = 0;
    }
    cout << area << endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        solve();
    }

    return 0;
}
